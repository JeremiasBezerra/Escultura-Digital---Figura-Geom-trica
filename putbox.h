#ifndef PUTBOX_H
#define PUTBOX_H
#include <figurageometrica.h>


/** @brief Classe herdeira de FiguraGeometrica,
* responsável por adicionar caixas (cúbicas ou não) em nossa escultura.
*/

class Putbox : public FiguraGeometrica
{
protected :
    int x0,x1,y0,y1,z0,z1;
    float r,g,b,a;
public:
    Putbox(int x_0, int x_1, int y_0, int y_1, int z_0, int z_1, float r_, float g_, float b_, float a_);
    
    ~Putbox();
    
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
