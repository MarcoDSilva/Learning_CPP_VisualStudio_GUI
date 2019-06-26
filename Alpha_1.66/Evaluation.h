#pragma once
using namespace System;
using namespace System::Windows::Forms;

ref class Evaluation
{

	//counts the number of negatives the student has, grades below 10 only
	public: void Negatives(DataGridView^ grid, int lines)
	{
		int rows = lines, num_negatives = 0;

		//if any grade is below 10, it's negative
		for (int i = 0; i < rows; i++)
		{
			num_negatives = 0;

			for (int j = 5; j < 15; j++)
			{
				if (Convert::ToInt16(grid->Rows[i]->Cells[j]->Value) <= 9)
				{
					num_negatives++;
				}
			}
			grid->Rows[i]->Cells[16]->Value = num_negatives;
		}
	}

	//verifies the number of negatives of the student and picks the student destiny
	//if a student has any grade below 8, fails instantly the year
	public: void YearResult(DataGridView^ grid, int lines)
	{
		int rows = lines, negatives;
		bool aproved = true;

		for (int i = 0; i < rows; i++)
		{
			//number of negatives counted beforehand, to use in the conditional
			negatives = Convert::ToInt16(grid->Rows[i]->Cells[16]->Value);
			aproved = true;

			for (int j = 5; j < 15; j++)
			{
				if (Convert::ToInt16(grid->Rows[i]->Cells[j]->Value) < 8)
				{
					aproved = false;
					break;
				}
			}

			if (negatives < 3 && aproved)
			{
				grid->Rows[i]->Cells[17]->Value = "Aprovado";
				grid->Rows[i]->Cells[17]->Style->BackColor = Color::ForestGreen;
				grid->Rows[i]->Cells[17]->Style->ForeColor = Color::White;
			}
			else
			{
				grid->Rows[i]->Cells[17]->Value = "Não aprovado";
				grid->Rows[i]->Cells[17]->Style->BackColor = Color::DarkRed;
				grid->Rows[i]->Cells[17]->Style->ForeColor = Color::White;
			}
		}
	}


	

};

