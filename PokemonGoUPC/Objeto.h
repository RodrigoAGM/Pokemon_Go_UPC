#pragma once
using namespace System::Drawing;

class CObjeto
{
protected:

	int x;
	int y;
	int dx;
	int dy;
	int alto;
	int ancho;

public:
	CObjeto();
	~CObjeto();

	int Get_x();
	int Get_y();
	int Get_dx();
	int Get_dy();
	int Get_alto();
	int Get_ancho();

	void Set_x(int value);
	void Set_y(int value);
	void Set_dx(int value);
	void Set_dy(int value);
	void Set_alto(int value);
	void Set_ancho(int value);

	virtual void Dibujar_Pokebola(BufferedGraphics ^buffer, Bitmap ^Pokeball) abstract;
	virtual void Mover_Pokebola(BufferedGraphics ^buffer, Bitmap ^Pokeball) abstract;
};

