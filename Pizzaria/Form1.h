#pragma once

namespace ProjCLR {

	using namespace System;
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
	private: System::Windows::Forms::ComboBox^ cmb_pizzas;
	private: System::Windows::Forms::CheckBox^ chk_azeitona;
	private: System::Windows::Forms::CheckBox^ chk_queijo;
	private: System::Windows::Forms::CheckBox^ chk_pimentos;
	protected:

	protected:

	protected:



	private: System::Windows::Forms::TextBox^ txt_quantity;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rdb_desconto_sim;
	private: System::Windows::Forms::RadioButton^ rdb_desconto_nao;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_total;

	private: System::Windows::Forms::Label^ label3;

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
			this->cmb_pizzas = (gcnew System::Windows::Forms::ComboBox());
			this->chk_azeitona = (gcnew System::Windows::Forms::CheckBox());
			this->chk_queijo = (gcnew System::Windows::Forms::CheckBox());
			this->chk_pimentos = (gcnew System::Windows::Forms::CheckBox());
			this->txt_quantity = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rdb_desconto_sim = (gcnew System::Windows::Forms::RadioButton());
			this->rdb_desconto_nao = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_total = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cmb_pizzas
			// 
			this->cmb_pizzas->FormattingEnabled = true;
			this->cmb_pizzas->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Napolitana", L"Margarida", L"Anchova" });
			this->cmb_pizzas->Location = System::Drawing::Point(12, 23);
			this->cmb_pizzas->Name = L"cmb_pizzas";
			this->cmb_pizzas->Size = System::Drawing::Size(121, 21);
			this->cmb_pizzas->TabIndex = 0;
			this->cmb_pizzas->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::ComboBox1_SelectedIndexChanged);
			// 
			// chk_azeitona
			// 
			this->chk_azeitona->AutoSize = true;
			this->chk_azeitona->Location = System::Drawing::Point(207, 13);
			this->chk_azeitona->Name = L"chk_azeitona";
			this->chk_azeitona->Size = System::Drawing::Size(67, 17);
			this->chk_azeitona->TabIndex = 1;
			this->chk_azeitona->Text = L"Azeitona";
			this->chk_azeitona->UseVisualStyleBackColor = true;
			this->chk_azeitona->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox1_CheckedChanged);
			// 
			// chk_queijo
			// 
			this->chk_queijo->AutoSize = true;
			this->chk_queijo->Location = System::Drawing::Point(207, 37);
			this->chk_queijo->Name = L"chk_queijo";
			this->chk_queijo->Size = System::Drawing::Size(83, 17);
			this->chk_queijo->TabIndex = 2;
			this->chk_queijo->Text = L"Queijo Extra";
			this->chk_queijo->UseVisualStyleBackColor = true;
			this->chk_queijo->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_queijo_CheckedChanged);
			// 
			// chk_pimentos
			// 
			this->chk_pimentos->AutoSize = true;
			this->chk_pimentos->Location = System::Drawing::Point(207, 60);
			this->chk_pimentos->Name = L"chk_pimentos";
			this->chk_pimentos->Size = System::Drawing::Size(69, 17);
			this->chk_pimentos->TabIndex = 3;
			this->chk_pimentos->Text = L"Pimentos";
			this->chk_pimentos->UseVisualStyleBackColor = true;
			this->chk_pimentos->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_pimentos_CheckedChanged);
			// 
			// txt_quantity
			// 
			this->txt_quantity->Location = System::Drawing::Point(101, 96);
			this->txt_quantity->Name = L"txt_quantity";
			this->txt_quantity->Size = System::Drawing::Size(55, 20);
			this->txt_quantity->TabIndex = 4;
			this->txt_quantity->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_quantity_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Quantidade";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::Label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tem desconto\?";
			// 
			// rdb_desconto_sim
			// 
			this->rdb_desconto_sim->AutoSize = true;
			this->rdb_desconto_sim->Location = System::Drawing::Point(24, 217);
			this->rdb_desconto_sim->Name = L"rdb_desconto_sim";
			this->rdb_desconto_sim->Size = System::Drawing::Size(42, 17);
			this->rdb_desconto_sim->TabIndex = 7;
			this->rdb_desconto_sim->TabStop = true;
			this->rdb_desconto_sim->Text = L"Sim";
			this->rdb_desconto_sim->UseVisualStyleBackColor = true;
			this->rdb_desconto_sim->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rdb_desconto_sim_CheckedChanged);
			// 
			// rdb_desconto_nao
			// 
			this->rdb_desconto_nao->AutoSize = true;
			this->rdb_desconto_nao->Location = System::Drawing::Point(88, 217);
			this->rdb_desconto_nao->Name = L"rdb_desconto_nao";
			this->rdb_desconto_nao->Size = System::Drawing::Size(45, 17);
			this->rdb_desconto_nao->TabIndex = 8;
			this->rdb_desconto_nao->TabStop = true;
			this->rdb_desconto_nao->Text = L"Não";
			this->rdb_desconto_nao->UseVisualStyleBackColor = true;
			this->rdb_desconto_nao->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rdb_desconto_nao_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// txt_total
			// 
			this->txt_total->Location = System::Drawing::Point(116, 264);
			this->txt_total->Name = L"txt_total";
			this->txt_total->Size = System::Drawing::Size(78, 20);
			this->txt_total->TabIndex = 10;
			this->txt_total->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_total_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"PREÇOS:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::Label3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 438);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_total);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rdb_desconto_nao);
			this->Controls->Add(this->rdb_desconto_sim);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_quantity);
			this->Controls->Add(this->chk_pimentos);
			this->Controls->Add(this->chk_queijo);
			this->Controls->Add(this->chk_azeitona);
			this->Controls->Add(this->cmb_pizzas);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// func void
		private: void calcular() {
			//variables for prices
			float preco_total = 0;
			int preco_da_pizza = 0;
			int quantity = 0;
			int extras = 0;

			//conditional to get the pizza price
			if (cmb_pizzas->Text == "Margarida") { preco_da_pizza = 6; }
			if (cmb_pizzas->Text == "Napolitana") { preco_da_pizza = 7; }
			if (cmb_pizzas->Text == "Anchova") { preco_da_pizza = 8; }

			//gets quantity
			try
			{
				quantity = Convert::ToInt16(txt_quantity->Text);
			}
			catch (...)
			{
				quantity = 0;
				txt_quantity->Text = "0";
			}

			//verifying extras
			if (chk_azeitona->Checked) { extras = extras + 1; }
			if (chk_queijo->Checked) { extras = extras + 1; }
			if (chk_pimentos->Checked) { extras = extras + 2; }


			//gets total price to pay
			preco_total = (preco_da_pizza + extras) * quantity;

			//checks if there is a discount
			if (rdb_desconto_sim->Checked) { preco_total = preco_total - (preco_total * 0.1); }

			//converts price to string to return in the text box
			txt_total->Text = Convert::ToString(preco_total);
	}
	private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {}

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }

private: System::Void Chk_queijo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Chk_pimentos_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Txt_quantity_TextChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Txt_total_TextChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Rdb_desconto_nao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Rdb_desconto_sim_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {calcular();}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
