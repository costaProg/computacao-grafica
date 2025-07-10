#include <GL/glut.h>

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0); // Fundo preto
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300.0, 0.0, 200.0);
}

// Desenho do triangulo
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(3.0);

    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(150, 190);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2i(50, 20);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2i(250, 20);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Triangulo - OpenGL");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
