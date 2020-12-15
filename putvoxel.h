#ifndef Putvoxel_H
#define Putvoxel_H
#include <figurageometrica.h>

/** @brief Classe herdeira de FiguraGeometrica,
* responsável por adicionar pontos em nossa escultura.
*/

class Putvoxel : public FiguraGeometrica
{
    protected:
    int x,y,z;
    float r, g, b, a;
    public:
    Putvoxel(int x_,int y_,int z_, float r_,float g_,float b_,float a_);
    
    ~Putvoxel();
    
    void draw(Sculptor &t);
};

#endif // Putvoxel_H
