#ifndef REDBOXWIDGET_H
#define REDBOXWIDGET_H

#include <QtGui>
#include <QWidget>
#include <QGLWidget>

#include <RedBox.h>

class RedBoxWidget : public QGLWidget {
	Q_OBJECT
public:
	static int screenWidth;
	static int screenHeight;
	RedBoxWidget(QWidget *parent = 0);
	~RedBoxWidget();

	// Taille de la fenêtre
	QSize sizeHint() const;
	QSize minimumSizeHint() const;

protected:

	void initializeGL();
	void paintGL();
	void resizeGL(int width, int height);

private slots:
	void animate();
private:
	QTimer * timer;
};

#endif // REDBOXWIDGET_H
