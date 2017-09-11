#include "Objeto.h"


CObjeto::CObjeto()
{
}


CObjeto::~CObjeto()
{
}

int CObjeto::Get_x(){ return x; }
int CObjeto::Get_y(){ return y; }
int CObjeto::Get_dx(){ return dx; }
int CObjeto::Get_dy(){ return dy; }
int CObjeto::Get_alto(){ return alto; }
int CObjeto::Get_ancho(){ return ancho; }

void CObjeto::Set_x(int value){ x = value; }
void CObjeto::Set_y(int value){ y = value; }
void CObjeto::Set_dx(int value){ dx = value; }
void CObjeto::Set_dy(int value){ dy = value; }
void CObjeto::Set_alto(int value){ alto = value; }
void CObjeto::Set_ancho(int value){ ancho = value; }