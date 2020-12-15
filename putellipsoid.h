#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include <figurageometrica.h>

/** @brief Classe herdeira de FiguraGeometrica,
* responsável por remover elipsoides em nossa escultura.
*/

class Putellipsoid : public FiguraGeometrica
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz;
    float r,g,b,a;
public:
    Putellipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_,float r_,float g_,float b_,float a_);
   
    ~Putellipsoid();
    
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
