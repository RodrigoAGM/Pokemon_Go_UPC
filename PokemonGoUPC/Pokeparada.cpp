#include "Pokeparada.h"


CPokeparada::CPokeparada(int x,int y)
{
	this->x = x;
	this->y = y;
	activar = false;
}


CPokeparada::~CPokeparada()
{
}

int CPokeparada::Get_x(){ return x; }
int CPokeparada::Get_y(){ return y; }
bool CPokeparada::Get_activar(){ return activar; }
void CPokeparada::Set_activar(bool value){ activar = value; }

CElemento *CPokeparada::Generar_Elemento(int x,int y)
{
	CElemento *oNuevo;
	Random ^r = gcnew Random(DateTime::Now.Ticks);
	int tipo = r->Next(1, 7);

	if (tipo == 2){ oNuevo = new CPocion(x, y); }
	else if (tipo == 3){ oNuevo = new CSuperPocion(x, y); }
	else if (tipo == 4){ oNuevo = new CRevivir(x, y); }
	else { oNuevo = new CPokeball(x, y); }

	return oNuevo;
}

void CPokeparada::Dibujar_Elemento(BufferedGraphics ^buffer, CElemento *oNuevo, Bitmap ^Img_Pokeball, Bitmap ^Img_Pocion,
	Bitmap ^Img_Superpocion, Bitmap ^Img_Revivir)
{
	if (oNuevo->Get_tipo() == "PB")
	{
		oNuevo->Dibujar_Elemento(buffer, Img_Pokeball);
	}
	else if (oNuevo->Get_tipo() == "P")
	{
		oNuevo->Dibujar_Elemento(buffer, Img_Pocion);
	}
	else if (oNuevo->Get_tipo() == "SP")
	{
		oNuevo->Dibujar_Elemento(buffer, Img_Superpocion);
	}
	else if (oNuevo->Get_tipo() == "R")
	{
		oNuevo->Dibujar_Elemento(buffer, Img_Revivir);
	}
}