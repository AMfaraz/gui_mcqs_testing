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
	/// Summary for ArrayScreen
	/// </summary>
	public ref class ArrayScreen : public System::Windows::Forms::Form
	{
	public:
		Form^ previousScreen;
		Linkedlist^ arrayLink = gcnew Linkedlist();
		FileHandling^ handling = gcnew FileHandling();
		ArrayScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		ArrayScreen(Form^ obj)
		{
			handling->addToLinkedList("../assets/Questions/array.txt", arrayLink);
			previousScreen = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ArrayScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::Label^ questionLabel;
	private: System::Windows::Forms::Button^ nextQuestion;
	private: System::Windows::Forms::Button^ previousQuestion;
	private: System::Windows::Forms::RadioButton^ option1;
	private: System::Windows::Forms::RadioButton^ option4;

	private: System::Windows::Forms::RadioButton^ option2;

	private: System::Windows::Forms::RadioButton^ option3;
	private: System::Windows::Forms::GroupBox^ groupBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ArrayScreen::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->questionLabel = (gcnew System::Windows::Forms::Label());
			this->nextQuestion = (gcnew System::Windows::Forms::Button());
			this->previousQuestion = (gcnew System::Windows::Forms::Button());
			this->option1 = (gcnew System::Windows::Forms::RadioButton());
			this->option4 = (gcnew System::Windows::Forms::RadioButton());
			this->option2 = (gcnew System::Windows::Forms::RadioButton());
			this->option3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// questionLabel
			// 
			this->questionLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->questionLabel->AutoSize = true;
			this->questionLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->questionLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionLabel->Location = System::Drawing::Point(283, 155);
			this->questionLabel->Name = L"questionLabel";
			this->questionLabel->Size = System::Drawing::Size(375, 49);
			this->questionLabel->TabIndex = 5;
			this->questionLabel->Text = L"What is your name\?";
			// 
			// nextQuestion
			// 
			this->nextQuestion->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->nextQuestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->nextQuestion->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->nextQuestion->Location = System::Drawing::Point(576, 547);
			this->nextQuestion->Name = L"nextQuestion";
			this->nextQuestion->Size = System::Drawing::Size(119, 46);
			this->nextQuestion->TabIndex = 7;
			this->nextQuestion->Text = L"Next";
			this->nextQuestion->UseVisualStyleBackColor = false;
			// 
			// previousQuestion
			// 
			this->previousQuestion->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->previousQuestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->previousQuestion->Font = (gcnew System::Drawing::Font(L"Cambria", 14));
			this->previousQuestion->Location = System::Drawing::Point(241, 547);
			this->previousQuestion->Name = L"previousQuestion";
			this->previousQuestion->Size = System::Drawing::Size(113, 46);
			this->previousQuestion->TabIndex = 8;
			this->previousQuestion->Text = L"Previous";
			this->previousQuestion->UseVisualStyleBackColor = false;
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
			// 
			// option4
			// 
			this->option4->AutoSize = true;
			this->option4->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->option4->Location = System::Drawing::Point(342, 214);
			this->option4->Name = L"option4";
			this->option4->Size = System::Drawing::Size(117, 34);
			this->option4->TabIndex = 10;
			this->option4->TabStop = true;
			this->option4->Text = L"option4";
			this->option4->UseVisualStyleBackColor = true;
			// 
			// option2
			// 
			this->option2->AutoSize = true;
			this->option2->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->option2->Location = System::Drawing::Point(342, 60);
			this->option2->Name = L"option2";
			this->option2->Size = System::Drawing::Size(117, 34);
			this->option2->TabIndex = 11;
			this->option2->TabStop = true;
			this->option2->Text = L"option2";
			this->option2->UseVisualStyleBackColor = true;
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
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->option2);
			this->groupBox1->Controls->Add(this->option4);
			this->groupBox1->Controls->Add(this->option3);
			this->groupBox1->Controls->Add(this->option1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 15));
			this->groupBox1->Location = System::Drawing::Point(218, 222);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(504, 281);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options";
			// 
			// ArrayScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(927, 685);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->previousQuestion);
			this->Controls->Add(this->nextQuestion);
			this->Controls->Add(this->questionLabel);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"ArrayScreen";
			this->Text = L"ArrayScreen";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
