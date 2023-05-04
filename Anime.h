#ifndef ANIME_H
#define ANIME_H
#include "Item.h"
using namespace std;

class Anime : public Item
{
private:
    int episodes;
    int seasons;
    string studio;
    list<string> characters;
    
public:
    Anime();
    Anime(string name, string genre, int episodes, int rating, int year, 
    string studio, int seasons, string author);
    ~Anime();

    //sets
    void setEpisodes(int episodes);
    void setSeasons(int seasons);
    void virtual setStudio(string studio);
    
    //gets
    int getEpisodes();
    string getStudio();
    int getSeasons();

    void print();
};




#endif