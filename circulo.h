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

private:
    int m_alto;
    int m_radio;
    int m_ancho;



};

#endif // CIRCULO_H
