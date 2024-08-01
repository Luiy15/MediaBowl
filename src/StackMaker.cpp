#include <iostream>
#include<string>
#include<fstream>
#include<sstream>
#include "../include/StackMaker.h"


using namespace std;

StackMaker::StackMaker(string bookFile, string movieShowFile){
 stack<Book*> fillBookStack;
stack<Movie*> fillMovieStack;
stack<Show*> fillShowStack;



ifstream inFs;
inFs.open(bookFile);
if(!inFs.is_open()){
    cout << "Error Opening File" << endl;
 
}
else{

    string line;
    while (getline(inFs, line)) {
        string title, description, yearStr, genreStr, authorStr;
        double rating;
        vector<string> genres, authors;
        
        
        istringstream iss(line);
        getline(iss, title, '#');
        getline(iss, description, '#');
        iss >> rating;
        iss.ignore(); 
        getline(iss, yearStr, '#');
        getline(iss, genreStr, '#');
        getline(iss, authorStr, '#');
        
        istringstream genreStream(genreStr), authorStream(authorStr);
        string genre, author;
        while (getline(genreStream, genre, ',')) {
            genres.push_back(genre);
        }
        while (getline(authorStream, author, ',')) {
            authors.push_back(author);
        }
        
        int year = stoi(yearStr);
        
        
        Book* book = new Book(title, description, rating, year, genres, authors);
        
        
        fillBookStack.push(book);
        }
    }
    inFs.close();
    this->bookStack = fillBookStack;


    ifstream infile(movieShowFile);
    string line;
    while (getline(infile, line)) {
        stringstream ss(line);
        string type;
        getline(ss, type, '#');
        if (type == "Movie") {
            string title, description, director,runtime;
            double rating;
            int release_year;
            vector<string> genres, actors;
            getline(ss, title, '#');
            getline(ss, description, '#');
            ss >> rating;
            ss.ignore(1);
            ss >> release_year;
            ss.ignore(1);
            string genre_list;
            getline(ss, genre_list, '#');
            stringstream genre_stream(genre_list);
            string genre;
            while (getline(genre_stream, genre, ',')) {
                if (genre.at(0) == ' '){
                genre = genre.substr(1,genre.size() - 1 );
                }
                genres.push_back(genre);
            }
            getline(ss, director, '#');
            getline(ss,runtime,'#');
            
            string actor_list;
            getline(ss, actor_list, '#');
            stringstream actor_stream(actor_list);
            string actor;
            while (getline(actor_stream, actor, ',')) {
                if(actor.at(0) == ' ')
                {
                actor = actor.substr(1, actor.size()-1);


                }
                actors.push_back(actor);
            }
            Movie* movie = new Movie(title, description, rating, release_year, genres, director, runtime, actors);
            fillMovieStack.push(movie);
        }
        else if (type == "Show") {
             string title, description, director,runtime;
            double rating;
            int release_year;
            vector<string> genres, actors;
            getline(ss, title, '#');
            getline(ss, description, '#');
            ss >> rating;
            ss.ignore(1);
            ss >> release_year;
            ss.ignore(1);
            string genre_list;
            getline(ss, genre_list, '#');
            stringstream genre_stream(genre_list);
            string genre;
            while (getline(genre_stream, genre, ',')) {
                 if (genre.at(0) == ' '){
                genre = genre.substr(1,genre.size() - 1 );
                }

               
                genres.push_back(genre);
            
            
            }
            getline(ss, director, '#');
            
            string actor_list;
            getline(ss, actor_list, '#');
            stringstream actor_stream(actor_list);
            string actor;
            while (getline(actor_stream, actor, ',')) {
                    if(actor.at(0) == ' ')
                {
                actor = actor.substr(1, actor.size()-1);


                }

                
                actors.push_back(actor);
            }
            Show* show = new Show(title, description, rating, release_year, genres, director,  actors);
            fillShowStack.push(show);
        }
    }
    infile.close();
    this->movieStack = fillMovieStack;
    this->showStack = fillShowStack;




}
    
    






stack<Book*> StackMaker::getBookStack(){



    return this->bookStack;
}

stack<Movie*> StackMaker::getMovieStack(){


    return this->movieStack;
}

stack<Show*> StackMaker::getShowStack(){


    return this->showStack;
}