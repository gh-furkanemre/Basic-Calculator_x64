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
	private: System::Windows::Forms::Button^ TOPLAMA;
	private: System::Windows::Forms::Button^ CIKARMA;
	private: System::Windows::Forms::Button^ BOLME;
	protected:

	protected:



	private: System::Windows::Forms::Button^ CARPMA;
	private: System::Windows::Forms::Button^ ESITTIR;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ SEMBOL;

	private: System::Windows::Forms::TextBox^ SONUC;


	private: System::Windows::Forms::TextBox^ textBox3;



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
			this->TOPLAMA = (gcnew System::Windows::Forms::Button());
			this->CIKARMA = (gcnew System::Windows::Forms::Button());
			this->BOLME = (gcnew System::Windows::Forms::Button());
			this->CARPMA = (gcnew System::Windows::Forms::Button());
			this->ESITTIR = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SEMBOL = (gcnew System::Windows::Forms::TextBox());
			this->SONUC = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// TOPLAMA
			// 
			this->TOPLAMA->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->TOPLAMA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->TOPLAMA->Location = System::Drawing::Point(12, 227);
			this->TOPLAMA->Name = L"TOPLAMA";
			this->TOPLAMA->Size = System::Drawing::Size(86, 80);
			this->TOPLAMA->TabIndex = 1;
			this->TOPLAMA->Text = L"+";
			this->TOPLAMA->UseVisualStyleBackColor = true;
			this->TOPLAMA->Click += gcnew System::EventHandler(this, &MyForm::TOPLAMA_Click);
			// 
			// CIKARMA
			// 
			this->CIKARMA->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->CIKARMA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->CIKARMA->Location = System::Drawing::Point(104, 227);
			this->CIKARMA->Name = L"CIKARMA";
			this->CIKARMA->Size = System::Drawing::Size(86, 80);
			this->CIKARMA->TabIndex = 2;
			this->CIKARMA->Text = L"-";
			this->CIKARMA->UseVisualStyleBackColor = true;
			this->CIKARMA->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// BOLME
			// 
			this->BOLME->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->BOLME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->BOLME->Location = System::Drawing::Point(12, 313);
			this->BOLME->Name = L"BOLME";
			this->BOLME->Size = System::Drawing::Size(86, 80);
			this->BOLME->TabIndex = 3;
			this->BOLME->Text = L"/";
			this->BOLME->UseVisualStyleBackColor = true;
			this->BOLME->Click += gcnew System::EventHandler(this, &MyForm::BOLME_Click);
			// 
			// CARPMA
			// 
			this->CARPMA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->CARPMA->Location = System::Drawing::Point(104, 313);
			this->CARPMA->Name = L"CARPMA";
			this->CARPMA->Size = System::Drawing::Size(86, 80);
			this->CARPMA->TabIndex = 4;
			this->CARPMA->Text = L"*";
			this->CARPMA->UseVisualStyleBackColor = true;
			this->CARPMA->Click += gcnew System::EventHandler(this, &MyForm::CARPMA_Click);
			// 
			// ESITTIR
			// 
			this->ESITTIR->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ESITTIR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->ESITTIR->Location = System::Drawing::Point(238, 266);
			this->ESITTIR->Name = L"ESITTIR";
			this->ESITTIR->Size = System::Drawing::Size(86, 80);
			this->ESITTIR->TabIndex = 5;
			this->ESITTIR->Text = L"=";
			this->ESITTIR->UseVisualStyleBackColor = true;
			this->ESITTIR->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
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
			// SEMBOL
			// 
			this->SEMBOL->BackColor = System::Drawing::SystemColors::Window;
			this->SEMBOL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SEMBOL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->SEMBOL->Location = System::Drawing::Point(119, 13);
			this->SEMBOL->MaxLength = 1;
			this->SEMBOL->Multiline = true;
			this->SEMBOL->Name = L"SEMBOL";
			this->SEMBOL->ReadOnly = true;
			this->SEMBOL->Size = System::Drawing::Size(100, 100);
			this->SEMBOL->TabIndex = 7;
			this->SEMBOL->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SEMBOL->TextChanged += gcnew System::EventHandler(this, &MyForm::SEMBOL_TextChanged);
			// 
			// SONUC
			// 
			this->SONUC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->SONUC->Location = System::Drawing::Point(12, 119);
			this->SONUC->MaxLength = 12;
			this->SONUC->Multiline = true;
			this->SONUC->Name = L"SONUC";
			this->SONUC->Size = System::Drawing::Size(313, 100);
			this->SONUC->TabIndex = 9;
			this->SONUC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->Controls->Add(this->SONUC);
			this->Controls->Add(this->SEMBOL);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ESITTIR);
			this->Controls->Add(this->CARPMA);
			this->Controls->Add(this->BOLME);
			this->Controls->Add(this->CIKARMA);
			this->Controls->Add(this->TOPLAMA);
			this->MaximumSize = System::Drawing::Size(354, 448);
			this->MinimumSize = System::Drawing::Size(354, 448);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Hesap Makinesi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SEMBOL->Text = this->CIKARMA->Text;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->SEMBOL->Text == this->TOPLAMA->Text) {
			int result = System::Convert::ToInt64(this->textBox1->Text) + System::Convert::ToInt64(this->textBox3->Text);
			this->SONUC->Text = (System::Convert::ToString(result));
		}
		else if (this->SEMBOL->Text == this->CIKARMA->Text) {
			int result = System::Convert::ToInt64(this->textBox1->Text) - System::Convert::ToInt64(this->textBox3->Text);
			this->SONUC->Text = (System::Convert::ToString(result));
		}
		else if (this->SEMBOL->Text == this->BOLME->Text) {
			double result = System::Convert::ToDouble(this->textBox1->Text) / System::Convert::ToDouble(this->textBox3->Text);
			this->SONUC->Text = (System::Convert::ToString(result));
		}
		else if (this->SEMBOL->Text == this->CARPMA->Text) {
			double result = System::Convert::ToDouble(this->textBox1->Text) * System::Convert::ToDouble(this->textBox3->Text);
			this->SONUC->Text = (System::Convert::ToString(result));
		}
		else {
			WarningException("Sorry, something wrong..");
		}
	}
	private: System::Void TOPLAMA_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SEMBOL->Text = this->TOPLAMA->Text;
	}
	private: System::Void SEMBOL_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BOLME_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SEMBOL->Text = this->BOLME->Text;
	}
	private: System::Void CARPMA_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SEMBOL->Text = this->CARPMA->Text;
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
