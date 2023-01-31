#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{
    this->m_alto=20;
    this->m_ancho=20;
    this->m_radio=10;
}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{
    this->m_alto=20;
    this->m_ancho=20;
    this->m_radio=10;
}

int Circulo::alto() const
{
    return m_alto;
}

void Circulo::setAlto(int newAlto)
{
    m_alto = newAlto;
}

int Circulo::radio() const
{
    return m_radio;
}

void Circulo::setRadio(int newRadio)
{
    m_radio = newRadio;
}

int Circulo::ancho() const
{
    return m_ancho;
}

void Circulo::setAncho(int newAncho)
{
    m_ancho = newAncho;
}

int Circulo::corx() const
{
    return m_corx;
}

void Circulo::setCorx(int newCorx)
{
     m_corx=newCorx;
}

int Circulo::cory() const
{
    return m_cory;
}

void Circulo::setCory(int newCory)
{
     m_cory=newCory;
}

