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
	private: System::Windows::Forms::DataGridView^ dataGrid_production;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ grid_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ grid_price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ grid_quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ grid_product_type;
	private: System::Windows::Forms::Button^ btn_initialize;
	private: System::Windows::Forms::Button^ btn_clean_grid;
	private: System::Windows::Forms::Button^ btn_new_product;
	private: System::Windows::Forms::TextBox^ txtBox_add_name;
	private: System::Windows::Forms::TextBox^ txtBox_add_price;
	private: System::Windows::Forms::TextBox^ txtBox_add_quantity;
	private: System::Windows::Forms::TextBox^ txtBox_add_type;
	private: System::Windows::Forms::Label^ label_prod_name;
	private: System::Windows::Forms::Label^ label_add_price;
	private: System::Windows::Forms::Label^ label_add_quantity;
	private: System::Windows::Forms::Label^ label_add_type;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn_remove_product;
	private: System::Windows::Forms::TextBox^ txtBox_remove_product;
	private: System::Windows::Forms::Button^ btn_filter_comboBox;
	private: System::Windows::Forms::ComboBox^ cmbBox_filter_products;
	private: System::Windows::Forms::Button^ btn_expensive_product;
	private: System::Windows::Forms::TextBox^ txtBox_expensive_product;
	private: System::Windows::Forms::Button^ btn_quantity_radios;
	private: System::Windows::Forms::RadioButton^ rdBtn_Show;
	private: System::Windows::Forms::RadioButton^ rdBtn_dont_show;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ chkBox_drinks;
	private: System::Windows::Forms::CheckBox^ chkBox_fruits;
	private: System::Windows::Forms::CheckBox^ chkBox_condiments;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btn_avg_products;

	private: System::Windows::Forms::TextBox^ txtBox_avg_type;
	private: System::Windows::Forms::TextBox^ txtBox_avg_result;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ lbl_avg_result;
	private: System::Windows::Forms::Label^ lbl_type_avg;
	private: System::Windows::Forms::Button^ btn_string;
	private: System::Windows::Forms::TextBox^ btn_string_category;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox_strings;


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
			this->dataGrid_production = (gcnew System::Windows::Forms::DataGridView());
			this->grid_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->grid_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->grid_quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->grid_product_type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_initialize = (gcnew System::Windows::Forms::Button());
			this->btn_clean_grid = (gcnew System::Windows::Forms::Button());
			this->btn_new_product = (gcnew System::Windows::Forms::Button());
			this->txtBox_add_name = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_add_price = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_add_quantity = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_add_type = (gcnew System::Windows::Forms::TextBox());
			this->label_prod_name = (gcnew System::Windows::Forms::Label());
			this->label_add_price = (gcnew System::Windows::Forms::Label());
			this->label_add_quantity = (gcnew System::Windows::Forms::Label());
			this->label_add_type = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_remove_product = (gcnew System::Windows::Forms::Button());
			this->txtBox_remove_product = (gcnew System::Windows::Forms::TextBox());
			this->btn_filter_comboBox = (gcnew System::Windows::Forms::Button());
			this->cmbBox_filter_products = (gcnew System::Windows::Forms::ComboBox());
			this->btn_expensive_product = (gcnew System::Windows::Forms::Button());
			this->txtBox_expensive_product = (gcnew System::Windows::Forms::TextBox());
			this->btn_quantity_radios = (gcnew System::Windows::Forms::Button());
			this->rdBtn_Show = (gcnew System::Windows::Forms::RadioButton());
			this->rdBtn_dont_show = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chkBox_drinks = (gcnew System::Windows::Forms::CheckBox());
			this->chkBox_fruits = (gcnew System::Windows::Forms::CheckBox());
			this->chkBox_condiments = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_avg_products = (gcnew System::Windows::Forms::Button());
			this->txtBox_avg_type = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_avg_result = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_avg_result = (gcnew System::Windows::Forms::Label());
			this->lbl_type_avg = (gcnew System::Windows::Forms::Label());
			this->btn_string = (gcnew System::Windows::Forms::Button());
			this->btn_string_category = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox_strings = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_production))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGrid_production
			// 
			this->dataGrid_production->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_production->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->grid_name,
					this->grid_price, this->grid_quantity, this->grid_product_type
			});
			this->dataGrid_production->Location = System::Drawing::Point(285, 22);
			this->dataGrid_production->Name = L"dataGrid_production";
			this->dataGrid_production->Size = System::Drawing::Size(515, 294);
			this->dataGrid_production->TabIndex = 0;
			this->dataGrid_production->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::DataGridView1_CellContentClick);
			// 
			// grid_name
			// 
			this->grid_name->HeaderText = L"Nome";
			this->grid_name->Name = L"grid_name";
			// 
			// grid_price
			// 
			this->grid_price->HeaderText = L"Preço";
			this->grid_price->Name = L"grid_price";
			// 
			// grid_quantity
			// 
			this->grid_quantity->HeaderText = L"Qtd.";
			this->grid_quantity->Name = L"grid_quantity";
			// 
			// grid_product_type
			// 
			this->grid_product_type->HeaderText = L"Categoria";
			this->grid_product_type->Name = L"grid_product_type";
			// 
			// btn_initialize
			// 
			this->btn_initialize->Location = System::Drawing::Point(22, 22);
			this->btn_initialize->Name = L"btn_initialize";
			this->btn_initialize->Size = System::Drawing::Size(205, 23);
			this->btn_initialize->TabIndex = 1;
			this->btn_initialize->Text = L"I - Inicializar";
			this->btn_initialize->UseVisualStyleBackColor = true;
			this->btn_initialize->Click += gcnew System::EventHandler(this, &Form1::Btn_initialize_Click);
			// 
			// btn_clean_grid
			// 
			this->btn_clean_grid->Location = System::Drawing::Point(22, 63);
			this->btn_clean_grid->Name = L"btn_clean_grid";
			this->btn_clean_grid->Size = System::Drawing::Size(205, 23);
			this->btn_clean_grid->TabIndex = 2;
			this->btn_clean_grid->Text = L"II - Limpar";
			this->btn_clean_grid->UseVisualStyleBackColor = true;
			this->btn_clean_grid->Click += gcnew System::EventHandler(this, &Form1::Btn_clean_grid_Click);
			// 
			// btn_new_product
			// 
			this->btn_new_product->Location = System::Drawing::Point(0, 19);
			this->btn_new_product->Name = L"btn_new_product";
			this->btn_new_product->Size = System::Drawing::Size(205, 23);
			this->btn_new_product->TabIndex = 3;
			this->btn_new_product->Text = L"III - Inserir";
			this->btn_new_product->UseVisualStyleBackColor = true;
			this->btn_new_product->Click += gcnew System::EventHandler(this, &Form1::Btn_new_product_Click);
			// 
			// txtBox_add_name
			// 
			this->txtBox_add_name->Location = System::Drawing::Point(6, 65);
			this->txtBox_add_name->Name = L"txtBox_add_name";
			this->txtBox_add_name->Size = System::Drawing::Size(100, 20);
			this->txtBox_add_name->TabIndex = 4;
			this->txtBox_add_name->TextChanged += gcnew System::EventHandler(this, &Form1::TxtBox_add_name_TextChanged);
			// 
			// txtBox_add_price
			// 
			this->txtBox_add_price->Location = System::Drawing::Point(142, 64);
			this->txtBox_add_price->Name = L"txtBox_add_price";
			this->txtBox_add_price->Size = System::Drawing::Size(50, 20);
			this->txtBox_add_price->TabIndex = 5;
			// 
			// txtBox_add_quantity
			// 
			this->txtBox_add_quantity->Location = System::Drawing::Point(6, 106);
			this->txtBox_add_quantity->Name = L"txtBox_add_quantity";
			this->txtBox_add_quantity->Size = System::Drawing::Size(35, 20);
			this->txtBox_add_quantity->TabIndex = 6;
			// 
			// txtBox_add_type
			// 
			this->txtBox_add_type->Location = System::Drawing::Point(99, 105);
			this->txtBox_add_type->Name = L"txtBox_add_type";
			this->txtBox_add_type->Size = System::Drawing::Size(100, 20);
			this->txtBox_add_type->TabIndex = 7;
			// 
			// label_prod_name
			// 
			this->label_prod_name->AutoSize = true;
			this->label_prod_name->Location = System::Drawing::Point(6, 48);
			this->label_prod_name->Name = L"label_prod_name";
			this->label_prod_name->Size = System::Drawing::Size(78, 13);
			this->label_prod_name->TabIndex = 8;
			this->label_prod_name->Text = L"Nome Produto:";
			// 
			// label_add_price
			// 
			this->label_add_price->AutoSize = true;
			this->label_add_price->Location = System::Drawing::Point(139, 48);
			this->label_add_price->Name = L"label_add_price";
			this->label_add_price->Size = System::Drawing::Size(38, 13);
			this->label_add_price->TabIndex = 9;
			this->label_add_price->Text = L"Preço:";
			this->label_add_price->Click += gcnew System::EventHandler(this, &Form1::Label_add_price_Click);
			// 
			// label_add_quantity
			// 
			this->label_add_quantity->AutoSize = true;
			this->label_add_quantity->Location = System::Drawing::Point(6, 89);
			this->label_add_quantity->Name = L"label_add_quantity";
			this->label_add_quantity->Size = System::Drawing::Size(30, 13);
			this->label_add_quantity->TabIndex = 10;
			this->label_add_quantity->Text = L"Qtd.:";
			// 
			// label_add_type
			// 
			this->label_add_type->AutoSize = true;
			this->label_add_type->Location = System::Drawing::Point(122, 87);
			this->label_add_type->Name = L"label_add_type";
			this->label_add_type->Size = System::Drawing::Size(55, 13);
			this->label_add_type->TabIndex = 11;
			this->label_add_type->Text = L"Categoria:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_new_product);
			this->groupBox1->Controls->Add(this->txtBox_add_type);
			this->groupBox1->Controls->Add(this->label_add_type);
			this->groupBox1->Controls->Add(this->label_prod_name);
			this->groupBox1->Controls->Add(this->label_add_quantity);
			this->groupBox1->Controls->Add(this->txtBox_add_quantity);
			this->groupBox1->Controls->Add(this->txtBox_add_name);
			this->groupBox1->Controls->Add(this->label_add_price);
			this->groupBox1->Controls->Add(this->txtBox_add_price);
			this->groupBox1->Location = System::Drawing::Point(22, 101);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(235, 142);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Inserir Produto";
			// 
			// btn_remove_product
			// 
			this->btn_remove_product->Location = System::Drawing::Point(28, 258);
			this->btn_remove_product->Name = L"btn_remove_product";
			this->btn_remove_product->Size = System::Drawing::Size(199, 23);
			this->btn_remove_product->TabIndex = 13;
			this->btn_remove_product->Text = L"IV - Remover";
			this->btn_remove_product->UseVisualStyleBackColor = true;
			this->btn_remove_product->Click += gcnew System::EventHandler(this, &Form1::Btn_remove_product_Click);
			// 
			// txtBox_remove_product
			// 
			this->txtBox_remove_product->Location = System::Drawing::Point(35, 296);
			this->txtBox_remove_product->Name = L"txtBox_remove_product";
			this->txtBox_remove_product->Size = System::Drawing::Size(183, 20);
			this->txtBox_remove_product->TabIndex = 14;
			// 
			// btn_filter_comboBox
			// 
			this->btn_filter_comboBox->Location = System::Drawing::Point(28, 334);
			this->btn_filter_comboBox->Name = L"btn_filter_comboBox";
			this->btn_filter_comboBox->Size = System::Drawing::Size(199, 23);
			this->btn_filter_comboBox->TabIndex = 15;
			this->btn_filter_comboBox->Text = L"V - Filtrar";
			this->btn_filter_comboBox->UseVisualStyleBackColor = true;
			this->btn_filter_comboBox->Click += gcnew System::EventHandler(this, &Form1::Btn_filter_comboBox_Click);
			// 
			// cmbBox_filter_products
			// 
			this->cmbBox_filter_products->FormattingEnabled = true;
			this->cmbBox_filter_products->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bebidas", L"Frutas", L"Condimentos" });
			this->cmbBox_filter_products->Location = System::Drawing::Point(28, 370);
			this->cmbBox_filter_products->Name = L"cmbBox_filter_products";
			this->cmbBox_filter_products->Size = System::Drawing::Size(199, 21);
			this->cmbBox_filter_products->TabIndex = 16;
			// 
			// btn_expensive_product
			// 
			this->btn_expensive_product->Location = System::Drawing::Point(28, 408);
			this->btn_expensive_product->Name = L"btn_expensive_product";
			this->btn_expensive_product->Size = System::Drawing::Size(199, 23);
			this->btn_expensive_product->TabIndex = 17;
			this->btn_expensive_product->Text = L"VI - Produto mais caro";
			this->btn_expensive_product->UseVisualStyleBackColor = true;
			this->btn_expensive_product->Click += gcnew System::EventHandler(this, &Form1::Btn_expensive_product_Click);
			// 
			// txtBox_expensive_product
			// 
			this->txtBox_expensive_product->Location = System::Drawing::Point(28, 445);
			this->txtBox_expensive_product->Name = L"txtBox_expensive_product";
			this->txtBox_expensive_product->Size = System::Drawing::Size(199, 20);
			this->txtBox_expensive_product->TabIndex = 18;
			// 
			// btn_quantity_radios
			// 
			this->btn_quantity_radios->Location = System::Drawing::Point(1, 19);
			this->btn_quantity_radios->Name = L"btn_quantity_radios";
			this->btn_quantity_radios->Size = System::Drawing::Size(199, 23);
			this->btn_quantity_radios->TabIndex = 19;
			this->btn_quantity_radios->Text = L"VII - Quantidade a zero\?";
			this->btn_quantity_radios->UseVisualStyleBackColor = true;
			this->btn_quantity_radios->Click += gcnew System::EventHandler(this, &Form1::Btn_quantity_radios_Click);
			// 
			// rdBtn_Show
			// 
			this->rdBtn_Show->AutoSize = true;
			this->rdBtn_Show->Location = System::Drawing::Point(20, 61);
			this->rdBtn_Show->Name = L"rdBtn_Show";
			this->rdBtn_Show->Size = System::Drawing::Size(57, 17);
			this->rdBtn_Show->TabIndex = 20;
			this->rdBtn_Show->TabStop = true;
			this->rdBtn_Show->Text = L"Mostra";
			this->rdBtn_Show->UseVisualStyleBackColor = true;
			// 
			// rdBtn_dont_show
			// 
			this->rdBtn_dont_show->AutoSize = true;
			this->rdBtn_dont_show->Location = System::Drawing::Point(120, 61);
			this->rdBtn_dont_show->Name = L"rdBtn_dont_show";
			this->rdBtn_dont_show->Size = System::Drawing::Size(80, 17);
			this->rdBtn_dont_show->TabIndex = 21;
			this->rdBtn_dont_show->TabStop = true;
			this->rdBtn_dont_show->Text = L"Não Mostra";
			this->rdBtn_dont_show->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_quantity_radios);
			this->groupBox2->Controls->Add(this->rdBtn_Show);
			this->groupBox2->Controls->Add(this->rdBtn_dont_show);
			this->groupBox2->Location = System::Drawing::Point(28, 483);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(212, 100);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Botões de Radio";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"VIII - Por Categoria";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// chkBox_drinks
			// 
			this->chkBox_drinks->AutoSize = true;
			this->chkBox_drinks->Location = System::Drawing::Point(208, 19);
			this->chkBox_drinks->Name = L"chkBox_drinks";
			this->chkBox_drinks->Size = System::Drawing::Size(64, 17);
			this->chkBox_drinks->TabIndex = 24;
			this->chkBox_drinks->Text = L"Bebidas";
			this->chkBox_drinks->UseVisualStyleBackColor = true;
			// 
			// chkBox_fruits
			// 
			this->chkBox_fruits->AutoSize = true;
			this->chkBox_fruits->Location = System::Drawing::Point(299, 19);
			this->chkBox_fruits->Name = L"chkBox_fruits";
			this->chkBox_fruits->Size = System::Drawing::Size(55, 17);
			this->chkBox_fruits->TabIndex = 25;
			this->chkBox_fruits->Text = L"Frutas";
			this->chkBox_fruits->UseVisualStyleBackColor = true;
			// 
			// chkBox_condiments
			// 
			this->chkBox_condiments->AutoSize = true;
			this->chkBox_condiments->Location = System::Drawing::Point(389, 19);
			this->chkBox_condiments->Name = L"chkBox_condiments";
			this->chkBox_condiments->Size = System::Drawing::Size(87, 17);
			this->chkBox_condiments->TabIndex = 26;
			this->chkBox_condiments->Text = L"Condimentos";
			this->chkBox_condiments->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->chkBox_condiments);
			this->groupBox3->Controls->Add(this->chkBox_drinks);
			this->groupBox3->Controls->Add(this->chkBox_fruits);
			this->groupBox3->Location = System::Drawing::Point(285, 334);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(497, 46);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"CheckBoxes";
			// 
			// btn_avg_products
			// 
			this->btn_avg_products->Location = System::Drawing::Point(0, 29);
			this->btn_avg_products->Name = L"btn_avg_products";
			this->btn_avg_products->Size = System::Drawing::Size(165, 23);
			this->btn_avg_products->TabIndex = 28;
			this->btn_avg_products->Text = L"IX - Média";
			this->btn_avg_products->UseVisualStyleBackColor = true;
			this->btn_avg_products->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
			// 
			// txtBox_avg_type
			// 
			this->txtBox_avg_type->Location = System::Drawing::Point(190, 35);
			this->txtBox_avg_type->Name = L"txtBox_avg_type";
			this->txtBox_avg_type->Size = System::Drawing::Size(100, 20);
			this->txtBox_avg_type->TabIndex = 29;
			// 
			// txtBox_avg_result
			// 
			this->txtBox_avg_result->Location = System::Drawing::Point(306, 35);
			this->txtBox_avg_result->Name = L"txtBox_avg_result";
			this->txtBox_avg_result->Size = System::Drawing::Size(115, 20);
			this->txtBox_avg_result->TabIndex = 30;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lbl_avg_result);
			this->groupBox4->Controls->Add(this->lbl_type_avg);
			this->groupBox4->Controls->Add(this->btn_avg_products);
			this->groupBox4->Controls->Add(this->txtBox_avg_result);
			this->groupBox4->Controls->Add(this->txtBox_avg_type);
			this->groupBox4->Location = System::Drawing::Point(285, 408);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(440, 78);
			this->groupBox4->TabIndex = 31;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Média";
			// 
			// lbl_avg_result
			// 
			this->lbl_avg_result->AutoSize = true;
			this->lbl_avg_result->Location = System::Drawing::Point(312, 13);
			this->lbl_avg_result->Name = L"lbl_avg_result";
			this->lbl_avg_result->Size = System::Drawing::Size(83, 13);
			this->lbl_avg_result->TabIndex = 32;
			this->lbl_avg_result->Text = L"Resultado Final:";
			// 
			// lbl_type_avg
			// 
			this->lbl_type_avg->AutoSize = true;
			this->lbl_type_avg->Location = System::Drawing::Point(205, 13);
			this->lbl_type_avg->Name = L"lbl_type_avg";
			this->lbl_type_avg->Size = System::Drawing::Size(55, 13);
			this->lbl_type_avg->TabIndex = 31;
			this->lbl_type_avg->Text = L"Categoria:";
			// 
			// btn_string
			// 
			this->btn_string->Location = System::Drawing::Point(285, 511);
			this->btn_string->Name = L"btn_string";
			this->btn_string->Size = System::Drawing::Size(165, 23);
			this->btn_string->TabIndex = 32;
			this->btn_string->Text = L"X - String";
			this->btn_string->UseVisualStyleBackColor = true;
			this->btn_string->Click += gcnew System::EventHandler(this, &Form1::Btn_string_Click);
			// 
			// btn_string_category
			// 
			this->btn_string_category->Location = System::Drawing::Point(475, 513);
			this->btn_string_category->Name = L"btn_string_category";
			this->btn_string_category->Size = System::Drawing::Size(100, 20);
			this->btn_string_category->TabIndex = 33;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(493, 495);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Categoria:";
			// 
			// listBox_strings
			// 
			this->listBox_strings->FormattingEnabled = true;
			this->listBox_strings->Location = System::Drawing::Point(285, 544);
			this->listBox_strings->Name = L"listBox_strings";
			this->listBox_strings->Size = System::Drawing::Size(497, 56);
			this->listBox_strings->TabIndex = 35;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 632);
			this->Controls->Add(this->listBox_strings);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_string_category);
			this->Controls->Add(this->btn_string);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->txtBox_expensive_product);
			this->Controls->Add(this->btn_expensive_product);
			this->Controls->Add(this->cmbBox_filter_products);
			this->Controls->Add(this->btn_filter_comboBox);
			this->Controls->Add(this->txtBox_remove_product);
			this->Controls->Add(this->btn_remove_product);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btn_clean_grid);
			this->Controls->Add(this->btn_initialize);
			this->Controls->Add(this->dataGrid_production);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"09 - Marco Silva";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_production))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//function to read the number of lines inside the grid
	private: int lineCounter()
	{
		int rows = dataGrid_production->Rows->Count - 1;
		return rows;
	}

	// data grid view code
	private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	// 1 - button to initialize grid
	private: System::Void Btn_initialize_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGrid_production->Rows->Add("Chá", "2", "100", "Bebidas");
		dataGrid_production->Rows->Add("Sumo", "3", "300", "Bebidas");
		dataGrid_production->Rows->Add("Melancia", "4", "50", "Frutas");
		dataGrid_production->Rows->Add("Pimentão", "1", "200", "Condimentos");
		dataGrid_production->Rows->Add("Vinhão", "7", "0", "Bebidas");
	}
	// 2 - button to clean the grid
	private: System::Void Btn_clean_grid_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGrid_production->Rows->Clear();
	}
	// 3 - button to insert a new product in the grid
	private: System::Void Btn_new_product_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ addName = txtBox_add_name->Text;
		String^ addPrice = txtBox_add_price->Text;
		String^ addQuantity = txtBox_add_quantity->Text;
		String^ addType = txtBox_add_type->Text;

		dataGrid_production->Rows->Add(addName, addPrice, addQuantity, addType);
	}
	
	// 4 - button to remove a product
	//used a function that counts the lines each time because when I remove the found product, an error would show up
	private: System::Void Btn_remove_product_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ productToRemove = txtBox_remove_product->Text->ToUpper();
		String^ productName = "";

		for (int i = 0; i < lineCounter(); i++) {
			productName = dataGrid_production->Rows[i]->Cells[0]->Value->ToString()->ToUpper();

			if (productToRemove == productName)
			{
				dataGrid_production->Rows->RemoveAt(i);
			}
		}
	}

	// 5 - button to filter the products by the selected category
	//string that gets the value of the selected product in the combo, for easy reading in the conditional
	//using the visible control to hide/show the product
	private: System::Void Btn_filter_comboBox_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter();
		String^ elementSelected = "";
		String^ productType = "";

		if (cmbBox_filter_products->Text == "Bebidas") { elementSelected = "Bebidas"; }
		if (cmbBox_filter_products->Text == "Frutas") { elementSelected = "Frutas"; }
		if (cmbBox_filter_products->Text == "Condimentos") { elementSelected = "Condimentos"; }

		for (int i = 0; i < rows; i++)
		{
			productType = dataGrid_production->Rows[i]->Cells[3]->Value->ToString();

			if (elementSelected != productType)
			{
				dataGrid_production->Rows[i]->Visible = false;
			}
			else {
				dataGrid_production->Rows[i]->Visible = true;
			}
		}
	}

	// 6 - button to find the most expensive product
	//declares an int to hold the maxprice and other to get the actual price, for easy comparation
	private: System::Void Btn_expensive_product_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter(), actualMaxPrice = 0;
		int productPrice = 0;
		String^ expensive_product = "";

		for (int i = 0; i < rows; i++)
		{
			productPrice = Convert::ToInt16(dataGrid_production->Rows[i]->Cells[1]->Value);

			if (productPrice > actualMaxPrice )
			{
				actualMaxPrice = Convert::ToInt16(dataGrid_production->Rows[i]->Cells[1]->Value);
				expensive_product = dataGrid_production->Rows[i]->Cells[0]->Value->ToString();
			}
		}

		txtBox_expensive_product->Text = expensive_product;
	}

	// 7 - button that checks the radio button and acts acordingly with what is selected
	// if the radio button is checked and the quantity of the product is 0, that product is hidden
	private: System::Void Btn_quantity_radios_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter();
		int quantity = 0;

		for (int i = 0; i < rows; i++)
		{
			quantity = Convert::ToInt16(dataGrid_production->Rows[i]->Cells[2]->Value);
			if (rdBtn_dont_show->Checked && quantity == 0)
			{
				 dataGrid_production->Rows[i]->Visible = false;
			}
			else if(rdBtn_Show) 
			{
				dataGrid_production->Rows[i]->Visible = true;
			}
		}
	}

	// 8 - button that shows only the products selected in the checkbox
	//first we hide all rows and then we use a conditional to verify what checkbox is activated
	//and if it is, if that row corresponds to the category of product selected
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter();
		String^ productType = "";

		for (int i = 0; i < rows; i++)
		{
			dataGrid_production->Rows[i]->Visible = false;

			productType = dataGrid_production->Rows[i]->Cells[3]->Value->ToString();

			if (chkBox_drinks->Checked && productType == "Bebidas")
			{	
				dataGrid_production->Rows[i]->Visible = true;
				
			}
			else if (chkBox_fruits->Checked && productType == "Frutas")
			{
				dataGrid_production->Rows[i]->Visible = true;
			}
			else if (chkBox_condiments->Checked && productType == "Condimentos")
			{
				dataGrid_production->Rows[i]->Visible = true;
			}
		}
	}

	 // 9 - button to calculate the average of a specific type of product
	//first we declare vars to get the actual price and type from the rows, and the respective quantity
	//we compare those to verify if they are in respective conditions asked by the user (type of product, and price bigger than 0)
	//then we return the avg to the textbox after calculations

	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = lineCounter(), quantity = 0;
		float average = 0, counter = 0;
		float actualPrice = 0;
		String^ productToSearch = txtBox_avg_type->Text->ToUpper();
		String^ actualProductType = "";

		for (int i = 0; i < rows; i++)
		{
			quantity = Convert::ToInt16(dataGrid_production->Rows[i]->Cells[2]->Value);
			actualPrice = Convert::ToInt16(dataGrid_production->Rows[i]->Cells[1]->Value);
			actualProductType = dataGrid_production->Rows[i]->Cells[3]->Value->ToString()->ToUpper();

			if (actualProductType == productToSearch && actualPrice > 0)
			{
				average += (actualPrice * quantity);
				counter += quantity;
			}
		}
		average /= counter;

		txtBox_avg_result->Text = "Média: " + average.ToString("f2");		
	}


	// 10 - button to return to listbox the items from the category selected by the user
	private: System::Void Btn_string_Click(System::Object^ sender, System::EventArgs^ e) {

		int rows = lineCounter();
		String^ typeSearcher = btn_string_category->Text->ToUpper();
		String^ actualProductType = "";
		String^ prodName = "";
		String^ prodPrice = "";

		listBox_strings->Items->Clear();

		for (int i = 0; i < rows; i++)
		{
			actualProductType = dataGrid_production->Rows[i]->Cells[3]->Value->ToString()->ToUpper();
			prodName = Convert::ToString(dataGrid_production->Rows[i]->Cells[0]->Value);
			prodPrice = Convert::ToString(dataGrid_production->Rows[i]->Cells[1]->Value);

			if (actualProductType == typeSearcher)
			{
				listBox_strings->Items->Add(prodName + ", " + prodPrice + "€");
			}
		}
	}

//---------------------------------------------- coisas não relevantes que foram clicadas por acidente -------------------------
	//text box to add name of product
	private: System::Void TxtBox_add_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	//label preço
	private: System::Void Label_add_price_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
