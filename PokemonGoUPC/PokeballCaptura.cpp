#include "PokeballCaptura.h"


CPokeballCaptura::CPokeballCaptura(int ancho_ventana, int alto_ventana)
{
	alto = 100;
	ancho = 100;
	x = (ancho_ventana / 2) - (ancho / 2);
	y = alto_ventana - alto;
	dx = 2;
	dy = -10;
	Mover = false;
}


CPokeballCaptura::~CPokeballCaptura()
{
}

void CPokeballCaptura::Dibujar_Pokebola(BufferedGraphics ^buffer, Bitmap ^Pokeball)
{
	buffer->Graphics->DrawImage(Pokeball, x, y, ancho, alto);
}
void CPokeballCaptura::Mover_Pokebola(BufferedGraphics ^buffer, Bitmap ^Pokeball)
{
	if (Mover)
	{
		Dibujar_Pokebola(buffer, Pokeball);
		y += dy;

		if (ancho > 0)
		{
			ancho -= 4;
		}
		if (alto > 0)
		{
			alto -= 4;
		}
	}
}
bool CPokeballCaptura::Get_Mover(){ return Mover; }
void CPokeballCaptura::Set_Mover(bool value){ Mover = value; }
bool CPokeballCaptura::Click_Pokeball(int posx, int posy)
{
	return ((posx > x && posx < x + ancho) && (posy > y && posy < y + alto));
}