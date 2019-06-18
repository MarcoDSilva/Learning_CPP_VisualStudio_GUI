//FUNC para apagar as pesquisas antigas
	private: void gridCleaner()
	{
		int rows = dataGrid_production->Rows->Count - 1;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				dataGrid_production->Rows[i]->Cells[j]->Value = nullptr;
			}
		}
	}
//FUNC para encontrar as freguesias consoante os alunos
	private: void encontraAlunosFreguesia()
	{
		String^ parish_searcher = txt_parish_production->Text->ToUpper();
		String^ freguesia;
		String^ gender;
		String^ radioButtonPick;
		int rows = lineCounter();
		int total = 0;

		gridCleaner();

		if (radio_parish_1->Checked) { radioButtonPick = "M"; }
		if (radio_parish_2->Checked) { radioButtonPick = "F"; }
		if (radio_parish_3->Checked) { radioButtonPick = "N"; }

		//if the value of the row and cell in that iteratin is equal to the parish and the gender
		for (int i = 0; i < rows; i++)
		{
			freguesia = dataGrid_students->Rows[i]->Cells[1]->Value->ToString()->ToUpper();
			gender = dataGrid_students->Rows[i]->Cells[3]->Value->ToString()->ToUpper();

			if (freguesia == parish_searcher && radioButtonPick == gender)
			{
				dataGrid_production->Rows[total]->Cells[0]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["headerName"]->Value);
				dataGrid_production->Rows[total]->Cells[1]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["headerParish"]->Value);
				dataGrid_production->Rows[total]->Cells[2]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["headerSex"]->Value);
				dataGrid_production->Rows[total]->Cells[3]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["aprovement"]->Value);
				total++;
			}
			else if (freguesia == parish_searcher && radioButtonPick == "N")
			{
				dataGrid_production->Rows[total]->Cells[0]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["headerName"]->Value);
				dataGrid_production->Rows[total]->Cells[1]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["headerParish"]->Value);
				dataGrid_production->Rows[total]->Cells[2]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["headerSex"]->Value);
				dataGrid_production->Rows[total]->Cells[3]->Value = Convert::ToString(dataGrid_students->Rows[i]->Cells["aprovement"]->Value);
				total++;
			}
		}
	}


//-------------------------------------------- button copy grid to grid info - production
private: System::Void Button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	encontraAlunosFreguesia();
}