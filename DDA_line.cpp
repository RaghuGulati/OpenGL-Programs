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

	float steps, dx, dy, m, xinc, yinc;
        int x1, y1, x2, y2;

	x1 = 0;
	y1 = 0;
	x2 = 100;
	y2 = 150;

        dx = x2 - x1; 
        dy = y2 - y1; 

        if(abs(dx) > abs(dy))
                {
                        steps = abs(dx);
                }    

	else
                {
                        steps = abs(dy);
                }
    
        xinc = dx/steps;
        yinc = dy/steps;

	float x,y;
        x = x1;y = y1;

	for(int i=1;i<steps;i++)
                {
                        x = x + xinc;
                        y = y + yinc;
               		glVertex2d(x,y);
		}

	glEnd();
	glFlush();



}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(1000,800);
	glutInitWindowPosition(0,0);

	glutCreateWindow("Draw Line using DDA_Algorithm");
	myInit();

	glutDisplayFunc(Display);
	glutMainLoop();
}






