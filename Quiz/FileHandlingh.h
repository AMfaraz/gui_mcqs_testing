#pragma once

#include "Linkedlist.h"
#include "Question.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

public ref class FileHandling {

public:
	FileHandling(){}

	void addToLinkedList(String^ path, Linkedlist^ questionlink) {
		StreamReader^ File=File::OpenText(path);
		String^ sawal;
		String^ jawab;
		sawal = File->ReadLine();
		
		while (!System::String::IsNullOrEmpty(sawal)){

			jawab = File->ReadLine();
			List<String^>^ options = gcnew List<String^>;

			//options
			for (int i = 0;i < 4;i++) {
				String^ option;
				option = File->ReadLine();
				options->Add(option);
			}
			Question^ newquestion = gcnew Question(sawal, jawab, options);
			questionlink->append(newquestion);
			sawal = File->ReadLine();
		}
		File->Close();
	}
	void addQuestionToFile(String^ path,String^ question,String^ ans,List<String^>^ choices) {

		StreamWriter^ File = gcnew StreamWriter(path,true);
		File->WriteLine(question);
		File->WriteLine(ans);
		File->WriteLine(choices[0]);
		File->WriteLine(choices[1]);
		File->WriteLine(choices[2]);
		File->WriteLine(choices[3]);
		File->Close();
		
	}

	void writeToFile(Linkedlist^ questionList,String^ path) {
		StreamWriter^ File = gcnew StreamWriter(path);
		Node^ holdingPointer = questionList->head;
		while (holdingPointer != nullptr) {
			File->WriteLine(holdingPointer->value->question);
			File->WriteLine(holdingPointer->value->answer);
			for (int i = 0;i < 4;i++) {
				File->WriteLine(holdingPointer->value->choices[i]);
			}
			holdingPointer = holdingPointer->next;
		}
		File->Close();
	}
};
