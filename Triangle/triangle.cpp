#include <glfw3.h>
#include <glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); // Set display-window color to white.
    glMatrixMode(GL_PROJECTION); // Set projection parameters.
    gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
}
void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear display window.
    glColor3f(1.0, 0.0, 0.0); // Set line segment color to green.
    glBegin(GL_TRIANGLES);
    glVertex3f(-1.0f, -0.25f, 0.0f);//triangle one first vertex
    glVertex3f(-0.5f, -0.25f, 0.0f);//triangle one second vertex
    glVertex3f(-0.75f, 0.25f, 0.0f);//triangle one third vertex
    glEnd();
    //drawing a new triangle
    glColor3f(0.0, 1.0, 0.0); // Set line segment color to green.
    glBegin(GL_TRIANGLES);
    glVertex3f(0.5f, -0.25f, 0.0f);//triangle two first vertex
    glVertex3f(1.0f, -0.25f, 0.0f);//triangle two second vertex
    glVertex3f(0.75f, 0.25f, 0.0f);//triangle two third vertex
    glEnd();

    glFlush(); // Process all OpenGL routines as quickly as possible.
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode.
    glutInitWindowPosition(50, 100); // Set top-left display-window position.
    glutInitWindowSize(400, 300); // Set display-window width and height.
    glutCreateWindow("Point Program"); // Create display window.
    init(); // Execute initialization procedure.
    glutDisplayFunc(lineSegment); // Send graphics to display window.
    glutMainLoop(); // Display everything and wait.
    return 0;
}