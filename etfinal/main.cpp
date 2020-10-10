/*
171-15-1294
171-15-1215
171-15-1243
171-15-1283
171-15-1275
171-15-1212
Group 2

*/



#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <cstring>

float r, x, y, theta, x_position = 0, y_position = 0, ai = 0, x_position_ = 0, y_position_ = 0, zy = 0;
float tri2 = 20, tri3 = 180,temp1, temp2, temp3;
void timer(int);


void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,0.0,0.0);//rgb
    glBegin(GL_POLYGON);
    for(int i=0; i<=360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(60*cos(theta), 50*sin(theta));
    }

    glEnd();

    glColor3f(.70,.5,1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<=360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(45*cos(theta), 45*sin(theta));
    }
    glEnd();
//line
    glColor3f(0,0.8,0.5);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(-50, -300);
    glVertex2f(0,0);
    glEnd();

    glColor3f(0,0.8,0.5);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0, -300);
    glVertex2f(0,0);
    glEnd();

    glColor3f(0,0.8,0.5);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(50, -300);
    glVertex2f(0,0);
    glEnd();
//
    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0, -300);
    glVertex2f(42,-250);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0, -300);
    glVertex2f(-42,-250);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(42, -250);
    glVertex2f(-42,-250);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0, -250);
    glVertex2f(32,-200);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0, -250);
    glVertex2f(-32,-200);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(32, -200);
    glVertex2f(-32,-200);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0, -200);
    glVertex2f(27,-150);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0, -200);
    glVertex2f(-27,-150);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(15);
    glBegin(GL_LINES);
    glVertex2f(27, -150);
    glVertex2f(-27,-150);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(15);
    glBegin(GL_LINES);
    glVertex2f(0, -150);
    glVertex2f(18,-100);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(0, -150);
    glVertex2f(-18,-100);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(18, -100);
    glVertex2f(-18,-100);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(0, -100);
    glVertex2f(8,-50);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(0, -100);
    glVertex2f(-8,-50);
    glEnd();

    glColor3f(0.5,0.5,0.1);
    glLineWidth(15);
    glBegin(GL_LINES);
    glVertex2f(8, -50);
    glVertex2f(-8,-50);
    glEnd();

    //

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(tri2*cos(ai)-tri3*sin(ai) , tri2*sin(ai)+tri3*cos(ai));
    glVertex2f(-tri2*cos(ai)-tri3*sin(ai) , -tri2*sin(ai)+tri3*cos(ai));
    glEnd();

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(tri2*cos(ai)+tri3*sin(ai),tri2*sin(ai)-tri3*cos(ai));
    glVertex2f(-tri2*cos(ai)+tri3*sin(ai),-tri2*sin(ai)-tri3*cos(ai));
    glEnd();

    glColor3f(0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(tri3*cos(ai)+tri2*sin(ai),tri3*sin(ai)-tri2*cos(ai));
    glVertex2f(tri3*cos(ai)-tri2*sin(ai),tri3*sin(ai)+tri2*cos(ai));
    glEnd();

    glColor3f(0.5,.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(-tri3*cos(ai)+tri2*sin(ai),-tri3*sin(ai)-tri2*cos(ai));
    glVertex2f(-tri3*cos(ai)-tri2*sin(ai),-tri3*sin(ai)+tri2*cos(ai));
    glEnd();


    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<=360; i++)
    {
        theta = i*3.142/180;
        glVertex2f(20*cos(theta), 20*sin(theta));
    }

    glEnd();



    glutSwapBuffers();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-350, 350, -350, 350);


}


int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Wind Mill");
    init ();
    glutDisplayFunc(display);
    glutTimerFunc(1000, timer, 0);
    glutMainLoop();
    return 0;
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60, timer, 0);
    if(ai < 360)
    {
        ai+= 0.01;
    }
    else
    {
        ai = 0;
    }

}


