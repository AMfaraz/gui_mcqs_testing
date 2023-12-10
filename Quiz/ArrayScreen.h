#pragma once

namespace Quiz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DSAscreen
	/// </summary>
	public ref class DSAscreen : public System::Windows::Forms::Form
	{
	public:
		Form^ previousPage;
		DSAscreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		DSAscreen(Form^ obj)
		{
			previousPage = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DSAscreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ questionLabel;
	protected:
	private: System::Windows::Forms::Label^ ansLabel;

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
			this->questionLabel = (gcnew System::Windows::Forms::Label());
			this->ansLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// questionLabel
			// 
			this->questionLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->questionLabel->AutoSize = true;
			this->questionLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionLabel->Location = System::Drawing::Point(299, 221);
			this->questionLabel->Name = L"questionLabel";
			this->questionLabel->Size = System::Drawing::Size(357, 49);
			this->questionLabel->TabIndex = 0;
			this->questionLabel->Text = L"What is your name";
			// 
			// ansLabel
			// 
			this->ansLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ansLabel->AutoSize = true;
			this->ansLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ansLabel->Location = System::Drawing::Point(407, 330);
			this->ansLabel->Name = L"ansLabel";
			this->ansLabel->Size = System::Drawing::Size(121, 49);
			this->ansLabel->TabIndex = 1;
			this->ansLabel->Text = L"Faraz";
			// 
			// DSAscreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 546);
			this->Controls->Add(this->ansLabel);
			this->Controls->Add(this->questionLabel);
			this->Name = L"DSAscreen";
			this->Text = L"DSAscreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
