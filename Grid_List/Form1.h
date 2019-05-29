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
	private: System::Windows::Forms::Button^ btn_initialize;
	private: System::Windows::Forms::Button^ btn_cleanGrid;
	private: System::Windows::Forms::Button^ btn_addRegistry;
	private: System::Windows::Forms::Button^ btn_showNamesMsgBox;
	private: System::Windows::Forms::Button^ btn_trackName;
	private: System::Windows::Forms::Button^ btn_eliminateNameLine;

	private: System::Windows::Forms::Button^ btn_eliminateEmptyLine;
	protected:

	protected:






	private: System::Windows::Forms::TextBox^ txt_addName;
	private: System::Windows::Forms::TextBox^ txt_addCity;
	private: System::Windows::Forms::TextBox^ txt_addBdayYear;
	private: System::Windows::Forms::TextBox^ txt_localizeName;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ City;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Bday_Year;

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
			this->btn_initialize = (gcnew System::Windows::Forms::Button());
			this->btn_cleanGrid = (gcnew System::Windows::Forms::Button());
			this->btn_addRegistry = (gcnew System::Windows::Forms::Button());
			this->btn_showNamesMsgBox = (gcnew System::Windows::Forms::Button());
			this->btn_trackName = (gcnew System::Windows::Forms::Button());
			this->btn_eliminateNameLine = (gcnew System::Windows::Forms::Button());
			this->btn_eliminateEmptyLine = (gcnew System::Windows::Forms::Button());
			this->txt_addName = (gcnew System::Windows::Forms::TextBox());
			this->txt_addCity = (gcnew System::Windows::Forms::TextBox());
			this->txt_addBdayYear = (gcnew System::Windows::Forms::TextBox());
			this->txt_localizeName = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->City = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Bday_Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_initialize
			// 
			this->btn_initialize->Location = System::Drawing::Point(27, 27);
			this->btn_initialize->Name = L"btn_initialize";
			this->btn_initialize->Size = System::Drawing::Size(210, 23);
			this->btn_initialize->TabIndex = 0;
			this->btn_initialize->Text = L"1: Inicializa Gridview com 4 nomes";
			this->btn_initialize->UseVisualStyleBackColor = true;
			this->btn_initialize->Click += gcnew System::EventHandler(this, &Form1::Btn_initialize_Click);
			// 
			// btn_cleanGrid
			// 
			this->btn_cleanGrid->Location = System::Drawing::Point(27, 68);
			this->btn_cleanGrid->Name = L"btn_cleanGrid";
			this->btn_cleanGrid->Size = System::Drawing::Size(210, 23);
			this->btn_cleanGrid->TabIndex = 1;
			this->btn_cleanGrid->Text = L"2: Limpa a Grid - Elimina tudo";
			this->btn_cleanGrid->UseVisualStyleBackColor = true;
			this->btn_cleanGrid->Click += gcnew System::EventHandler(this, &Form1::Btn_cleanGrid_Click);
			// 
			// btn_addRegistry
			// 
			this->btn_addRegistry->Location = System::Drawing::Point(27, 109);
			this->btn_addRegistry->Name = L"btn_addRegistry";
			this->btn_addRegistry->Size = System::Drawing::Size(210, 23);
			this->btn_addRegistry->TabIndex = 2;
			this->btn_addRegistry->Text = L"3: Inserir este registo";
			this->btn_addRegistry->UseVisualStyleBackColor = true;
			this->btn_addRegistry->Click += gcnew System::EventHandler(this, &Form1::Btn_addRegistry_Click);
			// 
			// btn_showNamesMsgBox
			// 
			this->btn_showNamesMsgBox->Location = System::Drawing::Point(27, 149);
			this->btn_showNamesMsgBox->Name = L"btn_showNamesMsgBox";
			this->btn_showNamesMsgBox->Size = System::Drawing::Size(210, 23);
			this->btn_showNamesMsgBox->TabIndex = 3;
			this->btn_showNamesMsgBox->Text = L"4: Mostra nomes numa messagebox";
			this->btn_showNamesMsgBox->UseVisualStyleBackColor = true;
			this->btn_showNamesMsgBox->Click += gcnew System::EventHandler(this, &Form1::Btn_showNamesMsgBox_Click);
			// 
			// btn_trackName
			// 
			this->btn_trackName->Location = System::Drawing::Point(27, 187);
			this->btn_trackName->Name = L"btn_trackName";
			this->btn_trackName->Size = System::Drawing::Size(210, 23);
			this->btn_trackName->TabIndex = 4;
			this->btn_trackName->Text = L"5: Localize este nome";
			this->btn_trackName->UseVisualStyleBackColor = true;
			this->btn_trackName->Click += gcnew System::EventHandler(this, &Form1::Btn_trackName_Click);
			// 
			// btn_eliminateNameLine
			// 
			this->btn_eliminateNameLine->Location = System::Drawing::Point(27, 230);
			this->btn_eliminateNameLine->Name = L"btn_eliminateNameLine";
			this->btn_eliminateNameLine->Size = System::Drawing::Size(210, 23);
			this->btn_eliminateNameLine->TabIndex = 5;
			this->btn_eliminateNameLine->Text = L"6: Elimina linha com este nome";
			this->btn_eliminateNameLine->UseVisualStyleBackColor = true;
			this->btn_eliminateNameLine->Click += gcnew System::EventHandler(this, &Form1::Btn_eliminateNameLine_Click);
			// 
			// btn_eliminateEmptyLine
			// 
			this->btn_eliminateEmptyLine->Location = System::Drawing::Point(27, 270);
			this->btn_eliminateEmptyLine->Name = L"btn_eliminateEmptyLine";
			this->btn_eliminateEmptyLine->Size = System::Drawing::Size(210, 23);
			this->btn_eliminateEmptyLine->TabIndex = 6;
			this->btn_eliminateEmptyLine->Text = L"7: Elimina linhas se nome vazio";
			this->btn_eliminateEmptyLine->UseVisualStyleBackColor = true;
			this->btn_eliminateEmptyLine->Click += gcnew System::EventHandler(this, &Form1::Btn_eliminateEmptyLine_Click);
			// 
			// txt_addName
			// 
			this->txt_addName->Location = System::Drawing::Point(243, 109);
			this->txt_addName->Name = L"txt_addName";
			this->txt_addName->Size = System::Drawing::Size(83, 20);
			this->txt_addName->TabIndex = 7;
			// 
			// txt_addCity
			// 
			this->txt_addCity->Location = System::Drawing::Point(332, 109);
			this->txt_addCity->Name = L"txt_addCity";
			this->txt_addCity->Size = System::Drawing::Size(86, 20);
			this->txt_addCity->TabIndex = 8;
			// 
			// txt_addBdayYear
			// 
			this->txt_addBdayYear->Location = System::Drawing::Point(425, 109);
			this->txt_addBdayYear->Name = L"txt_addBdayYear";
			this->txt_addBdayYear->Size = System::Drawing::Size(89, 20);
			this->txt_addBdayYear->TabIndex = 9;
			// 
			// txt_localizeName
			// 
			this->txt_localizeName->Location = System::Drawing::Point(243, 210);
			this->txt_localizeName->Name = L"txt_localizeName";
			this->txt_localizeName->Size = System::Drawing::Size(271, 20);
			this->txt_localizeName->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Name, this->City,
					this->Bday_Year
			});
			this->dataGridView1->Location = System::Drawing::Point(27, 312);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(391, 150);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::DataGridView1_CellContentClick);
			// 
			// Name
			// 
			this->Name->HeaderText = L"Nome";
			this->Name->Name = L"Name";
			// 
			// City
			// 
			this->City->HeaderText = L"Cidade";
			this->City->Name = L"City";
			// 
			// Bday_Year
			// 
			this->Bday_Year->HeaderText = L"Ano nasc.";
			this->Bday_Year->Name = L"Bday_Year";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 562);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txt_localizeName);
			this->Controls->Add(this->txt_addBdayYear);
			this->Controls->Add(this->txt_addCity);
			this->Controls->Add(this->txt_addName);
			this->Controls->Add(this->btn_eliminateEmptyLine);
			this->Controls->Add(this->btn_eliminateNameLine);
			this->Controls->Add(this->btn_trackName);
			this->Controls->Add(this->btn_showNamesMsgBox);
			this->Controls->Add(this->btn_addRegistry);
			this->Controls->Add(this->btn_cleanGrid);
			this->Controls->Add(this->btn_initialize);
			//this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//gridview content
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	//initialize grid with 4 names
private: System::Void Btn_initialize_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Add("Ana", "Braga", "1999");
	dataGridView1->Rows->Add("Rui", "Lisboa", "1987");
	dataGridView1->Rows->Add("João", "Porto", "2001");
	dataGridView1->Rows->Add("Manuel", "Coimbra", "1973");
}
	//button to eliminate the grid 
