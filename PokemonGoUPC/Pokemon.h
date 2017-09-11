#pragma once
#include "stdafx.h"

class CPokemon
{
protected:

	int x;
	int y;
	int VidaMax;
	int vida;
	int MaxPoder;
	int poder;
	int Carevolucion;
	string tipo;
	string Nombre;
	string TipoP;
	bool Evoluciona;
	bool CapturaActivada;

public:
	CPokemon(int x, int y);
	~CPokemon();

	int Get_x();
	int Get_y();
	int Get_vida();
	int Get_poder();
	int Get_VidaMax();
	int Get_MaxPoder();
	int Get_Carevolucion();
	bool Get_CapturaActivada();
	bool Get_Evoluciona();
	string Get_tipo();
	string Get_Nombre();
	string Get_TipoP();

	void Set_x(int value);
	void Set_y(int value);
	void Set_vida(int value);
	void Set_poder(int value);
	void Set_PoderMax(int value);
	void Set_VidaMax(int value);
	void Set_Carevolucion(int value);
	void Set_Evoluciona(bool value);
	void Set_CapturaActivada(bool value);
	void Set_tipo(string value);
	void Set_Nombre(string value);
	void Set_TipoP(string value);

	void Dibuja_Pokemon(BufferedGraphics ^buffer, Bitmap ^Img_Pokemon);
};

