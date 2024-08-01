#include "../include/Data.h"
#include <iostream>
using namespace std;

Data::Data(string bookFile, string movieshowFile){


StackMaker* fillStack = new StackMaker(bookFile,movieshowFile);

stack<Movie*> movieStack = fillStack->getMovieStack();
stack<Book*> bookStack = fillStack->getBookStack();
stack<Show*> showStack = fillStack->getShowStack();

while(!movieStack.empty()){

movies.insertMovie(movieStack.top());
movieStack.pop();
}

while(!bookStack.empty()){

books.insert(bookStack.top());
bookStack.pop();
}
while(!showStack.empty()){

shows.insertShow(showStack.top());
showStack.pop();

}


}



