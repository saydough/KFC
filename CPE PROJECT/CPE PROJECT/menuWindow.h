#pragma once
#include "prepareWindow.h"
#include"User.h"
#include "serveWindow.h"
#include "historyWindow.h"
#include <cliext/vector>

namespace CPEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menuWindow
	/// </summary>
	public ref class menuWindow : public System::Windows::Forms::Form
	{
	public:
		String^ userName;
		menuWindow(void)
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
		~menuWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnLog;

	private: System::Windows::Forms::Button^ btnServe;

	private: System::Windows::Forms::Button^ btnPrepare;

	private: System::Windows::Forms::Button^ btnMenu;




	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ final;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ newOrder;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuWindow::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnServe = (gcnew System::Windows::Forms::Button());
			this->btnPrepare = (gcnew System::Windows::Forms::Button());
			this->btnMenu = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->final = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->newOrder = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(1296, 556);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(266, 69);
			this->button4->TabIndex = 22;
			this->button4->Text = L"ADD TO ORDER";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &menuWindow::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(712, 997);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(266, 69);
			this->button5->TabIndex = 23;
			this->button5->Text = L"ADD TO ORDER";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &menuWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(1281, 997);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(266, 69);
			this->button6->TabIndex = 24;
			this->button6->Text = L"ADD TO ORDER";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &menuWindow::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(146, 997);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(266, 69);
			this->button3->TabIndex = 21;
			this->button3->Text = L"ADD TO ORDER";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &menuWindow::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(712, 556);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(266, 69);
			this->button2->TabIndex = 20;
			this->button2->Text = L"ADD TO ORDER";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &menuWindow::button2_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(1458, 942);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 52);
			this->label13->TabIndex = 39;
			this->label13->Text = L"5 Seconds";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(1318, 701);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(206, 226);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 38;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(732, 701);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(224, 225);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 37;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(1285, 273);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(262, 225);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 36;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(196, 715);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(184, 211);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 35;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(734, 308);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(244, 148);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 34;
			this->pictureBox7->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(1257, 942);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 52);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Iced Tea";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(887, 942);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(153, 52);
			this->label11->TabIndex = 32;
			this->label11->Text = L"9 Seconds";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(1442, 501);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(169, 52);
			this->label9->TabIndex = 30;
			this->label9->Text = L"17 Seconds";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(1219, 501);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(201, 52);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Fried Chicken";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(303, 942);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(169, 52);
			this->label7->TabIndex = 28;
			this->label7->Text = L"15 Seconds";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(116, 942);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 52);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Nuggets";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(871, 501);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(169, 52);
			this->label5->TabIndex = 26;
			this->label5->Text = L"13 Seconds";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(674, 501);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 52);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Fries";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(146, 556);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(266, 69);
			this->button1->TabIndex = 19;
			this->button1->Text = L"ADD TO ORDER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &menuWindow::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(303, 501);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 52);
			this->label3->TabIndex = 18;
			this->label3->Text = L"20 Seconds";
			this->label3->Click += gcnew System::EventHandler(this, &menuWindow::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(116, 501);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 52);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Burger";
			this->label2->Click += gcnew System::EventHandler(this, &menuWindow::label2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1142, 665);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(543, 440);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(13, 665);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(543, 440);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(577, 665);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(543, 440);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 14;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &menuWindow::pictureBox6_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(180, 308);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(212, 148);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 13;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1142, 230);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(543, 440);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(577, 230);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(543, 440);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 230);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(543, 440);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::Color::Black;
			this->btnLog->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnLog->FlatAppearance->BorderSize = 0;
			this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->ForeColor = System::Drawing::Color::White;
			this->btnLog->Location = System::Drawing::Point(1177, 129);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(321, 95);
			this->btnLog->TabIndex = 4;
			this->btnLog->Text = L"HISTORY LOG";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &menuWindow::btnLog_Click);
			// 
			// btnServe
			// 
			this->btnServe->BackColor = System::Drawing::Color::Black;
			this->btnServe->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnServe->FlatAppearance->BorderSize = 0;
			this->btnServe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnServe->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnServe->ForeColor = System::Drawing::Color::White;
			this->btnServe->Location = System::Drawing::Point(792, 129);
			this->btnServe->Name = L"btnServe";
			this->btnServe->Size = System::Drawing::Size(388, 95);
			this->btnServe->TabIndex = 3;
			this->btnServe->Text = L"NOW SERVING";
			this->btnServe->UseVisualStyleBackColor = false;
			this->btnServe->Click += gcnew System::EventHandler(this, &menuWindow::btnServe_Click);
			// 
			// btnPrepare
			// 
			this->btnPrepare->BackColor = System::Drawing::Color::Black;
			this->btnPrepare->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnPrepare->FlatAppearance->BorderSize = 0;
			this->btnPrepare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrepare->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrepare->ForeColor = System::Drawing::Color::White;
			this->btnPrepare->Location = System::Drawing::Point(447, 129);
			this->btnPrepare->Name = L"btnPrepare";
			this->btnPrepare->Size = System::Drawing::Size(348, 95);
			this->btnPrepare->TabIndex = 2;
			this->btnPrepare->Text = L"NOW PREPARING";
			this->btnPrepare->UseVisualStyleBackColor = false;
			this->btnPrepare->Click += gcnew System::EventHandler(this, &menuWindow::btnPrepare_Click);
			// 
			// btnMenu
			// 
			this->btnMenu->BackColor = System::Drawing::Color::Red;
			this->btnMenu->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnMenu->FlatAppearance->BorderSize = 0;
			this->btnMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenu->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMenu->ForeColor = System::Drawing::Color::White;
			this->btnMenu->Location = System::Drawing::Point(200, 129);
			this->btnMenu->Name = L"btnMenu";
			this->btnMenu->Size = System::Drawing::Size(250, 95);
			this->btnMenu->TabIndex = 1;
			this->btnMenu->Text = L"MENU";
			this->btnMenu->UseVisualStyleBackColor = false;
			this->btnMenu->Click += gcnew System::EventHandler(this, &menuWindow::btnMenu_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 125);
			this->label1->TabIndex = 0;
			this->label1->Text = L"KFC++";
			this->label1->Click += gcnew System::EventHandler(this, &menuWindow::label1_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(674, 942);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(124, 52);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Cookies";
			this->label14->Click += gcnew System::EventHandler(this, &menuWindow::label14_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(1614, 25);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 51);
			this->button7->TabIndex = 41;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &menuWindow::button7_Click_1);
			// 
			// final
			// 
			this->final->BackColor = System::Drawing::Color::Red;
			this->final->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->final->FlatAppearance->BorderSize = 0;
			this->final->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->final->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->final->ForeColor = System::Drawing::Color::White;
			this->final->Location = System::Drawing::Point(973, 1111);
			this->final->Name = L"final";
			this->final->Size = System::Drawing::Size(266, 69);
			this->final->TabIndex = 42;
			this->final->Text = L"FINALIZE ORDER";
			this->final->UseVisualStyleBackColor = false;
			this->final->Click += gcnew System::EventHandler(this, &menuWindow::final_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 1221);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 20);
			this->label10->TabIndex = 43;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1260, 1113);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(50, 67);
			this->label15->TabIndex = 44;
			this->label15->Text = L"0";
			this->label15->Click += gcnew System::EventHandler(this, &menuWindow::label15_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(573, 1111);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(394, 69);
			this->button8->TabIndex = 45;
			this->button8->Text = L"REMOVE RECENT MEAL";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &menuWindow::button8_Click);
			// 
			// newOrder
			// 
			this->newOrder->BackColor = System::Drawing::Color::Red;
			this->newOrder->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->newOrder->FlatAppearance->BorderSize = 0;
			this->newOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newOrder->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newOrder->ForeColor = System::Drawing::Color::White;
			this->newOrder->Location = System::Drawing::Point(353, 1111);
			this->newOrder->Name = L"newOrder";
			this->newOrder->Size = System::Drawing::Size(214, 69);
			this->newOrder->TabIndex = 46;
			this->newOrder->Text = L"NEW ORDER";
			this->newOrder->UseVisualStyleBackColor = false;
			this->newOrder->Click += gcnew System::EventHandler(this, &menuWindow::button9_Click);
			// 
			// menuWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1700, 1250);
			this->Controls->Add(this->newOrder);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->final);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnMenu);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btnPrepare);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btnServe);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"menuWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"menuWindow";
			this->Load += gcnew System::EventHandler(this, &menuWindow::menuWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void groupOrders_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	int numOrders = 0;
	int max = 0;
	List<String^>^ orders = gcnew List<String^>();
	List<int>^ duration = gcnew List<int>();
	prepareWindow^ prepare = gcnew prepareWindow(this, userName);
	serveWindow^ serve = gcnew serveWindow(this,prepare, "menu", userName);
	historyWindow^ history = gcnew historyWindow(this,prepare,serve,"menu");
	
	private: System::Void btnPrepare_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		prepare->ShowDialog();
	}
	private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		orders->Add ("Burger");
		duration->Add(20);
		numOrders++;
		label15->Text = numOrders.ToString();
		if (max < 20) {
			max = 20;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		orders->Add("Fries");
		duration->Add(13);
		numOrders++;
		label15->Text = numOrders.ToString();
		if (max < 13) {
			max = 13;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		orders->Add("Nuggets");
		duration->Add(15);
		numOrders++;
		label15->Text = numOrders.ToString();
		if (max < 15) {
			max = 15;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		orders->Add("Fried Chicken");
		duration->Add(17);
		numOrders++;
		label15->Text = numOrders.ToString();
		if (max < 17) {
			max = 17;
		}
	}
	private: System::Void btnServe_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		serve->ShowDialog();
	}
	
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   void ClearCSVFile(String^ filePath) {
		   // Write an empty string to the file to clear its content
		   System::IO::File::WriteAllText(filePath, "");
	   }
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	ClearCSVFile("completed_orders.csv");
	ClearCSVFile("completed_orders2.csv");
	this->Close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	orders->Add("Cookies");
	duration->Add(9);
	numOrders++;
	label15->Text = numOrders.ToString();
	if (max < 9) {
		max = 9;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	orders->Add("Iced Tea");
	duration->Add(5);
	numOrders++;
	label15->Text = numOrders.ToString();
	if (max < 5) {
		max = 5;
	}
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}

	   private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (numOrders > 0) {
			   orders->RemoveAt(orders->Count - 1);
			   duration->RemoveAt(duration->Count - 1);

			   if (duration->Count > 0) {
				   int highestDuration = duration[0];
				   for (int i = 1; i < duration->Count; i++) {
					   if (duration[i] > highestDuration) {
						   highestDuration = duration[i];
					   }
				   }
				   if (duration->Count > 0) {
					   max = highestDuration;
				   }
				   else {
					   max = 0;
				   }
			   }
			   else {
				   max = 0;
			   }

			   numOrders--;

			   label15->Text = numOrders.ToString();
		   }
	   }

			  int token = 0;
private: System::Void final_Click(System::Object^ sender, System::EventArgs^ e) {
	prepare->SetOrders(orders, max, token, prevtoken);
	numOrders = 0;
	label15->Text = "0";
	this->Hide();
	prepare->ShowDialog();
}

int prevtoken = 0;

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	orders->Clear();
	duration->Clear();
	numOrders = 0;
	max = 0;
	label15->Text = "0";
	prevtoken = token;
	token++;
}
	   
private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	history->showLog("historyLog.csv");
	history->ShowDialog();
}
};
}