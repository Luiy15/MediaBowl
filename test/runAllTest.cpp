#include "gtest/gtest.h"
#include "../include/Book.h"
#include "../include/Movie.h"
#include "../include/Show.h"
#include "../include/StackMaker.h"
#include "../include/BookTable.h"
#include "../include/MovieTable.h"
#include "../include/ShowTable.h"
#include <vector>
#include <iostream>




TEST(MediaConstructor_Testing, ConstructorTest) {
    string title = "Star Wars";
    string description = "A long time ago in a galaxy far, far away...";
    double rating = 8.6;
    int year = 1977;
    vector<string> genres = { "Action", "Adventure"};
    
    Media media_temp(title, description, rating, year, genres);
    
    ASSERT_EQ(media_temp.getTitle(), title);
    ASSERT_EQ(media_temp.getDescription(), description);
    ASSERT_EQ(media_temp.getRating(), rating);
    ASSERT_EQ(media_temp.getYear(), year);
    ASSERT_EQ(media_temp.getGenres(), genres);
}

TEST(MediaConstructor_Testing, ConstructorTest_2) {
    string title = "Batman";
    string description = "I have no clue what the des is...";
    double rating = 8.6;
    int year = 2015;
    vector<string> genres = { "Action", "Adventure" };
    
    Media media_temp(title, description, rating, year, genres);
    
    ASSERT_EQ(media_temp.getTitle(), title);
    ASSERT_EQ(media_temp.getDescription(), description);
    ASSERT_EQ(media_temp.getRating(), rating);
    ASSERT_EQ(media_temp.getYear(), year);
    ASSERT_EQ(media_temp.getGenres(), genres);
}

TEST(MediaConstructor_Testing, ConstructorTest_3) {
    string title = "Iron 2";
    string description = "A dude with a iron suit...";
    double rating = 8.6;
    int year = 2015;
    vector<string> genres = { "Action", "Adventure", "Fantasy" };
    
    Media m(title, description, rating, year, genres);
    
    EXPECT_EQ(m.getTitle(), title);
    EXPECT_EQ(m.getDescription(), description);
    EXPECT_EQ(m.getRating(), rating);
    EXPECT_EQ(m.getYear(), year);
    EXPECT_EQ(m.getGenres(), genres);
}


TEST(MediaConstructor_Testing, ConstructorTitleTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice"; 
    double rating = 3.0;
    int year = 2022; 
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getTitle(), title);
}

TEST(MediaConstructor_Testing, ConstructorDescriptionTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice"; 
    double rating = 3.0;
    int year = 2022; 
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getDescription(), description);
}


TEST(MediaConstructor_Testing, ConstructorRatingTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice"; 
    double rating = 3.0;
    int year = 2022; 
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getRating(), rating);
}


TEST(MediaConstructor_Testing, ConstructorYearTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice"; 
    double rating = 3.0;
    int year = 2022; 
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getYear(), year);
}

TEST(MediaConstructor_Testing, ConstructorGenresTest) {
    string title = "The Dark Knight";
    string description = "Batman battles the Joker in Gotham City.";
    double rating = 9.0;
    int year = 2008;
    vector<string> genres = { "Action", "Crime", "Drama" };

    Media media_temp(title, description, rating, year, genres);

    // Check that the genres vector was copied correctly
    EXPECT_EQ(media_temp.getGenres().size(), genres.size());

    for (int i = 0; i < genres.size(); i++) {
        ASSERT_EQ(media_temp.getGenres()[i], genres[i]);
    }
}


TEST(BookTest, ConstructorTest_1) {
    string title = "The Lord of the Rings";
    string description = "In a world of magic and monsters, a hobbit must journey to destroy an evil ring...";
    double rating = 9.3;
    int year = 2001;
    vector<string> genres = { "Fantasy", "Adventure" };
    vector<string> authors = { "J.R.R. Tolkien" };

    Book book_temp(title, description, rating, year, genres, authors);

    EXPECT_EQ(book_temp.getTitle(), title);
    EXPECT_EQ(book_temp.getDescription(), description);
    EXPECT_EQ(book_temp.getRating(), rating);
    EXPECT_EQ(book_temp.getYear(), year);
    EXPECT_EQ(book_temp.getGenres(), genres);
    EXPECT_EQ(book_temp.getAuthors(), authors);
}

