
#include <GL\glew.h>  // A cross-platform open-source C/C++ extension loading library
#include <stdlib.h>
#include <GL\glut.h> // handle the window-managing operations
#include <iostream>
#include <stdio.h>



const int numOfCirclePoints = 360;


void drawCircle(float cx, float cy, float r, int num_segments) {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.14159265f * float(i) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}
void Circle(float k, float h, float r)
{
    float x, y;

    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < 180; i++) {
        x = r * cos(i) - h;
        y = r * sin(i) + k;
        glVertex3f(x + k, y - h, 0);


        x = r * cos(i + 0.1) - h;
        y = r * sin(i + 0.1) + k;
        glVertex3f(x + k, y - h, 0);
    }
    glEnd();
}

void zoomInEyes(float x, float y, float size) {
    float zoom = 1;

    if (GetAsyncKeyState(1)) {
        zoom *= 1.1f;
    }
    else if (GetAsyncKeyState(2)) {
        zoom *= 0.9f;
    }

    glPushMatrix();
    glTranslatef(x, y, 0);
    glScalef(size * zoom, size * zoom, 0);

    // eye

    glColor3f(1.0, 1.0, 1.0);//white
    drawCircle(-2.0, 2.0, 1.0, numOfCirclePoints);


    glColor3f(0.0, 0.0, 1.0);//blue
    drawCircle(-1.8, 1.8, 0.7, numOfCirclePoints);

    glColor3f(0.0, 0.0, 0.0);//black
    drawCircle(-1.7, 1.8, 0.4, numOfCirclePoints);


    glColor3f(1.0, 1.0, 1.0);//white
    drawCircle(2.0, 2.0, 1.0, numOfCirclePoints);


    glColor3f(0.0, 0.0, 1.0);
    drawCircle(1.8, 1.8, 0.7, numOfCirclePoints);//blue

    glColor3f(0.0, 0.0, 0.0);//black
    drawCircle(1.7, 1.8, 0.4, numOfCirclePoints);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    //head
    glPushMatrix();
    glTranslatef(-0.0, 0.2, 0);
    glColor3f(1.0, 0.8, 0.6);
    glutSolidSphere(5, 100, 100);
    glPopMatrix();
/*
    // eye

    glColor3f(1.0, 1.0, 1.0);//white
    drawCircle(-2.0, 2.0, 1.0, numOfCirclePoints);


    glColor3f(0.0, 0.0, 1.0);//blue
    drawCircle(-1.8, 1.8, 0.7, numOfCirclePoints);

    glColor3f(0.0, 0.0, 0.0);//black
    drawCircle(-1.7, 1.8, 0.4, numOfCirclePoints);


    glColor3f(1.0, 1.0, 1.0);//white
    drawCircle(2.0, 2.0, 1.0, numOfCirclePoints);


    glColor3f(0.0, 0.0, 1.0);
    drawCircle(1.8, 1.8, 0.7, numOfCirclePoints);//blue

    glColor3f(0.0, 0.0, 0.0);//black
    drawCircle(1.7, 1.8, 0.4, numOfCirclePoints);
    */
    //black circle
    glColor4f(0, 0, 0, 1);
    glPushMatrix();
    glTranslatef(0, -1.6, 0);
    glScalef(2.0, 2.0, 0);
    Circle(0, 0, 1);
    glPopMatrix();

    //baige circle
    glColor3f(1.0, 0.8, 0.6);
    glPushMatrix();
    glTranslatef(0, -1, 0);
    glScalef(2.1, 2.1, 0);
    Circle(0, 0, 0.9);
    glPopMatrix();

    // Hair
    glColor3f(0.5, 0.4, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2f(-3.0, 5.0);
    glVertex2f(0.0, 7.0);
    glVertex2f(3.0, 5.0);
    glEnd();

    // Hair 2
    glColor3f(0.5, 0.4, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2f(-4, 3);
    glVertex2f(-3, 6);
    glVertex2f(0, 5);
    glEnd();


    // Hair 3
    glColor3f(0.5, 0.4, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2f(1, 5);
    glVertex2f(4, 6);
    glVertex2f(4, 3);
    glEnd();

    zoomInEyes(0, 0, 1);


    glFlush();
    glutSwapBuffers();
}


void init(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -10, 10);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(900, 500);
    glutInitWindowPosition(50, 30);
    glutCreateWindow("Cartoon Boy");
    init();
    glutDisplayFunc(display);
 
   
    glutMainLoop();
    return 0;
}