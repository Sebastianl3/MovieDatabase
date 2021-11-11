
#ifndef MOVIE_H
#define MOVIE_H

#include "Text.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

class Movie
{
	public:
		Movie();
		Movie(Text* title, int length);
		Movie(Text* title, int length, int year, Text* genre, Text* rating, int nom, float stars);
		~Movie();
		Text* getMovieTitle();
		int getMovieLength();
		int getMovieYear();
		Text* getMovieGenre();
		Text* getMovieRating();
		int getMovieOscars();
		float getMovieNumStars();
		void setMovieTitle(Text* title);
		void setMovieLength(int length);
		void setMovieYear(int year);
		void setMovieGenre(Text* genre);
		void setMovieRating(Text* rating);
		void setMovieOscars(int oscars);
		void setMovieNumStars(float stars);
		void editMovie();
		void printMovieDetailsToFile(ofstream &outfile);
		void printMovieDetail();
	private:
		Text* movieTitle;  //title of movie
		int movieLength; //length of movie in minutes
		int movieYear; //year released
		Text* movieGenre; //comedy, horror, sci-fi, fantasy, romance, thriller, drama, action, biography
		Text* movieRating; //G, PG, PG-13, R, MA
		int movieOscars; //number of oscars won
		float movieNumStars; //taken from IMDB on 10 star scale
};

#endif