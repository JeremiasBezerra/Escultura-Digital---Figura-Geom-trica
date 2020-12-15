//Bibliotecas extras
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

//Chamanda dos demais arquivos.
#include <cutbox.h>
#include <cutellipsoid.h>
#include <cutsphere.h>
#include <cutvoxel.h>
#include <figurageometrica.h>
#include <putbox.h>
#include <putellipsoid.h>
#include <putsphere.h>
#include <putvoxel.h>
#include <sculptor.h>
#include <vector>
using namespace std;

int main(){

    vector <FiguraGeometrica*> v;

    int dx = 0, dy = 0, dz = 0;
    char select =0;

    cout << "Digite o valor desejado desejada:" << endl << endl;
    cout << "1 - Exemplo 01" << endl;
    cout << "2 - Exemplo 02" << endl;
	cout << "2 - Exemplo 03" << endl;
    cout << "4 - Exemplo 04" << endl  << endl;

    cin >> select;

    if(select == '1'){

         Sculptor desenho(200,200,200);

	   v.push_back(new Cutbox(30,30,30,30,30,30));
       v.push_back(new Cutvoxel(15,20,25));
       v.push_back(new Putsphere(20,25,30,35,0.19,0,0,1.000));
       v.push_back(new Cutsphere(10,15,5,1));
       v.push_back(new Putellipsoid(30,40,15,45,15,40,0.888, 0.89, 0.23, 1.000));
       v.push_back(new Cutellipsoid(18,10,12,20,10,42));

         for(int i=0;i<v.size();i++){
             v[i]->draw(desenho);
         }
         desenho.writeOFF("Exemplo_01.OFF");
    }

     else if(select == '2'){

       Sculptor desenho(200,200,200);

       v.push_back(new Cutbox(19,41,45,19,31,33));
       v.push_back(new Cutvoxel(15,45,31));
       v.push_back(new Putsphere(54,33,55,22,0.88,0,0,1.000));
       v.push_back(new Cutsphere(30,23,19,20));
       v.push_back(new Putellipsoid(25,30,20,51,20,40,0.666, 0.89, 0.23, 1.000));
       v.push_back(new Cutellipsoid(20,12,23,10,36,42));

       for(int i=0;i<v.size();i++){
           v[i]->draw(desenho);
       }

      desenho.writeOFF("Exemplo_02.OFF");
    }
	
    else if(select == '3'){

       Sculptor desenho(200,200,200);

       v.push_back(new Cutbox(17,14,54,23,22,21));
       v.push_back(new Cutvoxel(45,15,13));
       v.push_back(new Putsphere(30,56,46,25,0.99,0,0,1.000));
       v.push_back(new Cutsphere(30,23,19,20));
       v.push_back(new Putellipsoid(50,60,30,15,40,20,0.555, 0.2222, 0.555, 1.000));
       v.push_back(new Cutellipsoid(40,24,35,5,18,21));

       for(int i=0;i<v.size();i++){
           v[i]->draw(desenho);
       }

      desenho.writeOFF("Exemplo_03.OFF");
    }
	
	    else if(select == '4'){

       Sculptor desenho(200,200,200);

       v.push_back(new Cutbox(33,22,44,30,20,10));
       v.push_back(new Cutvoxel(54,10,30));
       v.push_back(new Putsphere(20,30,40,50,0.33,0,0,1.000));
       v.push_back(new Cutsphere(10,20,15,15));
       v.push_back(new Putellipsoid(50,45,35,20,50,45,0.77, 0.444, 0.65, 1.000));
       v.push_back(new Cutellipsoid(20,25,20,15,20,25));

       for(int i=0;i<v.size();i++){
           v[i]->draw(desenho);
       }

      desenho.writeOFF("Exemplo_04.OFF");
    }

   else {

        cout << "Digite uma opcao valida!" << endl;
    }

  return 0;
}
