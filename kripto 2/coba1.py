from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.backends import default_backend

def encrypt(text, key):
    backend = default_backend()
    cipher = Cipher(algorithms.AES(key), modes.ECB(), backend=backend)
    encryptor = cipher.encryptor()
    padded_text = text.ljust(len(text) + (16 - len(text) % 16) % 16)  # Padding to make the text a multiple of 16 bytes
    ciphertext = encryptor.update(padded_text.encode()) + encryptor.finalize()
    return ciphertext

def decrypt(ciphertext, key):
    backend = default_backend()
    cipher = Cipher(algorithms.AES(key), modes.ECB(), backend=backend)
    decryptor = cipher.decryptor()
    decrypted_text = decryptor.update(ciphertext) + decryptor.finalize()
    return decrypted_text.rstrip(b'\x00').decode()  # Remove padding and decode to string

def encrypt_file(input_file, output_file, key):
    with open(input_file, 'r') as file:
        plaintext = file.read()
        ciphertext = encrypt(plaintext, key)
    
    with open(output_file, 'wb') as file:
        file.write(ciphertext)

def decrypt_file(input_file, output_file, key):
    with open(input_file, 'rb') as file:
        ciphertext = file.read()
        decrypted_text = decrypt(ciphertext, key)
    
    with open(output_file, 'w') as file:
        file.write(decrypted_text)

# Input kunci dari pengguna
key = input("Masukkan kunci (16, 24, or 32 bytes): ").encode()

input_file_name = 'input.txt'
encrypted_file_name = 'encrypted.txt'
decrypted_file_name = 'decrypted.txt'

encrypt_file(input_file_name, encrypted_file_name, key)
decrypt_file(encrypted_file_name, decrypted_file_name, key)
