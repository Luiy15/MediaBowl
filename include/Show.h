#ifndef SHOW_H
#define SHOW_H
#include "Media.h"


class Show:public Media{
private:

string director;
vector <string> actors;

public: 

Show(string title, string description, double rating, int year, vector<string>genres, string director,  vector<string>actors);

string getDirector()const;
vector<string> getActors()const;


void displayGenres();
void displayActors();

};


#endif