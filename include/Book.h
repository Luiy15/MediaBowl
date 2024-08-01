#ifndef BOOK_H
#define BOOK_H
#include "Media.h"
#include <vector>


class Book:public Media{
private:

vector<string> authors;

public: 
Book(string title, string description, double rating, int year, vector<string>genres, vector<string>authors);
vector<string> getAuthors()const;

void displayGenres();
void displayAuthors();

};

#endif