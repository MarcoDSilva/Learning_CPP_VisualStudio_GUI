#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class GradeGenerator
{
//-----------------------------------------MEMBER 1 ------------------------
//grade definer, generates a random grade to each subject and highlights the best and worst grades
	public: void Generate(DataGridView^ grid, int lines)
	{
		int totalRows = lines, grade = 0;

		for (int i = 0; i < totalRows; i++)
		{
			for (int j = 5; j < 15; j++)
			{
				grid->Rows[i]->Cells[j]->Value = RandomGrade();
				grade = Convert::ToInt16(grid->Rows[i]->Cells[j]->Value);

				//verifies if the grade is negative or a great positive
				if (grade < 8)
				{
					grid->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
					grid->Rows[i]->Cells[j]->Style->ForeColor = Color::White;
				}
				else if (grade > 7 && grade < 10)
				{
					grid->Rows[i]->Cells[j]->Style->BackColor = Color::Orange;
				}
				if (grade > 17)
				{
					grid->Rows[i]->Cells[j]->Style->BackColor = Color::DarkGreen;
					grid->Rows[i]->Cells[j]->Style->ForeColor = Color::White;
				}
			}
		}
	}


//---------------------------------- MEMBER 2 - RNG FOR GRADES ---------------------------
//in case the numbers are low or high, tries to generate again to try to not have super high or super low grades
	private: int RandomGrade()
	{
		Random^ grade = gcnew Random();
		int evaluation, counter = 0;

		for (int k = 0; k < 8989898; k++)
		{
			//wiskas saquetas para o random agitar o saco das bolas e tirar um número diferente
		}

		//randoms that tries to not have much negatives
		evaluation = grade->Next(5, 21);

		if (evaluation < 10)
		{
			evaluation = grade->Next(7, 15);
		}
		else if (evaluation >= 19)
		{
			evaluation = grade->Next(17, 21);
		}

		return evaluation;
	}
};

