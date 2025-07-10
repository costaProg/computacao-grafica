#include <GL/glut.h>

// Inicialização
void init(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0); // Fundo preto
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300.0, 0.0, 200.0); // Área de desenho
}

// Desenho do triangulo
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(3.0);

    // Cabeça do boneco
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
        glVertex2i(125, 150);
        glVertex2i(175, 150);
        glVertex2i(175, 180);
        glVertex2i(125, 180);
    glEnd();

    // Corpo do boneco
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
        glVertex2i(150, 150);
        glVertex2i(150, 50);
    glEnd();

    // Braço esquerdo
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
        glVertex2i(150, 140);
        glVertex2i(110, 100);
    glEnd();

    // Perna esquerda
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
        glVertex2i(150, 50);
        glVertex2i(100, 25);
    glEnd();

    // Braço direito
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
        glVertex2i(150, 140);
        glVertex2i(190, 100);
    glEnd();

    // perna direita
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
        glVertex2i(150, 50);
        glVertex2i(200, 25);
    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 300); // Tamanho da janela
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Boneco palito - OpenGL");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
