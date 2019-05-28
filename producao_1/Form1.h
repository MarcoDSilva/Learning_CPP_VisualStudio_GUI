//produção 1 - C++ 
//feito por Marco Silva
//28-05-2019

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
	private: System::Windows::Forms::TextBox^ txt_quantity;
	protected:
	private: System::Windows::Forms::TextBox^ txt_price;
	private: System::Windows::Forms::Button^ btn_calculate;
	private: System::Windows::Forms::ComboBox^ comboBox;
	private: System::Windows::Forms::Label^ lbl_quantity;
	private: System::Windows::Forms::Label^ lbl_price;
	private: System::Windows::Forms::Label^ lbl_discount;
	private: System::Windows::Forms::Label^ lbl_youngster;
	private: System::Windows::Forms::Label^ lbl_adult;
	private: System::Windows::Forms::Label^ lbl_retired;
	private: System::Windows::Forms::CheckBox^ chk_opt_x;
	private: System::Windows::Forms::CheckBox^ chk_opt_y;
	private: System::Windows::Forms::CheckBox^ chk_opt_z;
	private: System::Windows::Forms::Label^ lbl_extras;
	private: System::Windows::Forms::Label^ lbl_extra_price;
	private: System::Windows::Forms::Label^ lbl_agravamento;
	private: System::Windows::Forms::RadioButton^ rd_btn_yes;
	private: System::Windows::Forms::RadioButton^ rd_btn_no;
	private: System::Windows::Forms::Label^ lbl_extra_agravamento;
	private: System::Windows::Forms::Label^ lbl_total;
	private: System::Windows::Forms::TextBox^ txt_total;


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
			this->txt_quantity = (gcnew System::Windows::Forms::TextBox());
			this->txt_price = (gcnew System::Windows::Forms::TextBox());
			this->btn_calculate = (gcnew System::Windows::Forms::Button());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_quantity = (gcnew System::Windows::Forms::Label());
			this->lbl_price = (gcnew System::Windows::Forms::Label());
			this->lbl_discount = (gcnew System::Windows::Forms::Label());
			this->lbl_youngster = (gcnew System::Windows::Forms::Label());
			this->lbl_adult = (gcnew System::Windows::Forms::Label());
			this->lbl_retired = (gcnew System::Windows::Forms::Label());
			this->chk_opt_x = (gcnew System::Windows::Forms::CheckBox());
			this->chk_opt_y = (gcnew System::Windows::Forms::CheckBox());
			this->chk_opt_z = (gcnew System::Windows::Forms::CheckBox());
			this->lbl_extras = (gcnew System::Windows::Forms::Label());
			this->lbl_extra_price = (gcnew System::Windows::Forms::Label());
			this->lbl_agravamento = (gcnew System::Windows::Forms::Label());
			this->rd_btn_yes = (gcnew System::Windows::Forms::RadioButton());
			this->rd_btn_no = (gcnew System::Windows::Forms::RadioButton());
			this->lbl_extra_agravamento = (gcnew System::Windows::Forms::Label());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->txt_total = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_quantity
			// 
			this->txt_quantity->Location = System::Drawing::Point(12, 54);
			this->txt_quantity->Name = L"txt_quantity";
			this->txt_quantity->Size = System::Drawing::Size(100, 22);
			this->txt_quantity->TabIndex = 0;
			this->txt_quantity->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_quantity_TextChanged);
			// 
			// txt_price
			// 
			this->txt_price->Location = System::Drawing::Point(133, 54);
			this->txt_price->Name = L"txt_price";
			this->txt_price->Size = System::Drawing::Size(100, 22);
			this->txt_price->TabIndex = 1;
			this->txt_price->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_price_TextChanged);
			// 
			// btn_calculate
			// 
			this->btn_calculate->Location = System::Drawing::Point(282, 54);
			this->btn_calculate->Name = L"btn_calculate";
			this->btn_calculate->Size = System::Drawing::Size(99, 46);
			this->btn_calculate->TabIndex = 2;
			this->btn_calculate->Text = L"Calculate";
			this->btn_calculate->UseVisualStyleBackColor = true;
			this->btn_calculate->Click += gcnew System::EventHandler(this, &Form1::Btn_calculate_Click);
			// 
			// comboBox
			// 
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Menor", L"Adulto", L"Reformado" });
			this->comboBox->Location = System::Drawing::Point(12, 168);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(121, 24);
			this->comboBox->TabIndex = 3;
			this->comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::ComboBox_SelectedIndexChanged);
			// 
			// lbl_quantity
			// 
			this->lbl_quantity->AutoSize = true;
			this->lbl_quantity->Location = System::Drawing::Point(19, 34);
			this->lbl_quantity->Name = L"lbl_quantity";
			this->lbl_quantity->Size = System::Drawing::Size(82, 17);
			this->lbl_quantity->TabIndex = 4;
			this->lbl_quantity->Text = L"Quantidade";
			// 
			// lbl_price
			// 
			this->lbl_price->AutoSize = true;
			this->lbl_price->Location = System::Drawing::Point(155, 34);
			this->lbl_price->Name = L"lbl_price";
			this->lbl_price->Size = System::Drawing::Size(45, 17);
			this->lbl_price->TabIndex = 5;
			this->lbl_price->Text = L"Preço";
			// 
			// lbl_discount
			// 
			this->lbl_discount->AutoSize = true;
			this->lbl_discount->Location = System::Drawing::Point(33, 146);
			this->lbl_discount->Name = L"lbl_discount";
			this->lbl_discount->Size = System::Drawing::Size(58, 17);
			this->lbl_discount->TabIndex = 6;
			this->lbl_discount->Text = L"Escalão";
			// 
			// lbl_youngster
			// 
			this->lbl_youngster->AutoSize = true;
			this->lbl_youngster->Location = System::Drawing::Point(253, 146);
			this->lbl_youngster->Name = L"lbl_youngster";
			this->lbl_youngster->Size = System::Drawing::Size(81, 17);
			this->lbl_youngster->TabIndex = 7;
			this->lbl_youngster->Text = L"Menor - 5%";
			// 
			// lbl_adult
			// 
			this->lbl_adult->AutoSize = true;
			this->lbl_adult->Location = System::Drawing::Point(253, 171);
			this->lbl_adult->Name = L"lbl_adult";
			this->lbl_adult->Size = System::Drawing::Size(151, 17);
			this->lbl_adult->TabIndex = 8;
			this->lbl_adult->Text = L"Adulto - Sem desconto";
			// 
			// lbl_retired
			// 
			this->lbl_retired->AutoSize = true;
			this->lbl_retired->Location = System::Drawing::Point(253, 196);
			this->lbl_retired->Name = L"lbl_retired";
			this->lbl_retired->Size = System::Drawing::Size(111, 17);
			this->lbl_retired->TabIndex = 9;
			this->lbl_retired->Text = L"Reformado - 7%";
			this->lbl_retired->Click += gcnew System::EventHandler(this, &Form1::Label2_Click);
			// 
			// chk_opt_x
			// 
			this->chk_opt_x->AutoSize = true;
			this->chk_opt_x->Location = System::Drawing::Point(22, 280);
			this->chk_opt_x->Name = L"chk_opt_x";
			this->chk_opt_x->Size = System::Drawing::Size(39, 21);
			this->chk_opt_x->TabIndex = 10;
			this->chk_opt_x->Text = L"X";
			this->chk_opt_x->UseVisualStyleBackColor = true;
			this->chk_opt_x->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_opt_x_CheckedChanged);
			// 
			// chk_opt_y
			// 
			this->chk_opt_y->AutoSize = true;
			this->chk_opt_y->Location = System::Drawing::Point(67, 280);
			this->chk_opt_y->Name = L"chk_opt_y";
			this->chk_opt_y->Size = System::Drawing::Size(39, 21);
			this->chk_opt_y->TabIndex = 11;
			this->chk_opt_y->Text = L"Y";
			this->chk_opt_y->UseVisualStyleBackColor = true;
			this->chk_opt_y->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_opt_y_CheckedChanged);
			// 
			// chk_opt_z
			// 
			this->chk_opt_z->AutoSize = true;
			this->chk_opt_z->Location = System::Drawing::Point(112, 280);
			this->chk_opt_z->Name = L"chk_opt_z";
			this->chk_opt_z->Size = System::Drawing::Size(39, 21);
			this->chk_opt_z->TabIndex = 12;
			this->chk_opt_z->Text = L"Z";
			this->chk_opt_z->UseVisualStyleBackColor = true;
			this->chk_opt_z->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_opt_z_CheckedChanged);
			// 
			// lbl_extras
			// 
			this->lbl_extras->AutoSize = true;
			this->lbl_extras->Location = System::Drawing::Point(36, 245);
			this->lbl_extras->Name = L"lbl_extras";
			this->lbl_extras->Size = System::Drawing::Size(67, 17);
			this->lbl_extras->TabIndex = 14;
			this->lbl_extras->Text = L"EXTRAS:";
			// 
			// lbl_extra_price
			// 
			this->lbl_extra_price->AutoSize = true;
			this->lbl_extra_price->Location = System::Drawing::Point(225, 280);
			this->lbl_extra_price->Name = L"lbl_extra_price";
			this->lbl_extra_price->Size = System::Drawing::Size(139, 17);
			this->lbl_extra_price->TabIndex = 15;
			this->lbl_extra_price->Text = L"+ 10€ por cada extra";
			// 
			// lbl_agravamento
			// 
			this->lbl_agravamento->AutoSize = true;
			this->lbl_agravamento->Location = System::Drawing::Point(36, 376);
			this->lbl_agravamento->Name = L"lbl_agravamento";
			this->lbl_agravamento->Size = System::Drawing::Size(92, 17);
			this->lbl_agravamento->TabIndex = 16;
			this->lbl_agravamento->Text = L"Agravamento";
			// 
			// rd_btn_yes
			// 
			this->rd_btn_yes->AutoSize = true;
			this->rd_btn_yes->Location = System::Drawing::Point(22, 417);
			this->rd_btn_yes->Name = L"rd_btn_yes";
			this->rd_btn_yes->Size = System::Drawing::Size(52, 21);
			this->rd_btn_yes->TabIndex = 17;
			this->rd_btn_yes->TabStop = true;
			this->rd_btn_yes->Text = L"Sim";
			this->rd_btn_yes->UseVisualStyleBackColor = true;
			this->rd_btn_yes->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rd_btn_yes_CheckedChanged);
			// 
			// rd_btn_no
			// 
			this->rd_btn_no->AutoSize = true;
			this->rd_btn_no->Location = System::Drawing::Point(96, 417);
			this->rd_btn_no->Name = L"rd_btn_no";
			this->rd_btn_no->Size = System::Drawing::Size(55, 21);
			this->rd_btn_no->TabIndex = 18;
			this->rd_btn_no->TabStop = true;
			this->rd_btn_no->Text = L"Não";
			this->rd_btn_no->UseVisualStyleBackColor = true;
			this->rd_btn_no->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rd_btn_no_CheckedChanged);
			// 
			// lbl_extra_agravamento
			// 
			this->lbl_extra_agravamento->AutoSize = true;
			this->lbl_extra_agravamento->Location = System::Drawing::Point(228, 417);
			this->lbl_extra_agravamento->Name = L"lbl_extra_agravamento";
			this->lbl_extra_agravamento->Size = System::Drawing::Size(110, 17);
			this->lbl_extra_agravamento->TabIndex = 19;
			this->lbl_extra_agravamento->Text = L"Sim = 10% extra";
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Location = System::Drawing::Point(39, 486);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(54, 17);
			this->lbl_total->TabIndex = 20;
			this->lbl_total->Text = L"TOTAL";
			// 
			// txt_total
			// 
			this->txt_total->Location = System::Drawing::Point(231, 480);
			this->txt_total->Name = L"txt_total";
			this->txt_total->Size = System::Drawing::Size(100, 22);
			this->txt_total->TabIndex = 21;
			this->txt_total->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_total_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 631);
			this->Controls->Add(this->txt_total);
			this->Controls->Add(this->lbl_total);
			this->Controls->Add(this->lbl_extra_agravamento);
			this->Controls->Add(this->rd_btn_no);
			this->Controls->Add(this->rd_btn_yes);
			this->Controls->Add(this->lbl_agravamento);
			this->Controls->Add(this->lbl_extra_price);
			this->Controls->Add(this->lbl_extras);
			this->Controls->Add(this->chk_opt_z);
			this->Controls->Add(this->chk_opt_y);
			this->Controls->Add(this->chk_opt_x);
			this->Controls->Add(this->lbl_retired);
			this->Controls->Add(this->lbl_adult);
			this->Controls->Add(this->lbl_youngster);
			this->Controls->Add(this->lbl_discount);
			this->Controls->Add(this->lbl_price);
			this->Controls->Add(this->lbl_quantity);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->btn_calculate);
			this->Controls->Add(this->txt_price);
			this->Controls->Add(this->txt_quantity);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void refresher()
	{
		//variables
		int quantity = 0;
		int price = 0;
		int extras = 0;
		float total = 0, discount_age = 0;
		
		//puts values automatic to 1 , to not get bugs in the refresher
		try {
			quantity = Convert::ToInt16(txt_quantity->Text);
			price = Convert::ToInt16(txt_price->Text);
		}
		catch (...) { txt_quantity->Text = "1"; txt_price->Text = "1"; }		

		//combo box discount checker
		if (comboBox->Text == "Menor") { discount_age = 0.05; }
		if (comboBox->Text == "Adulto") { discount_age = 0; }
		if (comboBox->Text == "Reformado") { discount_age = 0.07; }

		//checks extra elements
		if (chk_opt_x->Checked) { extras += 10; }
		if (chk_opt_y->Checked) { extras += 10; }
		if (chk_opt_z->Checked) { extras += 10; }

		//calculations for discount, if it exists
		total = quantity * (price + extras);
		discount_age *= total;
		total -= discount_age;

		//calculations for aggravation
		if (rd_btn_yes->Checked) { total = total + (total * 0.1); }


		//converts total to text and puts it in the text box total
		txt_total->Text = Convert::ToString(total);
	}

	private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	//button to calculate
	private: System::Void Btn_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		refresher();
	}
private: System::Void Txt_quantity_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void Txt_price_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void ComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void Chk_opt_x_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void Chk_opt_y_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void Chk_opt_z_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void Rd_btn_yes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void Rd_btn_no_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
private: System::Void Txt_total_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	refresher();
}
};
}
