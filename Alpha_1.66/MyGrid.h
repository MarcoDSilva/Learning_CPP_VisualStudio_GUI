#pragma once
using namespace System;
using namespace System::Windows::Forms;

ref class MyGrid
{
	//function to call grid , be it initialization, or updates/restart
	public: void Initialize(DataGridView^ grid)
	{
		grid->Rows->Add("Ana Rita Cunha", "Maximinos", 1998, "F");
		grid->Rows->Add("Bela Costa Silva", "Lomar", 2002, "F");
		grid->Rows->Add("Carlos Alberto Costa", "Sequeira", 1999, "M");
		grid->Rows->Add("Carlos Daniel Ferreira", "Sequeira", 2001, "M");
		grid->Rows->Add("Daniel Bastos Gomes", "Lovios", 1998, "M");
		grid->Rows->Add("Daniel Silva Ferraz", "S. Vítor", 1999, "M");
		grid->Rows->Add("Elvira Gomes Pendes", "Maximinos", 2001, "F");
		grid->Rows->Add("Fernanda Maria Silva", "S. Vítor", 2002, "F");
		grid->Rows->Add("Fernando Gomes Barros", "Maximinos", 1999, "M");
		grid->Rows->Add("Gilherme Alexandre Barros", "Lamaçães", 2001, "M");
		grid->Rows->Add("Hilda Fonseca Silva", "S. Geraldo", 1999, "F");
		grid->Rows->Add("José Manuel Carvalho", "Gualtar", 1999, "M");
		grid->Rows->Add("José Alberto Gomes", "Maximinos", 2001, "M");
		grid->Rows->Add("Maria Silvéria Bastos", "Maximinos", 1997, "F");
		grid->Rows->Add("Anabela Bastos Torres", "S. Vítor", 1996, "F");
		grid->Rows->Add("Rui Vasco Santos", "Maximinos", 2002, "M");
		grid->Rows->Add("Otávio Ferreira", "Maximinos", 1999, "M");
		grid->Rows->Add("Silvério Silva Teixeira", "Lamaçães", 2001, "M");
		grid->Rows->Add("Teodoro Armando Matos", "Maximinos", 2002, "M");
		grid->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1998, "M");

		grid->ClearSelection();
		grid->Columns["Delegado"]->Visible = false;

	}


	//adds extra subjects and defines the column size
	public: void AddsSubjects(DataGridView^ grid)
	{
		grid->ColumnCount = 15; //grid dimension
		grid->Columns[5]->Name = "subj_1"; //creates column 6
		grid->Columns[5]->HeaderText = "Por";

		grid->Columns[6]->Name = "subj_2";
		grid->Columns[6]->HeaderText = "Ing";

		grid->Columns[7]->Name = "subj_3";
		grid->Columns[7]->HeaderText = "Fil";

		grid->Columns[8]->Name = "subj_4";
		grid->Columns[8]->HeaderText = "Mat";

		grid->Columns[9]->Name = "subj_5";
		grid->Columns[9]->HeaderText = "Fis";

		grid->Columns[10]->Name = "subj_6";
		grid->Columns[10]->HeaderText = "Qui";

		grid->Columns[11]->Name = "subj_7";
		grid->Columns[11]->HeaderText = "Geo";

		grid->Columns[12]->Name = "subj_8";
		grid->Columns[12]->HeaderText = "His";

		grid->Columns[13]->Name = "subj_9";
		grid->Columns[13]->HeaderText = "E.F";

		grid->Columns[14]->Name = "subj_10";
		grid->Columns[14]->HeaderText = "Mor";

		//defines the width for the columns
		for (int i = 5; i < 15; i++)
		{
			grid->Columns[i]->Width = 30;
			grid->Columns[i]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		}
}

	//average grades, shows with 2 floating point numbers for better accuracy
	public: void AverageGrade(DataGridView^ grid, int lines)
	{
		ExtraColumns(grid);
		int totalRows = lines;
		float average;

		//gets avg from the student grades
		for (int row = 0; row < totalRows; row++)
		{
			average = 0;
			for (int gradesCell = 5; gradesCell < 15; gradesCell++)
			{
				average += Convert::ToInt16(grid->Rows[row]->Cells[gradesCell]->Value);
			}
			average /= 10;
			grid->Rows[row]->Cells[15]->Value = average.ToString("f2");
			grid->Rows[row]->Cells[15]->Style->ForeColor = Color::Blue;
		}
	}
	//creates 3 extra columns, average, number of negative grades and aprovement
	private: void ExtraColumns(DataGridView^ grid)
	{
		grid->ColumnCount = 18;
		grid->Columns[15]->Name = "average";
		grid->Columns[15]->HeaderText = "Media";
		grid->Columns[15]->Width = 65;

		grid->Columns[16]->Name = "negative_grades";
		grid->Columns[16]->HeaderText = "Negativas";
		grid->Columns[16]->Width = 65;

		grid->Columns[17]->Name = "aprovement";
		grid->Columns[17]->HeaderText = "Aproveitamento";
		grid->Columns[17]->Width = 85;

		grid->Columns["negative_grades"]->Visible = false;
		grid->Columns["aprovement"]->Visible = false;

		//centering the text
		for (int i = 15; i < 18; i++)
		{
			grid->Columns[i]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		}
	}
};

