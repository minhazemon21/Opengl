/*
171-15-1294
171-15-1215
171-15-1243
171-15-1283
171-15-1212
171-15-1275
*/
/// DDA Line drawing algorithm x1 y1 boro hole ///

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>


float   x1, x2, y1, y2, dx, dy;
float Xinc, Yinc,stepsize;

void display(void)
{
   glClear (GL_COLOR_BUFFER_BIT);
   glColor3f (1.0, 1.0, 1.0);

    dx = abs(x2-x1);
    dy = abs(y2-y1);
   if(abs(dx) > abs(dy) ){
       stepsize = abs(dx);
   }
   else
    {
       stepsize = abs(dy);
    }

    Xinc = dx/stepsize;
    Yinc = dy/stepsize;

    float x=x1, y=y1;
    printf("%.1f %.1f %.1f %.1f %.1f", x, y, stepsize, Xinc, Yinc);
    printf("\n");

    glBegin(GL_POINTS);
    glVertex2i (abs(x), abs(y));
    int i;
    for (i = 0; i<stepsize; i++)
    {
        x = x + Xinc;
        y = y + Yinc;
       printf("%.1f %.1f %.1f %.1f %.1f", x, y, stepsize, Xinc, Yinc);
       printf("\n");
        glVertex2i (abs(x), abs(y));
   }
    glEnd();
    glutSwapBuffers();
}
void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-100.0, 200.0, -100.0, 200.0, -200.0, 200.0);
}

int main(int argc, char** argv)
{
  /* x2 = 5;
    y2 = 3;

   printf("Enter x1 : ");
    scanf("%d", &x1);
    printf("Enter y1 : ");
    scanf("%d", &y1);
    printf("\n");
*/
    printf("Enter value of X1 :");
    scanf("%f",&x1);
    printf("Enter value of y1 :");
    scanf("%f",&y1);
    printf("Enter value of X2 :");
    scanf("%f",&x2);
    printf("Enter value of Y2 :");
    scanf("%f",&y2);
    glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("DDA Line Drawing Algorithm");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
   return 0;
}
