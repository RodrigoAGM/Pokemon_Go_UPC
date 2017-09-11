#pragma once
#include "stdafx.h"
#include "Elemento.h"
#include "Elementos_Tipo.h"

class CPokeparada
{
private:

	int x;
	int y;
	bool activar;

public:
	CPokeparada(int x, int y);
	~CPokeparada();

	int Get_x();
	int Get_y();
	bool Get_activar();
	void Set_activar(bool value);
	CElemento *Generar_Elemento(int x, int y);
	void Dibujar_Elemento(BufferedGraphics ^buffer, CElemento *oNuevo, Bitmap ^Img_Pokeball, Bitmap ^Img_Pocion,
		Bitmap ^Img_Superpocion, Bitmap ^Img_Revivir);
};

