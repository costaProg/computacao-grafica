#include <GL/glut.h>

// Inicialização
void init(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0); // Fundo branco
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300.0, 0.0, 200.0); // Área de desenho
}

// Desenho da bandeira da França
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    // Faixa azul (esquerda)
    glColor3f(0.0, 0.0, 1.0); // Azul
    glBegin(GL_QUADS);
        glVertex2i(0, 0);
        glVertex2i(100, 0);
        glVertex2i(100, 200);
        glVertex2i(0, 200);
    glEnd();

    // Faixa vermelha (direita)
    glColor3f(1.0, 0.0, 0.0); // vermelha
    glBegin(GL_QUADS);
        glVertex2i(200, 0);
        glVertex2i(300, 0);
        glVertex2i(300, 200);
        glVertex2i(200, 200);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400); // Tamanho da janela
    glutInitWindowPosition(300, 200);
    glutCreateWindow("Bandeira da Franca - OpenGL");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
