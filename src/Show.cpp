#include <iostream>
#include "../include/Show.h"


Show::Show(string t, string d, double r, int y, vector<string>g ,string di,  vector<string>a)
    :Media(t, d, r, y, g),director(di),actors(a){}


string Show::getDirector()const{

    return this->director;
}



vector<string> Show::getActors()const{


    return this->actors;
}

void Show::displayGenres(){
vector<string> g = this->getGenres();

for(int i = 0; i < g.size() ; ++i){
cout << g.at(i) << ", " ;

}

}

void Show::displayActors(){
for(int i = 0; i < actors.size() ; ++i){
cout << actors.at(i) << ", " ;

}
}