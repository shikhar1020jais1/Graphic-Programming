#include <glfw3.h>
#include <glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); // Set display-window color to white.
    glMatrixMode(GL_PROJECTION); // Set projection parameters.
    gluOrtho2D(0, 300, 0, 300);
}
void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear display window.
    glColor3f(1.0, 0.0, 0.0); // Set line segment color to Red.
    glRecti(200, 100, 50, 250);
    glFlush(); // Process all OpenGL routines asa quickly as possible.
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode.
    glutInitWindowPosition(50, 100); // Set top-left display-window position.
    glutInitWindowSize(400, 300); // Set display-window width and height.
    glutCreateWindow("Triangle Strip"); // Create display window.
    init(); // Execute initialization procedure.
    glutDisplayFunc(lineSegment); // Send graphics to display window.
    glutMainLoop(); // Display everything and wait.
    return 0;
}