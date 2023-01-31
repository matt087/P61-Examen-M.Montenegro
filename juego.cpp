#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setCorx(centro.x());
    m_circulo->setY(centro.y());
    m_circulo->setCory(centro.y());

    mImagen = new QImage(this->size(), QImage::Format_ARGB32_Premultiplied);
    mImagen->fill(Qt::white);
    mPainter = new QPainter(mImagen);
    mPainter->setRenderHint(QPainter::Antialiasing);
    actual.setRgb(165,29,45);
    dibujar();
}


Juego::~Juego()
{
    delete ui;
}


void Juego::on_btnArriba_released()
{
    mImagen->fill(Qt::white);

    if(m_circulo->cory()-3>=54)
    {
        m_circulo->setCory(m_circulo->cory()-3);
        dibujar();
    }
}


void Juego::on_btnAbajo_released()
{
    mImagen->fill(Qt::white);
    if(m_circulo->cory()+3<=408)
    {
        m_circulo->setCory(m_circulo->cory()+3);
        dibujar();
    }

}


void Juego::on_btnIzqueirda_released()
{
    mImagen->fill(Qt::white);
    if(m_circulo->corx()-3>=33)
    {
        m_circulo->setCorx(m_circulo->corx()-3);
        dibujar();
    }
}


void Juego::on_btnDerecha_released()
{
    mImagen->fill(Qt::white);
    if(m_circulo->corx()+3<=486)
    {
        m_circulo->setCorx(m_circulo->corx()+3);
        dibujar();
    }
}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        actual = config->color();
        dibujar();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(0,0, *mImagen);
}

void Juego::dibujar()
{
    QPen pincel1;
    pincel1.setWidth(5);
    pincel1.setColor(actual);
    pincel1.setJoinStyle(Qt::MiterJoin);

    QPoint centro(m_circulo->corx(), m_circulo->cory());
    mPainter->setPen(pincel1);
    mPainter->drawEllipse(centro, m_circulo->ancho(), m_circulo->alto());
    update();

}

