
#include <GL\glew.h>  // A cross-platform open-source C/C++ extension loading library
#include <stdlib.h>
#include <GL\glut.h> // handle the window-managing operations
#include <iostream>
#include <stdio.h>

using namespace std;

float specialTranslateX = 0, specialTranslateY = 0, specialTranslateZ = 0;
GLint win_width = 500,
win_hight = 500;
float nearp;
float farp;



float  w = 500, h = 500, newWidth, newHeight;


float transValueX;
float transValueY;
float transValueZ;

// buffers
GLuint myTexture1;
GLuint myTexture2;

char image1Path[] = "C:/Users/itzha/Downloads/Brain.bmp";





//http://stackoverflow.com/questions/12518111/how-to-load-a-bmp-on-glut-to-use-it-as-a-texture

GLuint LoadTexture(const char* filename, int width, int height)
{
	GLuint texture;
	unsigned char* data;
	FILE* file;

	//The following code will read in our RAW file
	file = fopen(filename, "rb");

	if (file == NULL)
	{
		cout << "Unable to open the image file" << endl << "Program will exit :(" << endl;
		exit(0);
		return 0;
	}

	data = (unsigned char*)malloc(width * height * 3);
	fread(data, width * height * 3, 1, file);

	fclose(file);


	// reorder the image colors to RGB not BGR
	for (int i = 0; i < width * height; ++i)
	{
		int index = i * 3;
		unsigned char B, R;
		B = data[index];
		R = data[index + 2];

		data[index] = R;
		data[index + 2] = B;

	}

	glGenTextures(1, &texture);            //generate the texture with the loaded data
	glBindTexture(GL_TEXTURE_2D, texture);  //bind the texture to it's array

	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); //set texture environment parameters

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T ,GL_CLAMP_TO_BORDER);

	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);

	// ....................................................................................

	free(data); //free the texture array

	if (glGetError() != GL_NO_ERROR)
		printf("GLError in genTexture()\n");

	return texture; //return whether it was successfull  
}

void shape() {
	
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, myTexture1);
	glEnable(GL_DEPTH_TEST);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glNormal3f(0, 0, 1);

	glTexCoord2f(0.1, 0);   //1
	glVertex3f(-1.5, -0.5, 0.0);
	//glTexCoord2f(1, 0);

	glTexCoord2f(1,0);     //2
	glVertex3f(1.5, -0.5, 0.0);

	glTexCoord2f(1, 1);     //3
	glVertex3f(1.5, 1.5, 0.0);


	glTexCoord2f(0.1,1);     ///4
	glVertex3f(-1.5, 1.5, 0.0);
	glEnd();
	
	glDisable(GL_DEPTH_TEST);
	glDisable(GL_TEXTURE_2D);
}



static void play(void)
{
	glutPostRedisplay();
}



void init() {


glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-2, 2, -2, 2, -2, 2);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();


	//------- Texture ---------
	myTexture1 = LoadTexture(image1Path, 600, 338);

	if (myTexture1 == -1)
	{
		cout << "Error in loading the texture" << endl;
	}
	else
		cout << "The texture value is: " << myTexture1 << endl;


	

}

void reshape(int width, int hight) {

	/*const float ratio = (float)width/hight;

	 float sx= ratio > 1.0f ? ratio : 1.0f;
	 float sy= ratio> 1.0f ? 1.0f: 1.0f/ratio;

	 glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();
	 glOrtho( -sx, sx, -sy, sy, 0,1 );*/

	glViewport(0, 0, 500, 500);
	newWidth = width;
	newHeight = hight;


}


////////////////
//  Display   //
////////////////
void Draw() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2, 2, -2, 2, -2, 2);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//gluLookAt(specialTranslateX, specialTranslateY, specialTranslateZ, 0.5, 1, -0.5, 0, 1, 0);

	shape();

	glFlush();
	glutSwapBuffers();


}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(720, 490);
	glutCreateWindow("Human brain");
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	init();
	glutDisplayFunc(Draw);
	glutReshapeFunc(reshape);
	glutIdleFunc(play);
	

	glutMainLoop();
}