#pragma once
#include "Linkedlist.h"
#include "FileHandlingh.h"

namespace Quiz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for QueueScreen
	/// </summary>
	public ref class QueueScreen : public System::Windows::Forms::Form
	{
	public:
		Form^ previousScreen;
		Linkedlist^ linkedLink = gcnew Linkedlist();
		FileHandling^ handling = gcnew FileHandling();
		Node^ currentNode;
		String^ rollNumber;
		String^ batch;
		String^ dept;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	public:
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
	public:
		int correctAns = 0;

		QueueScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		QueueScreen(Form^ obj, String^ rollNum, String^ batch, String^ dept)
		{
			previousScreen = obj;
			handling->addToLinkedList(L"../assets/Questions/queue.txt", linkedLink);
			previousScreen = obj;
			currentNode = linkedLink->head;
			this->rollNumber = rollNum;
			this->batch = batch;
			this->dept = dept;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~QueueScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ questionLabel;
	private: System::Windows::Forms::Button^ Submit;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ option2;
	private: System::Windows::Forms::RadioButton^ option4;
	private: System::Windows::Forms::RadioButton^ option3;
	private: System::Windows::Forms::RadioButton^ option1;

	private: System::Windows::Forms::Button^ previousQuestion;


	private: System::Windows::Forms::Button^ nextQuestion;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(QueueScreen::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->nextQuestion = (gcnew System::Windows::Forms::Button());
			this->questionLabel = (gcnew System::Windows::Forms::Label());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->option2 = (gcnew System::Windows::Forms::RadioButton());
			this->option4 = (gcnew System::Windows::Forms::RadioButton());
			this->option3 = (gcnew System::Windows::Forms::RadioButton());
			this->option1 = (gcnew System::Windows::Forms::RadioButton());
			this->previousQuestion = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->nextQuestion);
			this->groupBox2->Controls->Add(this->questionLabel);
			this->groupBox2->Controls->Add(this->Submit);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->previousQuestion);
			this->groupBox2->Location = System::Drawing::Point(176, 84);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(707, 583);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			// 
			// nextQuestion
			// 
			this->nextQuestion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->nextQuestion->BackColor = System::Drawing::Color::Transparent;
			this->nextQuestion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nextQuestion.BackgroundImage")));
			this->nextQuestion->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->nextQuestion->Location = System::Drawing::Point(588, 489);
			this->nextQuestion->Name = L"nextQuestion";
			this->nextQuestion->Size = System::Drawing::Size(119, 46);
			this->nextQuestion->TabIndex = 18;
			this->nextQuestion->Text = L"Next";
			this->nextQuestion->UseVisualStyleBackColor = false;
			this->nextQuestion->Click += gcnew System::EventHandler(this, &QueueScreen::nextQuestion_Click);
			// 
			// questionLabel
			// 
			this->questionLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->questionLabel->BackColor = System::Drawing::Color::Transparent;
			this->questionLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->questionLabel->Location = System::Drawing::Point(24, 28);
			this->questionLabel->Name = L"questionLabel";
			this->questionLabel->Size = System::Drawing::Size(650, 105);
			this->questionLabel->TabIndex = 3;
			this->questionLabel->Text = L"What is your name\?";
			// 
			// Submit
			// 
			this->Submit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Submit->AutoSize = true;
			this->Submit->BackColor = System::Drawing::Color::Transparent;
			this->Submit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Submit.BackgroundImage")));
			this->Submit->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->Submit->Location = System::Drawing::Point(278, 508);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(119, 46);
			this->Submit->TabIndex = 17;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = false;
			this->Submit->Visible = false;
			this->Submit->Click += gcnew System::EventHandler(this, &QueueScreen::Submit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->groupBox1->AutoSize = true;
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->option2);
			this->groupBox1->Controls->Add(this->option4);
			this->groupBox1->Controls->Add(this->option3);
			this->groupBox1->Controls->Add(this->option1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->groupBox1->Location = System::Drawing::Point(29, 152);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(651, 284);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options";
			// 
			// option2
			// 
			this->option2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->option2->AutoSize = true;
			this->option2->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->option2->Location = System::Drawing::Point(528, 60);
			this->option2->Name = L"option2";
			this->option2->Size = System::Drawing::Size(117, 34);
			this->option2->TabIndex = 11;
			this->option2->TabStop = true;
			this->option2->Text = L"option2";
			this->option2->UseVisualStyleBackColor = true;
			this->option2->CheckedChanged += gcnew System::EventHandler(this, &QueueScreen::option2_CheckedChanged);
			// 
			// option4
			// 
			this->option4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->option4->AutoSize = true;
			this->option4->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->option4->Location = System::Drawing::Point(528, 214);
			this->option4->Name = L"option4";
			this->option4->Size = System::Drawing::Size(117, 34);
			this->option4->TabIndex = 10;
			this->option4->TabStop = true;
			this->option4->Text = L"option4";
			this->option4->UseVisualStyleBackColor = true;
			this->option4->CheckedChanged += gcnew System::EventHandler(this, &QueueScreen::option4_CheckedChanged);
			// 
			// option3
			// 
			this->option3->AutoSize = true;
			this->option3->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->option3->Location = System::Drawing::Point(6, 214);
			this->option3->Name = L"option3";
			this->option3->Size = System::Drawing::Size(117, 34);
			this->option3->TabIndex = 12;
			this->option3->TabStop = true;
			this->option3->Text = L"option3";
			this->option3->UseVisualStyleBackColor = true;
			this->option3->CheckedChanged += gcnew System::EventHandler(this, &QueueScreen::option3_CheckedChanged);
			// 
			// option1
			// 
			this->option1->AutoSize = true;
			this->option1->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->option1->Location = System::Drawing::Point(6, 60);
			this->option1->Name = L"option1";
			this->option1->Size = System::Drawing::Size(117, 34);
			this->option1->TabIndex = 9;
			this->option1->TabStop = true;
			this->option1->Text = L"option1";
			this->option1->UseVisualStyleBackColor = true;
			this->option1->CheckedChanged += gcnew System::EventHandler(this, &QueueScreen::option1_CheckedChanged);
			// 
			// previousQuestion
			// 
			this->previousQuestion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->previousQuestion->BackColor = System::Drawing::Color::Transparent;
			this->previousQuestion->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previousQuestion.BackgroundImage")));
			this->previousQuestion->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->previousQuestion->Location = System::Drawing::Point(6, 489);
			this->previousQuestion->Name = L"previousQuestion";
			this->previousQuestion->Size = System::Drawing::Size(123, 46);
			this->previousQuestion->TabIndex = 9;
			this->previousQuestion->Text = L"Previous";
			this->previousQuestion->UseVisualStyleBackColor = false;
			this->previousQuestion->Click += gcnew System::EventHandler(this, &QueueScreen::previousQuestion_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &QueueScreen::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// QueueScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1058, 750);
			this->Controls->Add(this->groupBox2);
			this->Name = L"QueueScreen";
			this->Text = L"QueueScreen";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &QueueScreen::QueueScreen_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void QueueScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		if (currentNode->prev == nullptr) {
			previousQuestion->Hide();
		}
		else {
			previousQuestion->Show();
		}
		if (currentNode->next == nullptr) {
			nextQuestion->Hide();
			Submit->Show();
		}
		else {
			nextQuestion->Show();
			Submit->Hide();
		}
		questionLabel->Text = currentNode->value->question;
		option1->Text = currentNode->value->choices[0];
		option2->Text = currentNode->value->choices[1];
		option3->Text = currentNode->value->choices[2];
		option4->Text = currentNode->value->choices[3];
	}

private: System::Void nextQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	if (option1->Checked == false && option2->Checked == false && option3->Checked == false && option4->Checked == false) {
		MessageBox::Show(L"Please select an option", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	currentNode = currentNode->next;
	option1->Checked = false;
	option2->Checked = false;
	option3->Checked = false;
	option4->Checked = false;
	QueueScreen_Load(sender, e);
}

private: System::Void previousQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	currentNode = currentNode->prev;
	option1->Checked = false;
	option2->Checked = false;
	option3->Checked = false;
	option4->Checked = false;
	QueueScreen_Load(sender, e);
}

private: System::Void option1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	check(option1->Text);
}
private: System::Void option2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	check(option2->Text);
}
private: System::Void option3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	check(option3->Text);
}
private: System::Void option4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	check(option4->Text);
}

