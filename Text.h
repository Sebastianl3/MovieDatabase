
#ifndef TEXT_H
#define TEXT_H

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Text
{
	public:
		Text(const char* text);
		~Text();
		void displayText();
		const char* getText();
		int getLength();
		void editText(const char* text);
	private:
		const char* textArray;
		int textLength;
};


#endif