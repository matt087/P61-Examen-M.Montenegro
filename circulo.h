#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);


    int alto() const;
    void setAlto(int newAlto);

    int radio() const;
    void setRadio(int newRadio);

    int ancho() const;
    void setAncho(int newAncho);

    int corx() const;
    void setCorx(int newCorx);

    int cory() const;
    void setCory(int newCory);

private:
    int m_alto;
    int m_radio;
    int m_ancho;
    int m_corx;
    int m_cory;



};

#endif // CIRCULO_H
