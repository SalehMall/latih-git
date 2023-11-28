def encrypt(text, shift):
    result = ""
    for char in text:
        if char.isalpha():
            if char.islower():
                result += chr((ord(char) + shift - ord('a')) % 26 + ord('a'))
            else:
                result += chr((ord(char) + shift - ord('A')) % 26 + ord('A'))
        else:
            result += char
    return result

def decrypt(text, shift):
    return encrypt(text, -shift)

def encrypt_file(input_file, output_file, shift):
    with open(input_file, 'r') as file:
        plaintext = file.read()
        ciphertext = encrypt(plaintext, shift)
    
    with open(output_file, 'w') as file:
        file.write(ciphertext)

def decrypt_file(input_file, output_file, shift):
    encrypt_file(input_file, output_file, -shift)

# Input kunci dari pengguna
shift_value = int(input("Masukkan nilai kunci (angka bulat): "))

input_file_name = 'input.txt'
encrypted_file_name = 'encrypted.txt'
decrypted_file_name = 'decrypted.txt'

encrypt_file(input_file_name, encrypted_file_name, shift_value)
decrypt_file(encrypted_file_name, decrypted_file_name, shift_value)
