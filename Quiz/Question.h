#pragma once

using namespace System;
using namespace System::Collections::Generic;

public ref class Question {
	public:
		String^ question;
		String^ answer;
		List<String^>^ choices = gcnew List<String^>;
		bool correct = false;

		Question(String^ question,String^ answer, List<String^>^ choices) {
			this->question = question;
			this->answer = answer;
			this->choices = choices;
		}

};


