#pragma once

namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Linen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(46, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gen";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter N";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter M";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(92, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(92, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Linen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat ExtraBold", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(46, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 62);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Run";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(228, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(365, 129);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(228, 180);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(365, 129);
			this->dataGridView2->TabIndex = 7;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(228, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Input:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(228, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Output:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Linen;
			this->ClientSize = System::Drawing::Size(624, 321);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Matrix Processing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int N, M;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			N = Convert::ToInt32(textBox1->Text);
			M = Convert::ToInt32(textBox2->Text);
			dataGridView1->RowCount = N;
			dataGridView1->ColumnCount = M;
			dataGridView1->Visible = true;
		}
		catch (...)
		{
			MessageBox::Show("Fill in N and M boxes >:C", "Oopsie", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int i, j, min, max, i2, i3;
		signed int sum=0, A[100][100];
		/*for (i=0; i<N; i++)
			for (j = 0; j < M; j++)
			{
				k = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				k++;
				dataGridView1->Rows[i]->Cells[j]->Value = k;
			}*/
		//converting to int array
		for (i = 0; i < N; i++)
			for (j = 0; j < M; j++)
			{
				A[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		//searching for min and max
		min = A[0][0];
		max = A[0][0];
		for (i = 0; i < N; i++)
			for (j = 0; j < M; j++)
			{
				if (A[i][j] < min)
				{
					min = A[i][j];
					i2 = i;
				}				
				if (A[i][j] > max)
				{
					max = A[i][j];
					i3 = i;
				}				
			}
		//processing and printing
		dataGridView2->RowCount = N;
		dataGridView2->ColumnCount = M;
		dataGridView2->Visible = true;
		for (i = 0; i < N; i++)
			for (j = 0; j < M; j++)
			{
				dataGridView2->Rows[i]->Cells[j]->Value = A[i][j];
			}
		if (i2 == i3)
		{
			for (i = 0; i < N; i++)
				for (j = 0; j < M; j++)
					if (A[i][j] < 0)
						sum += A[i][j];
			for (j = 0; j < M; j++)
			{
				min = A[0][j];
				for (i = 0; i < N; i++)
					if (A[i][j] < min)
						min = A[i][j];
				for (i = 0; i < N; i++)
					if (A[i][j] == min)
						dataGridView2->Rows[i]->Cells[j]->Value = sum;
			}
		}
		else
		{
			for (j = 0; j < M; j++)
				dataGridView2->Rows[i2]->Cells[j]->Value = A[i3][j];
			for (j = 0; j < M; j++)
				dataGridView2->Rows[i3]->Cells[j]->Value = A[i2][j];
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
	
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
