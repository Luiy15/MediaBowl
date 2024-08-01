#ifndef DATA_H
#define DATA_H

#include "MovieTable.h"
#include "BookTable.h"
#include "ShowTable.h"
#include "StackMaker.h"
#include <stack>
#include <iostream>

using namespace std;

class Data{

public:
MovieTable movies;
BookTable books;
ShowTable shows;

Data(string bookFile , string movieandshowfile);


};

#endif