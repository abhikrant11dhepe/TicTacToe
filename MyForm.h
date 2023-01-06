#pragma once

namespace TicTacToe {

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ b9;

	private: System::Windows::Forms::Button^ b8;

	private: System::Windows::Forms::Button^ b7;

	private: System::Windows::Forms::Button^ b6;

	private: System::Windows::Forms::Button^ b5;

	private: System::Windows::Forms::Button^ b4;

	private: System::Windows::Forms::Button^ b3;

	private: System::Windows::Forms::Button^ b2;

	private: System::Windows::Forms::Button^ b1;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblPlayerO;

	private: System::Windows::Forms::Label^ lblPlayerX;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label5);
			this->panel1->ForeColor = System::Drawing::Color::Azure;
			this->panel1->Location = System::Drawing::Point(12, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1730, 159);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(460, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(887, 86);
			this->label5->TabIndex = 1;
			this->label5->Text = L"TIC TAC TOE GAME";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(12, 250);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1730, 742);
			this->panel2->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(884, 22);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(831, 693);
			this->panel4->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button11);
			this->panel6->Controls->Add(this->button10);
			this->panel6->Location = System::Drawing::Point(22, 357);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(789, 313);
			this->panel6->TabIndex = 1;
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(49, 171);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(688, 92);
			this->button11->TabIndex = 2;
			this->button11->Text = L"NEW GAME";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(49, 43);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(688, 92);
			this->button10->TabIndex = 1;
			this->button10->Text = L"RESET";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->lblPlayerO);
			this->panel5->Controls->Add(this->lblPlayerX);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(22, 20);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(789, 313);
			this->panel5->TabIndex = 0;
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::Color::Transparent;
			this->lblPlayerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerO->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerO->ForeColor = System::Drawing::Color::Azure;
			this->lblPlayerO->Location = System::Drawing::Point(427, 171);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(310, 81);
			this->lblPlayerO->TabIndex = 3;
			this->lblPlayerO->Text = L"0";
			this->lblPlayerO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::Color::Transparent;
			this->lblPlayerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerX->ForeColor = System::Drawing::Color::Azure;
			this->lblPlayerX->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblPlayerX.Image")));
			this->lblPlayerX->Location = System::Drawing::Point(427, 41);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(310, 85);
			this->lblPlayerX->TabIndex = 2;
			this->lblPlayerX->Text = L"0";
			this->lblPlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Azure;
			this->label2->Location = System::Drawing::Point(41, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(273, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Azure;
			this->label1->Location = System::Drawing::Point(41, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->b9);
			this->panel3->Controls->Add(this->b8);
			this->panel3->Controls->Add(this->b7);
			this->panel3->Controls->Add(this->b6);
			this->panel3->Controls->Add(this->b5);
			this->panel3->Controls->Add(this->b4);
			this->panel3->Controls->Add(this->b3);
			this->panel3->Controls->Add(this->b2);
			this->panel3->Controls->Add(this->b1);
			this->panel3->Location = System::Drawing::Point(17, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(861, 693);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// b9
			// 
			this->b9->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->Location = System::Drawing::Point(612, 498);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(156, 153);
			this->b9->TabIndex = 8;
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// b8
			// 
			this->b8->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(344, 498);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(156, 153);
			this->b8->TabIndex = 7;
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// b7
			// 
			this->b7->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(77, 498);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(156, 153);
			this->b7->TabIndex = 6;
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// b6
			// 
			this->b6->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(612, 269);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(156, 153);
			this->b6->TabIndex = 5;
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// b5
			// 
			this->b5->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(344, 269);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(156, 153);
			this->b5->TabIndex = 4;
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// b4
			// 
			this->b4->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(77, 269);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(156, 153);
			this->b4->TabIndex = 3;
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->Location = System::Drawing::Point(612, 46);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(156, 153);
			this->b3->TabIndex = 2;
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// b2
			// 
			this->b2->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(344, 46);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(156, 153);
			this->b2->TabIndex = 1;
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"ROG Fonts", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(77, 46);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(156, 153);
			this->b1->TabIndex = 0;
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1757, 1018);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		Boolean checker;
		int plusone;


#pragma endregion

		void Enable_False()
		{
			b1->Enabled = false;
			b2->Enabled = false;
			b3->Enabled = false;
			b4->Enabled = false;
			b5->Enabled = false;
			b6->Enabled = false;
			b7->Enabled = false;
			b8->Enabled = false;
			b9->Enabled = false;
		}

		void score()
		{
			if (b1->Text == "X" && b2->Text == "X" && b3->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::LightGray;
				b2->BackColor = System::Drawing::Color::LightGray;
				b3->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (b4->Text == "X" && b5->Text == "X" && b6->Text == "X")
			{
				b4->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b6->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (b7->Text == "X" && b8->Text == "X" && b9->Text == "X")
			{
				b7->BackColor = System::Drawing::Color::LightGray;
				b8->BackColor = System::Drawing::Color::LightGray;
				b9->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b1->Text == "X" && b4->Text == "X" && b7->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::LightGray;
				b4->BackColor = System::Drawing::Color::LightGray;
				b7->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b2->Text == "X" && b5->Text == "X" && b8->Text == "X")
			{
				b2->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b8->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b3->Text == "X" && b6->Text == "X" && b9->Text == "X")
			{
				b3->BackColor = System::Drawing::Color::LightGray;
				b6->BackColor = System::Drawing::Color::LightGray;
				b9->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b1->Text == "X" && b5->Text == "X" && b9->Text == "X")
			{
				b1->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b9->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b3->Text == "X" && b5->Text == "X" && b7->Text == "X")
			{
				b3->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b7->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

             //  for player O ##############################################################################################################


			if (b1->Text == "O" && b2->Text == "O" && b3->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::LightGray;
				b2->BackColor = System::Drawing::Color::LightGray;
				b3->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (b4->Text == "O" && b5->Text == "O" && b6->Text == "O")
			{
				b4->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b6->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (b7->Text == "O" && b8->Text == "O" && b9->Text == "O")
			{
				b7->BackColor = System::Drawing::Color::LightGray;
				b8->BackColor = System::Drawing::Color::LightGray;
				b9->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b1->Text == "O" && b4->Text == "O" && b7->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::LightGray;
				b4->BackColor = System::Drawing::Color::LightGray;
				b7->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b2->Text == "O" && b5->Text == "O" && b8->Text == "O")
			{
				b2->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b8->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b3->Text == "O" && b6->Text == "O" && b9->Text == "O")
			{
				b3->BackColor = System::Drawing::Color::LightGray;
				b6->BackColor = System::Drawing::Color::LightGray;
				b9->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b1->Text == "O" && b5->Text == "O" && b9->Text == "O")
			{
				b1->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b9->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			if (b3->Text == "O" && b5->Text == "O" && b7->Text == "O")
			{
				b3->BackColor = System::Drawing::Color::LightGray;
				b5->BackColor = System::Drawing::Color::LightGray;
				b7->BackColor = System::Drawing::Color::LightGray;
				MessageBox::Show("The Winner Is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			//#############################################################################################################################################
		}

		

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b1->Text = "X";
		checker = true;
	}

	else
	{
		b1->Text = "O";
		checker = false;
	}
	score();
	b1->Enabled = false;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b2->Text = "X";
		checker = true;
	}

	else
	{
		b2->Text = "O";
		checker = false;
	}
	score();
	b2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b3->Text = "X";
		checker = true;
	}

	else
	{
		b3->Text = "O";
		checker = false;
	}
	score();
	b3->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b6->Text = "X";
		checker = true;
	}

	else
	{
		b6->Text = "O";
		checker = false;
	}
	score();
	b6->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b5->Text = "X";
		checker = true;
	}

	else
	{
		b5->Text = "O";
		checker = false;
	}
	score();
	b5->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b4->Text = "X";
		checker = true;
	}

	else
	{
		b4->Text = "O";
		checker = false;
	}
	score();
	b4->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b7->Text = "X";
		checker = true;
	}

	else
	{
		b7->Text = "O";
		checker = false;
	}
	score();
	b7->Enabled = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b8->Text = "X";
		checker = true;
	}

	else
	{
		b8->Text = "O";
		checker = false;
	}
	score();
	b8->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false)
	{
		b9->Text = "X";
		checker = true;
	}

	else
	{
		b9->Text = "O";
		checker = false;
	}
	score();
	b9->Enabled = false;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	b1->Enabled = true;
	b2->Enabled = true;
	b3->Enabled = true;
	b4->Enabled = true;
	b5->Enabled = true;
	b6->Enabled = true;
	b7->Enabled = true;
	b8->Enabled = true;
	b9->Enabled = true;

	b1->Text = "";
	b2->Text = "";
	b3->Text = "";
	b4->Text = "";
	b5->Text = "";
	b6->Text = "";
	b7->Text = "";
	b8->Text = "";
	b9->Text = "";

	button11->Enabled = true;

	b1->BackColor = System::Drawing::Color::WhiteSmoke;
	b2->BackColor = System::Drawing::Color::WhiteSmoke;
	b3->BackColor = System::Drawing::Color::WhiteSmoke;
	b4->BackColor = System::Drawing::Color::WhiteSmoke;
	b5->BackColor = System::Drawing::Color::WhiteSmoke;
	b6->BackColor = System::Drawing::Color::WhiteSmoke;
	b7->BackColor = System::Drawing::Color::WhiteSmoke;
	b8->BackColor = System::Drawing::Color::WhiteSmoke;
	b9->BackColor = System::Drawing::Color::WhiteSmoke;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	//New Game button
	b1->Enabled = true;
	b2->Enabled = true;
	b3->Enabled = true;
	b4->Enabled = true;
	b5->Enabled = true;
	b6->Enabled = true;
	b7->Enabled = true;
	b8->Enabled = true;
	b9->Enabled = true;

	b1->Text = "";
	b2->Text = "";
	b3->Text = "";
	b4->Text = "";
	b5->Text = "";
	b6->Text = "";
	b7->Text = "";
	b8->Text = "";
	b9->Text = "";
	lblPlayerO->Text = "0";
	lblPlayerX->Text = "0";

	button11->Enabled = true;

	b1->BackColor = System::Drawing::Color::WhiteSmoke;
	b2->BackColor = System::Drawing::Color::WhiteSmoke;
	b3->BackColor = System::Drawing::Color::WhiteSmoke;
	b4->BackColor = System::Drawing::Color::WhiteSmoke;
	b5->BackColor = System::Drawing::Color::WhiteSmoke;
	b6->BackColor = System::Drawing::Color::WhiteSmoke;
	b7->BackColor = System::Drawing::Color::WhiteSmoke;
	b8->BackColor = System::Drawing::Color::WhiteSmoke;
	b9->BackColor = System::Drawing::Color::WhiteSmoke;

}
};
}
