#pragma once
#include "FileHandlingh.h"
#include "Linkedlist.h"
#include "Question.h"

namespace Quiz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addQuestionScreen
	/// </summary>
	public ref class addQuestionScreen : public System::Windows::Forms::Form
	{
	public:
		Linkedlist^ questionData = gcnew Linkedlist();
		FileHandling^ handlingData = gcnew FileHandling();
		String^ path = L"";
		Question^ currentQuestion = nullptr;
		Form^ previousScreen;
	private: System::Windows::Forms::DataGridView^ questionGrid;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Question;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Answer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Option1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Option2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Option3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Option4;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ questionInput;
	private: System::Windows::Forms::TextBox^ writeOption2;
	private: System::Windows::Forms::TextBox^ writeOption4;
	private: System::Windows::Forms::TextBox^ writeOption3;
	private: System::Windows::Forms::TextBox^ writeOption1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ansinput;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ addQuestion;

		   Node^ currentNode;

	public:


	public:
		addQuestionScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		addQuestionScreen(Form^ obj)
		{
			previousScreen = obj;
			//handling->writeToFile(L"../assets/Questions/array.txt");
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addQuestionScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addQuestionScreen::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->questionGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Question = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Answer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Option4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->addQuestion = (gcnew System::Windows::Forms::Button());
			this->ansinput = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->writeOption2 = (gcnew System::Windows::Forms::TextBox());
			this->writeOption4 = (gcnew System::Windows::Forms::TextBox());
			this->writeOption3 = (gcnew System::Windows::Forms::TextBox());
			this->writeOption1 = (gcnew System::Windows::Forms::TextBox());
			this->questionInput = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->questionGrid))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ItemHeight = 30;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Array", L"LinkedList", L"Stack", L"Queue" });
			this->comboBox1->Location = System::Drawing::Point(344, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(368, 38);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &addQuestionScreen::comboBox1_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(127, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(834, 51);
			this->panel1->TabIndex = 21;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &addQuestionScreen::pictureBox1_Click);
			// 
			// questionGrid
			// 
			this->questionGrid->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->questionGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->questionGrid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->questionGrid->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::LightSkyBlue;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->questionGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->questionGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->questionGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Question,
					this->Answer, this->Option1, this->Option2, this->Option3, this->Option4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->questionGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->questionGrid->GridColor = System::Drawing::SystemColors::HotTrack;
			this->questionGrid->Location = System::Drawing::Point(312, 12);
			this->questionGrid->Name = L"questionGrid";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->questionGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->questionGrid->RowHeadersWidth = 51;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->questionGrid->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->questionGrid->RowTemplate->Height = 24;
			this->questionGrid->Size = System::Drawing::Size(508, 493);
			this->questionGrid->TabIndex = 22;
			this->questionGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &addQuestionScreen::questionGrid_CellContentClick);
			// 
			// Question
			// 
			this->Question->HeaderText = L"Question";
			this->Question->MinimumWidth = 6;
			this->Question->Name = L"Question";
			this->Question->Width = 121;
			// 
			// Answer
			// 
			this->Answer->HeaderText = L"Answer";
			this->Answer->MinimumWidth = 6;
			this->Answer->Name = L"Answer";
			this->Answer->Width = 109;
			// 
			// Option1
			// 
			this->Option1->HeaderText = L"Option1";
			this->Option1->MinimumWidth = 6;
			this->Option1->Name = L"Option1";
			this->Option1->Width = 113;
			// 
			// Option2
			// 
			this->Option2->HeaderText = L"Option2";
			this->Option2->MinimumWidth = 6;
			this->Option2->Name = L"Option2";
			this->Option2->Width = 113;
			// 
			// Option3
			// 
			this->Option3->HeaderText = L"Option3";
			this->Option3->MinimumWidth = 6;
			this->Option3->Name = L"Option3";
			this->Option3->Width = 113;
			// 
			// Option4
			// 
			this->Option4->HeaderText = L"Option4";
			this->Option4->MinimumWidth = 6;
			this->Option4->Name = L"Option4";
			this->Option4->Width = 113;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Controls->Add(this->Delete);
			this->groupBox1->Controls->Add(this->addQuestion);
			this->groupBox1->Controls->Add(this->ansinput);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->writeOption2);
			this->groupBox1->Controls->Add(this->writeOption4);
			this->groupBox1->Controls->Add(this->writeOption3);
			this->groupBox1->Controls->Add(this->writeOption1);
			this->groupBox1->Controls->Add(this->questionInput);
			this->groupBox1->Controls->Add(this->questionGrid);
			this->groupBox1->Location = System::Drawing::Point(115, 142);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(826, 555);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::LightSkyBlue;
			this->Delete->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete->Location = System::Drawing::Point(522, 511);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(89, 38);
			this->Delete->TabIndex = 38;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &addQuestionScreen::Delete_Click);
			// 
			// addQuestion
			// 
			this->addQuestion->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->addQuestion->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addQuestion->Location = System::Drawing::Point(26, 423);
			this->addQuestion->Name = L"addQuestion";
			this->addQuestion->Size = System::Drawing::Size(75, 43);
			this->addQuestion->TabIndex = 37;
			this->addQuestion->Text = L"Add";
			this->addQuestion->UseVisualStyleBackColor = false;
			this->addQuestion->Click += gcnew System::EventHandler(this, &addQuestionScreen::addQuestion_Click);
			// 
			// ansinput
			// 
			this->ansinput->Location = System::Drawing::Point(129, 353);
			this->ansinput->Name = L"ansinput";
			this->ansinput->Size = System::Drawing::Size(156, 22);
			this->ansinput->TabIndex = 36;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(23, 358);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 23);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Answer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 290);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 23);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Option4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 23);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Option3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 23);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Option2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 23);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Option1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 23);
			this->label1->TabIndex = 30;
			this->label1->Text = L"Quesiton";
			// 
			// writeOption2
			// 
			this->writeOption2->Location = System::Drawing::Point(129, 155);
			this->writeOption2->Name = L"writeOption2";
			this->writeOption2->Size = System::Drawing::Size(156, 22);
			this->writeOption2->TabIndex = 29;
			// 
			// writeOption4
			// 
			this->writeOption4->Location = System::Drawing::Point(129, 287);
			this->writeOption4->Name = L"writeOption4";
			this->writeOption4->Size = System::Drawing::Size(156, 22);
			this->writeOption4->TabIndex = 28;
			// 
			// writeOption3
			// 
			this->writeOption3->Location = System::Drawing::Point(129, 221);
			this->writeOption3->Name = L"writeOption3";
			this->writeOption3->Size = System::Drawing::Size(156, 22);
			this->writeOption3->TabIndex = 27;
			// 
			// writeOption1
			// 
			this->writeOption1->Location = System::Drawing::Point(129, 89);
			this->writeOption1->Name = L"writeOption1";
			this->writeOption1->Size = System::Drawing::Size(156, 22);
			this->writeOption1->TabIndex = 26;
			// 
			// questionInput
			// 
			this->questionInput->Location = System::Drawing::Point(129, 23);
			this->questionInput->Name = L"questionInput";
			this->questionInput->Size = System::Drawing::Size(156, 22);
			this->questionInput->TabIndex = 23;
			// 
			// addQuestionScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1066, 758);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"addQuestionScreen";
			this->Text = L"addQuestionScreen";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &addQuestionScreen::addQuestionScreen_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->questionGrid))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	questionGrid->Rows->Clear();
	//QuestionGrid->Refresh();
	if (comboBox1->Text->Equals(L"Array")) {
		path = L"../assets/Questions/array.txt";
	}
	else if (comboBox1->Text->Equals(L"LinkedList")) {
		path = L"../assets/Questions/linkedlist.txt";
	}
	else if (comboBox1->Text->Equals(L"Stack")) {
		path = L"../assets/Questions/stack.txt";
	}
	else if (comboBox1->Text->Equals(L"Queue")) {
		path = L"../assets/Questions/queue.txt";
	}
	questionData = gcnew Linkedlist();
	loadingMCQs();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	previousScreen->Show();
}

