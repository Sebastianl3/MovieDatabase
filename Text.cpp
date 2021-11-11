

#include "Text.h"

using namespace std;

Text::Text(const char* text)
{
	this->textLength = strlen(text);
	char* tempTextArray = new char[textLength + 1];
	strcpy(tempTextArray, text);
	this->textArray = tempTextArray;
	return;
}

void Text::editText(const char* text)
{
	const char* tempTextArray = this->textArray;
	delete [] tempTextArray;
	this->textArray = text;
	this->textLength = strlen(text);
	return;
}

Text::~Text()
{
	const char* tempTextArray = this->textArray;
	delete [] tempTextArray;
}

void Text::displayText()
{
	//print out the c-string
	cout << this->textArray;
	return;
}

const char* Text::getText()
{
	return this->textArray;
}

int Text::getLength()
{
	return this->textLength;
}