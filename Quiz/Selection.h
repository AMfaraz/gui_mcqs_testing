#pragma once
//#include "ArrayQuestionScreen.h"
#include "LinkedlistScreen.h"
#include "QueueScreen.h"
#include "StackScreen.h"
#include "addQuestionScreen.h"
#include "studentInput.h"

namespace Quiz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Selection
	/// </summary>
	public ref class Selection : public System::Windows::Forms::Form
	{
	public:
		Selection(void)
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
		~Selection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ ArrayButton;
	private: System::Windows::Forms::Button^ LinkedlistButton;
	private: System::Windows::Forms::Button^ StackButton;
	private: System::Windows::Forms::Button^ QueueButton;
	private: System::Windows::Forms::Button^ addQuestionButton;
	private: System::Windows::Forms::Panel^ panel1;




	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Selection::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ArrayButton = (gcnew System::Windows::Forms::Button());
			this->LinkedlistButton = (gcnew System::Windows::Forms::Button());
			this->StackButton = (gcnew System::Windows::Forms::Button());
			this->QueueButton = (gcnew System::Windows::Forms::Button());
			this->addQuestionButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(357, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 148);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// ArrayButton
			// 
			this->ArrayButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ArrayButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ArrayButton->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->ArrayButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ArrayButton.Image")));
			this->ArrayButton->Location = System::Drawing::Point(6, 20);
			this->ArrayButton->Name = L"ArrayButton";
			this->ArrayButton->Size = System::Drawing::Size(269, 40);
			this->ArrayButton->TabIndex = 1;
			this->ArrayButton->Text = L"Array";
			this->ArrayButton->UseVisualStyleBackColor = true;
			this->ArrayButton->Click += gcnew System::EventHandler(this, &Selection::ArrayButton_Click);
			// 
			// LinkedlistButton
			// 
			this->LinkedlistButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->LinkedlistButton->BackColor = System::Drawing::SystemColors::Control;
			this->LinkedlistButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LinkedlistButton->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->LinkedlistButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LinkedlistButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LinkedlistButton.Image")));
			this->LinkedlistButton->Location = System::Drawing::Point(6, 106);
			this->LinkedlistButton->Name = L"LinkedlistButton";
			this->LinkedlistButton->Size = System::Drawing::Size(269, 40);
			this->LinkedlistButton->TabIndex = 2;
			this->LinkedlistButton->Text = L"Linked List";
			this->LinkedlistButton->UseVisualStyleBackColor = false;
			this->LinkedlistButton->Click += gcnew System::EventHandler(this, &Selection::LinkedlistButton_Click);
			// 
			// StackButton
			// 
			this->StackButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StackButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StackButton->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->StackButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StackButton.Image")));
			this->StackButton->Location = System::Drawing::Point(6, 192);
			this->StackButton->Name = L"StackButton";
			this->StackButton->Size = System::Drawing::Size(269, 40);
			this->StackButton->TabIndex = 3;
			this->StackButton->Text = L"Stack";
			this->StackButton->UseVisualStyleBackColor = true;
			this->StackButton->Click += gcnew System::EventHandler(this, &Selection::StackButton_Click);
			// 
			// QueueButton
			// 
			this->QueueButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->QueueButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->QueueButton->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->QueueButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QueueButton.Image")));
			this->QueueButton->Location = System::Drawing::Point(6, 278);
			this->QueueButton->Name = L"QueueButton";
			this->QueueButton->Size = System::Drawing::Size(269, 40);
			this->QueueButton->TabIndex = 4;
			this->QueueButton->Text = L"Queue";
			this->QueueButton->UseVisualStyleBackColor = true;
			this->QueueButton->Click += gcnew System::EventHandler(this, &Selection::QueueButton_Click);
			// 
			// addQuestionButton
			// 
			this->addQuestionButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->addQuestionButton->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->addQuestionButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addQuestionButton->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->addQuestionButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addQuestionButton.Image")));
			this->addQuestionButton->Location = System::Drawing::Point(6, 364);
			this->addQuestionButton->Name = L"addQuestionButton";
			this->addQuestionButton->Size = System::Drawing::Size(269, 40);
			this->addQuestionButton->TabIndex = 5;
			this->addQuestionButton->Text = L"Modify Question";
			this->addQuestionButton->UseVisualStyleBackColor = false;
			this->addQuestionButton->Click += gcnew System::EventHandler(this, &Selection::addQuestionButton_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->addQuestionButton);
			this->panel1->Controls->Add(this->ArrayButton);
			this->panel1->Controls->Add(this->LinkedlistButton);
			this->panel1->Controls->Add(this->StackButton);
			this->panel1->Controls->Add(this->QueueButton);
			this->panel1->Location = System::Drawing::Point(291, 265);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(281, 408);
			this->panel1->TabIndex = 6;
			// 
			// Selection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(857, 752);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"Selection";
			this->Text = L"Selection";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Selection::Selection_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void ArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		studentInput^ inputScreen = gcnew studentInput(this,L"array");
		inputScreen->ShowDialog();
	}
private: System::Void LinkedlistButton_Click(System::Object^ sender, System::EventArgs^ e) {
	studentInput^ inputScreen = gcnew studentInput(this,"linkedlist");
	inputScreen->ShowDialog();
}

private: System::Void StackButton_Click(System::Object^ sender, System::EventArgs^ e) {
	studentInput^ inputScreen = gcnew studentInput(this, "stack");
	inputScreen->ShowDialog();

}
private: System::Void QueueButton_Click(System::Object^ sender, System::EventArgs^ e) {
	studentInput^ inputScreen = gcnew studentInput(this, "queue");
	inputScreen->ShowDialog();
}

private: System::Void addQuestionButton_Click(System::Object^ sender, System::EventArgs^ e) {
	addQuestionScreen^ addScreen = gcnew addQuestionScreen(this);
	this->Hide();
	addScreen->ShowDialog();
}
private: System::Void Selection_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
};
