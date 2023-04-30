#ifndef ANIME_H
#define ANIME_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

class Anime
{
protected:
    int idgenre;
    string name;
    string genre;
    string author;
    int episodes;
    int seasons;
    int rating;
    int year;
    string studio;
    string director;
    list<string> characters;
    
public:
    Anime();
    Anime(string name, string genre, int episodes, int rating, int year, 
    string studio, string director, int seasons, string author);
    ~Anime();
    void virtual setName(string nome);
    void virtual setGenre(string genre);
    void setEpisodes(int episodes);
    void setSeasons(int seasons);
    void virtual setRating(int rating);
    void virtual setYear(int year);
    void virtual setStudio(string studio);
    void virtual setDirector(string director);
    void addCharacter(string character);
    void setauthor(string author);
    string virtual getName();
    string virtual getGenre();
    int getEpisodes();
    int virtual getRating();
    int virtual getYear();
    string getStudio();
    string getDirector();
    list<string> virtual getCharacters();
    void printAnime();
    int getidgenre();
    int getseasons();
    string getauthor();
};




#endif