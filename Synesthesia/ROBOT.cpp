#include <GL\glew.h>
#include <GL\freeglut.h> // handle the window-managing operations
#include <math.h>
#include <iostream>
#include <GL\freeglut.h> 
#include <stdlib.h>
#include <cmath>
#include <conio.h>
using namespace std;
const int numOfCirclePoints = 360;
float scalevalue;
 // A cross-platform open-source C/C++ extension loading library
void line() {
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glLineWidth(1.5);
	glLineStipple(2, 0x00ff);
	glEnable(GL_LINE_STIPPLE);
	glBegin(GL_LINES); //  ﬂ„·… «·ÿÊ»
	
	glVertex2f(12.5f, 5.6f); // x, y
	glVertex2f(12.1f, 5.1f);
	

	glVertex2f(12.9f, 5.5f); // x, y
	glVertex2f(12.5f, 5.0f);
	
	
	glVertex2f(13.3f, 5.1f); // x, y
	glVertex2f(12.9f, 4.6f);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
	
}

void init() {
	
	 glMatrixMode(GL_PROJECTION); // set the projection parameters
	 glLoadIdentity();
	 glOrtho(-21, 21, -35, 27, 0, 1);
	 glMatrixMode(GL_MODELVIEW);
	 glLoadIdentity();
	  glClear(GL_COLOR_BUFFER_BIT);
	  glClearColor(0.4f, 0.4f, 0.4f, 0.4f); 
	
}



