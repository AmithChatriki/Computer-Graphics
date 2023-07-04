#include<stdio.h>
#include<GL/glut.h>

void myinit() {
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
	glMatrixMode(GL_MODELVIEW);
}
void display() {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);
	glPointSize(5);

	glBegin(GL_POLYGON); 
	glVertex2d(0, 0);
	glVertex2d(100, 0); 
	glVertex2d(100, 100);
	glVertex2d(0, 100);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.128, 0, 0);
	glVertex2d(100, 100);
	glVertex2d(100, 0); 
	glVertex2d(400, 0);
	glVertex2d(400, 100);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 1);
	glVertex2d(0, 100);
	glVertex2d(100, 100);
	glVertex2d(50, 200);
	glEnd();

	glBegin(GL_QUADS); 
	glColor3f(0.255, 0.85, 0.855);
	glVertex2d(50, 200);
	glVertex2d(100, 100);
	glVertex2d(400, 100);
	glVertex2d(350, 200);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2d(35, 50);
	glVertex2d(65, 50);
	glVertex2d(65, 0); 
	glVertex2d(35, 0);
	glEnd();

	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); 
	glutInitWindowPosition(500, 500); 
	glutInitWindowSize(500, 500); 
	glutCreateWindow("POINTS"); 
	myinit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}