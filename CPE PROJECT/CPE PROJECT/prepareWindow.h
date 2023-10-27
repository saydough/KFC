#pragma once
#include "serveWindow.h"
#include "historyWindow.h"
#include "User.h"

namespace CPEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CPEPROJECT;

	public ref class prepareWindow : public System::Windows::Forms::Form
	{
	public:

		serveWindow^ serve1 = gcnew serveWindow(this, obj, "prepare", userName);
		List<String^>^ orders = gcnew List<String^>();
		int mealDuration;
		List<String^>^ orders1 = gcnew List<String^>();
		int mealDuration1;
		
	private: System::Windows::Forms::ProgressBar^ progressBarMeal;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBoxOrders;



	public:

		Timer^ timer = gcnew Timer();
		Timer^ timer1 = gcnew Timer();
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	public:
		int keyUser;
	void SetOrders(List<String^>^ ordersList, int duration, int key, int prevKey) {
		String^ filePath = "completed_orders.csv";
		String^ filePath2 = "completed_orders2.csv";
		int orderNum = key + 1;
		if (key == 0) {
			label4->Text = orderNum.ToString();
			keyUser = key;
			orders = ordersList;
			textBoxOrders->Text = String::Join(Environment::NewLine, ordersList);
			mealDuration = duration;

			progressBarMeal->Maximum = mealDuration * 1000;

			int progressBarIncrement = mealDuration * 1000 / timer->Interval;

			timer->Interval = timer->Interval;

			timer->Start();

			SaveToCSV(orders, filePath);
			SaveToCSV(orders, "historyLog.csv");
		}
		if (key > prevKey) {
			label4->Text = orderNum.ToString();
			orders = ordersList;
			textBoxOrders->Text = String::Join(Environment::NewLine, ordersList);
			mealDuration = duration;
			progressBarMeal->Value = 0;
			progressBarMeal->Maximum = mealDuration * 1000;

			int progressBarIncrement = mealDuration * 1000 / timer->Interval;

			timer->Interval = timer->Interval;

			timer->Start();
			SaveToCSV(orders, filePath);
			AppendSaveToCSV(orders, "historyLog.csv");
		}
}

	List<List<String^>^>^ serving = gcnew List<List<String^>^>();
void UpdateProgressBar(Object^ sender, EventArgs^ e) {
	
		if (progressBarMeal->Value < progressBarMeal->Maximum) {
			progressBarMeal->Increment(100); 

			if (progressBarMeal->Value >= progressBarMeal->Maximum) {
				timer->Stop();
				serve1->LoadCSVIntoTextBox1("completed_orders.csv");
				textBoxOrders->Text = "ORDER READY";
			}
		}
}

void SaveToCSV2(List<String^>^ data, String^ filePath) {
	System::Text::StringBuilder^ csvContent = gcnew System::Text::StringBuilder();

	for each (String ^ str in data) {
		csvContent->Append(str);
		csvContent->Append(",");
		csvContent->Append(Environment::NewLine);
	}

	System::IO::File::WriteAllText(filePath, csvContent->ToString());
}

void SaveToCSV(List<String^>^ data, String^ filePath) {
	System::Text::StringBuilder^ csvContent = gcnew System::Text::StringBuilder();

	for each (String ^ str in data) {
		csvContent->Append(str);
		csvContent->Append(",");
		csvContent->Append(Environment::NewLine);
	}

	System::IO::File::WriteAllText(filePath, csvContent->ToString());
}
void AppendSaveToCSV(List<String^>^ data, String^ filePath) {
	System::Text::StringBuilder^ csvContent = gcnew System::Text::StringBuilder();

	for each (String ^ str in data) {
		csvContent->Append(str);
		csvContent->Append(",");
		csvContent->Append(Environment::NewLine);
		//add append func
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath, true); // 'true' for append mode

		// Write the csvContent to the file
		sw->Write(csvContent->ToString());

		// Close the StreamWriter to release the file
		sw->Close();
	}
}
		Form^ obj;
	private: System::Windows::Forms::Label^ label2;


	public:
		String^ userName;
		prepareWindow(void)
		{
			InitializeComponent();

			// Other initialization code
		}
		prepareWindow(Form^ prepare, String^ user)
		{
			InitializeComponent();
			obj = prepare;
			userName = user;
			
			timer->Interval = 100;
			timer->Tick += gcnew EventHandler(this, &prepareWindow::UpdateProgressBar);

			timer1->Interval = 100;
			timer1->Tick += gcnew EventHandler(this, &prepareWindow::UpdateProgressBar);
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
	
		~prepareWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnMenu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPrepare;
	private: System::Windows::Forms::Button^ btnServe;
	private: System::Windows::Forms::Button^ btnLog;



	private: System::Windows::Forms::Button^ button7;
	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(prepareWindow::typeid));
			this->btnMenu = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPrepare = (gcnew System::Windows::Forms::Button());
			this->btnServe = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBarMeal = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBoxOrders = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
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
			this->btnMenu->TabIndex = 2;
			this->btnMenu->Text = L"MENU";
			this->btnMenu->UseVisualStyleBackColor = false;
			this->btnMenu->Click += gcnew System::EventHandler(this, &prepareWindow::btnMenu_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 125);
			this->label1->TabIndex = 3;
			this->label1->Text = L"KFC++";
			// 
			// btnPrepare
			// 
			this->btnPrepare->BackColor = System::Drawing::Color::Red;
			this->btnPrepare->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnPrepare->FlatAppearance->BorderSize = 0;
			this->btnPrepare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrepare->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrepare->ForeColor = System::Drawing::Color::White;
			this->btnPrepare->Location = System::Drawing::Point(447, 129);
			this->btnPrepare->Name = L"btnPrepare";
			this->btnPrepare->Size = System::Drawing::Size(348, 95);
			this->btnPrepare->TabIndex = 4;
			this->btnPrepare->Text = L"NOW PREPARING";
			this->btnPrepare->UseVisualStyleBackColor = false;
			this->btnPrepare->Click += gcnew System::EventHandler(this, &prepareWindow::btnPrepare_Click);
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
			this->btnServe->TabIndex = 5;
			this->btnServe->Text = L"NOW SERVING";
			this->btnServe->UseVisualStyleBackColor = false;
			this->btnServe->Click += gcnew System::EventHandler(this, &prepareWindow::btnServe_Click_1);
			// 
			// btnLog
			// 
			this->btnLog->AutoSize = true;
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
			this->btnLog->TabIndex = 6;
			this->btnLog->Text = L"HISTORY LOG";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &prepareWindow::btnLog_Click);
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
			this->button7->TabIndex = 42;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &prepareWindow::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 1221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 43;
			// 
			// progressBarMeal
			// 
			this->progressBarMeal->Cursor = System::Windows::Forms::Cursors::Default;
			this->progressBarMeal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->progressBarMeal->Location = System::Drawing::Point(3, 32);
			this->progressBarMeal->Name = L"progressBarMeal";
			this->progressBarMeal->Size = System::Drawing::Size(1298, 86);
			this->progressBarMeal->TabIndex = 45;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->textBoxOrders);
			this->panel1->Controls->Add(this->progressBarMeal);
			this->panel1->Location = System::Drawing::Point(200, 363);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1298, 603);
			this->panel1->TabIndex = 46;
			// 
			// textBoxOrders
			// 
			this->textBoxOrders->BackColor = System::Drawing::Color::White;
			this->textBoxOrders->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxOrders->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBoxOrders->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOrders->Location = System::Drawing::Point(3, 124);
			this->textBoxOrders->Multiline = true;
			this->textBoxOrders->Name = L"textBoxOrders";
			this->textBoxOrders->ReadOnly = true;
			this->textBoxOrders->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBoxOrders->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxOrders->Size = System::Drawing::Size(1295, 588);
			this->textBoxOrders->TabIndex = 46;
			this->textBoxOrders->Text = L"NO ORDER/S YET";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(203, 267);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(280, 93);
			this->label3->TabIndex = 47;
			this->label3->Text = L"ORDER NO. ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1457, 267);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 73);
			this->label4->TabIndex = 48;
			// 
			// prepareWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1700, 1250);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnServe);
			this->Controls->Add(this->btnPrepare);
			this->Controls->Add(this->btnMenu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"prepareWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"prepareWindow";
			this->Load += gcnew System::EventHandler(this, &prepareWindow::prepareWindow_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void prepareWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPrepare_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}


	private: System::Void btnServe_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		serve1->ShowDialog();
	}
		   void ClearCSVFile(String^ filePath) {
			   // Write an empty string to the file to clear its content
			   System::IO::File::WriteAllText(filePath, "");
		   }
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearCSVFile("completed_orders.csv");
		ClearCSVFile("completed_orders2.csv");
		this->Close();
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
	historyWindow^ history = gcnew historyWindow(this, obj, serve1, "prepare");
	history->showLog("historyLog.csv");
	this->Hide();
	history->ShowDialog();
}
};

}
