#include "Pokemon.h"


CPokemon::CPokemon(int x,int y)
{
	Random rand;

	this->x = x;
	this->y = y;
	VidaMax = rand.Next(70, 101);
	vida = VidaMax;
	poder = rand.Next(10, 91);
	tipo = " ";
	Evoluciona = false;
	CapturaActivada = false;
}


CPokemon::~CPokemon()
{
}

int CPokemon::Get_x(){ return x; }
int CPokemon::Get_y(){ return y; }
int CPokemon::Get_vida(){ return vida; }
int CPokemon::Get_poder(){ return poder; }
int CPokemon::Get_VidaMax(){ return VidaMax; }
int CPokemon::Get_MaxPoder(){ return MaxPoder; }
int CPokemon::Get_Carevolucion(){ return Carevolucion; }
bool CPokemon::Get_Evoluciona(){ return Evoluciona; }
bool CPokemon::Get_CapturaActivada(){ return CapturaActivada; }
string CPokemon::Get_tipo(){ return tipo; }
string CPokemon::Get_Nombre(){ return Nombre; }
string CPokemon::Get_TipoP(){ return TipoP; }

void CPokemon::Set_x(int value){ x = value; }
void CPokemon::Set_y(int value){ y = value; }
void CPokemon::Set_vida(int value){ vida = value; }
void CPokemon::Set_poder(int value){ poder = value; }
void CPokemon::Set_PoderMax(int value){ MaxPoder = value; }
void CPokemon::Set_VidaMax(int value){ VidaMax = value; }
void CPokemon::Set_Carevolucion(int value){ Carevolucion = value; }
void CPokemon::Set_Evoluciona(bool value){ Evoluciona = value; }
void CPokemon::Set_CapturaActivada(bool value){ CapturaActivada = value; }
void CPokemon::Set_tipo(string value){ tipo = value; }
void CPokemon::Set_Nombre(string value){ Nombre = value; }
void CPokemon::Set_TipoP(string value){ TipoP = value; }

void CPokemon::Dibuja_Pokemon(BufferedGraphics ^buffer, Bitmap ^Img_Pokemon)
{
	Rectangle espacioausar = Rectangle(x, y, 55, 54);

	buffer->Graphics->DrawImage(Img_Pokemon, espacioausar);
}