private: System::Void Btn_cleanGrid_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
}
	//insert the registry
private: System::Void Btn_addRegistry_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = txt_addCity->Text;
	String^ city = txt_addCity->Text;
	String^ year = txt_addBdayYear->Text;

	dataGridView1->Rows->Add(name, city, year);
}
	//show name in the messagebox
private: System::Void Btn_showNamesMsgBox_Click(System::Object^ sender, System::EventArgs^ e)
{	
	int numberRows = dataGridView1->Rows->Count; //conta_linhas
	String^ namePopup = "";

	//concatenation string name with the value from the datagridview , element of the iteration, cell 0
	for (int i = 0; i < numberRows - 1; i++)
	{		 
		namePopup = namePopup + i + ": " + dataGridView1->Rows[i]->Cells[0]->Value + " | ";
	}

	MessageBox::Show(namePopup);
}
	//track the name given by the user
	private: System::Void Btn_trackName_Click(System::Object^ sender, System::EventArgs^ e) {
		int numberRows = dataGridView1->Rows->Count; //linhas
		String^ container_name = txt_localizeName->Text;
		String^ temporary_name;

		for (int i = 0; i < numberRows; i++)
		{
			//converts the cell value and gives it to the string temp name
			temporary_name = Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value);

			if(temporary_name == container_name && temporary_name != "")
			{
				MessageBox::Show(Convert::ToString(i)); //converts the into to a string to use in messagebox
			}
		}
}
	//eliminate the name given by the user
private: System::Void Btn_eliminateNameLine_Click(System::Object^ sender, System::EventArgs^ e) {
	int numberRows = dataGridView1->Rows->Count; //linhas
	String^ container_name = txt_localizeName->Text;
	String^ temporary_name;

	for (int i = 0; i < numberRows; i++)
	{
		//without try catch, it goes overflow because the row doesn't update after the row is removed
		try 
		{
			temporary_name = Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value);

			if (temporary_name == container_name)
			{
				dataGridView1->Rows->RemoveAt(i);
			}
		}
		catch(...) {}
	}

}
	//eliminate the line if the name is empty
private: System::Void Btn_eliminateEmptyLine_Click(System::Object^ sender, System::EventArgs^ e) {
	int numberRows = dataGridView1->Rows->Count; //linhas
	String^ temporary_name;

	for (int i = 0; i < numberRows; i++)
	{
		//without try catch, it goes overflow because the row doesn't update after the row is removed
		try
		{
			temporary_name = Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value);

			if (temporary_name == "")
			{
				dataGridView1->Rows->RemoveAt(i);
			}
		}
		catch (...) {}
	}
}
};
}
