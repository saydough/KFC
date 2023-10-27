#pragma once

namespace CPEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for historyWindow
	/// </summary>
	public ref class historyWindow : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Form^ obj1;
		Form^ obj2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	public:
		String^ setter;
		
		void showLog(String^ filePath) {
			array<String^>^ lines = System::IO::File::ReadAllLines(filePath);

			// Join the lines and remove commas
			String^ cleanedContent = String::Join("\r\n", lines);
			cleanedContent = cleanedContent->Replace(",", " "); // Remove commas

			textBox1->Text = cleanedContent;
		}

		historyWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		historyWindow(Form^ previous, Form^ prepare, Form^ serve, String^ user)
		{
			InitializeComponent();
			obj = previous;
			obj1 = prepare;
			obj2 = serve;
			setter = user;


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~historyWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnMenu;
	private: System::Windows::Forms::Button^ btnPrepare;
	private: System::Windows::Forms::Button^ btnServe;
	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ button7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(historyWindow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnMenu = (gcnew System::Windows::Forms::Button());
			this->btnPrepare = (gcnew System::Windows::Forms::Button());
			this->btnServe = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 125);
			this->label1->TabIndex = 9;
			this->label1->Text = L"KFC++";
			// 
			// btnMenu
			// 
			this->btnMenu->BackColor = System::Drawing::Color::Black;
			this->btnMenu->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMenu->FlatAppearance->BorderSize = 0;
			this->btnMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenu->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMenu->ForeColor = System::Drawing::Color::White;
			this->btnMenu->Location = System::Drawing::Point(200, 129);
			this->btnMenu->Name = L"btnMenu";
			this->btnMenu->Size = System::Drawing::Size(250, 95);
			this->btnMenu->TabIndex = 10;
			this->btnMenu->Text = L"MENU";
			this->btnMenu->UseVisualStyleBackColor = false;
			this->btnMenu->Click += gcnew System::EventHandler(this, &historyWindow::btnMenu_Click);
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
			this->btnPrepare->TabIndex = 11;
			this->btnPrepare->Text = L"NOW PREPARING";
			this->btnPrepare->UseVisualStyleBackColor = false;
			this->btnPrepare->Click += gcnew System::EventHandler(this, &historyWindow::btnPrepare_Click);
			// 
			// btnServe
			// 
			this->btnServe->BackColor = System::Drawing::Color::Black;
			this->btnServe->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnServe->FlatAppearance->BorderSize = 0;
			this->btnServe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnServe->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnServe->ForeColor = System::Drawing::Color::White;
			this->btnServe->Location = System::Drawing::Point(792, 129);
			this->btnServe->Name = L"btnServe";
			this->btnServe->Size = System::Drawing::Size(388, 95);
			this->btnServe->TabIndex = 12;
			this->btnServe->Text = L"NOW SERVING";
			this->btnServe->UseVisualStyleBackColor = false;
			this->btnServe->Click += gcnew System::EventHandler(this, &historyWindow::btnServe_Click);
			// 
			// btnLog
			// 
			this->btnLog->AutoSize = true;
			this->btnLog->BackColor = System::Drawing::Color::Red;
			this->btnLog->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnLog->FlatAppearance->BorderSize = 0;
			this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->ForeColor = System::Drawing::Color::White;
			this->btnLog->Location = System::Drawing::Point(1177, 129);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(321, 95);
			this->btnLog->TabIndex = 13;
			this->btnLog->Text = L"HISTORY LOG";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &historyWindow::btnLog_Click);
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
			this->button7->TabIndex = 44;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &historyWindow::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 1221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 45;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(145, 429);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(1384, 559);
			this->textBox1->TabIndex = 46;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &historyWindow::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(71, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(477, 125);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Orders Made:";
			// 
			// historyWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1700, 1250);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnServe);
			this->Controls->Add(this->btnPrepare);
			this->Controls->Add(this->btnMenu);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"historyWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"historyWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   void ClearCSVFile(String^ filePath) {
			   System::IO::File::WriteAllText(filePath, "");
		   }
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearCSVFile("completed_orders.csv");
	ClearCSVFile("completed_orders2.csv");
	this->Close();
}
private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	if (setter == "menu") {
		this->Hide();
		obj->Show();
	}
	else if (setter == "prepare") {
		this->Hide();
		obj1->Show();
	}
	else if(setter == "serve"){
		this->Hide();
		obj2->Show();
	}
}
private: System::Void btnPrepare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (setter == "menu") {
		this->Hide();
		obj1->Show();
	}
	else if (setter == "prepare") {
		this->Hide();
		obj->Show();
	}
	else if (setter == "serve") {
		this->Hide();
		obj2->Show();
	}
}
private: System::Void btnServe_Click(System::Object^ sender, System::EventArgs^ e) {
	if (setter == "menu") {
		this->Hide();
		obj2->Show();
	}
	else if (setter == "prepare") {
		this->Hide();
		obj1->Show();
	}
	else if (setter == "serve") {
		this->Hide();
		obj->Show();
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