private: System::Void check(String^ toCheck) {
	if (String::Equals(toCheck, currentNode->value->answer)) {
		currentNode->value->correct = true;
	}
	else {
		currentNode->value->correct = false;
	}
	//label1->Text = System::Convert::ToString(String::Equals(toCheck, currentNode->value->answer));
}

private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (option1->Checked == false && option2->Checked == false && option3->Checked == false && option4->Checked == false) {
		MessageBox::Show(L"Please select an option", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Node^ holdingPointer = linkedLink->head;
	while (holdingPointer != nullptr) {
		if (holdingPointer->value->correct == true) {
			correctAns++;
		}
		holdingPointer = holdingPointer->next;
	}
	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
	correctAns = 0;

	this->Close();
	previousScreen->Show();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	FontFamily^ fontFamily = gcnew FontFamily(L"Cambria");
	System::Drawing::Font^ headingfont = gcnew System::Drawing::Font(fontFamily,
		25
		);

	System::Drawing::Font^ textfont = gcnew System::Drawing::Font(fontFamily,
		18
	);
	
	e->Graphics->DrawString(L"Result", headingfont, Brushes::Black, Point(400, 10));
	e->Graphics->DrawString(L"Roll Number:  " + rollNumber, textfont, Brushes::Black, Point(10,60));
	//e->Graphics->DrawString(rollNumber, textfont, Brushes::Black, Point(170,60));
	e->Graphics->DrawString(L"Batch: ", textfont, Brushes::Black, Point(10, 100));
	e->Graphics->DrawString(batch, textfont, Brushes::Black, Point(170, 100));
	e->Graphics->DrawString(L"Dept: ", textfont, Brushes::Black, Point(10, 140));
	e->Graphics->DrawString(dept, textfont, Brushes::Black, Point(170, 140));
	e->Graphics->DrawString(L"Marks: ", textfont, Brushes::Black, Point(10, 180));
	e->Graphics->DrawString(System::Convert::ToString(correctAns)+L" / " 
		+ System::Convert::ToString(linkedLink->noOfElements), 
		textfont, Brushes::Black, Point(170, 180));
}
};
}
