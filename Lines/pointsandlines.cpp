#include <glfw3.h>
#include <glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0); // Set display-window color to white.
    glMatrixMode(GL_PROJECTION); // Set projection parameters.
    gluOrtho2D(0.0, 200.0, 0.0, 200.0);
}
void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear display window.
    glColor3f(1.0, 0.0, 0.0); // Set line segment color to green.
    
    glLineWidth(2.5);
    glColor3f(1.0, 0.0, 0.0);
    //draw two points
    glBegin(GL_POINTS);
    for (int i = 0; i < 10; i++)
    {
        glVertex2i(10 + 5 * i, 110);
    }
    glEnd();

    //draw a line
    glBegin(GL_LINES);
    glVertex2i(10, 10);
    glVertex2i(100, 100);
    glEnd();
    glFlush(); // Process all OpenGL routines as quickly as possible.
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode.
    glutInitWindowPosition(50, 100); // Set top-left display-window position.
    glutInitWindowSize(400, 300); // Set display-window width and height.
    glutCreateWindow("An Example OpenGL Program"); // Create display window.
    init(); // Execute initialization procedure.
    glutDisplayFunc(lineSegment); // Send graphics to display window.
    glutMainLoop(); // Display everything and wait.
    return 0;
}    