void inscreen() {
	glPushMatrix();
	glScalef(scalevalue, scalevalue, 0);
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(1.0f, 1.0, 1.0f); // Red, f = float
	glVertex2f(5.0f, -6.0f); // x, y
	glVertex2f(9.0f, -6.0f);
	glVertex2f(9.0f, -13.0f);
	glVertex2f(5.0f, -13.0f);
	glEnd();
	glPopMatrix();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(6.0f, -8.0f); // x, y
	glVertex2f(6.5f, -7.0f);
	glVertex2f(7.0f, -8.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(7.0f, -8.0f); // x, y
	glVertex2f(7.5f, -7.0f);
	glVertex2f(8.0f, -8.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(8.0f, -8.0f); // x, y
	glVertex2f(8.5f, -7.0f);
	glVertex2f(9.0f, -8.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(6.0f, -10.0f); // x, y
	glVertex2f(6.5f, -9.0f);
	glVertex2f(7.0f, -10.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(7.0f, -10.0f); // x, y
	glVertex2f(7.5f, -9.0f);
	glVertex2f(8.0f, -10.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(8.0f, -10.0f); // x, y
	glVertex2f(8.5f, -9.0f);
	glVertex2f(9.0f, -10.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(6.0f, -12.0f); // x, y
	glVertex2f(6.5f, -11.0f);
	glVertex2f(7.0f, -12.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(7.0f, -12.0f); // x, y
	glVertex2f(7.5f, -11.0f);
	glVertex2f(8.0f, -12.0f);
	glEnd();
	glBegin(GL_TRIANGLES); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0, 0.0f); // Red, f = float
	glVertex2f(8.0f, -12.0f); // x, y
	glVertex2f(8.5f, -11.0f);
	glVertex2f(9.0f, -12.0f);
	glEnd();
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor4f(1.0f, 0.0, 0.0f,0.1f); // Red, f = float
	glVertex2f(5.0f, -10.0f); // x, y
	glColor4f(0.0f, 1.0, 0.0f, 0.1f); // Red, f = float
	glVertex2f(6.0f, -10.0f);
	glColor4f(0.0f, 0.0, 1.0f, 1.0f); // Red, f = float
	glVertex2f(6.0f, -11.0f);
	glColor4f(0.0f, 1.0, 0.0f, 1.0f); // Red, f = float
	glVertex2f(5.0f, -11.0f);
	glEnd();
	glDisable(GL_BLEND);


}
void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) {
		if (state == GLUT_UP) {
			scalevalue = 1.0f;
		}
	}
	if (button == GLUT_RIGHT_BUTTON) {
		if (state == GLUT_UP) {
			scalevalue *= 1.1f;
		}

	}

}

void display() {
	glPushMatrix();
	glTranslatef(-scalevalue, scalevalue, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.6f, 0.6f, 0.6f, 1.0f);
	GLfloat yi, xi, theta = 0;
	GLfloat  x_c, y_c, r;
	//// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS); // Each set of 4 vertices form a quad
	glColor3f(0.3f, 0.2f, 0.4f); // Red, f = float
	glVertex2f(2.0f, 27.0f); // x, y
	glVertex2f(2.0f, -24.0f);
	glVertex2f(-21.0f, -24.0f);
	glVertex2f(-21.0f, 27.0f);
	glEnd();
	//glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	//glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	//glVertex2f(2.0f, 27.0f); // x, y
	//glVertex2f(2.0f, -24.0f);
	//glVertex2f(-21.0f, -24.0f);
	//glVertex2f(-21.0f, 27.0f);
	//glEnd();
	glBegin(GL_QUADS); // «·„—»⁄ «·À«‰Ì
	glColor3f(0.2f, 0.1f, 0.3f); // Red, f = float
	glVertex2f(0.0f, 25.0f); // x, y
	glVertex2f(0.0f, -24.0f);
	glVertex2f(-19.0f, -24.0f);
	glVertex2f(-19.0f, 25.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(0.0f, 25.0f); // x, y
	glVertex2f(0.0f, -24.0f);
	glVertex2f(-19.0f, -24.0f);
	glVertex2f(-19.0f, 25.0f);
	glEnd();
	glBegin(GL_QUADS); // Each set of 4 vertices form a quad
	glColor3f(0.3f, 0.2f, 0.4f); // Red, f = float
	glVertex2f(-1.0f, 24.0f); // x, y
	glVertex2f(-1.0f, -24.0f);
	glVertex2f(-18.0f, -24.0f);
	glVertex2f(-18.0f, 24.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(-1.0f, 24.0f); // x, y
	glVertex2f(-1.0f, -24.0f);
	glVertex2f(-18.0f, -24.0f);
	glVertex2f(-18.0f, 24.0f);
	glEnd();

	glBegin(GL_QUADS); // «·»«»
	glColor3f(0.2f, 0.1f, 0.3f); // Red, f = float
	glVertex2f(-2.0f, 23.0f); // x, y
	glVertex2f(-2.0f, -24.0f);
	glVertex2f(-21.0f, -24.0f);
	glVertex2f(-21.0f, 23.0f);
	glEnd();
	
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(-2.0f, 23.0f); // x, y
	glVertex2f(-2.0f, -24.0f);
	glVertex2f(-21.0f, -24.0f);
	glVertex2f(-21.0f, 23.0f);
	glEnd();
	
	glBegin(GL_QUADS); // «· ’„Ì„ «·œ«Œ·Ì «·«”Êœ
	glColor3f(0.0f, 0.0f, 0.1f); // Red, f = float
	glVertex2f(-5.0f, 20.0f); // x, y
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-21.0f, -10.0f);
	glVertex2f(-21.0f, 20.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.3f, 0.2f, 0.4f);// Red, f = float
	glVertex2f(-5.0f, 20.0f); // x, y
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-21.0f, -10.0f);
	glVertex2f(-21.0f, 20.0f);
	glEnd();
	glBegin(GL_QUADS); // «·Ìœ Ãﬁ  «·»«»
	glColor3f(0.3f, 0.3f, 0.3f); // Red, f = float
	glVertex2f(-2.5f, 5.0f); // x, y
	glVertex2f(-2.5f, 0.0f);
	glVertex2f(-4.0f, 0.0f);
	glVertex2f(-4.0f, 5.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(-2.5f, 5.0f); // x, y
	glVertex2f(-2.5f, 0.0f);
	glVertex2f(-4.0f, 0.0f);
	glVertex2f(-4.0f, 5.0f);
	glEnd();
	glBegin(GL_QUADS); // «·„”ﬂ… Õﬁ  «·»«»
	glColor3f(0.3f, 0.3f, 0.3f); // Red, f = float
	glVertex2f(-3.0f, 3.8f); // x, y
	glVertex2f(-3.0f, 2.8f);
	glVertex2f(-4.8f, 2.8f);
	glVertex2f(-4.8f, 3.8f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(-3.0f, 3.8f); // x, y
	glVertex2f(-3.0f, 2.8f);
	glVertex2f(-4.8f, 2.8f);
	glVertex2f(-4.8f, 3.8f);
	glEnd();

	x_c = -3.2; y_c = 1.5; r = 0.3;
	glBegin(GL_POLYGON); // œ«∆—… «·»«» 
	for (int i = 1; i <=10000; i++) {
		theta = i * 2.5f / 1000;
		xi = x_c + r * sin(theta);
		yi = y_c + r * cos(theta);
		glColor3f(0.2f, 0.2f, 0.2f); // Red, f = float
		glVertex2f(xi, yi);}
    glEnd();
	x_c = -3.2; y_c = 1.5; r = 0.3;
	glBegin(GL_LINE_LOOP);
	for (int i = 1; i <= 10000; i++) {
		theta = i * 2.5f / 1000;
		xi = x_c + r * sin(theta);
		yi = y_c + r * cos(theta);
		glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
		glVertex2f(xi, yi);
	}
	glEnd();
	glBegin(GL_QUADS); // ’„Ì„ œ«Œ·Ì
	glColor3f(0.3f, 0.2f, 0.4f); // Red, f = float
	glVertex2f(-5.0f, -13.0f); // x, y
	glVertex2f(-5.0f, -20.0f);
	glVertex2f(-21.0f, -20.0f);
	glVertex2f(-21.0f, -13.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-5.0f, -13.0f); // x, y
	glVertex2f(-5.0f, -20.0f);
	glVertex2f(-21.0f, -20.0f);
	glVertex2f(-21.0f, -13.0f);
	glEnd();
	glPopMatrix();
	glBegin(GL_QUADS); //«·ﬁ«⁄œ… Õﬁ  «·»Ì 
	glColor3f(0.4f, 0.4f, 0.4f); // Red, f = float
	glVertex2f(21.0f, -24.0f); // x, y
	glVertex2f(21.0f, -25.0f);
	glVertex2f(-21.0f, -25.0f);
	glVertex2f(-21.0f, -24.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(21.0f, -24.0f); // x, y
	glVertex2f(21.0f, -25.0f);
	glVertex2f(-21.0f, -25.0f);
	glVertex2f(-21.0f, -24.0f);
	glEnd();
	glBegin(GL_QUADS); //ﬁ«⁄œ…2
	glColor3f(0.4f, 0.4f, 0.4f); // Red, f = float
	glVertex2f(20.0f, -25.0f); // x, y
	glVertex2f(20.0f, -26.0f);
	glVertex2f(-21.0f, -26.0f);
	glVertex2f(-21.0f, -25.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(20.0f, -25.0f); // x, y
	glVertex2f(20.0f, -26.0f);
	glVertex2f(-21.0f, -26.0f);
	glVertex2f(-21.0f, -25.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.2f, 0.4f); // Red, f = float
	glVertex2f(2.0f, -12.0f); // x, y
	glVertex2f(2.0f, -24.0f);
	glVertex2f(21.0f, -24.0f);
	glVertex2f(21.0f, -12.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.4f, 0.4, 0.4f); // Red, f = float
	glVertex2f(21.0f, 27.0f); // x, y
	glVertex2f(21.0f, -12.0f);
	glVertex2f(2.0f, -12.0f);
	glVertex2f(2.0f, 27.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -11.0f); // x, y
	glVertex2f(2.0f, -12.0f);
	glVertex2f(22.0f, -12.0f);
	glVertex2f(22.0f, -11.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -10.0f); // x, y
	glVertex2f(2.0f, -12.0f);
	glVertex2f(22.0f, -12.0f);
	glVertex2f(22.0f, -10.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -9.0f); // x, y
	glVertex2f(2.0f, -12.0f);
	glVertex2f(22.0f, -12.0f);
	glVertex2f(22.0f, -9.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -8.0f); // x, y
	glVertex2f(2.0f, -10.0f);
	glVertex2f(22.0f, -10.0f);
	glVertex2f(22.0f, -8.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -6.0f); // x, y
	glVertex2f(2.0f, -7.0f);
	glVertex2f(22.0f, -7.0f);
	glVertex2f(22.0f, -6.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -5.0f); // x, y
	glVertex2f(2.0f, -6.0f);
	glVertex2f(22.0f, -6.0f);
	glVertex2f(22.0f, -5.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -4.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, -4.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -3.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, -3.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -2.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, -2.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, -1.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, -1.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 0.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 1.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 1.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 2.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 2.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 3.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 3.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 4.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 4.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 5.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 5.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 6.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 6.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 7.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 7.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 8.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 8.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 9.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 9.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 10.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 10.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 11.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 11.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 12.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 12.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 13.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 13.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 14.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 14.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 15.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 15.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 16.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 16.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 17.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 17.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 18.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 18.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 19.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 19.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 20.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 20.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 21.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 21.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 22.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 22.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 23.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 23.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 24.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 24.0f);
	glEnd();
	
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 25.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 25.0f);
	glEnd();
	glEnable(GL_LINE_STIPPLE);
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 26.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 26.0f);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(2.0f, 27.0f); // x, y
	glVertex2f(2.0f, -5.0f);
	glVertex2f(22.0f, -5.0f);
	glVertex2f(22.0f, 27.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = float
	glVertex2f(3.0f, -3.0f); // x, y
	glVertex2f(3.0f, -19.0f);
	glVertex2f(16.0f, -19.0f);
	glVertex2f(16.0f, -3.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(3.0f, -3.0f); // x, y
	glVertex2f(3.0f, -19.0f);
	glVertex2f(16.0f, -19.0f);
	glVertex2f(16.0f, -3.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = float
	glVertex2f(7.5f, -2.0f); // x, y
	glVertex2f(7.5f, -3.0f);
	glVertex2f(11.5f, -3.0f);
	glVertex2f(11.5f, -2.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(7.5f, -2.0f); // x, y
	glVertex2f(7.5f, -3.0f);
	glVertex2f(11.5f, -3.0f);
	glVertex2f(11.5f, -2.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = float
	glVertex2f(8.5f, -1.0f); // x, y
	glVertex2f(8.5f, -2.0f);
	glVertex2f(10.5f, -2.0f);
	glVertex2f(10.5f, -1.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(8.5f, -1.0f); // x, y
	glVertex2f(8.5f, -2.0f);
	glVertex2f(10.5f, -2.0f);
	glVertex2f(10.5f, -1.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = floatt
	glVertex2f(5.0f, 7.0f); // x, y
	glVertex2f(5.0f, -1.0f);
	glVertex2f(14.0f, -1.0f);
	glVertex2f(14.0f, 7.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(5.0f, 7.0f); // x, y
	glVertex2f(5.0f, -1.0f);
	glVertex2f(14.0f, -1.0f);
	glVertex2f(14.0f, 7.0f);
	glEnd();
	glBegin(GL_POLYGON); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(6.5f, 3.0f); // x, y
	glVertex2f(7.8f, 3.0f); // x, y
	glVertex2f(8.2f, 4.0f); // x, y
	glVertex2f(7.8f, 5.0f);
	glVertex2f(6.5f, 5.0f);
	glVertex2f(6.1f, 4.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(6.5f, 3.0f); // x, y
	glVertex2f(7.8f, 3.0f); // x, y
	glVertex2f(8.2f, 4.0f); // x, y
	glVertex2f(7.8f, 5.0f);
	glVertex2f(6.5f, 5.0f);
	glVertex2f(6.1f, 4.0f);
	glEnd();
	glBegin(GL_POLYGON); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(11.1f, 3.0f); // x, y
	glVertex2f(12.5f, 3.0f); // x, y
	glVertex2f(12.8f, 4.0f); // x, y
	glVertex2f(12.5f, 5.0f);
	glVertex2f(11.1f, 5.0f);
	glVertex2f(10.8f, 4.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(11.1f, 3.0f); // x, y
	glVertex2f(12.5f, 3.0f); // x, y
	glVertex2f(12.8f, 4.0f); // x, y
	glVertex2f(12.5f, 5.0f);
	glVertex2f(11.1f, 5.0f);
	glVertex2f(10.8f, 4.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(1.0f, 1.0f, 1.0f); // Red, f = float
	glVertex2f(12.0f, 6.3f); // x, y
	glVertex2f(13.8f, 5.1f);
	glVertex2f(13.7f, 3.8f);
	glVertex2f(11.5f, 5.2f);
	glEnd();
	

	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(12.0f, 6.3f); // x, y
	glVertex2f(13.8f, 5.1f);
	glVertex2f(13.7f, 3.8f);
	glVertex2f(11.5f, 5.2f);
	glEnd();
	line();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(7.0f, 1.0f); // x, y
	glVertex2f(11.5f, 1.0f);
	glVertex2f(10.5f, 0.0f);
	glVertex2f(8.0f, 0.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.1f, 0.0f, 0.1f); // Red, f = float
	glVertex2f(4.0f, -5.0f); // x, y
	glVertex2f(15.0f,-5.0f);
	glVertex2f(15.0f, -15.0f);
	glVertex2f(4.0f, -15.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.2f, 0.2f, 0.2f); // Red, f = float
	glVertex2f(7.0f, -16.0f); // x, y
	glVertex2f(8.0f, -16.0f);
	glVertex2f(8.0f, -17.5f);
	glVertex2f(7.0f, -17.5f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.2f, 0.2f, 0.2f); // Red, f = float
	glVertex2f(9.0f, -16.0f); // x, y
	glVertex2f(10.0f, -16.0f);
	glVertex2f(10.0f, -17.5f);
	glVertex2f(9.0f, -17.5f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.2f, 0.2f, 0.2f); // Red, f = float
	glVertex2f(11.0f, -16.0f); // x, y
	glVertex2f(12.0f, -16.0f);
	glVertex2f(12.0f, -17.5f);
	glVertex2f(11.0f, -17.5f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = float
	glVertex2f(6.0f, -19.0f); // x, y
	glVertex2f(7.0f, -19.0f);
	glVertex2f(7.0f, -23.0f);
	glVertex2f(6.0f, -23.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(6.0f, -19.0f); // x, y
	glVertex2f(7.0f, -19.0f);
	glVertex2f(7.0f, -23.0f);
	glVertex2f(6.0f, -23.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = float
	glVertex2f(12.0f, -19.0f); // x, y
	glVertex2f(13.0f, -19.0f);
	glVertex2f(13.0f, -23.0f);
	glVertex2f(12.0f, -23.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(12.0f, -19.0f); // x, y
	glVertex2f(13.0f, -19.0f);
	glVertex2f(13.0f, -23.0f);
	glVertex2f(12.0f, -23.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.2f, 0.2f, 0.2f); // Red, f = float
	glVertex2f(5.5f, -23.0f); // x, y
	glVertex2f(7.0f, -23.0f);
	glVertex2f(7.0f, -24.0f);
	glVertex2f(5.0f, -24.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(5.5f, -23.0f); // x, y
	glVertex2f(7.0f, -23.0f);
	glVertex2f(7.0f, -24.0f);
	glVertex2f(5.0f, -24.0f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.2f, 0.2f, 0.2f); // Red, f = float
	glVertex2f(12.0f, -23.0f); // x, y
	glVertex2f(14.0f, -23.0f);
	glVertex2f(13.5f, -24.0f);
	glVertex2f(12.0f, -24.0f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(12.0f, -23.0f); // x, y
	glVertex2f(14.0f, -23.0f);
	glVertex2f(13.5f, -24.0f);
	glVertex2f(12.0f, -24.0f);
	glEnd();
	
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = float
	glVertex2f(3.0f, -3.0f); // x, y
	glVertex2f(4.0f, -3.0f);
	glVertex2f(1.7f, -17.5f);
	glVertex2f(0.3f, -17.5f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(3.0f, -3.0f); // x, y
	glVertex2f(4.0f, -3.0f);
	glVertex2f(1.7f, -17.5f);
	glVertex2f(0.3f, -17.5f);
	glEnd();
	glBegin(GL_QUADS); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.3f, 0.4f, 0.5f); // Red, f = float
	glVertex2f(15.0f, -3.0f); // x, y
	glVertex2f(16.0f, -3.0f);
	glVertex2f(19.0f, -17.5f);
	glVertex2f(18.0f, -17.5f);
	glEnd();
	glBegin(GL_LINE_LOOP); //  ﬂ„·… «·ÿÊ»
	glColor3f(0.0f, 0.0f, 0.0f); // Red, f = float
	glVertex2f(15.0f, -3.0f); // x, y
	glVertex2f(16.0f, -3.0f);
	glVertex2f(19.0f, -17.5f);
	glVertex2f(18.0f, -17.5f);
	glEnd();
	inscreen();
	glFlush();

}
static void play() {
	glutPostRedisplay();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv); // Initialize GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB ); // Specify the display Mode ñ RGB, RGBA or color
	// Index, single or double Buffer
	glutCreateWindow("Rebot"); // Create a window with the given title
	glutInitWindowSize(500, 500); // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	init();
	int scalevalue = 1;
	glutIdleFunc(play);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMouseFunc(mouse);
	glutMainLoop(); // Enter the infinitely event-processing loop
	return 0;
}