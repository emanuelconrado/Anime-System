#include "Anime.h"

// Default constructor

Anime::Anime() : Item()
{
    type = 1;
    episodes = 0;
    seasons = 0;
    studio = "";

}

// Constructor with parameters

Anime::Anime(string name, string genre, int episodes, float rating, int year, string studio, int seasons, string author)
 : Item(name, genre, rating, year, author)
{   
    this->type = 1;
    this->episodes = episodes;
    this->studio = studio;
    this->seasons = seasons;

}
// Destructor

Anime::~Anime()
{
}

void Anime::print()
{
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Episodes: " << episodes << endl;
    cout << "Seasons: " << seasons << endl;
    cout << "Year: " << year << endl;
    cout << "Author: " << author << endl;
    cout << "Rating: " << rating << "/5" << endl;
    cout << "Studio: " << studio << endl;
    cout << "-----------------------------------------------------------------" << endl;
    
    //cout << "Characters: " << endl;

    cout << "" << endl;
}

