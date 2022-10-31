//NAMA : MUH.SALEH BADAWI
//NIM  : E1E121069
//MENGGAMBAR GARIS

#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);

glPushMatrix ();
glClearColor(1,1,1,0);
glColor4f(1.0f, 0.5f, 0.0f, 0.0f); //
glBegin(GL_LINES);
glVertex3f (-0.9f,0.0f,0.0f);
glVertex3f (0.9f,0.0f,0.0f);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("GARIS");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
