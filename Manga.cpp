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
    number_of_chapters = 0;
}

// Constructor with parameters

Manga::Manga(string name, string genre, int rating, int year, string studio, string director, int number_of_chapters, string author, string character)
{
    MangasetName(name);
    setauthor(author);
    setGenre(genre);
    setRating(rating);
    setYear(year);
    setStudio(studio);
    setDirector(director);
    setNumber_of_chapters(number_of_chapters);
}

// Destructor

Manga::~Manga()
{
}