TEST(BookTest, ConstructorTest_2) {
    string title = "To Kill a Mockingbird";
    string description = "A classic novel set in the Deep South about racial injustice and the loss of innocence.";
    double rating = 8.3;
    int year = 1960;
    vector<string> genres = { "Fiction", "Historical" };
    vector<string> authors = { "Harper Lee" };

    Book book_temp(title, description, rating, year, genres, authors);

    EXPECT_EQ(book_temp.getTitle(), title);
    EXPECT_EQ(book_temp.getDescription(), description);
    EXPECT_EQ(book_temp.getRating(), rating);
    EXPECT_EQ(book_temp.getYear(), year);
    EXPECT_EQ(book_temp.getGenres(), genres);
    EXPECT_EQ(book_temp.getAuthors(), authors);
}

TEST(BookTest, ConstructorTest_3) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "Luis Magallanes" };

    Book book_temp(title, description, rating, year, genres, authors);

    EXPECT_EQ(book_temp.getTitle(), title);
    EXPECT_EQ(book_temp.getDescription(), description);
    EXPECT_EQ(book_temp.getRating(), rating);
    EXPECT_EQ(book_temp.getYear(), year);
    EXPECT_EQ(book_temp.getGenres(), genres);
    EXPECT_EQ(book_temp.getAuthors(), authors);
}

TEST(BookTest, ConstructorAuthorTest) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "jaKAL"};

    Book book_temp(title, description, rating, year, genres, authors);

    ASSERT_EQ(book_temp.getAuthors(), authors);
}


TEST(BookTest, ConstructorAuthorTest_2) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "MillieBobbyBrown"};

    Book book_temp(title, description, rating, year, genres, authors);

    ASSERT_EQ(book_temp.getAuthors(), authors);
}


TEST(BookTest, ConstructorAuthorTest_3) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "Jack Nickelson"};

    Book book_temp(title, description, rating, year, genres, authors);

    ASSERT_EQ(book_temp.getAuthors(), authors);
}


//Athony's Movie_unit_test  {
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


//  }


TEST(ShowConstructor, ConstructorTest_1){
    string title = "The Flash";
    string description = "Guy who runs super fast for no reason";
    double rating = 5.0;
    int year = 2013;
    vector<string> genres = { "Fantasy", "Adventure", "Action", "Horror" };
    string director = "Luis Magallanes";
    vector <string> actors = {"Grant Gustin", "Candice Patton", "Carlos V."};

    Show show_temp(title, description, rating, year, genres, director, actors);

    EXPECT_EQ(show_temp.getTitle(), title);
    EXPECT_EQ(show_temp.getDescription(), description);
    EXPECT_EQ(show_temp.getRating(), rating);
    EXPECT_EQ(show_temp.getYear(), year);
    EXPECT_EQ(show_temp.getGenres(), genres);
    EXPECT_EQ(show_temp.getDirector(), director);
    EXPECT_EQ(show_temp.getActors(), actors);
}

TEST(ShowConstructor, ConstructorTest_2){
    string title = "You";
    string description = "Guy who's beyond crazy";
    double rating = 10.0;
    int year = 2018;
    vector<string> genres = {"Thriller", "Action", "Horror" };
    string director = "John Scott";
    vector <string> actors = {"Penn Badgley", "Eleanor Crain Vance"};

    Show show_temp(title, description, rating, year, genres, director, actors);

    EXPECT_EQ(show_temp.getTitle(), title);
    EXPECT_EQ(show_temp.getDescription(), description);
    EXPECT_EQ(show_temp.getRating(), rating);
    EXPECT_EQ(show_temp.getYear(), year);
    EXPECT_EQ(show_temp.getGenres(), genres);
    EXPECT_EQ(show_temp.getDirector(), director);
    EXPECT_EQ(show_temp.getActors(), actors);
}

