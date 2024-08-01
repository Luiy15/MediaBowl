#ifndef SEARCHCLASS_H
#define SEARCHCLASS_H
#include "Data.h"

class SearchClass{

private:
Data* mediaData;

public: 

SearchClass(string bookFile, string movieshowFile);

void SearchBookByTitle(string title);
void SearchMovieByTitle(string title);
void SearchShowByTitle(string title);

void SearchShowByGenre(string genre);
void SearchBookByGenre(string genre);
void SearchMovieByGenre(string genre);

void SearchBookByAuthor(string author);
void SearchMovieByDirector(string director);
void SearchShowByDirector(string director);

void SearchShowByActor(string actor);
void SearchMovieByActor(string actor);

void SearchBookByYear(int year);
void SearchMovieByYear(int year);
void SearchShowByYear(int year);

// void getBookRec(string title);
// void getShowRec(string title);
// void getMovieRec(string title);

};



#endif