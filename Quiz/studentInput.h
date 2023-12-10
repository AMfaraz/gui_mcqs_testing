#pragma once
#include "ArrayQuestionScreen.h";
#include "LinkedlistScreen.h";
#include "StackScreen.h";
#include "QueueScreen.h";

namespace Quiz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for studentInput
	/// </summary>
	public ref class studentInput : public System::Windows::Forms::Form
	{
	public:
		Form^ preiousScreen;
		String^ questionType;
		studentInput(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		studentInput(Form^ obj,String^ questionType)
		{
			preiousScreen = obj;
			this->questionType = questionType;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentInput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ rollNumberLabel;
	private: System::Windows::Forms::TextBox^ rollNumberInput;
	private: System::Windows::Forms::TextBox^ batchInput;
	private: System::Windows::Forms::Label^ batchLabel;
	private: System::Windows::Forms::TextBox^ deptInput;
	private: System::Windows::Forms::Label^ deptLabel;
	private: System::Windows::Forms::Button^ Submit;
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
			this->rollNumberLabel = (gcnew System::Windows::Forms::Label());
			this->rollNumberInput = (gcnew System::Windows::Forms::TextBox());
			this->batchInput = (gcnew System::Windows::Forms::TextBox());
			this->batchLabel = (gcnew System::Windows::Forms::Label());
			this->deptInput = (gcnew System::Windows::Forms::TextBox());
			this->deptLabel = (gcnew System::Windows::Forms::Label());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// rollNumberLabel
			// 
			this->rollNumberLabel->AutoSize = true;
			this->rollNumberLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rollNumberLabel->Location = System::Drawing::Point(12, 24);
			this->rollNumberLabel->Name = L"rollNumberLabel";
			this->rollNumberLabel->Size = System::Drawing::Size(102, 21);
			this->rollNumberLabel->TabIndex = 0;
			this->rollNumberLabel->Text = L"Roll Number:";
			// 
			// rollNumberInput
			// 
			this->rollNumberInput->Location = System::Drawing::Point(172, 23);
			this->rollNumberInput->Name = L"rollNumberInput";
			this->rollNumberInput->Size = System::Drawing::Size(178, 22);
			this->rollNumberInput->TabIndex = 1;
			// 
			// batchInput
			// 
			this->batchInput->Location = System::Drawing::Point(172, 105);
			this->batchInput->Name = L"batchInput";
			this->batchInput->Size = System::Drawing::Size(178, 22);
			this->batchInput->TabIndex = 3;
			// 
			// batchLabel
			// 
			this->batchLabel->AutoSize = true;
			this->batchLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->batchLabel->Location = System::Drawing::Point(12, 105);
			this->batchLabel->Name = L"batchLabel";
			this->batchLabel->Size = System::Drawing::Size(54, 21);
			this->batchLabel->TabIndex = 2;
			this->batchLabel->Text = L"Batch:";
			// 
			// deptInput
			// 
			this->deptInput->Location = System::Drawing::Point(172, 192);
			this->deptInput->Name = L"deptInput";
			this->deptInput->Size = System::Drawing::Size(178, 22);
			this->deptInput->TabIndex = 5;
			// 
			// deptLabel
			// 
			this->deptLabel->AutoSize = true;
			this->deptLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deptLabel->Location = System::Drawing::Point(12, 193);
			this->deptLabel->Name = L"deptLabel";
			this->deptLabel->Size = System::Drawing::Size(94, 21);
			this->deptLabel->TabIndex = 4;
			this->deptLabel->Text = L"Department";
			// 
			// Submit
			// 
			this->Submit->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->Submit->Location = System::Drawing::Point(172, 262);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(96, 33);
			this->Submit->TabIndex = 6;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = true;
			this->Submit->Click += gcnew System::EventHandler(this, &studentInput::Submit_Click);
			// 
			// studentInput
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 353);
			this->Controls->Add(this->Submit);
			this->Controls->Add(this->deptInput);
			this->Controls->Add(this->deptLabel);
			this->Controls->Add(this->batchInput);
			this->Controls->Add(this->batchLabel);
			this->Controls->Add(this->rollNumberInput);
			this->Controls->Add(this->rollNumberLabel);
			this->Name = L"studentInput";
			this->Text = L"studentInput";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ nextScreen;
		if (System::String::Equals(questionType, L"array")) {
			ArrayQuestionScreen^ Screen = gcnew ArrayQuestionScreen(preiousScreen,
				rollNumberInput->Text,
				batchInput->Text,
				deptInput->Text);
				nextScreen=Screen;
		}
		else if (System::String::Equals(questionType, L"linkedlist")) {
			LinkedlistScreen^ Screen = gcnew LinkedlistScreen(preiousScreen,
				rollNumberInput->Text,
				batchInput->Text,
				deptInput->Text);
			nextScreen = Screen;
		}
		else if (System::String::Equals(questionType, L"stack")) {
			StackScreen^ Screen = gcnew StackScreen(preiousScreen,
				rollNumberInput->Text,
				batchInput->Text,
				deptInput->Text);
			nextScreen = Screen;
		}
		else if (System::String::Equals(questionType, L"queue")) {
			QueueScreen^ Screen = gcnew QueueScreen(preiousScreen,
				rollNumberInput->Text,
				batchInput->Text,
				deptInput->Text);
			nextScreen = Screen;
		}

		preiousScreen->Hide();
		this->Hide();
		nextScreen->ShowDialog();
	}
};
}
