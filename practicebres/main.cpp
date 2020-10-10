/*
171-15-1294
171-15-1215
171-15-1243
171-15-1283
171-15-1212
171-15-1275
*/
//bresnham x1 y1 boro hole

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>

float   x1, x2, y1, y2, dx, dy, pk, x, y;

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3ub (255, 255, 255);

    dx = abs(x2-x1);
    dy = abs(y2-y1);

    x = x1;
    y = y1;

    pk = 2*dy - dx;

    glBegin(GL_POINTS);
    glVertex2i(abs(x), abs(y));

    for( int i=1; i<=dx; i++){
        while(pk > 0){
            y = y-1;
            pk = pk - 2*dx;
        }
        x = x+1;
        glVertex2i (abs(x), abs(y));
        pk = pk + 2 * dy;
    }

    glEnd();
    glutSwapBuffers();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-150, 150, -150, 150);
}

int main(int argc, char** argv)
{
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
    glutCreateWindow ("Emon Breshenham");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
