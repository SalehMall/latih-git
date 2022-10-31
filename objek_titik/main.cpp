
//NAMA : MUH.SALEH BADAWI
//NIM  : E1E121069
//MENGGAMBAR TITIK
#include <GL/glut.h>
#include <GL/gl.h>
#include <windows.h>
void userdraw () {
    glBegin (GL_POINTS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2i (150,0);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2i (150,200);

    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glVertex2i (350,200);

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
     glVertex2i (350,0);

     glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
     glVertex2i (550,0);

     glColor3f(0.0f, 0.5f, 0.5f);
     glVertex2i (550,200);
     glEnd (); }
     void display (void) {
         glClear (GL_COLOR_BUFFER_BIT);
          userdraw (); glutSwapBuffers (); }
    int main (int argc, char **argv) {
        glutInit (&argc,argv);
        glutInitDisplayMode (GLUT_DOUBLE|GLUT_RGB);
        glutInitWindowSize (640,480);
        glutCreateWindow ("Membuat Objek Titik");
        glClearColor (0.0, 0.0, 0.0, 0.0);
        gluOrtho2D (0.,640.,-240.,240.);
        glutIdleFunc (display);
        glutDisplayFunc (display);
        glutMainLoop ();
    return 0; }
