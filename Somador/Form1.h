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
	private: System::Windows::Forms::TextBox^ txt_Box1;
	private: System::Windows::Forms::TextBox^ txt_Box2;
	private: System::Windows::Forms::TextBox^ txt_Box3;
	private: System::Windows::Forms::TextBox^ txt_Box4;
	private: System::Windows::Forms::Button^ btn_soma;
	private: System::Windows::Forms::Button^ btn_limpar;
	private: System::Windows::Forms::Button^ btn_pares;
	private: System::Windows::Forms::Button^ btn_maior;
	private: System::Windows::Forms::Button^ btn_max_min;
	private: System::Windows::Forms::Button^ btn_primos;
	private: System::Windows::Forms::Button^ btn_randomNums;
	private: System::Windows::Forms::TextBox^ txt_resultados;
	protected:

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
			this->txt_Box1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Box2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Box3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_Box4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_soma = (gcnew System::Windows::Forms::Button());
			this->btn_limpar = (gcnew System::Windows::Forms::Button());
			this->btn_pares = (gcnew System::Windows::Forms::Button());
			this->btn_maior = (gcnew System::Windows::Forms::Button());
			this->btn_max_min = (gcnew System::Windows::Forms::Button());
			this->btn_primos = (gcnew System::Windows::Forms::Button());
			this->btn_randomNums = (gcnew System::Windows::Forms::Button());
			this->txt_resultados = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_Box1
			// 
			this->txt_Box1->Location = System::Drawing::Point(29, 53);
			this->txt_Box1->Name = L"txt_Box1";
			this->txt_Box1->Size = System::Drawing::Size(79, 22);
			this->txt_Box1->TabIndex = 0;
			this->txt_Box1->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_Box1_TextChanged);
			// 
			// txt_Box2
			// 
			this->txt_Box2->Location = System::Drawing::Point(29, 104);
			this->txt_Box2->Name = L"txt_Box2";
			this->txt_Box2->Size = System::Drawing::Size(79, 22);
			this->txt_Box2->TabIndex = 1;
			// 
			// txt_Box3
			// 
			this->txt_Box3->Location = System::Drawing::Point(29, 151);
			this->txt_Box3->Name = L"txt_Box3";
			this->txt_Box3->Size = System::Drawing::Size(79, 22);
			this->txt_Box3->TabIndex = 2;
			this->txt_Box3->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_Box3_TextChanged);
			// 
			// txt_Box4
			// 
			this->txt_Box4->Location = System::Drawing::Point(29, 207);
			this->txt_Box4->Name = L"txt_Box4";
			this->txt_Box4->Size = System::Drawing::Size(79, 22);
			this->txt_Box4->TabIndex = 3;
			this->txt_Box4->TextChanged += gcnew System::EventHandler(this, &Form1::TextBox4_TextChanged);
			// 
			// btn_soma
			// 
			this->btn_soma->Location = System::Drawing::Point(142, 12);
			this->btn_soma->Name = L"btn_soma";
			this->btn_soma->Size = System::Drawing::Size(131, 35);
			this->btn_soma->TabIndex = 4;
			this->btn_soma->Text = L"Somar";
			this->btn_soma->UseVisualStyleBackColor = true;
			this->btn_soma->Click += gcnew System::EventHandler(this, &Form1::Btn_soma_Click);
			// 
			// btn_limpar
			// 
			this->btn_limpar->Location = System::Drawing::Point(142, 53);
			this->btn_limpar->Name = L"btn_limpar";
			this->btn_limpar->Size = System::Drawing::Size(131, 38);
			this->btn_limpar->TabIndex = 5;
			this->btn_limpar->Text = L"Limpar";
			this->btn_limpar->UseVisualStyleBackColor = true;
			this->btn_limpar->Click += gcnew System::EventHandler(this, &Form1::Btn_limpar_Click);
			// 
			// btn_pares
			// 
			this->btn_pares->Location = System::Drawing::Point(142, 97);
			this->btn_pares->Name = L"btn_pares";
			this->btn_pares->Size = System::Drawing::Size(131, 37);
			this->btn_pares->TabIndex = 6;
			this->btn_pares->Text = L"Contar pares";
			this->btn_pares->UseVisualStyleBackColor = true;
			this->btn_pares->Click += gcnew System::EventHandler(this, &Form1::Btn_pares_Click);
			// 
			// btn_maior
			// 
			this->btn_maior->Location = System::Drawing::Point(142, 143);
			this->btn_maior->Name = L"btn_maior";
			this->btn_maior->Size = System::Drawing::Size(131, 39);
			this->btn_maior->TabIndex = 7;
			this->btn_maior->Text = L"Qual o maior\?";
			this->btn_maior->UseVisualStyleBackColor = true;
			this->btn_maior->Click += gcnew System::EventHandler(this, &Form1::Btn_maior_Click);
			// 
			// btn_max_min
			// 
			this->btn_max_min->Location = System::Drawing::Point(142, 188);
			this->btn_max_min->Name = L"btn_max_min";
			this->btn_max_min->Size = System::Drawing::Size(131, 41);
			this->btn_max_min->TabIndex = 8;
			this->btn_max_min->Text = L"Maior e menor";
			this->btn_max_min->UseVisualStyleBackColor = true;
			this->btn_max_min->Click += gcnew System::EventHandler(this, &Form1::Btn_max_min_Click);
			// 
			// btn_primos
			// 
			this->btn_primos->Location = System::Drawing::Point(142, 245);
			this->btn_primos->Name = L"btn_primos";
			this->btn_primos->Size = System::Drawing::Size(131, 43);
			this->btn_primos->TabIndex = 9;
			this->btn_primos->Text = L"Há primos\?";
			this->btn_primos->UseVisualStyleBackColor = true;
			this->btn_primos->Click += gcnew System::EventHandler(this, &Form1::Btn_primos_Click);
			// 
			// btn_randomNums
			// 
			this->btn_randomNums->Location = System::Drawing::Point(142, 304);
			this->btn_randomNums->Name = L"btn_randomNums";
			this->btn_randomNums->Size = System::Drawing::Size(131, 42);
			this->btn_randomNums->TabIndex = 10;
			this->btn_randomNums->Text = L"Gerar números";
			this->btn_randomNums->UseVisualStyleBackColor = true;
			this->btn_randomNums->Click += gcnew System::EventHandler(this, &Form1::Btn_randomNums_Click);
			// 
			// txt_resultados
			// 
			this->txt_resultados->Location = System::Drawing::Point(309, 126);
			this->txt_resultados->Multiline = true;
			this->txt_resultados->Name = L"txt_resultados";
			this->txt_resultados->Size = System::Drawing::Size(182, 56);
			this->txt_resultados->TabIndex = 11;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 377);
			this->Controls->Add(this->txt_resultados);
			this->Controls->Add(this->btn_randomNums);
			this->Controls->Add(this->btn_primos);
			this->Controls->Add(this->btn_max_min);
			this->Controls->Add(this->btn_maior);
			this->Controls->Add(this->btn_pares);
			this->Controls->Add(this->btn_limpar);
			this->Controls->Add(this->btn_soma);
			this->Controls->Add(this->txt_Box4);
			this->Controls->Add(this->txt_Box3);
			this->Controls->Add(this->txt_Box2);
			this->Controls->Add(this->txt_Box1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//GLOBAL VARIABLE
	int firstNum, secondNum, thirdNum, forthNum;

	//convert strings to int and passes it to the respective variables
	private: void converter()
	{
		firstNum = Convert::ToInt16(txt_Box1->Text);
		secondNum = Convert::ToInt16(txt_Box2->Text);
		thirdNum = Convert::ToInt16(txt_Box3->Text);
		forthNum = Convert::ToInt16(txt_Box4->Text);
	}
	// converts the result text box to string from an int
	private: void resultTxt(int x)
	{
		txt_resultados->Text = Convert::ToString(x);
	}

	private: System::Void TextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Txt_Box3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Txt_Box1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	//sum button
private: System::Void Btn_soma_Click(System::Object^ sender, System::EventArgs^ e) {

	int sum;

	converter();

	sum = firstNum + secondNum + thirdNum + forthNum;

	resultTxt(sum);

}
	//clears all boxes
private: System::Void Btn_limpar_Click(System::Object^ sender, System::EventArgs^ e) {
	txt_Box1->Text = "";
	txt_Box2->Text = "";
	txt_Box3->Text = "";
	txt_Box4->Text = "";
	txt_resultados->Text = "";
}
	//verifies if exist even numbers
private: System::Void Btn_pares_Click(System::Object^ sender, System::EventArgs^ e) {

	int count = 0;

	converter();

	if (firstNum % 2 == 0) { count++; }
	if (secondNum % 2 == 0) { count++; }
	if (thirdNum % 2 == 0) { count++; }
	if (forthNum % 2 == 0)	{ count++; }

	resultTxt(count);

}
	//checks the biggest number
private: System::Void Btn_maior_Click(System::Object^ sender, System::EventArgs^ e) {

	converter();

	int biggest = firstNum;
	
	if (secondNum > biggest) { biggest = secondNum; }
	if (thirdNum > biggest) { biggest = thirdNum; }
	if (forthNum > biggest) { biggest = forthNum; }

	resultTxt(biggest);
}
	//checks the max and min num
private: System::Void Btn_max_min_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ max_min = "";

	converter();
	int max = firstNum, min = firstNum;

	if (secondNum > max) { max = secondNum; }
		else if (secondNum < min) { min = secondNum; }

	if (thirdNum > max) { max = thirdNum; }
		else if (thirdNum < min) { min = thirdNum; }

	if (forthNum > max) { max = forthNum; }
		else if (forthNum < min) { min = forthNum; }

	//TO DEBUG! FIND A WAY TO ADD BOTH MAX AND MIN IN THE SAME RESULT 
	max_min = Convert::ToString(max);
	max_min = max_min + " , " + Convert::ToString(min);
	txt_resultados->Text = max_min;
}
	// num generator
