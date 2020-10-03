#include <glfw3.h>
#include <glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}
void drawShape(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);

	glVertex2i(55, 140);
	glVertex2i(50, 130);
	glVertex2i(95, 40);
	glVertex2i(105, 40);
	glVertex2i(150, 130);
	glVertex2i(145, 140);
	glVertex2i(55, 140);
	glVertex2i(75, 100);
	glVertex2i(85, 120);
	glVertex2i(95, 120);
	glVertex2i(105, 100);
	glVertex2i(115, 100);
	glVertex2i(100, 130);
	glVertex2i(70, 130);
	glVertex2i(80, 110);
	glVertex2i(85, 120);
	glVertex2i(75, 120);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
	glVertex2i(120, 90);
	glVertex2i(135, 120);
	glVertex2i(115, 120);
	glVertex2i(120, 110);
	glVertex2i(115, 100);
	glVertex2i(125, 120);
	glVertex2i(115, 120);
	glVertex2i(110, 130);
	glVertex2i(150, 130);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
	glVertex2i(115, 100);
	glVertex2i(95, 100);
	glVertex2i(100, 110);
	glVertex2i(95, 120);
	glVertex2i(80, 90);
	glVertex2i(95, 60);
	glVertex2i(105, 80);
	glVertex2i(95, 80);
	glVertex2i(100, 70);
	glVertex2i(90, 90);
	glVertex2i(95, 100);
	glVertex2i(90, 90);
	glVertex2i(120, 90);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
	glVertex2i(95, 40);
	glVertex2i(115, 80);
	glVertex2i(95, 80);
	glEnd();

	glFlush();
	
}

void anotherShape(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);

	glVertex2i(100, 74);
	glVertex2i(88, 98);
	glVertex2i(103, 98);
	glVertex2i(108, 105);
	glVertex2i(83, 105);
	glVertex2i(74, 122);
	glVertex2i(83, 122);
	glVertex2i(87, 115);
	glVertex2i(83, 105);
	glVertex2i(87, 115);
	glVertex2i(112, 115);
	glVertex2i(116, 122);
	glVertex2i(83, 122);
	glVertex2i(116, 122);
	glVertex2i(120, 130);
	glVertex2i(62, 130);
	glVertex2i(75, 105);
	glVertex2i(50, 105);
	glVertex2i(55, 115);
	glVertex2i(70, 115);
	glVertex2i(55, 115);
	glVertex2i(50, 105);
	glVertex2i(82, 40);
	glVertex2i(90, 40);
	glVertex2i(62, 98);
	glVertex2i(72, 98);
	glVertex2i(92, 58);
	glVertex2i(100, 74);
	glVertex2i(92, 74);
	glVertex2i(88, 66);
	glVertex2i(92, 74);
	glVertex2i(80, 98);
	glVertex2i(72, 98);
	glEnd();
	//2nd
	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
	glVertex2i(62, 130);
	glVertex2i(67, 140);
	glVertex2i(132, 140);
	glVertex2i(120, 115);
	glVertex2i(145, 115);
	glVertex2i(116, 58);
	glVertex2i(112, 65);
	glVertex2i(132, 105);
	glVertex2i(116, 105);
	glVertex2i(102, 82);
	glVertex2i(98, 90);
	glVertex2i(103, 98);
	glVertex2i(94, 98);
	glVertex2i(98, 90);
	glEnd();
	//3rd
	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
	glVertex2i(112, 65);
	glVertex2i(107, 74);
	glVertex2i(120, 98);
	glVertex2i(116, 105);
	glVertex2i(120, 98);
	glVertex2i(129, 98);
	glEnd();
	//4th
	glBegin(GL_LINE_STRIP);
	glLineWidth(2.0);
	glVertex2i(132, 140);
	glVertex2i(137, 130);
	glVertex2i(128, 115);
	glVertex2i(145, 115);
	glVertex2i(150, 105);
	glVertex2i(116, 40);
	glVertex2i(105, 65);
	glVertex2i(90, 40);
	glVertex2i(99, 55);
	glVertex2i(106, 40);
	glVertex2i(116, 40);
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 300);
	glutCreateWindow("Complex Shape 2 [CSE0660]");

	init();
	glutDisplayFunc(anotherShape);
	glutMainLoop();
	return 0;
}