TEST(ShowConstructor, ConstructorTest_3){
    string title = "Boy who cried wolf";
    string description = "Some dude in the middle of nowhere crying for help";
    double rating = 1.0;
    int year = 2010;
    vector<string> genres = {"Thriller", "Si-Fi", "Comedy" };
    string director = "Rian Johnson";
    vector <string> actors = {"Brat Pit", "Leonardo Dicaprio"};

    Show show_temp(title, description, rating, year, genres, director, actors);

    EXPECT_EQ(show_temp.getTitle(), title);
    EXPECT_EQ(show_temp.getDescription(), description);
    EXPECT_EQ(show_temp.getRating(), rating);
    EXPECT_EQ(show_temp.getYear(), year);
    EXPECT_EQ(show_temp.getGenres(), genres);
    EXPECT_EQ(show_temp.getDirector(), director);
    EXPECT_EQ(show_temp.getActors(), actors);
}


TEST(ShowConstructor, ConstructorDirectorTest_1){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit"};
    string director = "Luis Magallanes";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getDirector(), director);
}


TEST(ShowConstructor, ConstructorDirectorTest_2){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit"};
    string director = "Anthony";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getDirector(), director);
}


TEST(ShowConstructor, ConstructorDirectorTest_3){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getDirector(), director);
}

TEST(ShowConstructor, ConstructorActorsTest_1){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit", "JAKAL"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getActors()[0], "Brat Pit");
    ASSERT_EQ(show_temp.getActors()[1], "JAKAL");
}


TEST(ShowConstructor, ConstructorActorsTest_2){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Kenny Smith"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getActors()[0], "Kenny Smith");
}


TEST(ShowConstructor, ConstructorActorsTest_3){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Shaq Brite"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getActors()[0], "Shaq Brite");
}


// Anthony's Unit Test {

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


TEST(TestingFromWebScraper, testingMovieActor){
    StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getActors().at(1), "Pedro Pascal");
}

TEST(TestingFromWebScraper, testingMovieGenre){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();


    EXPECT_EQ(testMovieStack.top()->getGenres().at(2), "Crime");
}

TEST(TestingFromWebScraper, testingMovieDirector_2){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getDirector(),"Tom Gormican");

}
TEST(TestingFromWebScraper, testingMovieDuration_2){
StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getRuntime(),"1h 47m");


}


TEST(TestingFromWebScraper, testingMovieActor_2){
    StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getActors().at(1), "Pedro Pascal");
}

// }

TEST(TestingBookHashTableSearch, testBook){
    vector<string>genre = {"Fiction", "Legal drama"};
    vector<string>authors = {"Harper Lee"};
Book *book_obj = new Book("To Kill a Mockingbird", "Harper Lee", 8.3, 1960, genre, authors);

BookTable table;
table.insert(book_obj);

Book* searchBook = table.getBy_title("To Kill a Mockingbird");

ASSERT_TRUE(searchBook != nullptr);
EXPECT_EQ(searchBook->getRating(), 8.3);
}


TEST(TestingMovieHashTableSearch, testMovie){
vector<string> genres = {"Action"};
vector<string> actor = {"Tommy Smith"};
Movie* testMovie = new Movie("The Football", "Guy who runs with football",5.0,2020,genres,"Matt Dean","176",actor);

MovieTable temp;

temp.insertMovie(testMovie);

Movie* Movie_Search = temp.getByTitle("The FootBall");

EXPECT_EQ(Movie_Search->getRating(),7.8);

}

TEST(TestingShowHashTableSearch, testShow){
    vector<string>genre = {"Science fiction", "Horror"};
    vector<string>actors =  {"Millie Bobby Brown", "Finn Wolfhard", "Winona Ryder"};
    string director = "Andew Johnson";

Show show_temp("Stranger Things", "Portal kills a lot of people", 8.7, 2016, genre, director, actors);

ShowTable table_temp;

table_temp.insertShow(&show_temp);
Show* searchShow = table_temp.getByTitle("Stranger Things");

EXPECT_EQ(searchShow->getRating(), 8.7);
}