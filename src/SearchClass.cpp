#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/SearchClass.h"


using namespace std;

SearchClass::SearchClass(string b , string ms){

mediaData = new Data(b, ms);

}


void SearchClass::SearchBookByTitle(string title){

Book* book = mediaData->books.getBy_title(title);

cout << "Name: " << book->getTitle() << endl;
cout << "Description: " << endl;
cout << book->getDescription() << endl;

cout <<"Rating: " << book->getRating() << endl;
cout <<"Year: " << book->getRating() << endl;
cout << "Genres: " ;
 book->displayGenres() ;
 cout << endl;
cout <<  "Authors: " ;
 book->displayAuthors();
cout << endl << endl << endl;


}

void SearchClass::SearchMovieByTitle(string title){

Movie* movie = mediaData->movies.getByTitle(title);

cout << "Name: " << movie->getTitle() << endl;
cout <<"Description: " << endl << movie->getDescription() << endl;

cout <<"Rating: " << movie->getRating() << endl;
cout  <<"Year: " << movie->getYear() << endl;
cout << "Genres: " ;
movie->displayGenres();
cout << endl;
cout << "Actors: " << endl;
movie->displayActors();
cout << endl;
cout << "Director: " << movie->getDirector() << endl;
cout << "Runtime: " << movie->getRuntime() << endl;
cout << endl << endl << endl;


}

void SearchClass::SearchShowByTitle(string title){

Show* show = mediaData->shows.getByTitle(title);

cout << "Name: " << show->getTitle() << endl;
cout <<"Description: " << endl << show->getDescription() << endl;

cout <<"Rating: " << show->getRating() << endl;
cout  <<"Year: " << show->getYear() << endl;
cout << "Genres: " ;
show->displayGenres();
cout << endl;
cout << "Actors: " << endl;
show->displayActors();
cout << endl;
cout << "Director: " << show->getDirector() << endl;

cout << endl << endl << endl;

}


void SearchClass::SearchMovieByGenre(string genre){



vector<Movie*> moviesWithGenre = mediaData->movies.getByGenre(genre);
int count;
if(moviesWithGenre.size() > 10 ){

count = 10;;
    
}else{

    count = moviesWithGenre.size();
}

 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = std::rand() % moviesWithGenre.size(); // Generate a random index
        cout << moviesWithGenre.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;

}

void SearchClass::SearchBookByGenre(string genre){

vector<Book*> booksWithGenre = mediaData->books.getByGenre(genre);


int count;
if(booksWithGenre.size() > 10 ){

count = 10;;
    
}else{

    count = booksWithGenre.size();
}


 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = std::rand() % booksWithGenre.size(); // Generate a random index
        cout << booksWithGenre.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;



}

void SearchClass::SearchShowByGenre(string genre){
vector<Show*> showsWithGenre = mediaData->shows.getByGenre(genre);

int count;
if(showsWithGenre.size() > 10 ){

count = 10;;
    
}else{

    count = showsWithGenre.size();
}



 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = std::rand() % showsWithGenre.size(); // Generate a random index
        cout << showsWithGenre.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;

}


void SearchClass::SearchBookByAuthor(string author){

vector<Book*> booksWithAuthor = mediaData->books.getByauthor(author);

int count;
if(booksWithAuthor.size() > 10 ){

count = 10;;
    
}else{

    count = booksWithAuthor.size();
}


 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % booksWithAuthor.size(); // Generate a random index
        cout << booksWithAuthor.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;



}

void SearchClass::SearchMovieByDirector(string director){



vector<Movie*> moviesWithDirector = mediaData->movies.getByDirector(director);

int count;
if(moviesWithDirector.size() > 10 ){

count = 10;;
    
}else{

    count = moviesWithDirector.size();
}


 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % moviesWithDirector.size(); // Generate a random index
        cout << moviesWithDirector.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;



}

void SearchClass::SearchShowByDirector(string director){


vector<Show*> showsWithDirector = mediaData->shows.getByDirector(director);


int count;
if(showsWithDirector.size() > 10 ){

count = 10;;
    
}else{

    count = showsWithDirector.size();
}

 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % showsWithDirector.size(); // Generate a random index
        cout << showsWithDirector.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;



}


void SearchClass::SearchShowByActor(string actor){

vector<Show*> showsWithActor = mediaData->shows.getByActor(actor);


int count;
if(showsWithActor.size() > 10 ){

count = 10;;
    
}else{

    count = showsWithActor.size();
}



 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % showsWithActor.size(); // Generate a random index
        cout << showsWithActor.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;




}

void SearchClass::SearchMovieByActor(string actor){


vector<Movie*> movieWithActor = mediaData->movies.getByActor(actor);

int count;
if(movieWithActor.size() > 10 ){

count = 10;;
    
}else{

    count = movieWithActor.size();
}


 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % movieWithActor.size(); // Generate a random index
        cout << movieWithActor.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;




}


void SearchClass::SearchBookByYear(int year){
vector <Book*> bookInYear = mediaData->books.getBy_year(year);

int count;
if(bookInYear.size() > 10 ){

count = 10;;
    
}else{

    count = bookInYear.size();
}


 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % bookInYear.size(); // Generate a random index
        cout << bookInYear.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;



}

void SearchClass::SearchMovieByYear(int year){

vector <Movie*> movieInYear = mediaData->movies.getByReleaseYear(year);

int count;
if(movieInYear.size() > 10 ){

count = 10;;
    
}else{

    count = movieInYear.size();
}

 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % movieInYear.size(); // Generate a random index
        cout << movieInYear.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;



}



void SearchClass::SearchShowByYear(int year){

vector<Show*> showInYear = mediaData->shows.getByReleaseYear(year);

int count;
if(showInYear.size() > 10 ){

count = 10;;
    
}else{

    count = showInYear.size();
}

 srand(time(nullptr)); // Seed the random number generator with the current time

    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % showInYear.size(); // Generate a random index
        cout << showInYear.at(idx)->getTitle() << " " << endl;

    }

    cout << endl << endl;


}

// void SearchClass::getBookRec(string title){

// Book* searchBok = mediaData->books.getBy_title(title);



// }

