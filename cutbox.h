#ifndef CUTBOX_H
#define CUTBOX_H
#include <figurageometrica.h>

/** @brief Classe herdeira de FiguraGeometrica,
* responsável por remover caixas (cúbicas ou não) em nossa escultura.
*/

class Cutbox : public FiguraGeometrica
{
 protected:
    int x0,x1,y0,y1,z0,z1;
    float r,g,b,a;

 public:
    Cutbox(int x_0, int x_1, int y_0, int y_1, int z_0, int z_1);
   
    ~Cutbox();
    
    void draw(Sculptor &t);

};
#endif // CUTBOX_H




