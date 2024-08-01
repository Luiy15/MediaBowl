#include <iostream>
#include "../include/Movie.h"



Movie::Movie( string t, string d, double r, int y, vector<string> g, string di, string rT, vector<string> a)
    :Media(t, d, r, y, g), _directors(di), _runTime(rT), _actors(a) {}


string Movie::getDirector()const {

    return _directors;

}

vector <string> Movie::getActors()const {


    return _actors;
}

string Movie::getRuntime()const {

    return _runTime;
}

void Movie::displayGenres(){
vector<string> g = this->getGenres();

for(int i = 0; i < g.size() ; ++i){
cout << g.at(i) << ", " ;

}

}

void Movie::displayActors(){
for(int i = 0; i < _actors.size() ; ++i){
cout << _actors.at(i) << ", " ;

}

}