private: System::Void Btn_randomNums_Click(System::Object^ sender, System::EventArgs^ e) {

	Random^ rand = gcnew Random(); //to generate random nums
	int n1 = rand->Next(0, 100);	
	int n2 = rand->Next(0, 100);
	int n3 = rand->Next(0, 100);
	int n4 = rand->Next(0, 100);
	
	txt_Box1->Text = Convert::ToString(n1);
	txt_Box2->Text = Convert::ToString(n2);
	txt_Box3->Text = Convert::ToString(n3);
	txt_Box4->Text = Convert::ToString(n4);

	txt_resultados->Text = "";
}
	//checks for prime numbers
private: System::Void Btn_primos_Click(System::Object^ sender, System::EventArgs^ e) {
	converter();

	bool firstPrime = true;
	bool secondPrime = true;
	bool thirdPrime = true;
	bool forthPrime = true;
	String^ num1 = " ";
	String^ num2 = " ";
	String^ num3 = " ";
	String^ num4 = " ";

	//checks all numbers for a prime one
	for (int i = 2; i < (firstNum / 2) + 1; i++)
	{
		if (firstNum % i == 0) { firstPrime = false;  break; }
	}
	for (int i = 2; i < secondNum / 2; i++)
	{
		if (secondNum % i == 0) { secondPrime = false; break; }
	}
	for (int i = 2; i < thirdNum/ 2; i++)
	{
		if (thirdNum % i == 0) { thirdPrime = false;  break; }
	}
	for (int i = 2; i < forthNum / 2; i++)
	{
		if (forthNum % i == 0) { forthPrime = false;  break; }
	}

	//if any of these is true or all, gives the number to the respective string
	if (firstPrime) { num1 = Convert::ToString(firstNum); }
	if (secondPrime) { num2 = Convert::ToString(secondNum); }
	if (thirdPrime) { num3 = Convert::ToString(thirdNum); }
	if (forthPrime) { num4 = Convert::ToString(forthNum); }


	// if any of these is true, we return that a prime exist
	if (firstPrime || secondPrime || thirdPrime || forthPrime) 	{  txt_resultados->Text = "Sim, há primos!" + num1 + num2 + num3 + num4; }
		else { txt_resultados->Text = "Não, não há primos!"; }

}
};
}
