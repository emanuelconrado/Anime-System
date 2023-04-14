#include "Manga.h"

// Default constructor

Manga::Manga()
{
    name = "";
    genre = "";
    episodes = 0;
    rating = 0;
    year = 0;
    studio = "";
    director = "";
    characters = {};
    number_of_volumes = 0;
    number_of_pages = 0;
}

// Constructor with parameters

Manga::Manga(string name, string genre, int rating, int year, string studio, string director, int number_of_volumes, int number_of_pages)
{
    MangasetName();
    setGenre();
    setRating();
    setYear();
    setStudio();
    setDirector();
    setNumber_of_volumes();
    setNumber_of_pages();
}

// Destructor

Manga::~Manga()
{
}