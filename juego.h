#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QDebug>
#include <QPainter>
#include <QImage>
#include "configuracion.h"
#include "circulo.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow , public Circulo
{
    Q_OBJECT

public:
    Juego(QWidget *parent = nullptr);
    ~Juego();

private slots:
    void on_btnArriba_released();

    void on_btnAbajo_released();

    void on_btnIzqueirda_released();

    void on_btnDerecha_released();

    void on_actionConfigraci0n_triggered();

    void on_actionSalir_triggered();

    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::Juego *ui;
    Circulo *m_circulo;
    QImage *mImagen;
    QPainter *mPainter;

    void dibujar();
};
#endif // JUEGO_H
