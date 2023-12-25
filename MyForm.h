#pragma once

namespace $safeprojectname$ {

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

	private: System::Windows::Forms::Button^ subtraction;
	private: System::Windows::Forms::Button^ division;

	protected:



	private: System::Windows::Forms::Button^ multiplication;
	private: System::Windows::Forms::Button^ and;
	protected:

	protected:







	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ symbol;

	private: System::Windows::Forms::TextBox^ window;




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ addition;
	private: System::Windows::Forms::Button^ equal;



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
			this->addition = (gcnew System::Windows::Forms::Button());
			this->subtraction = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->multiplication = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->symbol = (gcnew System::Windows::Forms::TextBox());
			this->window = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// addition
			// 
			this->addition->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->addition->Location = System::Drawing::Point(12, 227);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(86, 80);
			this->addition->TabIndex = 1;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = true;
			this->addition->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			// 
			// subtraction
			// 
			this->subtraction->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->subtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->subtraction->Location = System::Drawing::Point(104, 227);
			this->subtraction->Name = L"subtraction";
			this->subtraction->Size = System::Drawing::Size(86, 80);
			this->subtraction->TabIndex = 2;
			this->subtraction->Text = L"-";
			this->subtraction->UseVisualStyleBackColor = true;
			this->subtraction->Click += gcnew System::EventHandler(this, &MyForm::subtraction_Click);
			// 
			// division
			// 
			this->division->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->division->Location = System::Drawing::Point(12, 313);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(86, 80);
			this->division->TabIndex = 3;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			// 
			// multiplication
			// 
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->multiplication->Location = System::Drawing::Point(104, 313);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(86, 80);
			this->multiplication->TabIndex = 4;
			this->multiplication->Text = L"*";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			// 
			// equal
			// 
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->equal->Location = System::Drawing::Point(238, 266);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(86, 80);
			this->equal->TabIndex = 5;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = true;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(12, 13);
			this->textBox1->MaxLength = 12;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 100);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// symbol
			// 
			this->symbol->BackColor = System::Drawing::SystemColors::Window;
			this->symbol->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->symbol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->symbol->Location = System::Drawing::Point(119, 13);
			this->symbol->MaxLength = 1;
			this->symbol->Multiline = true;
			this->symbol->Name = L"symbol";
			this->symbol->ReadOnly = true;
			this->symbol->Size = System::Drawing::Size(100, 100);
			this->symbol->TabIndex = 7;
			this->symbol->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->symbol->TextChanged += gcnew System::EventHandler(this, &MyForm::SEMBOL_TextChanged);
			// 
			// window
			// 
			this->window->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->window->Location = System::Drawing::Point(12, 119);
			this->window->MaxLength = 12;
			this->window->Multiline = true;
			this->window->Name = L"window";
			this->window->Size = System::Drawing::Size(313, 100);
			this->window->TabIndex = 9;
			this->window->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox3->Location = System::Drawing::Point(225, 13);
			this->textBox3->MaxLength = 12;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 100);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(336, 401);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->window);
			this->Controls->Add(this->symbol);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->division);
			this->Controls->Add(this->subtraction);
			this->Controls->Add(this->addition);
			this->MaximumSize = System::Drawing::Size(354, 448);
			this->MinimumSize = System::Drawing::Size(354, 448);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Basic Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
		this->symbol->Text = this->subtraction->Text;
	}
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->symbol->Text == this->addition->Text) {
			int result = System::Convert::ToInt64(this->textBox1->Text) + System::Convert::ToInt64(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (this->symbol->Text == this->subtraction->Text) {
			int result = System::Convert::ToInt64(this->textBox1->Text) - System::Convert::ToInt64(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (this->symbol->Text == this->division->Text) {
			double result = System::Convert::ToDouble(this->textBox1->Text) / System::Convert::ToDouble(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (this->symbol->Text == this->multiplication->Text) {
			double result = System::Convert::ToDouble(this->textBox1->Text) * System::Convert::ToDouble(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else {
			WarningException("Sorry, something wrong..");
		}
	}
	private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
		this->symbol->Text = this->addition->Text;
	}
	private: System::Void SEMBOL_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
		this->symbol->Text = this->division->Text;
	}
	private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		this->symbol->Text = this->multiplication->Text;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[^0-9]"))
		{
			MessageBox::Show("Please enter only numbers.");
			textBox1->Clear();
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[^0-9]")) {
			MessageBox::Show("Please enter only numbers.");
			textBox3->Clear();
		}
	}
};
}
