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
    setName();
    setGenre();
    setEpisodes();
    setSeasons();
    setYear();
    setauthor();
    setRating();
    setStudio();
    setDirector();
}

// Destructor

Anime::~Anime()
{
}

