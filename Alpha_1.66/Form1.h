#pragma once

#include "GradeGenerator.h"
#include "MyGrid.h"
#include "Evaluation.h"

namespace ProjCLR {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGrid_students;
	
	private: System::Windows::Forms::Button^ btn_localizeName;
	private: System::Windows::Forms::TextBox^ txt_localizeName;
	private: System::Windows::Forms::Button^ btn_parish_male;
	private: System::Windows::Forms::TextBox^ txt_parish;
	private: System::Windows::Forms::TextBox^ txtBox_results;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ linhasDeFormulárioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adicionarLinhasToolStripMenuItem;

	private: System::Windows::Forms::MenuStrip^ menuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^ estatísticasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alunoMaisVelhoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ alunosDeSexoMasculinoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alunosDeSexoFemininoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;

	private: System::Windows::Forms::GroupBox^ boxGroup_parish;
	private: System::Windows::Forms::Button^ btn_parish_female;

	private: System::Windows::Forms::ToolStripMenuItem^ delegadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sortearToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ocultarToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ melhorAlunoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ piorAlunoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ negativeRows_menuStrip;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ headerName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ headerParish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ headerAge;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ headerSex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Delegado;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^ guardarDelegadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ abrirFicheiroDelegadoToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip4;
	private: System::Windows::Forms::ToolStripMenuItem^ sobreToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip5;
	private: System::Windows::Forms::ToolStripMenuItem^ reniciarGridToolStripMenuItem;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->dataGrid_students = (gcnew System::Windows::Forms::DataGridView());
			this->headerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headerParish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headerAge = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->headerSex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Delegado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_localizeName = (gcnew System::Windows::Forms::Button());
			this->txt_localizeName = (gcnew System::Windows::Forms::TextBox());
			this->btn_parish_male = (gcnew System::Windows::Forms::Button());
			this->txt_parish = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_results = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->delegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ocultarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortearToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->guardarDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abrirFicheiroDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->linhasDeFormulárioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adicionarLinhasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->negativeRows_menuStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->estatísticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alunoMaisVelhoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->alunosDeSexoMasculinoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alunosDeSexoFemininoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->melhorAlunoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->piorAlunoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->boxGroup_parish = (gcnew System::Windows::Forms::GroupBox());
			this->btn_parish_female = (gcnew System::Windows::Forms::Button());
			this->menuStrip4 = (gcnew System::Windows::Forms::MenuStrip());
			this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip5 = (gcnew System::Windows::Forms::MenuStrip());
			this->reniciarGridToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_students))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->menuStrip3->SuspendLayout();
			this->boxGroup_parish->SuspendLayout();
			this->menuStrip4->SuspendLayout();
			this->menuStrip5->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGrid_students
			// 
			this->dataGrid_students->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGrid_students->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGrid_students->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->headerName,
					this->headerParish, this->headerAge, this->headerSex, this->Delegado
			});
			this->dataGrid_students->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGrid_students->Location = System::Drawing::Point(9, 72);
			this->dataGrid_students->Name = L"dataGrid_students";
			this->dataGrid_students->RowHeadersWidth = 51;
			this->dataGrid_students->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGrid_students->Size = System::Drawing::Size(858, 443);
			this->dataGrid_students->TabIndex = 0;
			this->dataGrid_students->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::DataGrid_students_CellContentClick);
			// 
			// headerName
			// 
			this->headerName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->headerName->FillWeight = 201.0884F;
			this->headerName->HeaderText = L"Nome";
			this->headerName->MaxInputLength = 5;
			this->headerName->MinimumWidth = 6;
			this->headerName->Name = L"headerName";
			// 
			// headerParish
			// 
			this->headerParish->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->headerParish->FillWeight = 87.42976F;
			this->headerParish->HeaderText = L"Freguesia";
			this->headerParish->MinimumWidth = 6;
			this->headerParish->Name = L"headerParish";
			// 
			// headerAge
			// 
			this->headerAge->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->headerAge->FillWeight = 87.42976F;
			this->headerAge->HeaderText = L"Idade";
			this->headerAge->MinimumWidth = 6;
			this->headerAge->Name = L"headerAge";
			// 
			// headerSex
			// 
			this->headerSex->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->headerSex->FillWeight = 34.90648F;
			this->headerSex->HeaderText = L"Sexo";
			this->headerSex->MinimumWidth = 35;
			this->headerSex->Name = L"headerSex";
			// 
			// Delegado
			// 
			this->Delegado->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Delegado->FillWeight = 63;
			this->Delegado->HeaderText = L"Delegado";
			this->Delegado->Name = L"Delegado";
			// 
			// btn_localizeName
			// 
			this->btn_localizeName->BackColor = System::Drawing::SystemColors::Menu;
			this->btn_localizeName->Location = System::Drawing::Point(809, 14);
			this->btn_localizeName->Name = L"btn_localizeName";
			this->btn_localizeName->Size = System::Drawing::Size(159, 22);
			this->btn_localizeName->TabIndex = 2;
			this->btn_localizeName->Text = L"Localiza um nome";
			this->btn_localizeName->UseVisualStyleBackColor = false;
			this->btn_localizeName->Click += gcnew System::EventHandler(this, &Form1::Btn_localizeName_Click);
			// 
			// txt_localizeName
			// 
			this->txt_localizeName->Location = System::Drawing::Point(989, 14);
			this->txt_localizeName->Name = L"txt_localizeName";
			this->txt_localizeName->Size = System::Drawing::Size(100, 20);
			this->txt_localizeName->TabIndex = 3;
			// 
			// btn_parish_male
			// 
			this->btn_parish_male->Location = System::Drawing::Point(0, 64);
			this->btn_parish_male->Margin = System::Windows::Forms::Padding(2);
			this->btn_parish_male->Name = L"btn_parish_male";
			this->btn_parish_male->Size = System::Drawing::Size(96, 25);
			this->btn_parish_male->TabIndex = 5;
			this->btn_parish_male->Text = L"Masculino";
			this->btn_parish_male->UseVisualStyleBackColor = true;
			this->btn_parish_male->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// txt_parish
			// 
			this->txt_parish->Location = System::Drawing::Point(5, 27);
			this->txt_parish->Margin = System::Windows::Forms::Padding(2);
			this->txt_parish->Name = L"txt_parish";
			this->txt_parish->Size = System::Drawing::Size(186, 20);
			this->txt_parish->TabIndex = 6;
			// 
			// txtBox_results
			// 
			this->txtBox_results->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBox_results->Location = System::Drawing::Point(898, 239);
			this->txtBox_results->Margin = System::Windows::Forms::Padding(2);
			this->txtBox_results->Multiline = true;
			this->txtBox_results->Name = L"txtBox_results";
			this->txtBox_results->Size = System::Drawing::Size(218, 215);
			this->txtBox_results->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->delegadoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(9, 1);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(77, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::MenuStrip1_ItemClicked);
			// 
			// delegadoToolStripMenuItem
			// 
			this->delegadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ocultarToolStripMenuItem,
					this->sortearToolStripMenuItem1, this->toolStripSeparator4, this->guardarDelegadoToolStripMenuItem, this->abrirFicheiroDelegadoToolStripMenuItem
			});
			this->delegadoToolStripMenuItem->Name = L"delegadoToolStripMenuItem";
			this->delegadoToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->delegadoToolStripMenuItem->Text = L"Delegado";
			// 
			// ocultarToolStripMenuItem
			// 
			this->ocultarToolStripMenuItem->Name = L"ocultarToolStripMenuItem";
			this->ocultarToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->ocultarToolStripMenuItem->Text = L"Mostrar Coluna";
			this->ocultarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::OcultarToolStripMenuItem_Click);
			// 
			// sortearToolStripMenuItem1
			// 
			this->sortearToolStripMenuItem1->Name = L"sortearToolStripMenuItem1";
			this->sortearToolStripMenuItem1->Size = System::Drawing::Size(232, 22);
			this->sortearToolStripMenuItem1->Text = L"Sortear Delegado";
			this->sortearToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::SortearToolStripMenuItem1_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(229, 6);
			// 
			// guardarDelegadoToolStripMenuItem
			// 
			this->guardarDelegadoToolStripMenuItem->Name = L"guardarDelegadoToolStripMenuItem";
			this->guardarDelegadoToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->guardarDelegadoToolStripMenuItem->Text = L"Guardar Delegado em ficheiro";
			this->guardarDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GuardarDelegadoToolStripMenuItem_Click);
			// 
			// abrirFicheiroDelegadoToolStripMenuItem
			// 
			this->abrirFicheiroDelegadoToolStripMenuItem->Name = L"abrirFicheiroDelegadoToolStripMenuItem";
			this->abrirFicheiroDelegadoToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->abrirFicheiroDelegadoToolStripMenuItem->Text = L"Abrir ficheiro de Delegado";
			this->abrirFicheiroDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AbrirFicheiroDelegadoToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->linhasDeFormulárioToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(94, 2);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(137, 24);
			this->menuStrip2->TabIndex = 10;
			this->menuStrip2->Text = L"menuStrip2";
			this->menuStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::MenuStrip2_ItemClicked);
			// 
			// linhasDeFormulárioToolStripMenuItem
			// 
			this->linhasDeFormulárioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->adicionarLinhasToolStripMenuItem,
					this->negativeRows_menuStrip
			});
			this->linhasDeFormulárioToolStripMenuItem->Name = L"linhasDeFormulárioToolStripMenuItem";
			this->linhasDeFormulárioToolStripMenuItem->Size = System::Drawing::Size(129, 20);
			this->linhasDeFormulárioToolStripMenuItem->Text = L"Edição de formulário";
			// 
			// adicionarLinhasToolStripMenuItem
			// 
			this->adicionarLinhasToolStripMenuItem->Name = L"adicionarLinhasToolStripMenuItem";
			this->adicionarLinhasToolStripMenuItem->Size = System::Drawing::Size(248, 22);
			this->adicionarLinhasToolStripMenuItem->Text = L"Mostrar Selector de linha/coluna";
			this->adicionarLinhasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AdicionarLinhasToolStripMenuItem_Click);
			// 
			// negativeRows_menuStrip
			// 
			this->negativeRows_menuStrip->Name = L"negativeRows_menuStrip";
			this->negativeRows_menuStrip->Size = System::Drawing::Size(248, 22);
			this->negativeRows_menuStrip->Text = L"Mostrar Negativas/Aprovamento";
			this->negativeRows_menuStrip->Click += gcnew System::EventHandler(this, &Form1::MostrarNegativasAprovamentoToolStripMenuItem_Click);
			// 
			// menuStrip3
			// 
			this->menuStrip3->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->estatísticasToolStripMenuItem });
			this->menuStrip3->Location = System::Drawing::Point(242, 2);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Size = System::Drawing::Size(84, 24);
			this->menuStrip3->TabIndex = 11;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// estatísticasToolStripMenuItem
			// 
			this->estatísticasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->alunoMaisVelhoToolStripMenuItem,
					this->toolStripSeparator1, this->alunosDeSexoMasculinoToolStripMenuItem, this->alunosDeSexoFemininoToolStripMenuItem, this->toolStripSeparator2,
					this->melhorAlunoToolStripMenuItem, this->piorAlunoToolStripMenuItem, this->toolStripSeparator3
			});
			this->estatísticasToolStripMenuItem->Name = L"estatísticasToolStripMenuItem";
			this->estatísticasToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->estatísticasToolStripMenuItem->Text = L"Estatísticas";
			// 
			// alunoMaisVelhoToolStripMenuItem
			// 
			this->alunoMaisVelhoToolStripMenuItem->Name = L"alunoMaisVelhoToolStripMenuItem";
			this->alunoMaisVelhoToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->alunoMaisVelhoToolStripMenuItem->Text = L"Aluno Mais Velho";
			this->alunoMaisVelhoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AlunoMaisVelhoToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(208, 6);
			// 
			// alunosDeSexoMasculinoToolStripMenuItem
			// 
			this->alunosDeSexoMasculinoToolStripMenuItem->Name = L"alunosDeSexoMasculinoToolStripMenuItem";
			this->alunosDeSexoMasculinoToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->alunosDeSexoMasculinoToolStripMenuItem->Text = L"Alunos de sexo masculino";
			this->alunosDeSexoMasculinoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AlunosDeSexoMasculinoToolStripMenuItem_Click);
			// 
			// alunosDeSexoFemininoToolStripMenuItem
			// 
			this->alunosDeSexoFemininoToolStripMenuItem->Name = L"alunosDeSexoFemininoToolStripMenuItem";
			this->alunosDeSexoFemininoToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->alunosDeSexoFemininoToolStripMenuItem->Text = L"Alunos de sexo feminino";
			this->alunosDeSexoFemininoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AlunosDeSexoFemininoToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(208, 6);
			// 
			// melhorAlunoToolStripMenuItem
			// 
			this->melhorAlunoToolStripMenuItem->Name = L"melhorAlunoToolStripMenuItem";
			this->melhorAlunoToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->melhorAlunoToolStripMenuItem->Text = L"Melhor aluno";
			this->melhorAlunoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MelhorAlunoToolStripMenuItem_Click);
			// 
			// piorAlunoToolStripMenuItem
			// 
			this->piorAlunoToolStripMenuItem->Name = L"piorAlunoToolStripMenuItem";
			this->piorAlunoToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->piorAlunoToolStripMenuItem->Text = L"Pior Aluno";
			this->piorAlunoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::PiorAlunoToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(208, 6);
			// 
			// boxGroup_parish
			// 
			this->boxGroup_parish->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->boxGroup_parish->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->boxGroup_parish->Controls->Add(this->btn_parish_female);
			this->boxGroup_parish->Controls->Add(this->txt_parish);
			this->boxGroup_parish->Controls->Add(this->btn_parish_male);
			this->boxGroup_parish->Location = System::Drawing::Point(898, 97);
			this->boxGroup_parish->Name = L"boxGroup_parish";
			this->boxGroup_parish->Size = System::Drawing::Size(200, 101);
			this->boxGroup_parish->TabIndex = 12;
			this->boxGroup_parish->TabStop = false;
			this->boxGroup_parish->Text = L"Pesquisa Freguesia";
			// 
			// btn_parish_female
			// 
			this->btn_parish_female->Location = System::Drawing::Point(101, 64);
			this->btn_parish_female->Name = L"btn_parish_female";
			this->btn_parish_female->Size = System::Drawing::Size(90, 25);
			this->btn_parish_female->TabIndex = 7;
			this->btn_parish_female->Text = L"Feminino";
			this->btn_parish_female->UseVisualStyleBackColor = true;
			this->btn_parish_female->Click += gcnew System::EventHandler(this, &Form1::Btn_parish_female_Click);
			// 
			// menuStrip4
			// 
			this->menuStrip4->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sobreToolStripMenuItem });
			this->menuStrip4->Location = System::Drawing::Point(446, 2);
			this->menuStrip4->Name = L"menuStrip4";
			this->menuStrip4->Size = System::Drawing::Size(57, 24);
			this->menuStrip4->TabIndex = 14;
			this->menuStrip4->Text = L"menuStrip4";
			// 
			// sobreToolStripMenuItem
			// 
			this->sobreToolStripMenuItem->Name = L"sobreToolStripMenuItem";
			this->sobreToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->sobreToolStripMenuItem->Text = L"Sobre";
			this->sobreToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::SobreToolStripMenuItem_Click);
			// 
			// menuStrip5
			// 
			this->menuStrip5->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->reniciarGridToolStripMenuItem });
			this->menuStrip5->Location = System::Drawing::Point(335, 2);
			this->menuStrip5->Name = L"menuStrip5";
			this->menuStrip5->Size = System::Drawing::Size(214, 24);
			this->menuStrip5->TabIndex = 15;
			this->menuStrip5->Text = L"menuStrip5";
			// 
			// reniciarGridToolStripMenuItem
			// 
			this->reniciarGridToolStripMenuItem->Name = L"reniciarGridToolStripMenuItem";
			this->reniciarGridToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->reniciarGridToolStripMenuItem->Text = L"Reniciar Grid";
			this->reniciarGridToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ReniciarGridToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Moccasin;
			this->ClientSize = System::Drawing::Size(1145, 556);
			this->Controls->Add(this->boxGroup_parish);
			this->Controls->Add(this->txtBox_results);
			this->Controls->Add(this->txt_localizeName);
			this->Controls->Add(this->btn_localizeName);
			this->Controls->Add(this->dataGrid_students);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->menuStrip3);
			this->Controls->Add(this->menuStrip4);
			this->Controls->Add(this->menuStrip5);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Waka Waka Waka";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_students))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->menuStrip3->ResumeLayout(false);
			this->menuStrip3->PerformLayout();
			this->boxGroup_parish->ResumeLayout(false);
			this->boxGroup_parish->PerformLayout();
			this->menuStrip4->ResumeLayout(false);
			this->menuStrip4->PerformLayout();
			this->menuStrip5->ResumeLayout(false);
			this->menuStrip5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//-----------------------------------------------------FUNCTIONS ----------------------------------------------

	//counts lines and returns
	private: int lineCounter()
	{
		int totalRows;
		if (dataGrid_students->AllowUserToAddRows) { totalRows = dataGrid_students->Rows->Count - 1; }
			else { totalRows = dataGrid_students->Rows->Count; }
		return totalRows;
	}

	//cleans color from other searches
	private: void colorCleaner()
	{
		int totalRows = lineCounter();
		for (int i = 0; i < totalRows; i++)
		{
			dataGrid_students->Rows[i]->DefaultCellStyle->BackColor = Color::White; //cleans the old search bg color
		}
	}

	//function to find members of a specific gender searched by the user
	private: void genderFinder(String^ S, String^ X)
	{
		int totalRows = lineCounter(), studentCount = 0;

		colorCleaner();

		for (int i = 0; i < totalRows; i++)
		{
			if (dataGrid_students->Rows[i]->Cells[3]->Value->ToString()->ToUpper() == S)
			{
				studentCount++;
				dataGrid_students->Rows[i]->DefaultCellStyle->BackColor = Color::LightBlue;
			}
		}
		txtBox_results->Text = "O total de alunos do sexo " + X + " :" + Convert::ToString(studentCount);
	}

	//finds the parish and shows the users and the respective gender
	private: void parishFinder(String^ G)
	{
		String^ parish_searcher = txt_parish->Text->ToUpper();
		String^ names = "";
		int total = 0;
		int count = lineCounter();

		colorCleaner();

		//if the value of the row and cell in that iteratin is equal to the parish and the gender
		for (int i = 0; i < count; i++)
		{
			if (dataGrid_students->Rows[i]->Cells[1]->Value->ToString()->ToUpper() == parish_searcher
				&& dataGrid_students->Rows[i]->Cells[3]->Value == G)
			{
				total++;
				names += " " + dataGrid_students->Rows[i]->Cells[0]->Value->ToString() + "\r\n";
				dataGrid_students->Rows[i]->DefaultCellStyle->BackColor = Color::LightBlue;
			}
		}
		txtBox_results->Text = "Na Freguesia de " + parish_searcher + " encontram-se " + total + " alunos: \r\n\r\n" + names;
	}

	//----------------------------------------------------- FORM -----------------------------------------------------------
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		GradeGenerator^ grades = gcnew GradeGenerator();
		MyGrid^ grid = gcnew MyGrid();

		grid->Initialize(dataGrid_students);
		grid->AddsSubjects(dataGrid_students);
		grades->Generate(dataGrid_students, lineCounter());
		grid->AverageGrade(dataGrid_students, lineCounter());	
	}

	//finds the name button, changes the color if found and returns the position as well
	private: System::Void Btn_localizeName_Click(System::Object^ sender, System::EventArgs^ e) {
		int totalRows = lineCounter();
		String^ searched_name = txt_localizeName->Text->ToUpper();
		String^ result = "";

		colorCleaner();

		for (int i = 0; i < totalRows; i++)
		{
			if (dataGrid_students->Rows[i]->Cells[0]->Value->ToString()->ToUpper() == searched_name)
			{
				result = Convert::ToString(dataGrid_students->Rows[i]->Cells[0]->Value) + " está na posição " + Convert::ToString(i + 1);
				dataGrid_students->Rows[i]->DefaultCellStyle->BackColor = Color::LightBlue;
			}
		}
		txtBox_results->Text = result;
	}

	//finds parish for males
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		parishFinder("M");
	}

	//find parish female
	private: System::Void Btn_parish_female_Click(System::Object^ sender, System::EventArgs^ e) {
		parishFinder("F");
	}

	//randomizes and gets the class rep. 
	private: System::Void SortearToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rep = gcnew Random(); //to gen new random nums
		int student_rep = rep->Next(1, 20); //picks the number between 1 and 20
		int count = lineCounter();

		colorCleaner();
		dataGrid_students->Columns[4]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

		for (int i = 0; i < count; i++)
		{
			dataGrid_students->Rows[i]->Cells[4]->Value = nullptr;

			if (dataGrid_students->Rows[student_rep]->Cells[4])
			{
				dataGrid_students->Rows[student_rep]->Cells[4]->Value = "X";
			}
		}
	}

	//hides or shows the class rep. column
	private: System::Void OcultarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (dataGrid_students->Columns["Delegado"]->Visible == false)
		{
			dataGrid_students->Columns["Delegado"]->Visible = true;
			ocultarToolStripMenuItem->Text = "Ocultar Coluna";
		}
		else 
		{ 
			dataGrid_students->Columns["Delegado"]->Visible = false;
			ocultarToolStripMenuItem->Text = "Mostrar Coluna";
		}
	}

	//shows row header and empty line
	private: System::Void AdicionarLinhasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!dataGrid_students->RowHeadersVisible)
		{
			dataGrid_students->AllowUserToAddRows = true;
			dataGrid_students->RowHeadersVisible = true;
			adicionarLinhasToolStripMenuItem->Text = "Esconder seletor de linha/coluna";
		}
		else {
			dataGrid_students->RowHeadersVisible = false;
			dataGrid_students->AllowUserToAddRows = false;
			adicionarLinhasToolStripMenuItem->Text = "Exibir seletor de linha/coluna";
		}
	}

	//button to find oldest student where we define year for calculation and oldest_age/oldest string for both to get the first element of the grid
	private: System::Void AlunoMaisVelhoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		int totalRows = lineCounter();
		int oldest_age = Convert::ToInt16(dataGrid_students->Rows[0]->Cells[2]->Value);
		String^ oldest;

		colorCleaner();

		for (int i = 1; i < totalRows; i++)
		{
			if (oldest_age > Convert::ToInt16(dataGrid_students->Rows[i]->Cells[2]->Value))
			{
				oldest_age = Convert::ToInt16(dataGrid_students->Rows[i]->Cells[2]->Value);
			}
		}

		for (int i = 0; i < totalRows; i++)
		{
			if (oldest_age == Convert::ToInt16(dataGrid_students->Rows[i]->Cells[2]->Value))
			{
				oldest +=  "\r\n" + dataGrid_students->Rows[i]->Cells[0]->Value->ToString();
				dataGrid_students->Rows[i]->DefaultCellStyle->BackColor = Color::LightBlue;
			}
		}

		txtBox_results->Text = "O/s mais velho/s nascidos a " + Convert::ToString(oldest_age) + " são: \r\n" + oldest;
	}

	//find all male students
	private: System::Void AlunosDeSexoMasculinoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		genderFinder("M", "masculino");
	}

	//find all female students
	private: System::Void AlunosDeSexoFemininoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		genderFinder("F", "feminino");
	}

	//best student by avg
	private: System::Void MelhorAlunoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		int rows = lineCounter();
		float bestAvg = Convert::ToDouble(dataGrid_students->Rows[0]->Cells[15]->Value), comparador = 0;
		int bestStudent = 0;

		colorCleaner();

		for (int i = 0; i < rows; i++)
		{
			comparador = Convert::ToDouble(dataGrid_students->Rows[i]->Cells[15]->Value);
			if (comparador > bestAvg)
			{
				bestStudent = i;
				bestAvg = Convert::ToDouble(dataGrid_students->Rows[i]->Cells[15]->Value);
			}
		}
		dataGrid_students->Rows[bestStudent]->Cells["headerName"]->Style->BackColor = Color::CadetBlue;
		dataGrid_students->Rows[bestStudent]->Cells["headerName"]->Style->ForeColor = Color::White;
	}
	
	//wost student by avg
	private: System::Void PiorAlunoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter();
		float worstAvg = Convert::ToDouble(dataGrid_students->Rows[0]->Cells[15]->Value), comparador = 0;
		int worstStudent = 0;

		for (int i = 0; i < rows; i++)
		{
			comparador = Convert::ToDouble(dataGrid_students->Rows[i]->Cells[15]->Value);
			if (comparador < worstAvg)
			{
				worstStudent = i;
				worstAvg = Convert::ToDouble(dataGrid_students->Rows[i]->Cells[15]->Value);

			}
		}
		dataGrid_students->Rows[worstStudent]->Cells["headerName"]->Style->BackColor = Color::IndianRed;
		dataGrid_students->Rows[worstStudent]->Cells["headerName"]->Style->ForeColor = Color::White;
	}
	
	//shows both columns - number of negative grades and if the student passed 
	private: System::Void MostrarNegativasAprovamentoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Evaluation^ eval = gcnew Evaluation();

		eval->Negatives(dataGrid_students, lineCounter());
		eval->YearResult(dataGrid_students, lineCounter());

		if (dataGrid_students->Columns["negative_grades"]->Visible == false)
		{
			dataGrid_students->Columns["negative_grades"]->Visible = true;
			dataGrid_students->Columns["aprovement"]->Visible = true;
			negativeRows_menuStrip->Text = "Ocultar Negativas/Aproveitamento";
		}
		else
		{
			dataGrid_students->Columns["negative_grades"]->Visible = false;
			dataGrid_students->Columns["aprovement"]->Visible = false;
			negativeRows_menuStrip->Text = "Mostrar Negativas/Aprovamento";
		}
	}

	//save to file the class rep.
	private: System::Void GuardarDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter();
		String^ classRepName;
		StreamWriter^ repFile = gcnew StreamWriter("rep.txt");

		for (int i = 0; i < rows; i++)
		{
			if (dataGrid_students->Rows[i]->Cells[4]->Value == "X")
			{
				classRepName = Convert::ToString(dataGrid_students->Rows[i]->Cells[0]->Value);
			}
		}

		repFile->WriteLine(classRepName);
		repFile->Close();
	}

	//open file with the info from class rep.
	//verifies if the name exists, if it finds it, cleans the grid of the class rep and inserts the info from the file
	private: System::Void AbrirFicheiroDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter(), student_position = 0;
		String^ classRepName;
		StreamReader^ repFile = File::OpenText("rep.txt");
		classRepName = repFile->ReadLine();
		repFile->Close();

		//searches for the name from the file
		for (int i = 0; i < rows; i++)
		{
			//if finds the name gets the position to a variable to return to that row the student rep
			if (Convert::ToString(dataGrid_students->Rows[i]->Cells[0]->Value) == classRepName) 
			{
				student_position = i;
				for (int j = 0; j < rows; j++)
				{
					dataGrid_students->Rows[j]->Cells[4]->Value = nullptr;

					if (dataGrid_students->Rows[student_position]->Cells[4])
					{
						dataGrid_students->Rows[student_position]->Cells[4]->Value = "X";
					}
				}
			}
		}
	}

	//GRID RESTART
	private: System::Void ReniciarGridToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}

	 //about button
	private: System::Void SobreToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Alpha version 1.66.6");
	}

	//----------------------------------------------------- NO MANDS LAND ------------------------------------------------------------
//DATA GRID FORM CODE
private: System::Void DataGrid_students_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}

private: System::Void MenuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void MenuStrip2_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}


};
}
