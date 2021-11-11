/*
	Title:  Movie.cpp
	Author:  April Crockett
	Date:  11/7/2017
	Purpose:  Be able to create, manage, print & delete a single movie.
*/
#include "Movie.h"
#include "Text.h"

Movie::Movie(Text* title, int length)
{
	this->movieTitle = title;
	this->movieLength = length;
}

Movie::Movie(Text* title, int length, int year, Text* genre, Text* rating, int nom, float stars) //all info is know
{
	this->movieTitle = title;
	this->movieLength = length;
	this->movieYear = year;
	this->movieGenre = genre;
	this->movieRating = rating;
	this->movieOscars = nom;
	this->movieNumStars = stars;
}

Movie::Movie()
{
	this->movieTitle = NULL;
	this->movieLength = 0;
	this->movieYear = 0;
	this->movieGenre = NULL;
	this->movieRating = NULL;
	this->movieOscars = 0;
	this->movieNumStars = 0;
}

Movie::~Movie(){
	delete this->movieTitle;  
	delete this->movieGenre; 
	delete this->movieRating;
}

void Movie::printMovieDetail()
{
	cout << endl;
	cout << right << setw(30) << "Movie Title:  " << left;
	this->movieTitle->displayText();
	cout << endl;
	cout << right << setw(30) << "Length (minutes):  " << left << this->movieLength << endl;
	cout << right << setw(30) << "Year Released:  " << left << this->movieYear << endl;
	cout << right << setw(30) << "Genre:  " << left;
	this->movieGenre->displayText();
	cout << endl;
	cout << right << setw(30) << "Rating:  " << left;
	this->movieRating->displayText();
	cout << endl;
	cout << right << setw(30) << "Number of Oscars Won:  " << left << this->movieOscars << endl;
	cout << right << setw(30) << "Number of Stars:  " << left << this->movieNumStars << endl << endl;
}


void Movie::printMovieDetailsToFile(ofstream &outFile)
{
	char temp[1000];
	strncpy(temp, this->movieTitle->getText(), 1000);
	outFile << temp << endl;
	outFile << this->movieLength << endl;
	outFile << this->movieYear << endl;
	strncpy(temp, this->movieGenre->getText(), 1000);
	outFile << temp << endl;
	strncpy(temp, this->movieRating->getText(), 1000);
	outFile << temp << endl;
	outFile << this->movieOscars << endl;
	outFile << this->movieNumStars << endl;
}


void Movie::editMovie()
{
	int choice;
	//Text* tempText;
	char temp[100];
	
	do
	{
		cout << "\n\nWhich detail do you wish to edit?\n";
		cout << "1.  Title\n";
		cout << "2.  Length\n";
		cout << "3.  Year\n";
		cout << "4.  Genre\n";
		cout << "5.  Rating\n";
		cout << "6.  Number of Oscars Won\n";
		cout << "7.  Number of Stars\n";
		cout << "8.  DONE EDITING\n";
		cout << "CHOOSE 1-8:  ";
		cin >> choice;
		while(choice < 1 || choice > 8)
		{
			cout << "\nOOPS!  Enter choice 1 through 8:  ";
			cin >> choice;
		}
		cin.ignore();
		
		switch(choice)
		{
			case 1: cout << "\nCurrent Title: ";
					
					this->movieTitle->displayText();
					cout << "\nNEW TITLE:   ";
					cin.getline(temp, 100);
					this->movieTitle->editText(temp);
					
					break;
			
			case 2:	cout << "\nCurrent Length: " << this->movieLength;
					cout << "\nNEW LENGTH:  ";
					cin >> this->movieLength;
					break;
					
			case 3: cout << "\nCurrent Year: " << this->movieYear;
					cout << "\nNEW LENGTH:  ";
					cin >> this->movieYear;
					break;
					
			case 4:	cout << "\nCurrent Genre: ";
					this->movieGenre->displayText();
					cout << "\nNEW GENRE:  ";
					cin.getline(temp, 100);
					this->movieTitle->editText(temp);
					break;
					
			case 5: cout << "\nCurrent Rating: ";
					this->movieRating->displayText();
					cout << "\nNEW GENRE:  ";
					cin.getline(temp, 100);
					this->movieRating->editText(temp);
					break;
			
			case 6: cout << "\nCurrent Number of Oscars Won: " << this->movieOscars;
					cout << "\nNEW NUMBER OF OSCARS:  ";
					cin >> this->movieOscars;
					break;
					
			case 7:	cout << "\nCurrent Star Rating from IMDB: " << this->movieNumStars;
					cout << "\nNEW STAR RATING:  ";
					cin >> this->movieNumStars;
					break;
		}
	}while(choice != 8);
}

Text* Movie::getMovieTitle()
{
	return this->movieTitle;
}

int Movie::getMovieLength()
{
	return this->movieLength;
}

int Movie::getMovieYear()
{
	return this->movieYear;
}

Text* Movie::getMovieGenre()
{
	return this->movieGenre;
}

Text* Movie::getMovieRating()
{
	return this->movieRating;
}

int Movie::getMovieOscars()
{
	return this->movieOscars;
}

float Movie::getMovieNumStars()
{
	return this->movieNumStars;
}

void Movie::setMovieTitle(Text* title)
{
	this->movieTitle = title;
}

void Movie::setMovieLength(int length)
{
	this->movieLength = length;
}

void Movie::setMovieYear(int year)
{
	this->movieYear = year;
}

void Movie::setMovieGenre(Text* genre)
{
	this->movieGenre = genre;
}

void Movie::setMovieRating(Text* rating)
{
	this->movieRating = rating;
}

void Movie::setMovieOscars(int oscars)
{
	this->movieOscars = oscars;
}

void Movie::setMovieNumStars(float stars)
{
	this->movieNumStars = stars;
}
