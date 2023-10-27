#pragma once
#include "menuWindow.h"
#include "User.h"

namespace CPEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for firstHeader
	/// </summary>
	public ref class firstHeader : public System::Windows::Forms::Form
	{
	public:
		firstHeader(void)
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
		~firstHeader()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnProceed;
	protected:





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(firstHeader::typeid));
			this->btnProceed = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnProceed
			// 
			this->btnProceed->BackColor = System::Drawing::Color::Red;
			this->btnProceed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProceed->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProceed->ForeColor = System::Drawing::Color::White;
			this->btnProceed->Location = System::Drawing::Point(1443, 828);
			this->btnProceed->Name = L"btnProceed";
			this->btnProceed->Size = System::Drawing::Size(229, 95);
			this->btnProceed->TabIndex = 0;
			this->btnProceed->Text = L"Proceed";
			this->btnProceed->UseVisualStyleBackColor = false;
			this->btnProceed->Click += gcnew System::EventHandler(this, &firstHeader::btnProceed_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1659, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 51);
			this->button1->TabIndex = 6;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &firstHeader::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->Location = System::Drawing::Point(100, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 1025);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Red;
			this->panel2->Location = System::Drawing::Point(400, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 1025);
			this->panel2->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Red;
			this->panel3->Location = System::Drawing::Point(700, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 1025);
			this->panel3->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bebas Neue", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1016, 438);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(625, 125);
			this->label1->TabIndex = 10;
			this->label1->Text = L"WELCOME TO KFC++";
			// 
			// firstHeader
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1730, 1025);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnProceed);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"firstHeader";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"firstHeader";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	
	private: System::Void btnProceed_Click(System::Object^ sender, System::EventArgs^ e) {			
			this->Hide();
			menuWindow^ menu = gcnew menuWindow();
			menu->ShowDialog();

		
	}
	private: System::Void lblUsername_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void txtUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
