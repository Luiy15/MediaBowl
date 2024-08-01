#ifndef MEDIA_H
#define MEDIA_H

#include<iostream>
#include<vector>

using namespace std;

class Media{

private:

	string _title;
	string _description;
	double _rating;
	int _year;
	vector <string> _genres;

public:
	Media(string t, string d, double r, int y, vector<string> g);
	string getTitle()const;
	vector<string> getGenres()const;
	int getYear()const;
	string getDescription()const;
	double getRating()const;



};


#endif
