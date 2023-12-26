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
















	private: System::Windows::Forms::Button^ addition;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ one;

	private: System::Windows::Forms::Button^ two;

	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ seven;





	private: System::Windows::Forms::Button^ eight;

	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ del;



	private: System::Windows::Forms::Button^ comma;

	private: System::Windows::Forms::Button^ zero;

	private: System::Windows::Forms::TextBox^ window;
	private: System::Windows::Forms::TextBox^ button1;
	private: System::Windows::Forms::TextBox^ button2;













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
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->comma = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->window = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// addition
			// 
			this->addition->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->addition->Location = System::Drawing::Point(300, 319);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(90, 90);
			this->addition->TabIndex = 1;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = true;
			this->addition->Click += gcnew System::EventHandler(this, &MyForm::addition_Click);
			// 
			// subtraction
			// 
			this->subtraction->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->subtraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->subtraction->Location = System::Drawing::Point(300, 415);
			this->subtraction->Name = L"subtraction";
			this->subtraction->Size = System::Drawing::Size(90, 90);
			this->subtraction->TabIndex = 2;
			this->subtraction->Text = L"-";
			this->subtraction->UseVisualStyleBackColor = true;
			this->subtraction->Click += gcnew System::EventHandler(this, &MyForm::subtraction_Click);
			// 
			// division
			// 
			this->division->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->division->Location = System::Drawing::Point(300, 127);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(90, 90);
			this->division->TabIndex = 3;
			this->division->Text = L"/";
			this->division->UseVisualStyleBackColor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			// 
			// multiplication
			// 
			this->multiplication->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->multiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->multiplication->Location = System::Drawing::Point(300, 223);
			this->multiplication->Name = L"multiplication";
			this->multiplication->Size = System::Drawing::Size(90, 90);
			this->multiplication->TabIndex = 4;
			this->multiplication->Text = L"X";
			this->multiplication->UseVisualStyleBackColor = true;
			this->multiplication->Click += gcnew System::EventHandler(this, &MyForm::multiplication_Click);
			// 
			// equal
			// 
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->equal->Location = System::Drawing::Point(300, 511);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(90, 70);
			this->equal->TabIndex = 5;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = true;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// one
			// 
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->one->Location = System::Drawing::Point(12, 415);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(90, 90);
			this->one->TabIndex = 10;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// two
			// 
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->two->Location = System::Drawing::Point(108, 415);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(90, 90);
			this->two->TabIndex = 11;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// three
			// 
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->three->Location = System::Drawing::Point(204, 415);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(90, 90);
			this->three->TabIndex = 12;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// four
			// 
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->four->Location = System::Drawing::Point(12, 319);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(90, 90);
			this->four->TabIndex = 13;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::four_Click);
			// 
			// five
			// 
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->five->Location = System::Drawing::Point(108, 319);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(90, 90);
			this->five->TabIndex = 14;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// six
			// 
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->six->Location = System::Drawing::Point(204, 319);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(90, 90);
			this->six->TabIndex = 15;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::six_Click);
			// 
			// seven
			// 
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->seven->Location = System::Drawing::Point(12, 223);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(90, 90);
			this->seven->TabIndex = 16;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::seven_Click);
			// 
			// eight
			// 
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->eight->Location = System::Drawing::Point(108, 223);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(90, 90);
			this->eight->TabIndex = 17;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::eight_Click);
			// 
			// nine
			// 
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->nine->Location = System::Drawing::Point(204, 223);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(90, 90);
			this->nine->TabIndex = 18;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->del->Location = System::Drawing::Point(12, 127);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(186, 90);
			this->del->TabIndex = 19;
			this->del->Text = L"DEL";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// comma
			// 
			this->comma->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->comma->Location = System::Drawing::Point(204, 127);
			this->comma->Name = L"comma";
			this->comma->Size = System::Drawing::Size(90, 90);
			this->comma->TabIndex = 20;
			this->comma->Text = L",";
			this->comma->UseVisualStyleBackColor = true;
			this->comma->Click += gcnew System::EventHandler(this, &MyForm::comma_Click);
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->zero->Location = System::Drawing::Point(12, 511);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(282, 70);
			this->zero->TabIndex = 21;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// window
			// 
			this->window->BackColor = System::Drawing::SystemColors::Window;
			this->window->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->window->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->window->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->window->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->window->HideSelection = false;
			this->window->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->window->Location = System::Drawing::Point(12, 12);
			this->window->MaxLength = 12;
			this->window->Multiline = true;
			this->window->Name = L"window";
			this->window->ReadOnly = true;
			this->window->ShortcutsEnabled = false;
			this->window->Size = System::Drawing::Size(378, 109);
			this->window->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(290, 12);
			this->button1->Name = L"button1";
			this->button1->ReadOnly = true;
			this->button1->Size = System::Drawing::Size(100, 22);
			this->button1->TabIndex = 22;
			this->button1->Visible = false;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(290, 40);
			this->button2->Name = L"button2";
			this->button2->ReadOnly = true;
			this->button2->Size = System::Drawing::Size(100, 22);
			this->button2->TabIndex = 23;
			this->button2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(402, 583);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->comma);
			this->Controls->Add(this->del);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->six);
			this->Controls->Add(this->five);
			this->Controls->Add(this->four);
			this->Controls->Add(this->three);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->window);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->multiplication);
			this->Controls->Add(this->division);
			this->Controls->Add(this->subtraction);
			this->Controls->Add(this->addition);
			this->MaximumSize = System::Drawing::Size(420, 630);
			this->MinimumSize = System::Drawing::Size(420, 630);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Basic Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
		this->symbol->Text = this->subtraction->Text;
	}
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
		int result;
		double result_dbl;

		if (this->symbol->Text == this->addition->Text) {
			result = System::Convert::ToInt64(this->textBox1->Text) + System::Convert::ToInt64(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (this->symbol->Text == this->subtraction->Text) {
			result = System::Convert::ToInt64(this->textBox1->Text) - System::Convert::ToInt64(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (this->symbol->Text == this->division->Text) {
			result_dbl = System::Convert::ToDouble(this->textBox1->Text) / System::Convert::ToDouble(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result_dbl));
		}
		else if (this->symbol->Text == this->multiplication->Text) {
			result_dbl = System::Convert::ToDouble(this->textBox1->Text) * System::Convert::ToDouble(this->textBox3->Text);
			this->window->Text = (System::Convert::ToString(result_dbl));
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
			this->textBox1->Clear();
		}//else if (this->textBox1->Text->Empty) {
			//this->textBox1->Text = "0";
		//}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(textBox3->Text, "[^0-9]")) {
			MessageBox::Show("Please enter only numbers.");
			this->textBox3->Clear();
		}
		//else if (this->textBox3->Text->Empty) {
			//this->textBox3->Text = "0";
		//}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}*/
	bool cLimit = true; // for "[.]" limit
	bool xLimit = true; // for "[/ * - +]" limit,	0=False, 1=True
	bool b1Limit = true; // for visible button limit
	bool b2Limit = true;
	//NUMBERS AND OTHER
	private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->zero->Text;
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->zero->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->zero->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->zero->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->zero->Text;
		}
		else {
			this->button1->Text += this->zero->Text;
		}
	}
	private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->one->Text;
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->one->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->one->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->one->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->one->Text;
		}
		else {
			this->button1->Text += this->one->Text;
		}
	}
	private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->two->Text;
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->two->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->two->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->two->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->two->Text;
		}
		else {
			this->button1->Text += this->two->Text;
		}
	}
	private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->three->Text;
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->three->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->three->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->three->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->three->Text;
		}
		else {
			this->button1->Text += this->three->Text;
		}
	}
	private: System::Void four_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->four->Text;	
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->four->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->four->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->four->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->four->Text;
		}
		else {
			this->button1->Text += this->four->Text;
		}
	}
	private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->five->Text;	
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->five->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->five->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->five->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->five->Text;
		}
		else {
			this->button1->Text += this->five->Text;
		}
	}
	private: System::Void six_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->six->Text;	
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->six->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->six->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->six->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->six->Text;
		}
		else {
			this->button1->Text += this->six->Text;
		}
	}
	private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->seven->Text;	
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->seven->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->seven->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->seven->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->seven->Text;
		}
		else {
			this->button1->Text += this->seven->Text;
		}
	}
	private: System::Void eight_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->eight->Text;
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->eight->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->eight->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->eight->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->eight->Text;
		}
		else {
			this->button1->Text += this->eight->Text;
		}
	}
	private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
		this->window->Text += this->nine->Text;	
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[/]")) {
			this->button2->Text += this->nine->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[*]")) {
			this->button2->Text += this->nine->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[-]")) {
			this->button2->Text += this->nine->Text;
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[+]")) {
			this->button2->Text += this->nine->Text;
		}
		else {
			this->button1->Text += this->nine->Text;
		}
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
		//if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[., /, * , -, +]")) {
			//this->window->Text += "0";
		//}
		this->window->Clear();
		this->button1->Clear();
		this->button2->Clear();
		cLimit = 1; //TRUE
		xLimit = 1;
		b1Limit = 1;
		b2Limit = 1;
	}
	private: System::Void comma_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[0-9]") && cLimit == 1) {
			this->window->Text += this->comma->Text;
			cLimit = 0; //FALSE

			if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[0-9]") && b1Limit == 1) {
				this->button1->Text += this->comma->Text;
				b1Limit = 0;
			}
			else if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[0-9]") && b2Limit == 1) {
				this->button2->Text += this->comma->Text;
				b2Limit = 0;
			}
		}
	}
	private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[0-9]") && xLimit == 1) {
			this->window->Text += this->division->Text;
			xLimit = 0;
			cLimit = 1;
		}
	}
	private: System::Void multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[0-9]") && xLimit == 1) {
			this->window->Text += "*";
			xLimit = 0;
			cLimit = 1;
		}
	}
	private: System::Void addition_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[0-9]") && xLimit == 1) {
			this->window->Text += this->addition->Text;
			xLimit = 0;
			cLimit = 1;
		}
	}
	private: System::Void subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(window->Text, "[0-9]") && xLimit == 1) {
			this->window->Text += this->subtraction->Text;
			xLimit = 0;
			cLimit = 1;
		}
	}
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
		double result;
		if (System::Text::RegularExpressions::Regex::IsMatch(this->window->Text, "[/]")) {
			result = System::Convert::ToDouble(this->button1->Text) / System::Convert::ToDouble(this->button2->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(this->window->Text, "[*]")) {
			result = System::Convert::ToDouble(this->button1->Text) * System::Convert::ToDouble(this->button2->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(this->window->Text, "[-]")) {
			result = System::Convert::ToDouble(this->button1->Text) - System::Convert::ToDouble(this->button2->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else if (System::Text::RegularExpressions::Regex::IsMatch(this->window->Text, "[+]")) {
			result = System::Convert::ToDouble(this->button1->Text) + System::Convert::ToDouble(this->button2->Text);
			this->window->Text = (System::Convert::ToString(result));
		}
		else {
			MessageBox::Show("The calculator is empty", "error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->window->Clear();
		}
	}
};
}
