#include<GL/glut.h>

void myInit(void)
{
	glClearColor(0,0,0,1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    	gluOrtho2D(-780, 780, -420, 420);     }

void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2d(0.0,400.0);
	glVertex2d(0.0,-400.0);
	glVertex2d(-800.0,0.0);
	glVertex2d(800.0,0.0);

	glEnd();
	glFlush();

	glBegin(GL_TRIANGLES);
	glColor3f(1,0,0);
	glVertex2i(0,0);
	glColor3f(0,1,0);
	glVertex2i(250,0);
	glColor3f(0,0,1);
	glVertex2i(0,200);

	glColor3f(1,0,0);
	glVertex2i(0,0);
	glColor3f(0,1,0);
	glVertex2i(-250,0);
	glColor3f(0,0,1);
	glVertex2i(0,-200);

	glColor3f(1,0,0);
	glVertex2i(0,0);
	glColor3f(0,1,0);
	glVertex2i(250,0);
	glColor3f(0,0,1);
	glVertex2i(0,-200);

	glColor3f(1,0,0);
	glVertex2i(0,0);
	glColor3f(0,1,0);
	glVertex2i(-250,0);
	glColor3f(0,0,1);
	glVertex2i(0,200);
	
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(1000,800);
	glutInitWindowPosition(0,0);

	glutCreateWindow("Multicoloured Rhombus");
	myInit();

	glutDisplayFunc(Display);
	glutMainLoop();
}






