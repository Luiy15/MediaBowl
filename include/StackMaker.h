#ifndef STACKMAKER_H
#define STACKMAKER_H
#include <stack>
#include <fstream>
#include "../include/Show.h"
#include "../include/Movie.h"
#include "../include/Book.h"

using namespace std;
class StackMaker{
private:

stack<Movie*> movieStack;
stack<Book*> bookStack;
stack<Show*> showStack;

public: 

StackMaker(string bookFileName, string MovieandShowFileName);

stack<Movie*> getMovieStack();
stack<Book*>  getBookStack();
stack<Show*> getShowStack();



  




};



#endif