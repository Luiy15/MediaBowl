#include <unordered_map>
#include "Book.h"
using namespace std;

class BookTable {
public:
    unordered_map<string, Book*> _titleMap;
    unordered_map<double, vector<Book*>> ratingMap;
    unordered_map<int, vector<Book*>> _yearMap;
    unordered_map<string, vector<Book*>> genreMap;
    unordered_map<string, vector<Book*>> authorMap;

    void insert(Book* book) {
        _titleMap[book->getTitle()] = book;
        ratingMap[book->getRating()].push_back(book);
        _yearMap[book->getYear()].push_back(book);
        for (string genre : book->getGenres()) {
            genreMap[genre].push_back(book);
        }
        for (string author : book->getAuthors()) {
            authorMap[author].push_back(book);
        }
    }

    Book* getBy_title(string _title) {
        if (_titleMap.find(_title) == _titleMap.end()) {
            return NULL;
        }
        return _titleMap[_title];
    }

    vector<Book*> getByRating(double rating) {
        if (ratingMap.find(rating) == ratingMap.end()) {
            return vector<Book*>();
        }
        return ratingMap[rating];
    }

    vector<Book*> getBy_year(int _year) {
        if (_yearMap.find(_year) == _yearMap.end()) {
            return vector<Book*>();
        }
        return _yearMap[_year];
    }

    vector<Book*> getByGenre(string genre) {
        if (genreMap.find(genre) == genreMap.end()) {
            return vector<Book*>();
        }
        return genreMap[genre];
    }

    vector<Book*> getByauthor(string author) {
        if (authorMap.find(author) == authorMap.end()) {
            return vector<Book*>();
        }
        return authorMap[author];
    }
};