private:System::Void loadingMCQs() {
	handlingData->addToLinkedList(path,questionData);
	currentNode = questionData->head;
	while(currentNode!=nullptr){
		currentQuestion = currentNode->value;
		questionGrid->Rows->Add(currentQuestion->question,currentQuestion->answer, currentQuestion->choices[0],
			currentQuestion->choices[1],currentQuestion->choices[2],currentQuestion->choices[3]);
		currentNode = currentNode->next;
	}
	currentNode = nullptr;
}


private: System::Void addQuestion_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::String::IsNullOrEmpty(path)) {
		MessageBox::Show(L"Please select the question link", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (System::String::IsNullOrEmpty(questionInput->Text)
		|| System::String::IsNullOrWhiteSpace(writeOption1->Text)
		|| System::String::IsNullOrWhiteSpace(writeOption2->Text)
		|| System::String::IsNullOrWhiteSpace(writeOption3->Text)
		|| System::String::IsNullOrWhiteSpace(writeOption4->Text)
		|| System::String::IsNullOrWhiteSpace(ansinput->Text)
		) {
		MessageBox::Show(L"Please fill all fields", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if(!ansinput->Text->Equals(writeOption1->Text)
		&& !ansinput->Text->Equals(writeOption2->Text)
		&& !ansinput->Text->Equals(writeOption3->Text)
		&& !ansinput->Text->Equals(writeOption4->Text)
		) {
		MessageBox::Show(L"Atleast 1 option must be answer", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ questionText = questionInput->Text;
	List<String^>^ choices = gcnew List<String^>;
	choices->Add(writeOption1->Text);
	choices->Add(writeOption2->Text);
	choices->Add(writeOption3->Text);
	choices->Add(writeOption4->Text);
	String^ ans = ansinput->Text;
	handlingData->addQuestionToFile(path,questionText, ans, choices);
	comboBox1_SelectedIndexChanged(sender, e);

}
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (questionData->noOfElements == 0) {
		MessageBox::Show(L"No more question to delete", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	int rowindex = questionGrid->CurrentCell->RowIndex;
	String^ selectQuestionText = questionGrid->CurrentCell->Value->ToString();
	questionGrid->Rows->RemoveAt(rowindex);
	questionData->deletion(rowindex+1);
	handlingData->writeToFile(questionData, path);
}
private: System::Void questionGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void addQuestionScreen_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}