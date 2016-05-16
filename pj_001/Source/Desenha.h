
#ifndef DESENHA_H_
#define DESENHA_H_

#include <GL/glut.h>

class Desenha {
public:
	Desenha(GLint, GLint, GLfloat);
	virtual ~Desenha();
	void desenhaCurva(GLfloat**, GLint);
	void desenhaPontos(GLfloat**, GLint);
	void desenhaPontosAzul(GLfloat**, GLint);
	void desenhaCirculo(GLfloat x, GLfloat y);
	void desenhaCirculoPontoVermelho(GLfloat x, GLfloat y);
	void alteraEspessuraLinha(GLfloat espessura);
	static const GLfloat espessuraPadrao;
private:
	GLint altura, largura;
	GLUnurbsObj *nc;
	GLfloat escala;
	GLfloat espessuraLinha;

	void escalar(GLfloat** pontos,GLint nPontos);
};

static const GLfloat espessuraPadrao=3.0;

#endif /* DESENHA_H_ */
