#include "Anime.h"

// Default constructor

Anime::Anime()
{
    name = "";
    genre = "";
    episodes = 0;
    rating = 0;
    year = 0;
    studio = "";
    director = "";
}

// Constructor with parameters

Anime::Anime(string name, string genre, int episodes, int rating, int year, string studio, string director, int seasons, string author)
{   
    this->name = name;
    setGenre(genre);
    this->episodes = episodes;
    this->rating = rating;
    this->year = year;
    this->studio = studio;
    this->director = director;
    this->seasons = seasons;
    this->author = author;
}

// Destructor

Anime::~Anime()
{
}

