#ifndef MOVIE_H
#define MOVIE_H
#include "Media.h"


class Movie :public Media {
private:

	string _directors;
	vector <string> _actors;
	string _runTime;

public:
	Movie(string t, string d, double r, int y, vector<string> g, string di, string rT, vector<string> a);
	string getDirector()const;
	vector <string> getActors()const;
	string getRuntime()const;
	void displayGenres();
	void displayActors();



};

#endif
