
#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Movies
{
	public:
		Movies(int max);
		~Movies();
		Movie** getMoviesArray();
		int getMaxMovies();
		int getNumMovies();
		Movie* getAMovieFromArray(int index);
		void addMovieToArray();
		void displayMovies();
		void readMoviesFromFile(char *filename);
		void removeMoviesFromArray();
		void saveToFile(char *filename);
		void editMovieInArray();
	private:
		Movie** moviesArray; //an array of pointers - each pointer points to a single Movie
		int maxMovies; //maximum number of elements in the array
		int numMovies; //current number of movies in the array
		void resizeMovieArray();
		void displayMovieTitles();
};



#endif