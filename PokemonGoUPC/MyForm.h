#pragma once
#include "FormPokeparada.h"
#include "FormBatalla.h"
#include "CapturaPK.h"
#include "FormMochila.h"
#include "Juego.h"
#include "Adicional1.h"
#include <fstream>
#include <sstream>

namespace PokemonGoUPC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		CJuego *oJuego = new CJuego(327, 340);

		Bitmap  ^imgJugador = gcnew Bitmap("SpriterJugador.png");
		Bitmap ^ImgBicicleta = gcnew Bitmap("Sprite Bicicleta.png");
		Bitmap ^Mapa = gcnew Bitmap("Mapa.jpg");
		Bitmap ^LogoUPC = gcnew Bitmap("LogoUPC.png");
		Bitmap ^Creditos = gcnew Bitmap("Creditos.png");
		Random ^rand = gcnew Random(DateTime::Now.Ticks);


		//////////////////////MENU/////////////////////////////////////
		Bitmap ^ImgMenu = gcnew Bitmap("Menu Inicio.JPG");
		Bitmap ^ImgBtnJugar = gcnew Bitmap("Boton Jugar.png");
		Bitmap ^ImgBtnInstrucciones = gcnew Bitmap("Boton Instrucciones.png");
		Bitmap ^ImgBtnSalir = gcnew Bitmap("Boton Salir.png");
		Bitmap ^ImgIluminado = gcnew Bitmap("Iluminado.png");


		//////////////////////INTRODUCCION/////////////////////////////
		Bitmap ^ImgIntroduccion = gcnew Bitmap("Introduccion.png");
		Bitmap ^ImgEleccion = gcnew Bitmap("FondoEleccion.png");
		Bitmap ^ImgPokeball = gcnew Bitmap("Pokeball.png");
		Bitmap ^ImgEligePokemon = gcnew Bitmap("EligePokemon.png");
		Bitmap ^ImgFondoCaptura = gcnew Bitmap("FondoCaptura.png");
		Bitmap ^ImgEligeEquipo = gcnew Bitmap("EleccionEquipo.png");
		Bitmap ^ImgIluminadoValor = gcnew Bitmap("IluminadoValor.png");
		Bitmap ^ImgIluminadoSabiduria = gcnew Bitmap("IluminadoSabiduria.png");
		Bitmap ^ImgIluminadoInstinto = gcnew Bitmap("IluminadoInstinto.png");


		//////////////////////LUGARES/////////////////////////////
		Bitmap ^ImgPParada = gcnew Bitmap("PokeParada.png");
		Bitmap ^ImgPParadaA = gcnew Bitmap("PokeParadaA.png");
		Bitmap ^ImgGimnasio = gcnew Bitmap("Gimnasio.png");
		Bitmap ^ImgGimnasioA = gcnew Bitmap("GimnasioA.png");

		//////////////////////POKEMON/////////////////////////////
		Bitmap ^Img_Pikachu = gcnew Bitmap("Pikachu_GO.png");
		Bitmap ^Img_Bulbasur = gcnew Bitmap("Bulbasaur_GO.png");
		Bitmap ^Img_Charmander = gcnew Bitmap("Charmander_GO.png");
		Bitmap ^Img_Evee = gcnew Bitmap("Evee_GO.png");
		Bitmap ^Img_Abra = gcnew Bitmap("Abra_GO.png");
		Bitmap ^Img_Machop = gcnew Bitmap("Machop_GO.png");
		Bitmap ^Img_Magikarp = gcnew Bitmap("Magikarp_GO.png");
		Bitmap ^Img_Meowth = gcnew Bitmap("Meowth_GO.png");
		Bitmap ^Img_Onix = gcnew Bitmap("Onix_GO.png");
		Bitmap ^Img_Snorlax = gcnew Bitmap("Snorlax_GO.png");
		Bitmap ^Img_Squirtle = gcnew Bitmap("Squirtle_GO.png");
		Bitmap ^Img_Ekans = gcnew Bitmap("Ekans_GO.png");
		Bitmap ^Img_Pidgey = gcnew Bitmap("Pidgey_GO.png");


	private: System::Windows::Forms::PictureBox^  SquirtleAni;
	private: System::Windows::Forms::PictureBox^  CharmanderAni;
	private: System::Windows::Forms::PictureBox^  BulbasurAni;
	private: System::Windows::Forms::PictureBox^  PikachuAni;
	private: System::Windows::Forms::Label^  Intro10;
	private: System::Windows::Forms::Label^  Intro9;
	private: System::Windows::Forms::Label^  Intro8;
	private: System::Windows::Forms::Label^  Intro7;
	private: System::Windows::Forms::Label^  Intro6;
	private: System::Windows::Forms::Label^  Intro5;
	private: System::Windows::Forms::Label^  Intro4;
	private: System::Windows::Forms::Label^  intro3;
	private: System::Windows::Forms::Label^  Intro2;
	private: System::Windows::Forms::Label^  lblMensaje;
	private: System::Windows::Forms::Label^  txtSquirtle;
	private: System::Windows::Forms::Label^  txtCharmander;
	private: System::Windows::Forms::Label^  txtPikachu;
	private: System::Windows::Forms::Label^  txtBulbasaur;
	private: System::Windows::Forms::Label^  lblValor;
	private: System::Windows::Forms::Label^  lblInstinto;
	private: System::Windows::Forms::Label^  lblSabiduria;







	private: System::Windows::Forms::Label^  Intro1;

	public:
		MyForm(void)
		{
			imgJugador->MakeTransparent(imgJugador->GetPixel(1, 1));
			ImgBicicleta->MakeTransparent(ImgBicicleta->GetPixel(1, 1));
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  T_Juego;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->T_Juego = (gcnew System::Windows::Forms::Timer(this->components));
			this->SquirtleAni = (gcnew System::Windows::Forms::PictureBox());
			this->CharmanderAni = (gcnew System::Windows::Forms::PictureBox());
			this->BulbasurAni = (gcnew System::Windows::Forms::PictureBox());
			this->PikachuAni = (gcnew System::Windows::Forms::PictureBox());
			this->Intro10 = (gcnew System::Windows::Forms::Label());
			this->Intro9 = (gcnew System::Windows::Forms::Label());
			this->Intro8 = (gcnew System::Windows::Forms::Label());
			this->Intro7 = (gcnew System::Windows::Forms::Label());
			this->Intro6 = (gcnew System::Windows::Forms::Label());
			this->Intro5 = (gcnew System::Windows::Forms::Label());
			this->Intro4 = (gcnew System::Windows::Forms::Label());
			this->intro3 = (gcnew System::Windows::Forms::Label());
			this->Intro2 = (gcnew System::Windows::Forms::Label());
			this->Intro1 = (gcnew System::Windows::Forms::Label());
			this->lblMensaje = (gcnew System::Windows::Forms::Label());
			this->txtSquirtle = (gcnew System::Windows::Forms::Label());
			this->txtCharmander = (gcnew System::Windows::Forms::Label());
			this->txtPikachu = (gcnew System::Windows::Forms::Label());
			this->txtBulbasaur = (gcnew System::Windows::Forms::Label());
			this->lblValor = (gcnew System::Windows::Forms::Label());
			this->lblInstinto = (gcnew System::Windows::Forms::Label());
			this->lblSabiduria = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SquirtleAni))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CharmanderAni))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BulbasurAni))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PikachuAni))->BeginInit();
			this->SuspendLayout();
			// 
			// T_Juego
			// 
			this->T_Juego->Enabled = true;
			this->T_Juego->Tick += gcnew System::EventHandler(this, &MyForm::T_Juego_Tick);
			// 
			// SquirtleAni
			// 
			this->SquirtleAni->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->SquirtleAni->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SquirtleAni.Image")));
			this->SquirtleAni->Location = System::Drawing::Point(250, 438);
			this->SquirtleAni->Name = L"SquirtleAni";
			this->SquirtleAni->Size = System::Drawing::Size(122, 129);
			this->SquirtleAni->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->SquirtleAni->TabIndex = 28;
			this->SquirtleAni->TabStop = false;
			this->SquirtleAni->Visible = false;
			// 
			// CharmanderAni
			// 
			this->CharmanderAni->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->CharmanderAni->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CharmanderAni.Image")));
			this->CharmanderAni->Location = System::Drawing::Point(258, 438);
			this->CharmanderAni->Name = L"CharmanderAni";
			this->CharmanderAni->Size = System::Drawing::Size(107, 129);
			this->CharmanderAni->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->CharmanderAni->TabIndex = 27;
			this->CharmanderAni->TabStop = false;
			this->CharmanderAni->Visible = false;
			// 
			// BulbasurAni
			// 
			this->BulbasurAni->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BulbasurAni->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BulbasurAni.Image")));
			this->BulbasurAni->Location = System::Drawing::Point(253, 442);
			this->BulbasurAni->Name = L"BulbasurAni";
			this->BulbasurAni->Size = System::Drawing::Size(117, 124);
			this->BulbasurAni->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BulbasurAni->TabIndex = 26;
			this->BulbasurAni->TabStop = false;
			this->BulbasurAni->Visible = false;
			// 
			// PikachuAni
			// 
			this->PikachuAni->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->PikachuAni->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PikachuAni->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PikachuAni.Image")));
			this->PikachuAni->Location = System::Drawing::Point(250, 438);
			this->PikachuAni->Name = L"PikachuAni";
			this->PikachuAni->Size = System::Drawing::Size(122, 129);
			this->PikachuAni->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PikachuAni->TabIndex = 25;
			this->PikachuAni->TabStop = false;
			this->PikachuAni->Visible = false;
			// 
			// Intro10
			// 
			this->Intro10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro10->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro10->Location = System::Drawing::Point(32, 462);
			this->Intro10->Name = L"Intro10";
			this->Intro10->Size = System::Drawing::Size(547, 79);
			this->Intro10->TabIndex = 24;
			this->Intro10->Text = L"Ahora, necesito que elijas a quien te acompañará en esta aventura...";
			this->Intro10->Visible = false;
			// 
			// Intro9
			// 
			this->Intro9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro9->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro9->Location = System::Drawing::Point(32, 463);
			this->Intro9->Name = L"Intro9";
			this->Intro9->Size = System::Drawing::Size(547, 79);
			this->Intro9->TabIndex = 23;
			this->Intro9->Text = L"¡ Tendrás que encontrar y coleccionar Pokémon de todas partes !";
			this->Intro9->Visible = false;
			// 
			// Intro8
			// 
			this->Intro8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro8->Location = System::Drawing::Point(32, 462);
			this->Intro8->Name = L"Intro8";
			this->Intro8->Size = System::Drawing::Size(547, 79);
			this->Intro8->TabIndex = 22;
			this->Intro8->Text = L"¡ Genial ! ¡ Estaba buscando a alguien como tu para que me ayudara !";
			this->Intro8->Visible = false;
			// 
			// Intro7
			// 
			this->Intro7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro7->Location = System::Drawing::Point(31, 462);
			this->Intro7->Name = L"Intro7";
			this->Intro7->Size = System::Drawing::Size(547, 79);
			this->Intro7->TabIndex = 21;
			this->Intro7->Text = L"¿Puedes ayudarme con mi investigación\?";
			this->Intro7->Visible = false;
			// 
			// Intro6
			// 
			this->Intro6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro6->Location = System::Drawing::Point(31, 465);
			this->Intro6->Name = L"Intro6";
			this->Intro6->Size = System::Drawing::Size(547, 79);
			this->Intro6->TabIndex = 20;
			this->Intro6->Text = L"He pasado toda mi vida estudiándolos y analizando su distribución geográfica.\r\n\r\n"
				L"";
			this->Intro6->Visible = false;
			// 
			// Intro5
			// 
			this->Intro5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro5->Location = System::Drawing::Point(30, 462);
			this->Intro5->Name = L"Intro5";
			this->Intro5->Size = System::Drawing::Size(547, 79);
			this->Intro5->TabIndex = 19;
			this->Intro5->Text = L"Algunos viven en la montaña, otros en el bosque y otros cerca del agua...\r\n";
			this->Intro5->Visible = false;
			// 
			// Intro4
			// 
			this->Intro4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro4->Location = System::Drawing::Point(30, 462);
			this->Intro4->Name = L"Intro4";
			this->Intro4->Size = System::Drawing::Size(547, 79);
			this->Intro4->TabIndex = 18;
			this->Intro4->Text = L"Algunos corren por el campo, otros vuelan por el cielo...";
			this->Intro4->Visible = false;
			// 
			// intro3
			// 
			this->intro3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->intro3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->intro3->Location = System::Drawing::Point(31, 462);
			this->intro3->Name = L"intro3";
			this->intro3->Size = System::Drawing::Size(547, 79);
			this->intro3->TabIndex = 17;
			this->intro3->Text = L"Se pueden encontrar pokémon en todas partes.";
			this->intro3->Visible = false;
			// 
			// Intro2
			// 
			this->Intro2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro2->Location = System::Drawing::Point(29, 462);
			this->Intro2->Name = L"Intro2";
			this->Intro2->Size = System::Drawing::Size(547, 79);
			this->Intro2->TabIndex = 16;
			this->Intro2->Text = L"¿Sabías que este mundo está habitado por criaturas llamadas pokémon\?";
			this->Intro2->Visible = false;
			// 
			// Intro1
			// 
			this->Intro1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Intro1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Intro1->Location = System::Drawing::Point(30, 462);
			this->Intro1->Name = L"Intro1";
			this->Intro1->Size = System::Drawing::Size(547, 79);
			this->Intro1->TabIndex = 15;
			this->Intro1->Text = L"¡ Hola !\r\nSoy el Profesor Oak.";
			this->Intro1->Visible = false;
			// 
			// lblMensaje
			// 
			this->lblMensaje->AutoSize = true;
			this->lblMensaje->BackColor = System::Drawing::Color::Transparent;
			this->lblMensaje->Font = (gcnew System::Drawing::Font(L"AR CENA", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMensaje->Location = System::Drawing::Point(284, 9);
			this->lblMensaje->Name = L"lblMensaje";
			this->lblMensaje->Size = System::Drawing::Size(0, 25);
			this->lblMensaje->TabIndex = 29;
			this->lblMensaje->Visible = false;
			// 
			// txtSquirtle
			// 
			this->txtSquirtle->AutoSize = true;
			this->txtSquirtle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtSquirtle->Font = (gcnew System::Drawing::Font(L"AR CENA", 24, System::Drawing::FontStyle::Bold));
			this->txtSquirtle->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->txtSquirtle->Location = System::Drawing::Point(132, 584);
			this->txtSquirtle->Name = L"txtSquirtle";
			this->txtSquirtle->Size = System::Drawing::Size(376, 37);
			this->txtSquirtle->TabIndex = 30;
			this->txtSquirtle->Text = L"Nombre: Squirtle   Tipo: Agua";
			this->txtSquirtle->Visible = false;
			// 
			// txtCharmander
			// 
			this->txtCharmander->AutoSize = true;
			this->txtCharmander->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtCharmander->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtCharmander->Font = (gcnew System::Drawing::Font(L"AR CENA", 24, System::Drawing::FontStyle::Bold));
			this->txtCharmander->ForeColor = System::Drawing::Color::DarkOrange;
			this->txtCharmander->Location = System::Drawing::Point(103, 584);
			this->txtCharmander->Name = L"txtCharmander";
			this->txtCharmander->Size = System::Drawing::Size(435, 37);
			this->txtCharmander->TabIndex = 31;
			this->txtCharmander->Text = L"Nombre: Charmander   Tipo: Fuego";
			this->txtCharmander->Visible = false;
			// 
			// txtPikachu
			// 
			this->txtPikachu->AutoSize = true;
			this->txtPikachu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtPikachu->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtPikachu->Font = (gcnew System::Drawing::Font(L"AR CENA", 24, System::Drawing::FontStyle::Bold));
			this->txtPikachu->ForeColor = System::Drawing::Color::Gold;
			this->txtPikachu->Location = System::Drawing::Point(109, 584);
			this->txtPikachu->Name = L"txtPikachu";
			this->txtPikachu->Size = System::Drawing::Size(422, 37);
			this->txtPikachu->TabIndex = 32;
			this->txtPikachu->Text = L"Nombre: Pikachu   Tipo: Eléctrico";
			this->txtPikachu->Visible = false;
			// 
			// txtBulbasaur
			// 
			this->txtBulbasaur->AutoSize = true;
			this->txtBulbasaur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtBulbasaur->Cursor = System::Windows::Forms::Cursors::Default;
			this->txtBulbasaur->Font = (gcnew System::Drawing::Font(L"AR CENA", 24, System::Drawing::FontStyle::Bold));
			this->txtBulbasaur->ForeColor = System::Drawing::Color::Chartreuse;
			this->txtBulbasaur->Location = System::Drawing::Point(113, 584);
			this->txtBulbasaur->Name = L"txtBulbasaur";
			this->txtBulbasaur->Size = System::Drawing::Size(412, 37);
			this->txtBulbasaur->TabIndex = 33;
			this->txtBulbasaur->Text = L"Nombre: Bulbasaur   Tipo: Planta";
			this->txtBulbasaur->Visible = false;
			// 
			// lblValor
			// 
			this->lblValor->BackColor = System::Drawing::Color::White;
			this->lblValor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblValor->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblValor->Location = System::Drawing::Point(3, 564);
			this->lblValor->Name = L"lblValor";
			this->lblValor->Size = System::Drawing::Size(632, 72);
			this->lblValor->TabIndex = 34;
			this->lblValor->Text = resources->GetString(L"lblValor.Text");
			this->lblValor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblValor->Visible = false;
			// 
			// lblInstinto
			// 
			this->lblInstinto->BackColor = System::Drawing::Color::White;
			this->lblInstinto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblInstinto->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblInstinto->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblInstinto->Location = System::Drawing::Point(3, 564);
			this->lblInstinto->Name = L"lblInstinto";
			this->lblInstinto->Size = System::Drawing::Size(632, 72);
			this->lblInstinto->TabIndex = 35;
			this->lblInstinto->Text = L"Los Pokémon son unas criaturas de excelente intuición. Apuesto a que su secreto t"
				L"iene que ver con cómo eclosionan sus huevos. Únete a mi equipo. ¡Nunca pierdes c"
				L"uando confías en tu instinto!";
			this->lblInstinto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblInstinto->Visible = false;
			// 
			// lblSabiduria
			// 
			this->lblSabiduria->BackColor = System::Drawing::Color::White;
			this->lblSabiduria->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblSabiduria->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblSabiduria->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblSabiduria->Location = System::Drawing::Point(3, 564);
			this->lblSabiduria->Name = L"lblSabiduria";
			this->lblSabiduria->Size = System::Drawing::Size(632, 72);
			this->lblSabiduria->TabIndex = 36;
			this->lblSabiduria->Text = L"La sabiduría de los Pokémon es excepcionalmente profunda. Estoy investigando por "
				L"qué evolucionan. ¿Mi equipo\? Con nuestro sosegado análisis de cada situación, ¡n"
				L"o podemos perder!";
			this->lblSabiduria->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblSabiduria->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 642);
			this->Controls->Add(this->lblSabiduria);
			this->Controls->Add(this->lblInstinto);
			this->Controls->Add(this->lblValor);
			this->Controls->Add(this->txtBulbasaur);
			this->Controls->Add(this->txtPikachu);
			this->Controls->Add(this->txtCharmander);
			this->Controls->Add(this->txtSquirtle);
			this->Controls->Add(this->lblMensaje);
			this->Controls->Add(this->SquirtleAni);
			this->Controls->Add(this->CharmanderAni);
			this->Controls->Add(this->BulbasurAni);
			this->Controls->Add(this->PikachuAni);
			this->Controls->Add(this->Intro10);
			this->Controls->Add(this->Intro9);
			this->Controls->Add(this->Intro8);
			this->Controls->Add(this->Intro7);
			this->Controls->Add(this->Intro6);
			this->Controls->Add(this->Intro5);
			this->Controls->Add(this->Intro4);
			this->Controls->Add(this->intro3);
			this->Controls->Add(this->Intro2);
			this->Controls->Add(this->Intro1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(655, 681);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pokemon Go";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::PresionarTecla);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SquirtleAni))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CharmanderAni))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BulbasurAni))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PikachuAni))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		bool ActivarMusica = true;
		bool PlayMusica = false;
		bool IluminaBoton = false;
		bool pikachu = false;
		bool mostrar = false;
		bool PosibleEleccion = false;
		int AnchoBoton = 170;
		int AltoBoton = 50;
		int YBoton = 550;
		int xBoton1 = 40;
		int xBoton2 = 230;
		int xBoton3 = 420;
		int BotonElegido = 0;
		int etapa = 0;
		int texto = 0;
		int ultimo_pokemon = 0;
		int elegirpoke;
		int NPokeball = 0;
		int xPoke = 0;
		int yPoke = 0;

		SoundPlayer ^player = gcnew SoundPlayer();

		void MusicaInicio()
		{
			player->Stop();
			player->SoundLocation = "Menu.wav";
			player->LoadAsync();
			player->PlayLooping();
			PlayMusica = true;
		}
		void MusicaMapa()
		{
			player->Stop();
			player->SoundLocation = "Mapa.wav";
			player->LoadAsync();
			player->PlayLooping();
			PlayMusica = true;
		}
		void MusicaIntro()
		{
			player->Stop();
			player->SoundLocation = "Intro.wav";
			player->LoadAsync();
			player->PlayLooping();
			PlayMusica = true;
		}

		void Guardar(){
			
			ofstream fn("Pokemon.txt");

			fn << oJuego->GetMochila()->Get_Equipo() << ",";
			fn << oJuego->GetMochila()->Get_Monedas() << ",";
			fn << oJuego->GetMochila()->Get_Experiencia() << ",";
			fn << oJuego->GetMochila()->Get_Medallas() << ",";
			fn << oJuego->GetMochila()->Get_PolvoEstelar() << ",";
			fn << oJuego->GetMochila()->Get_NObjetos() << ",";
			fn << oJuego->GetMochila()->Get_NPociones() << ",";
			fn << oJuego->GetMochila()->Get_NPokeball() << ",";
			fn << oJuego->GetMochila()->Get_NRevivir() << ",";
			fn << oJuego->GetMochila()->Get_NSuperPociones() << ",";
			fn << oJuego->GetMochila()->Get_NPokemon() << endl;

			fn << oJuego->GetMochila()->Get_CarAbra() << ",";
			fn << oJuego->GetMochila()->Get_CarBulbasur() << ",";
			fn << oJuego->GetMochila()->Get_CarCharmander() << ",";
			fn << oJuego->GetMochila()->Get_CarEkans() << ",";
			fn << oJuego->GetMochila()->Get_CarEvee() << ",";
			fn << oJuego->GetMochila()->Get_CarMachop() << ",";
			fn << oJuego->GetMochila()->Get_CarMagikarp() << ",";
			fn << oJuego->GetMochila()->Get_CarMeowth() << ",";
			fn << oJuego->GetMochila()->Get_CarOnix() << ",";
			fn << oJuego->GetMochila()->Get_CarPidgey() << ",";
			fn << oJuego->GetMochila()->Get_CarPikachu() << ",";
			fn << oJuego->GetMochila()->Get_CarSnorlax() << ",";
			fn << oJuego->GetMochila()->Get_CarSquirtle() << endl;

			for (int i = 0; i < oJuego->GetMochila()->Get_NPokemon(); ++i){

				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_Nombre() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_tipo() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_TipoP() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_vida() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_poder() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_Evoluciona() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_MaxPoder() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_CapturaActivada() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_Carevolucion() << ",";
				fn << oJuego->GetMochila()->Get_ArrPokemons()[i]->Get_VidaMax() << endl;
			}

		}

		void Cargar(){

			ifstream arch("Pokemon.txt");
			int num;
			int cont=1;
			int cont2 = 0;
			string equipo, nombre,tipo,tipop, aux, linea;
			int vida, poder, evoluciona, maxpoder, captura, carevo, vidamax;

			while (getline(arch, linea))
			{
				stringstream ss(linea);
				if (cont == 1){
					getline(ss, equipo, ',');
					oJuego->GetMochila()->Set_Equipo(equipo);
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_Monedas(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_Experiencia(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_Medallas(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_PolvoEstelar(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_NObjetos(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_NPociones(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_NPokeball(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_NRevivir(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_NSuperPociones(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_NPokemon(num); aux = "";
					cont++;
				}
				else if (cont == 2){

					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarAbra(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarBulbasur(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarCharmander(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarEkans(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarEvee(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarMachop(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarMagikarp(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarMeowth(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarOnix(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarPidgey(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarPikachu(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarSnorlax(num); aux = "";
					getline(ss, aux, ','); num = atoi(aux.c_str());
					oJuego->GetMochila()->Set_CarSquirtle(num); aux = "";
					cont++;
				}
				else{
					
					getline(ss, nombre, ',');
					getline(ss, tipo, ',');
					getline(ss, tipop, ',');
					getline(ss, aux, ','); vida = atoi(aux.c_str()); aux = "";
					getline(ss, aux, ','); poder = atoi(aux.c_str()); aux = "";
					getline(ss, aux, ','); evoluciona = atoi(aux.c_str()); aux = "";
					getline(ss, aux, ','); maxpoder = atoi(aux.c_str()); aux = "";
					getline(ss, aux, ','); captura = atoi(aux.c_str()); aux = "";
					getline(ss, aux, ','); carevo = atoi(aux.c_str()); aux = ""; 
					getline(ss, aux, ','); vidamax = atoi(aux.c_str()); aux = "";
					
					if (tipo == "PIK" || tipo == "RAI")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CPikachu(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "BUL" || tipo == "IVY" || tipo == "VEN")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CBulbasur(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "SQU" || tipo == "BLA" || tipo == "WAR")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CSquirtle(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "CHA" || tipo == "CHAR" || tipo == "CHARI")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CCharmander(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "ABR" || tipo == "KAD" || tipo == "ALA")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CAbra(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "SNO")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CSnorlax(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "EKA" || tipo == "ARB")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CEkans(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "ONI")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new COnix(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "EVE" || tipo == "VAP" || tipo == "JOL" || tipo == "FLA")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CEvee(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "MAG" || tipo == "GYA")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CMagikarp(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "MEO" || tipo == "PER")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CMeowth(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "MAC" || tipo == "MACH" || tipo == "MACHA")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CMachop(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
					else if (tipo == "PID" || tipo == "PIDG" || tipo == "PIDGE")
					{
						oJuego->GetMochila()->Agregar_Pokemons(new CPidgey(0, 0));
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Nombre(nombre);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_tipo(tipo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_TipoP(tipop);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_vida(vida);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_poder(poder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Evoluciona(evoluciona);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_PoderMax(maxpoder);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_CapturaActivada(captura);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_Carevolucion(carevo);
						oJuego->GetMochila()->Get_ArrPokemons()[cont2]->Set_VidaMax(vidamax);
						cont2++;
					}
				}
			}

		}

		void MenuInicio(BufferedGraphics ^buffer)
		{
			Rectangle ReducirMenu = Rectangle(0, 0, 639 / 1, 642 / 1);
			Rectangle Boton1 = Rectangle(xBoton1, YBoton, 400, 400);
			Rectangle Boton2 = Rectangle(xBoton2, YBoton, 400, 400);
			Rectangle Boton3 = Rectangle(xBoton3, YBoton, 400, 400);

			buffer->Graphics->DrawImage(ImgMenu, ReducirMenu, this->ClientRectangle, GraphicsUnit::Pixel);
			if (IluminaBoton)
			{
				switch (BotonElegido)
				{
				case 1:
					buffer->Graphics->DrawImage(ImgIluminado, xBoton1 - 12, YBoton - 12, AnchoBoton + 30, AltoBoton + 30);
					break;
				case 2:
					buffer->Graphics->DrawImage(ImgIluminado, xBoton2 - 12, YBoton - 12, AnchoBoton + 30, AltoBoton + 30);
					break;
				case 3:
					buffer->Graphics->DrawImage(ImgIluminado, xBoton3 - 11, YBoton - 12, AnchoBoton + 30, AltoBoton + 30);
					break;
				}
			}
			buffer->Graphics->DrawImage(ImgBtnJugar, Boton1, this->ClientRectangle, GraphicsUnit::Pixel);/*
			buffer->Graphics->DrawImage(ImgBtnInstrucciones, Boton2, this->ClientRectangle, GraphicsUnit::Pixel);*/
			buffer->Graphics->DrawImage(ImgBtnSalir, Boton3, this->ClientRectangle, GraphicsUnit::Pixel);
		}

		void Introduccion(BufferedGraphics ^buffer)
		{
			Rectangle AumentaIntro = Rectangle(0, 74, 639 + 160, 513 + 300);

			buffer->Graphics->DrawImage(ImgIntroduccion, AumentaIntro, this->ClientRectangle, GraphicsUnit::Pixel);

			switch (texto)
			{
			case 0:
				Intro1->Visible = true; break;
			case 1:
				Intro1->Visible = false; Intro2->Visible = true; break;
			case 2:
				Intro2->Visible = false; intro3->Visible = true; break;
			case 3:
				intro3->Visible = false; Intro4->Visible = true; break;
			case 4:
				Intro4->Visible = false; Intro5->Visible = true; break;
			case 5:
				Intro5->Visible = false; Intro6->Visible = true; break;
			case 6:
				Intro6->Visible = false; Intro7->Visible = true; break;
			case 7:
				Intro7->Visible = false; Intro8->Visible = true; break;
			case 8:
				Intro8->Visible = false; Intro9->Visible = true; break;
			case 9:
				Intro9->Visible = false; Intro10->Visible = true; break;
			case 10:
				Intro10->Visible = false; etapa = 2;
			}
		}

		void Eleccion_Inicial(BufferedGraphics ^buffer)
		{
			buffer->Graphics->DrawImage(ImgEleccion, 0, 0, 639, 642);
			buffer->Graphics->DrawImage(ImgPokeball, 20, 400, 200, 200);
			buffer->Graphics->DrawImage(ImgPokeball, 220, 230, 200, 200);
			buffer->Graphics->DrawImage(ImgPokeball, 420, 400, 200, 200);
			buffer->Graphics->DrawImage(ImgEligePokemon, 115, 15, 410, 228);

			if (pikachu)
			{
				buffer->Graphics->DrawImage(ImgPokeball, 20, 20, 50, 50);
			}
			if (mostrar)
			{
				switch (NPokeball)
				{
				case 1:
					BulbasurAni->Visible = false; CharmanderAni->Visible = false; PikachuAni->Visible = false;
					txtCharmander->Visible = false; txtPikachu->Visible = false; txtBulbasaur->Visible = false;
					SquirtleAni->Visible = true;
					txtSquirtle->Visible = true;
					break;
				case 2:
					SquirtleAni->Visible = false; CharmanderAni->Visible = false; PikachuAni->Visible = false;
					txtSquirtle->Visible = false; txtCharmander->Visible = false; txtPikachu->Visible = false;
					BulbasurAni->Visible = true; 
					txtBulbasaur->Visible = true;
					break;
				case 3:
					SquirtleAni->Visible = false; BulbasurAni->Visible = false;	PikachuAni->Visible = false;
					txtSquirtle->Visible = false; txtBulbasaur->Visible = false; txtPikachu->Visible = false;
					CharmanderAni->Visible = true;
					txtCharmander->Visible = true;
					break;
				case 4:
					SquirtleAni->Visible = false; BulbasurAni->Visible = false;	CharmanderAni->Visible = false;
					txtCharmander->Visible = false;	txtSquirtle->Visible = false; txtBulbasaur->Visible = false;
					PikachuAni->Visible = true; 
					txtPikachu->Visible = true;
					break;
				}
			}
			else
			{
				SquirtleAni->Visible = false; BulbasurAni->Visible = false;	CharmanderAni->Visible = false;
				PikachuAni->Visible = false; txtSquirtle->Visible = false; txtCharmander->Visible = false;
				txtBulbasaur->Visible = false; txtPikachu->Visible = false;
			}
		}

		void EleccionEquipo(BufferedGraphics ^buffer)
		{
			buffer->Graphics->DrawImage(ImgEligeEquipo, 0, 0, 639, 642);
			PosibleEleccion = true;
			if (IluminaBoton)
			{
				switch (BotonElegido)
				{
				case 1:
					buffer->Graphics->DrawImage(ImgIluminadoValor, 0, 0, 639, 642);
					break;
				case 2:
					buffer->Graphics->DrawImage(ImgIluminadoInstinto, 0, 0, 639, 642);
					break;
				case 3:
					buffer->Graphics->DrawImage(ImgIluminadoSabiduria, 0, 0, 639, 642);
					break;
				}
			}
		}

#pragma endregion

private: System::Void T_Juego_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	Graphics ^g = this->CreateGraphics();
	BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
	BufferedGraphics ^buffer = espacio->Allocate(g, this->ClientRectangle);
	buffer->Graphics->Clear(Color::Black);

	if (etapa == 0)
	{
		if (PlayMusica == false && ActivarMusica == true){ MusicaInicio(); }
		MenuInicio(buffer);
	}

	if (etapa == 1)
	{
		if (PlayMusica == false && ActivarMusica == true){ MusicaIntro(); }
		Introduccion(buffer);
	}

	if (etapa == 2)
	{
		Eleccion_Inicial(buffer);
	}

	if (etapa == 3)
	{
		EleccionEquipo(buffer);
	}

	if (etapa == 4)
	{
		if (PlayMusica == false && ActivarMusica == true){ MusicaMapa(); }

		oJuego->GetJugador()->MoverMapa(655,681);
		oJuego->Mover_Jugador(imgJugador, ImgBicicleta, buffer, Mapa, ImgPParada, ImgPParadaA, ImgGimnasio, ImgGimnasioA, Img_Pikachu,
			Img_Bulbasur, Img_Squirtle, Img_Charmander, Img_Abra, Img_Snorlax, Img_Ekans, Img_Onix, Img_Evee, Img_Magikarp, Img_Meowth, Img_Machop, Img_Pidgey, rand);
		buffer->Graphics->DrawImage(LogoUPC, 1, 564,75,75);
		buffer->Graphics->DrawImage(Creditos, 78, 564, 240, 75);
	}

	buffer->Render(g);
	delete buffer, espacio, g;
}

private: System::Void PresionarTecla(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
{
	if (etapa == 0){
		switch (e->KeyCode)
		{
		case Keys::C:
			Cargar();
			etapa = 4;
			break;
		}
	}
	if (etapa == 1)
	{
		switch (e->KeyCode)
		{
		case Keys::Enter:
			texto++;
		}
	}

	if (etapa == 2)
	{
		if (e->KeyCode == Keys::P)
		{
			pikachu = true;
		}
	}

	if (etapa == 4)
	{
		switch (e->KeyCode)
		{
		case Keys::B:

			if (oJuego->GetJugador()->GetBicicleta()){ oJuego->GetJugador()->SetBicicleta(false); }
			else{ oJuego->GetJugador()->SetBicicleta(true); }
			break;

		case Keys::Up:

			oJuego->GetJugador()->direccion = Direcciones::Arriba;
			break;

		case Keys::Down:

			oJuego->GetJugador()->direccion = Direcciones::Abajo;
			break;

		case Keys::Left:

			oJuego->GetJugador()->direccion = Direcciones::Izquierda;
			break;

		case Keys::Right:

			oJuego->GetJugador()->direccion = Direcciones::Derecha;
			break;																			

		case Keys::G:
			Guardar();
			break;

		case Keys::Escape:
			Guardar();
			this->Close();
			break;

		case Keys::Tab:
		{
			Adicional1 ^Runner = gcnew Adicional1(oJuego);
			T_Juego->Stop(); Runner->ShowDialog(); T_Juego->Start();
			Runner->SetoJuego(oJuego);
			delete Runner;
			break;
		}

		case Keys::M:
			FormMochila ^mimochila = gcnew FormMochila(oJuego);
			T_Juego->Stop(); mimochila->ShowDialog(); T_Juego->Start();
			mimochila->SetoJuego(oJuego);
			delete mimochila;
			break;
		}
	}
}

private: System::Void MyForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (etapa == 0)
	{
		if (e->X > xBoton1 && e->X < xBoton1 + AnchoBoton && e->Y > YBoton && e->Y < YBoton + AltoBoton)
		{
			etapa = 1;
			PlayMusica = false;
			this->Cursor = Cursors::Default;
			IluminaBoton = false;
		}
		else if (e->X > xBoton3 && e->X < xBoton3 + AnchoBoton && e->Y > YBoton && e->Y < YBoton + AltoBoton)
		{
			this->Close();
		}
	}

	if (etapa == 2)
	{
		if (e->X > 20 && e->X < 220 && e->Y > 400 && e->Y < 600)
		{
			CPokemon *oNuevo = new CBulbasur(0, 0);

			oJuego->GetMochila()->Agregar_Pokemons(oNuevo);
			oJuego->GetMochila()->Set_NPokemon(1);

			SquirtleAni->Visible = false; BulbasurAni->Visible = false;	CharmanderAni->Visible = false;
			PikachuAni->Visible = false; txtSquirtle->Visible = false; txtCharmander->Visible = false;
			txtBulbasaur->Visible = false; txtPikachu->Visible = false;
			this->Cursor = Cursors::Default;

			etapa = 3;
			PlayMusica = false;
		}
		if (e->X > 220 && e->X < 420 && e->Y > 230 && e->Y < 430)
		{
			CPokemon *oNuevo = new CSquirtle(0, 0);

			oJuego->GetMochila()->Agregar_Pokemons(oNuevo);
			oJuego->GetMochila()->Set_NPokemon(1);

			SquirtleAni->Visible = false; BulbasurAni->Visible = false;	CharmanderAni->Visible = false;
			PikachuAni->Visible = false; txtSquirtle->Visible = false; txtCharmander->Visible = false;
			txtBulbasaur->Visible = false; txtPikachu->Visible = false;
			this->Cursor = Cursors::Default;

			etapa = 3;
			PlayMusica = false;
		}
		if (e->X > 420 && e->X < 620 && e->Y > 400 && e->Y < 600)
		{
			CPokemon *oNuevo = new CCharmander(0, 0);

			oJuego->GetMochila()->Agregar_Pokemons(oNuevo);
			oJuego->GetMochila()->Set_NPokemon(1);

			SquirtleAni->Visible = false; BulbasurAni->Visible = false;	CharmanderAni->Visible = false;
			PikachuAni->Visible = false; txtSquirtle->Visible = false; txtCharmander->Visible = false;
			txtBulbasaur->Visible = false; txtPikachu->Visible = false;
			this->Cursor = Cursors::Default;

			etapa = 3;
			PlayMusica = false;
		}
		if (pikachu)
		{
			if (e->X > 20 && e->X < 70 && e->Y > 20 && e->Y < 70)
			{
				CPokemon *oNuevo = new CPikachu(0, 0);

				oJuego->GetMochila()->Agregar_Pokemons(oNuevo);
				oJuego->GetMochila()->Set_NPokemon(1);

				SquirtleAni->Visible = false; BulbasurAni->Visible = false;	CharmanderAni->Visible = false;
				PikachuAni->Visible = false; txtSquirtle->Visible = false; txtCharmander->Visible = false;
				txtBulbasaur->Visible = false; txtPikachu->Visible = false;
				this->Cursor = Cursors::Default;
				etapa = 3;
				PlayMusica = false;
			}
		}
	}

	if (etapa == 3 && PosibleEleccion)
	{
		if (e->X > 10 && e->X < 200 && e->Y > 240 && e->Y < 480)
		{
			oJuego->GetMochila()->Set_Equipo("Valor");
			lblValor->Visible = false; lblSabiduria->Visible = false; lblInstinto->Visible = false;
			this->Cursor = Cursors::Default;
			etapa = 4;
		}
		else if (e->X > 230 && e->X < 410 && e->Y > 240 && e->Y < 480)
		{
			oJuego->GetMochila()->Set_Equipo("Instinto");
			lblValor->Visible = false; lblSabiduria->Visible = false; lblInstinto->Visible = false;
			this->Cursor = Cursors::Default;
			etapa = 4;
		}
		else if (e->X > 440 && e->X < 620 && e->Y > 240 && e->Y < 480)
		{
			oJuego->GetMochila()->Set_Equipo("Sabiduría");
			lblValor->Visible = false; lblSabiduria->Visible = false; lblInstinto->Visible = false;
			this->Cursor = Cursors::Default;
			etapa = 4;
		}
	}
	if (etapa == 4)
	{
		if (oJuego->GetArrLugares()->GetPActiva())
		{
			xPoke = oJuego->GetArrLugares()->Get_Pokeparada_Activa()->Get_x();
			yPoke = oJuego->GetArrLugares()->Get_Pokeparada_Activa()->Get_y();

			if (e->X > xPoke + 16 && e->X < xPoke + 74 && e->Y > yPoke && e->Y < yPoke + 95)
			{
				FormPokeparada ^Pokeparada = gcnew FormPokeparada(oJuego);
				Pokeparada->ShowDialog();
				Pokeparada->SetoJuego(oJuego);
				delete Pokeparada;
				oJuego->GetArrLugares()->SetPActiva(false);
			}
		}

		if (oJuego->GetArrLugares()->GetGActivo())
		{
			xPoke = oJuego->GetArrLugares()->Get_Gimnasio_Activo()->Get_x();
			yPoke = oJuego->GetArrLugares()->Get_Gimnasio_Activo()->Get_y();

			if (oJuego->GetMochila()->Get_NPokemon() > 0)
			{
				if (e->X > xPoke + 10 && e->X < xPoke + 80 && e->Y > yPoke && e->Y < yPoke + 95)
				{
					player->Stop();
					FormBatalla ^BatallaP = gcnew FormBatalla(oJuego);
					this->Hide();
					T_Juego->Stop(); BatallaP->ShowDialog(); T_Juego->Start();
					BatallaP->SetoJuego(oJuego);
					delete BatallaP;
					this->Show();
					player->PlayLooping();
					oJuego->GetArrLugares()->SetGActivo(false);
				}
			}
			else
			{
				MessageBox::Show("No tienes ningun pokemon para luchar.", "Mensaje", MessageBoxButtons::OK);
			}
		}

		if (oJuego->GetArrLugares()->GetPOActivo())
		{
			xPoke = oJuego->GetArrLugares()->Get_Pokemon_Activo()->Get_x();
			yPoke = oJuego->GetArrLugares()->Get_Pokemon_Activo()->Get_y();

			if (e->X > xPoke && e->X < xPoke + 50 && e->Y > yPoke && e->Y < yPoke + 51)
			{
				if (oJuego->GetMochila()->Get_NPokemon() < oJuego->GetMochila()->Get_NMaxPokemon())
				{
					if (oJuego->GetMochila()->Get_NPokeball() > 0)
					{
						player->Stop();
						CapturaPK ^Captura = gcnew CapturaPK(oJuego, oJuego->GetArrLugares()->Get_Pokemon_Activo());
						T_Juego->Stop(); Captura->ShowDialog(); T_Juego->Start();
						Captura->SetoJuego(oJuego);
						delete Captura;
						player->PlayLooping();
						oJuego->GetJugador()->SetEliminarPokemon(true);
					}
					else
					{
						MessageBox::Show("POKEBALLS INSUFICIENTES.", "ALERTA", MessageBoxButtons::OK);
					}
				}
				else
				{
					MessageBox::Show("Mochila llena.", "ALERTA", MessageBoxButtons::OK);
				}
			}
		}
	}
}

private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	if (etapa == 0)
	{
		if (e->X > xBoton1 && e->X < xBoton1 + AnchoBoton && e->Y > YBoton && e->Y < YBoton + AltoBoton)
		{
			this->Cursor = Cursors::Hand;
			IluminaBoton = true;
			BotonElegido = 1;
		}
		/*else if (e->X > xBoton2 && e->X < xBoton2 + AnchoBoton && e->Y > YBoton && e->Y < YBoton + AltoBoton)
		{
			this->Cursor = Cursors::Hand;
			IluminaBoton = true;
			BotonElegido = 2;
		}*/
		else if (e->X > xBoton3 && e->X < xBoton3 + AnchoBoton && e->Y > YBoton && e->Y < YBoton + AltoBoton)
		{
			this->Cursor = Cursors::Hand;
			IluminaBoton = true;
			BotonElegido = 3;
		}
		else
		{
			this->Cursor = Cursors::Default;
			IluminaBoton = false;
		}
	}

	if (etapa == 2)
	{
		if (e->X > 50 && e->X < 190 && e->Y > 430 && e->Y < 570)
		{
			this->Cursor = Cursors::Hand;
			mostrar = true; NPokeball = 2;
		}
		else if (e->X > 250 && e->X < 390 && e->Y > 260 && e->Y < 400)
		{
			this->Cursor = Cursors::Hand;
			mostrar = true; NPokeball = 1;
		}
		else if (e->X > 450 && e->X < 590 && e->Y > 430 && e->Y < 570)
		{
			this->Cursor = Cursors::Hand;
			mostrar = true; NPokeball = 3;
		}
		else if (pikachu)
		{
			if (e->X > 20 && e->X < 70 && e->Y > 20 && e->Y < 70)
			{
				this->Cursor = Cursors::Hand;
				mostrar = true; NPokeball = 4;
			}
			else
			{
				this->Cursor = Cursors::Default;
				mostrar = false; NPokeball = 0;
			}
		}
		else
		{
			this->Cursor = Cursors::Default;
			mostrar = false; NPokeball = 0;
		}
	}

	if (etapa == 3 && PosibleEleccion)
	{
		if (e->X > 10 && e->X < 200 && e->Y > 240 && e->Y < 480)
		{
			this->Cursor = Cursors::Hand;
			lblSabiduria->Visible = false; lblInstinto->Visible = false;
			lblValor->Visible = true; IluminaBoton = true;
			BotonElegido = 1;
		}
		else if (e->X > 230 && e->X < 410 && e->Y > 240 && e->Y < 480)
		{
			this->Cursor = Cursors::Hand;
			lblValor->Visible = false; lblSabiduria->Visible = false;
			lblInstinto->Visible = true; IluminaBoton = true;
			BotonElegido = 2;
		}
		else if (e->X > 440 && e->X < 620 && e->Y > 240 && e->Y < 480)
		{
			this->Cursor = Cursors::Hand;
			lblValor->Visible = false; lblInstinto->Visible = false;
			lblSabiduria->Visible = true; IluminaBoton = true;
			BotonElegido = 3;
		}
		else
		{
			this->Cursor = Cursors::Default;
			lblValor->Visible = false; lblSabiduria->Visible = false; lblInstinto->Visible = false;
			IluminaBoton = false;
		}
	}

}
private: System::Void MyForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
{
	oJuego->GetJugador()->direccion = Direcciones::Ninguna;
}
};
}