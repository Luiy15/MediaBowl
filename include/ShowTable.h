#include "Show.h"
#include <unordered_map>

using namespace std;

class ShowTable {
public:
    ShowTable() {}

    void insertShow(Show* show) {
        shows[show->getTitle()] = show;
        for (auto& genre : show->getGenres()) {
            genreMap[genre].push_back(show);
        }
        directorMap[show->getDirector()].push_back(show);
        for (auto& actor : show->getActors()) {
            actorMap[actor].push_back(show);
        }
        releaseYearMap[show->getYear()].push_back(show);
    }

    Show* getByTitle(string title) {
        auto iter = shows.find(title);
        if (iter != shows.end()) {
            return iter->second;
        } else {
            return nullptr;
        }
    }

    vector<Show*> getByGenre(string genre) {
        auto iter = genreMap.find(genre);
        if (iter != genreMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

    vector<Show*> getByDirector(string director) {
        auto iter = directorMap.find(director);
        if (iter != directorMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

    vector<Show*> getByActor(string actor) {
        auto iter = actorMap.find(actor);
        if (iter != actorMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

    vector<Show*> getByReleaseYear(int releaseYear) {
        auto iter = releaseYearMap.find(releaseYear);
        if (iter != releaseYearMap.end()) {
            return iter->second;
        } else {
            return {};
        }
    }

private:
    unordered_map<string, Show*> shows;
    unordered_map<string, vector<Show*>> genreMap;
    unordered_map<string, vector<Show*>> directorMap;
    unordered_map<string, vector<Show*>> actorMap;
    unordered_map<int, vector<Show*>> releaseYearMap;
};