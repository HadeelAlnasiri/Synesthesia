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
	 //glOrtho(-21, 21, -35, 27, 0, 1);
	 glMatrixMode(GL_MODELVIEW);
	 glLoadIdentity();
	  glClear(GL_COLOR_BUFFER_BIT);
	  glClearColor(0.4f, 0.4f, 0.4f, 0.4f);

	
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
	glRotatef(180,0, scalevalue,0);
	//Draw a sphere with a radius of 1.0
	float M_PI=3.14;
	glBegin(GL_TRIANGLES);
	
	for (int i = 0; i < 360; i++) {
		for (int j = 0; j < 180; j++) {
			float x1 = cos(i * M_PI / 180.0f) * sin(j * M_PI / 180.0f);
			float y1 = sin(i * M_PI / 180.0f) * sin(j * M_PI / 180.0f);
			float z1 = cos(j * M_PI / 180.0f);

			float x2 = cos((i + 1) * M_PI / 180.0f) * sin(j * M_PI / 180.0f);
			float y2 = sin((i + 1) * M_PI / 180.0f) * sin(j * M_PI / 180.0f);
			float z2 = cos(j * M_PI / 180.0f);

			float x3 = cos((i + 1) * M_PI / 180.0f) * sin((j + 1) * M_PI / 180.0f);
			float y3 = sin((i + 1) * M_PI / 180.0f) * sin((j + 1) * M_PI / 180.0f);
			float z3 = cos((j + 1) * M_PI / 180.0f);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			glEnable(GL_BLEND);
			glColor4f(0.0f, 0.0f, 1.0f,0.1f);
			glVertex3d(x1, y1, z1);  //Vertex 1 
			glColor4f(0.0f, 0.0f, 1.0f, 0.1f);
			glVertex3d(x2, y2, z2);  //Vertex 2 
			glColor4f(1.0f, 1.0f, 1.0f, 0.1f);
			glVertex3d(x3, y3, z3);  //Vertex 3 

		}
	}
	glEnd();
	glPopMatrix();
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