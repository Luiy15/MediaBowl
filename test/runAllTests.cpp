#include "gtest/gtest.h"
#include "../include/Book.h"
#include "../include/Movie.h"
#include "../include/Show.h"
#include "../include/StackMaker.h"
#include "../include/BookTable.h"
#include "../include/MovieTable.h"
#include "../include/ShowTable.h"
#include <iostream>
#include <vector>


TEST(MovieConstructor, testMovieName){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getTitle(),"The Batman");

}

TEST(MovieConstructor, testMovieRating){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getRating(),7.8);

}

TEST(MovieConstructor, testMovieDirector){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getDirector(),"Mat Reeves");

}

TEST(MovieConstructor, testMovieYear){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getYear(),2022);

}

TEST(MovieConstructor, testMovieGenre){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getGenres().at(0),"Thriller");

}

TEST(MovieConstructor, testMovieRuntime){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getRuntime(),"176");

}

TEST(MovieConstructor, testMovieActor){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getActors().at(0),"Robert Pattinson");

}

TEST(BookConstructor, testBookTitle){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getTitle(),"Crime and Punishment");

}

TEST(BookConstructor, testBookDescription){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getDescription(),"Untrustworthy Narrator");

}

TEST(BookConstructor, testBookRating){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getRating(),9.5);

}

TEST(BookConstructor, testBookYear){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getYear(),1866);

}

TEST(BookConstructor, testBookGenre){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getGenres().at(0),"Crime");

}

TEST(BookConstructor, testBookAuthor){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getAuthors().at(0),"Fyodor Dostoyevsky");

}

TEST(ShowConstructor, testShowTitle){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getTitle(),"Hannibal");

}

TEST(ShowConstructor, testShowDescription){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getDescription(),"Serial Killer enjoys meal");

}

TEST(ShowConstructor, testShowRating){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getRating(),8.5);

}
TEST(ShowConstructor, testShowYear){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getYear(),2013);

}

TEST(ShowConstructor, testShowGenre){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getGenres().at(0),"Detective");

}

TEST(ShowConstructor, testShowActors){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getActors().at(0),"Mads Mikkelsen");

}



TEST(BookFileStream, BookTitleFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

EXPECT_EQ(testBookStack.top()->getTitle(), "Crime and Punishment");
}

TEST(BookFileStream, BookAuthorFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

EXPECT_EQ(testBookStack.top()->getAuthors().at(0), "Fyodor Dostoyevsky");
}

TEST(BookFileStream, BookRatingFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

EXPECT_EQ(testBookStack.top()->getRating(), 9.5);
}

TEST(BookFileStream, BookYearFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();
 
EXPECT_EQ(testBookStack.top()->getYear(), 1866);
}

TEST(BookFileStream, testingSecondBook){

StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

testBookStack.pop();

EXPECT_EQ(testBookStack.top()->getTitle(), "1984");
}

TEST(MovieandShowFileStream , testingMovieReading){

StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getTitle(),"The Social Network");

}
TEST(MovieandShowFileStream, testingShowReading){

StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Show*> testShowStack = testStack->getShowStack();

EXPECT_EQ(testShowStack.top()->getTitle(),"Breaking Bad");
}

TEST(TestingFromWebScraper, testingMovie){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getTitle(), "The Unbearable Weight of Massive Talent");

}

TEST(TestingFromWebScraper, testingMovieDescription){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getDescription(), "In this action-packed comedy, Nicolas Cage plays Nick Cage, channeling his iconic characters as he's caught between a superfan (Pedro Pascal) and a CIA agent (Tiffany Haddish).");

}
TEST(TestingFromWebScraper, testingMovieRating){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getRating(),7.0);

}

TEST(TestingFromWebScraper, testingMovieYear){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getYear(), 2022);
}

TEST(TestingFromWebScraper, testingMovieGenre_1){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();


    EXPECT_EQ(testMovieStack.top()->getGenres().at(0), "Action");
}

TEST(TestingFromWebScraper, testingMovieGenre_2){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();


    EXPECT_EQ(testMovieStack.top()->getGenres().at(1), "Comedy");
}
TEST(TestingFromWebScraper, testingMovieGenre_3){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();


    EXPECT_EQ(testMovieStack.top()->getGenres().at(2), "Crime");
}

TEST(TestingFromWebScraper, testingMovieDirector){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getDirector(),"Tom Gormican");

}
TEST(TestingFromWebScraper, testingMovieDuration){
StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getRuntime(),"1h 47m");


}


TEST(TestingFromWebScraper, testingMovieActor_2){
    StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getActors().at(1), "Pedro Pascal");
}
    

TEST(TestingBookHashTableSearch, testingBook_1){
   
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

BookTable table;
table.insert(testBook);

Book* searchBook = table.getBy_title("Crime and Punishment");

EXPECT_EQ(searchBook->getRating(),9.5);
}

TEST(TestingMovieHashTableSearch, testingMovie_1){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

MovieTable  table;

table.insertMovie(testMovie);

Movie* searchMovie = table.getByTitle("The Batman");

EXPECT_EQ(searchMovie->getRating(),7.8);

}

TEST(TestingShowHashTableSearch, testingShow_1){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Show* testShow = new Show("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",actor);

ShowTable  table;

table.insertShow(testShow);

Show* searchShow = table.getByTitle("The Batman");

EXPECT_EQ(searchShow->getRating(),7.8);

}
