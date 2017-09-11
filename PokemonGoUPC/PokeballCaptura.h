#pragma once
#include "stdafx.h"
#include "Objeto.h"

class CPokeballCaptura :public CObjeto
{
private:

	bool Mover;

public:
	CPokeballCaptura(int ancho_ventana, int alto_ventana);
	~CPokeballCaptura();

	void Dibujar_Pokebola(BufferedGraphics ^buffer, Bitmap ^Pokeball);
	void Mover_Pokebola(BufferedGraphics ^buffer, Bitmap ^Pokeball);
	bool Get_Mover();
	void Set_Mover(bool value);
	bool Click_Pokeball(int posx, int posy);
};