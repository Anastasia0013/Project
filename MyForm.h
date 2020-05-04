#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Button^ Continue;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::RadioButton^ radioButton2;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;






	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Continue = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::Purple;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"English", L"Français", L"Русский " });
			this->comboBox1->Location = System::Drawing::Point(179, 324);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->comboBox1->Size = System::Drawing::Size(402, 54);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// Continue
			// 
			this->Continue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Continue.BackgroundImage")));
			this->Continue->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Continue->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Continue->ForeColor = System::Drawing::Color::Purple;
			this->Continue->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->Continue->Location = System::Drawing::Point(543, 603);
			this->Continue->Name = L"Continue";
			this->Continue->Size = System::Drawing::Size(214, 59);
			this->Continue->TabIndex = 1;
			this->Continue->Text = L"Continue";
			this->Continue->UseVisualStyleBackColor = true;
			this->Continue->Click += gcnew System::EventHandler(this, &MyForm::Continue_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Orchid;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(-57, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(867, 134);
			this->label1->TabIndex = 2;
			this->label1->Text = L"                           ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Plum;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Purple;
			this->label2->Location = System::Drawing::Point(36, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(708, 38);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Please select your language and click \"Continue\".";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Crimson;
			this->label3->Location = System::Drawing::Point(218, 396);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Plum;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Purple;
			this->label4->Location = System::Drawing::Point(37, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 34);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Plum;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Purple;
			this->label5->Location = System::Drawing::Point(37, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 34);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label5";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->ForeColor = System::Drawing::Color::Purple;
			this->textBox1->Location = System::Drawing::Point(43, 179);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 30);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox2->ForeColor = System::Drawing::Color::Purple;
			this->textBox2->Location = System::Drawing::Point(43, 358);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(286, 30);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Plum;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Purple;
			this->button1->Location = System::Drawing::Point(12, 603);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 59);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Plum;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Purple;
			this->button2->Location = System::Drawing::Point(508, 603);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(268, 59);
			this->button2->TabIndex = 10;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(12, 107);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(190, 36);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(12, 70);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(190, 36);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 32);
			this->label6->TabIndex = 13;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 32);
			this->label7->TabIndex = 14;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 278);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 32);
			this->label8->TabIndex = 15;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 480);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 32);
			this->label9->TabIndex = 16;
			this->label9->Text = L"label9";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Orchid;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 405);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 47);
			this->button3->TabIndex = 17;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox3->Location = System::Drawing::Point(12, 230);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(378, 30);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox4->Location = System::Drawing::Point(12, 344);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(378, 30);
			this->textBox4->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(18, 531);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 34);
			this->label10->TabIndex = 20;
			this->label10->Text = L"label10";
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(813, 694);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Continue);
			this->Controls->Add(this->comboBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::DarkOrchid;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Name = L"MyForm";
			this->Tag = L"";
			this->Text = L"Encryption";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//НАЧАЛО!!!!
#pragma endregion

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
//Выбор языка(1 страница), отвечает за кнопку Continue
private: System::Void Continue_Click(System::Object^ sender, System::EventArgs^ e) {
	//Язык не выбран, появляется сообщение об этом
	if(comboBox1->SelectedIndex == -1) {
		label3->Text = "Please choose your language!";
	}
	//Язык выбран, переход на 2 страницу
	if(comboBox1->SelectedIndex >-1){
		label2->Text = "";
		label1->Text = "";
		label3->Text = "";
		comboBox1->Visible = false;//Visible-отвечает за видимость
		Continue->Visible = false;
		textBox1->Visible = true;
		textBox2->Visible = true;
		button1->Visible = true;
		button2->Visible = true;
		//английский
		if (comboBox1->SelectedIndex == 0) {
			label4->Text = "Enter your name";
			label5->Text = "Enter the password";
			button2->Text = "Continue";
			button1->Text = "Back";
		}
		//французский
		if (comboBox1->SelectedIndex == 1) {
			label4->Text = "Entrez votre nom";
			label5->Text = "Entrez le mot de passe";
			button2->Text = "Continuer";
			button1->Text = "Revenir";
		}
		//русский
		if (comboBox1->SelectedIndex == 2) {
			label4->Text = "Введите своё имя";
			label5->Text = "Введите пароль";
			button2->Text = "Продолжить";
			button1->Text = "Назад";
		}
	}	
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
//Тоже первая страница(то, что не используется на 1 странице выключено(нет видимости))
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = "";
	label4->Text = "";
	label5->Text = "";
	label6->Text = "";
	label7->Text = "";
	label8->Text = "";
	label9->Text = "";
	label10->Text = "";
	textBox1->Visible = false;
	textBox2->Visible = false;
	textBox2->PasswordChar = '*';
	textBox3->Visible = false;
	textBox4->Visible = false;
	button1->Visible = false;
	button2->Visible = false;
	button3->Visible = false;
	radioButton1->Visible = false;
	radioButton2->Visible = false;
}
//Переход со 2 страницы на 1(кнопка назад)
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label2->Text = "Please select your language and click 'Continue'.";
	comboBox1->Visible = true;
	Continue->Visible = true;
	textBox1->Visible = false;
	textBox2->Visible = false;
	button1->Visible = false;
	button2->Visible = false;
	label4->Text = "";
	label5->Text = "";
	button2->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	button1->Visible=false;
}
//2 страница(кнопка продолжить)
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Проверка пароля
	//Верный пароль->переход на 3 страницу
	if (textBox2->Text == "1234321") {
		textBox1->Visible = false;
		textBox2->Visible = false;
		button1->Visible = false;
		button2->Visible = false;
		label4->Text = "";
		label5->Text = "";
		button2->Text = "";
		button1->Visible = false;
		button1->Visible = false;
		radioButton1->Visible = true;
		radioButton2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		if (comboBox1->SelectedIndex == 0) {
			label6->Text = "Mode";
			radioButton1->Text = "Encrypt";
			radioButton2->Text = "Decrypt";
			label7->Text = "Text";
			label8->Text = "Key";
			button3->Visible = true;
			button3->Text="Enter";	
		}
		if (comboBox1->SelectedIndex == 1) {
			label6->Text = "Mode";
			radioButton1->Text = "Chiffrert";
			radioButton2->Text = "Dechiffrer";
			label7->Text = "Texte";
			label8->Text = "Cle";
			button3->Visible = true;
			button3->Text = "Enterer";
		
		}
		if (comboBox1->SelectedIndex == 2) {
			label6->Text = "Режим";
			radioButton1->Text = "Зашифровать ";
			radioButton2->Text = "Расшифровать";
			label7->Text = "Текст";
			label8->Text = "Ключ";
			button3->Visible = true;
			button3->Text = "Ввод";
		
		}

	}
	//неверный пароль->сообщение об ошибки
	else {
		if (comboBox1->SelectedIndex == 0) {
			MessageBox::Show("Incorrect password", "ERROR");
		}
		if (comboBox1->SelectedIndex == 1) {
			MessageBox::Show("Mot de passe invalide", "ERREUR");
		}
		if (comboBox1->SelectedIndex == 2) {
			MessageBox::Show("Неверный пароль", "ОШИБКА");
		}
	}
}
	   //ОСНОВНАЯ ЧАСТЬ.
	   //Страница на английском
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0) {
			//radioButton1->Checked-проверка, какой режим выбран
			if (radioButton1->Checked) {
				label9->Text = "Encrypted message";
				label10->Text = "То что мы зашифровали на английском";
			}
			else {
				if (radioButton1->Checked) {
					label9->Text = "Decrypted message";
					label10->Text = "То что мы расшифровали на английском";
				}
				else {
					MessageBox::Show("No mode selected", "ERROR");
				}
			}
		}
		//на французском
		if (comboBox1->SelectedIndex == 1) {
			if (radioButton1->Checked) {
				label9->Text = "Message crypte";
				label10->Text = "То что мы зашифровали на французском";
			}
			else {
				if (radioButton2->Checked) {
					label9->Text = "Message dechiffre";
					label10->Text = "То что мы расшифровали на английском";
				}
				else {
					MessageBox::Show("Aucun mode selectionne", "ERREUR");
				}
			}
		}
		//на русском
		if (comboBox1->SelectedIndex == 2) {
			if (radioButton1->Checked) {
				label9->Text = "Зашифрованное сообщение";
				label10->Text = "То что мы зашифровали на русском";
			}
			else {
				if (radioButton2->Checked) {
					label9->Text = "Расшифрованное сообщение";
					label10->Text = "То что мы расшифровали на русском";
				}
				else {
					MessageBox::Show("Режим не выбран", "ОШИБКА");
				}
			}
		}
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}
