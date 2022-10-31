//NAMA : MUH.SALEH BADAWI
//NIM  : E1E121069
//MENGGAMBAR POLYGON

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
  glVertex2f(0, 0.75);
  glVertex2f(0.5, 0.5);
  glVertex2f(0.75, 0);
  glVertex2f(0.5, -0.5);
  glVertex2f(0.10, -0.75);
  glVertex2f(0.15, -0.70);
glEnd(); glFlush(); /* Single buffered, so needs a flush. */
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("POLIGON");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
