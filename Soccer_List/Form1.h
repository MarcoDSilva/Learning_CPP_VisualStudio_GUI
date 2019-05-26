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
	private: System::Windows::Forms::TextBox^ txt_insertTeam;
	protected:
	private: System::Windows::Forms::ListBox^ boxTeamList;
	private: System::Windows::Forms::Button^ btn_clearText;
	private: System::Windows::Forms::Button^ btn_AddTeam;
	private: System::Windows::Forms::Button^ btn_Initialize;
	private: System::Windows::Forms::Button^ btn_TeamRemover;
	private: System::Windows::Forms::Button^ btn_teamCounter;
	private: System::Windows::Forms::TextBox^ txt_counter;
	private: System::Windows::Forms::TextBox^ txt_Searcher;
	private: System::Windows::Forms::Button^ btn_Searcher;
	private: System::Windows::Forms::TextBox^ txt_yesOrNo;
	private: System::Windows::Forms::Button^ btn_eliminateFirstFive;
	private: System::Windows::Forms::Button^ btn_lastFiveElimination;
	private: System::Windows::Forms::TextBox^ txt_teamSubCheck;
	private: System::Windows::Forms::TextBox^ txt_teamToSubWith;
	private: System::Windows::Forms::Button^ btn_subTeams;



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
			this->txt_insertTeam = (gcnew System::Windows::Forms::TextBox());
			this->boxTeamList = (gcnew System::Windows::Forms::ListBox());
			this->btn_clearText = (gcnew System::Windows::Forms::Button());
			this->btn_AddTeam = (gcnew System::Windows::Forms::Button());
			this->btn_Initialize = (gcnew System::Windows::Forms::Button());
			this->btn_TeamRemover = (gcnew System::Windows::Forms::Button());
			this->btn_teamCounter = (gcnew System::Windows::Forms::Button());
			this->txt_counter = (gcnew System::Windows::Forms::TextBox());
			this->txt_Searcher = (gcnew System::Windows::Forms::TextBox());
			this->btn_Searcher = (gcnew System::Windows::Forms::Button());
			this->txt_yesOrNo = (gcnew System::Windows::Forms::TextBox());
			this->btn_eliminateFirstFive = (gcnew System::Windows::Forms::Button());
			this->btn_lastFiveElimination = (gcnew System::Windows::Forms::Button());
			this->txt_teamSubCheck = (gcnew System::Windows::Forms::TextBox());
			this->txt_teamToSubWith = (gcnew System::Windows::Forms::TextBox());
			this->btn_subTeams = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_insertTeam
			// 
			this->txt_insertTeam->Location = System::Drawing::Point(16, 32);
			this->txt_insertTeam->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_insertTeam->Name = L"txt_insertTeam";
			this->txt_insertTeam->Size = System::Drawing::Size(364, 22);
			this->txt_insertTeam->TabIndex = 0;
			this->txt_insertTeam->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_insertTeam_TextChanged);
			// 
			// boxTeamList
			// 
			this->boxTeamList->FormattingEnabled = true;
			this->boxTeamList->ItemHeight = 16;
			this->boxTeamList->Location = System::Drawing::Point(484, 32);
			this->boxTeamList->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->boxTeamList->Name = L"boxTeamList";
			this->boxTeamList->Size = System::Drawing::Size(259, 500);
			this->boxTeamList->TabIndex = 1;
			this->boxTeamList->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::BoxTeamList_SelectedIndexChanged);
			// 
			// btn_clearText
			// 
			this->btn_clearText->Location = System::Drawing::Point(17, 103);
			this->btn_clearText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_clearText->Name = L"btn_clearText";
			this->btn_clearText->Size = System::Drawing::Size(364, 28);
			this->btn_clearText->TabIndex = 2;
			this->btn_clearText->Text = L"Limpa a caixa de texto";
			this->btn_clearText->UseVisualStyleBackColor = true;
			this->btn_clearText->Click += gcnew System::EventHandler(this, &Form1::Btn_clearText_Click);
			// 
			// btn_AddTeam
			// 
			this->btn_AddTeam->Location = System::Drawing::Point(17, 139);
			this->btn_AddTeam->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_AddTeam->Name = L"btn_AddTeam";
			this->btn_AddTeam->Size = System::Drawing::Size(364, 28);
			this->btn_AddTeam->TabIndex = 3;
			this->btn_AddTeam->Text = L"Adiciona a Equipa à lista";
			this->btn_AddTeam->UseVisualStyleBackColor = true;
			this->btn_AddTeam->Click += gcnew System::EventHandler(this, &Form1::Btn_AddTeam_Click);
			// 
			// btn_Initialize
			// 
			this->btn_Initialize->Location = System::Drawing::Point(16, 68);
			this->btn_Initialize->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_Initialize->Name = L"btn_Initialize";
			this->btn_Initialize->Size = System::Drawing::Size(365, 28);
			this->btn_Initialize->TabIndex = 4;
			this->btn_Initialize->Text = L"Inicializa a Lista";
			this->btn_Initialize->UseVisualStyleBackColor = true;
			this->btn_Initialize->Click += gcnew System::EventHandler(this, &Form1::Btn_Initialize_Click);
			// 
			// btn_TeamRemover
			// 
			this->btn_TeamRemover->Location = System::Drawing::Point(17, 176);
			this->btn_TeamRemover->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_TeamRemover->Name = L"btn_TeamRemover";
			this->btn_TeamRemover->Size = System::Drawing::Size(364, 28);
			this->btn_TeamRemover->TabIndex = 5;
			this->btn_TeamRemover->Text = L"Remove a Equipa procurada";
			this->btn_TeamRemover->UseVisualStyleBackColor = true;
			this->btn_TeamRemover->Click += gcnew System::EventHandler(this, &Form1::Btn_TeamRemover_Click);
			// 
			// btn_teamCounter
			// 
			this->btn_teamCounter->Location = System::Drawing::Point(16, 213);
			this->btn_teamCounter->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_teamCounter->Name = L"btn_teamCounter";
			this->btn_teamCounter->Size = System::Drawing::Size(196, 28);
			this->btn_teamCounter->TabIndex = 6;
			this->btn_teamCounter->Text = L"Contagem";
			this->btn_teamCounter->UseVisualStyleBackColor = true;
			this->btn_teamCounter->Click += gcnew System::EventHandler(this, &Form1::Btn_teamCounter_Click);
			// 
			// txt_counter
			// 
			this->txt_counter->Location = System::Drawing::Point(220, 215);
			this->txt_counter->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_counter->Name = L"txt_counter";
			this->txt_counter->Size = System::Drawing::Size(160, 22);
			this->txt_counter->TabIndex = 7;
			this->txt_counter->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_counter_TextChanged);
			// 
			// txt_Searcher
			// 
			this->txt_Searcher->Location = System::Drawing::Point(16, 383);
			this->txt_Searcher->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_Searcher->Name = L"txt_Searcher";
			this->txt_Searcher->Size = System::Drawing::Size(153, 22);
			this->txt_Searcher->TabIndex = 8;
			this->txt_Searcher->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_Searcher_TextChanged);
			// 
			// btn_Searcher
			// 
			this->btn_Searcher->Location = System::Drawing::Point(179, 380);
			this->btn_Searcher->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_Searcher->Name = L"btn_Searcher";
			this->btn_Searcher->Size = System::Drawing::Size(128, 28);
			this->btn_Searcher->TabIndex = 9;
			this->btn_Searcher->Text = L"Existe na Lista\?";
			this->btn_Searcher->UseVisualStyleBackColor = true;
			this->btn_Searcher->Click += gcnew System::EventHandler(this, &Form1::Btn_Searcher_Click);
			// 
			// txt_yesOrNo
			// 
			this->txt_yesOrNo->Location = System::Drawing::Point(315, 383);
			this->txt_yesOrNo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_yesOrNo->Name = L"txt_yesOrNo";
			this->txt_yesOrNo->Size = System::Drawing::Size(68, 22);
			this->txt_yesOrNo->TabIndex = 10;
			// 
			// btn_eliminateFirstFive
			// 
			this->btn_eliminateFirstFive->Location = System::Drawing::Point(17, 250);
			this->btn_eliminateFirstFive->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_eliminateFirstFive->Name = L"btn_eliminateFirstFive";
			this->btn_eliminateFirstFive->Size = System::Drawing::Size(364, 28);
			this->btn_eliminateFirstFive->TabIndex = 11;
			this->btn_eliminateFirstFive->Text = L"Elimina os 5 primeiro clubes";
			this->btn_eliminateFirstFive->UseVisualStyleBackColor = true;
			this->btn_eliminateFirstFive->Click += gcnew System::EventHandler(this, &Form1::Btn_eliminateFirstFive_Click);
			// 
			// btn_lastFiveElimination
			// 
			this->btn_lastFiveElimination->Location = System::Drawing::Point(16, 287);
			this->btn_lastFiveElimination->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_lastFiveElimination->Name = L"btn_lastFiveElimination";
			this->btn_lastFiveElimination->Size = System::Drawing::Size(365, 28);
			this->btn_lastFiveElimination->TabIndex = 12;
			this->btn_lastFiveElimination->Text = L"Elimina os últimos 5 (mesmo que tenha menos)";
			this->btn_lastFiveElimination->UseVisualStyleBackColor = true;
			this->btn_lastFiveElimination->Click += gcnew System::EventHandler(this, &Form1::Btn_lastFiveElimination_Click);
			// 
			// txt_teamSubCheck
			// 
			this->txt_teamSubCheck->Location = System::Drawing::Point(17, 443);
			this->txt_teamSubCheck->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_teamSubCheck->Name = L"txt_teamSubCheck";
			this->txt_teamSubCheck->Size = System::Drawing::Size(152, 22);
			this->txt_teamSubCheck->TabIndex = 13;
			// 
			// txt_teamToSubWith
			// 
			this->txt_teamToSubWith->Location = System::Drawing::Point(16, 490);
			this->txt_teamToSubWith->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_teamToSubWith->Name = L"txt_teamToSubWith";
			this->txt_teamToSubWith->Size = System::Drawing::Size(153, 22);
			this->txt_teamToSubWith->TabIndex = 14;
			// 
			// btn_subTeams
			// 
			this->btn_subTeams->Location = System::Drawing::Point(220, 443);
			this->btn_subTeams->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_subTeams->Name = L"btn_subTeams";
			this->btn_subTeams->Size = System::Drawing::Size(161, 71);
			this->btn_subTeams->TabIndex = 15;
			this->btn_subTeams->Text = L"Substitui , se existir";
			this->btn_subTeams->UseVisualStyleBackColor = true;
			this->btn_subTeams->Click += gcnew System::EventHandler(this, &Form1::Btn_subTeams_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(828, 661);
			this->Controls->Add(this->btn_subTeams);
			this->Controls->Add(this->txt_teamToSubWith);
			this->Controls->Add(this->txt_teamSubCheck);
			this->Controls->Add(this->btn_lastFiveElimination);
			this->Controls->Add(this->btn_eliminateFirstFive);
			this->Controls->Add(this->txt_yesOrNo);
			this->Controls->Add(this->btn_Searcher);
			this->Controls->Add(this->txt_Searcher);
			this->Controls->Add(this->txt_counter);
			this->Controls->Add(this->btn_teamCounter);
			this->Controls->Add(this->btn_TeamRemover);
			this->Controls->Add(this->btn_Initialize);
			this->Controls->Add(this->btn_AddTeam);
			this->Controls->Add(this->btn_clearText);
			this->Controls->Add(this->boxTeamList);
			this->Controls->Add(this->txt_insertTeam);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_Initialize_Click(System::Object^ sender, System::EventArgs^ e) {
		//initialize the list with teams
		boxTeamList->Items->Add("Porto");
		boxTeamList->Items->Add("Estoril");
		boxTeamList->Items->Add("Braga");
		boxTeamList->Items->Add("Sporting");
		boxTeamList->Items->Add("Benfica");
		boxTeamList->Items->Add("Santa Clara");
		boxTeamList->Items->Add("Feirense");
		boxTeamList->Items->Add("Boavista");
		boxTeamList->Items->Add("Paços de Ferreira");
		boxTeamList->Items->Add("Moreirense");
		boxTeamList->Items->Add("Belenenses");
		boxTeamList->Items->Add("Tondela");
		boxTeamList->Items->Add("Académica");
		boxTeamList->Items->Add("Varzim");
		boxTeamList->Items->Add("Vizela");
		boxTeamList->Items->Add("Farense");
		boxTeamList->Items->Add("Freamunde");
		boxTeamList->Items->Add("Aves");
		boxTeamList->Items->Add("Olhanense");
		boxTeamList->Items->Add("União da Madeira");
		boxTeamList->Items->Add("Vianense");
		boxTeamList->Items->Add("Académico de Viseu");
		boxTeamList->Items->Add("Fafe");
		boxTeamList->Items->Add("Covilhã");
		boxTeamList->Items->Add("Portimonense");
		boxTeamList->Items->Add("Salgueiros");
		boxTeamList->Items->Add("Oriental");
		boxTeamList->Items->Add("Atlético");
		boxTeamList->Items->Add("Barreirense");
	}
	//clean button
private: System::Void Btn_clearText_Click(System::Object^ sender, System::EventArgs^ e) { 
	boxTeamList->Items->Clear(); 
}
	//team adder
private: System::Void Btn_AddTeam_Click(System::Object^ sender, System::EventArgs^ e) {
	boxTeamList->Items->Add(txt_insertTeam->Text);
}
	//team remover
private: System::Void Btn_TeamRemover_Click(System::Object^ sender, System::EventArgs^ e) {
	boxTeamList->Items->Remove(txt_insertTeam->Text);
}
	//team counter
private: System::Void Btn_teamCounter_Click(System::Object^ sender, System::EventArgs^ e) {
	txt_counter->Text = Convert::ToString(boxTeamList->Items->Count);
}
private: System::Void Txt_counter_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	// team searcher
private: System::Void Btn_Searcher_Click(System::Object^ sender, System::EventArgs^ e) {
	if (boxTeamList->Items->Contains(txt_Searcher->Text)) {
		txt_yesOrNo->Text = "Sim";
	}
	else
	{
		txt_yesOrNo->Text = "Não";
	}
}
private: System::Void Txt_Searcher_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	//eliminates first 5 teams
private: System::Void Btn_eliminateFirstFive_Click(System::Object^ sender, System::EventArgs^ e) {
	int counter = 0;
	counter = boxTeamList->Items->Count;
	counter--; //takes 1 of counter since array starts at 0

	for (int i = 0; i < 5; i++)
	{	
		if (counter < 5)
		{
			boxTeamList->Items->Clear();
		}
		else 
		{
			boxTeamList->Items->RemoveAt(i);
		}
	}
}
private: System::Void Btn_lastFiveElimination_Click(System::Object^ sender, System::EventArgs^ e) {
	int counter = 0;
	counter = boxTeamList->Items->Count;
	counter--; //takes 1 of counter since array starts at 0
	
	//keeps looping until 0, then loop is broke
	for (int i = counter; i > counter - 5; i--)
	{
		if (i >= 0) {
			boxTeamList->Items->RemoveAt(i);
		}
		else
		{
			break;
		}
	}
}
	// btn to swap teams if found
private: System::Void Btn_subTeams_Click(System::Object^ sender, System::EventArgs^ e) {
	int position = 0;
	if (boxTeamList->Items->Contains(txt_teamSubCheck->Text)) 
	{
		position = boxTeamList->Items->IndexOf(txt_teamSubCheck->Text);
		position++;
		MessageBox::Show(Convert::ToString(position));
		boxTeamList->Items[position - 1] = txt_teamToSubWith->Text;
	}
}
private: System::Void Txt_insertTeam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BoxTeamList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
