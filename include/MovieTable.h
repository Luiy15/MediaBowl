#include <unordered_map>
#include "Movie.h"
using namespace std;


class MovieTable {
public:
    MovieTable() {}

    void insertMovie(Movie* movie) {
        movies[movie->getTitle()] = movie;
        for (auto& genre : movie->getGenres()) {
            genreMap[genre].push_back(movie);
        }
        directorMap[movie->getDirector()].push_back(movie);
        for (auto& actor : movie->getActors()) {
            actorMap[actor].push_back(movie);
        }
        releaseYearMap[movie->getYear()].push_back(movie);
    }

    Movie* getByTitle(string title) {
        auto iter = movies.find(title);
        if (iter != movies.end()) {
            return iter->second;
        } else {
            return nullptr;
        }
    }

    vector<Movie*> getByGenre(string genre) {
        auto iter = genreMap.find(genre);
        if (iter != genreMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

    vector<Movie*> getByDirector(string director) {
        auto iter = directorMap.find(director);
        if (iter != directorMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

    vector<Movie*> getByActor(string actor) {
        auto iter = actorMap.find(actor);
        if (iter != actorMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

    vector<Movie*> getByReleaseYear(int releaseYear) {
        auto iter = releaseYearMap.find(releaseYear);
        if (iter != releaseYearMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

private:
    unordered_map<string, Movie*> movies;
    unordered_map<string, vector<Movie*>> genreMap;
    unordered_map<string, vector<Movie*>> directorMap;
    unordered_map<string, vector<Movie*>> actorMap;
    unordered_map<int, vector<Movie*>> releaseYearMap;
};