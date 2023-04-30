#include "Anime.h"

// Set methods

void Anime::setName(string name)
{   
    this->name = name;
}

void Anime::setGenre(string genre)
{
    this->genre = genre;
    string vector[] = {"Shonen", "Shoujo", "Seinen", "Josei", "Ecchi", "Harem", "Isekai", "Mecha", "Slice Of Life"};
    for (int i = 0; i < 10; i++)
    {
        if (genre == vector[i])
        {
            idgenre = i;
        }
    }
}

void Anime::setEpisodes(int episodes)
{
    this->episodes = episodes;
}

void Anime::setSeasons(int seasons)
{
    this->seasons = seasons;
}

void Anime::setRating(int rating)
{
    this->rating = rating;
}

void Anime::setYear(int year)
{
    this->year = year;
}

void Anime::setStudio(string studio)
{
    this->studio = studio;
}

void Anime::setDirector(string director)
{
    this->director = director;
    cout << "" << endl;
}

void Anime::addCharacter(string character)
{
    characters.push_back(character);
}

void Anime::setauthor(string author)
{
    this->author = author;
}