#include "Anime.h"

// Set methods

void Anime::setName()
{   
    string name;
    cout << "Enter anime name: ";
    getline(cin, name);
    this->name = name;
}

void Anime::setGenre()
{
    string genre;
    cout << "Enter genre: ";
    getline(cin, genre);
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

void Anime::setEpisodes()
{
    int episodes;
    cout << "Enter number of episodes: ";
    cin >> episodes;
    cin.ignore();
    this->episodes = episodes;
}

void Anime::setSeasons()
{
    int seasons;
    cout << "Enter number of seasons: ";
    cin >> seasons;
    cin.ignore();
    this->seasons = seasons;
}

void Anime::setRating()
{
   int rating;
    cout << "Enter rating: ";
    cin >> rating;
    cin.ignore();
    this->rating = rating;
}

void Anime::setYear()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    cin.ignore();
    this->year = year;
}

void Anime::setStudio()
{
    string studio;
    cout << "Enter studio: ";
    getline(cin, studio);
    this->studio = studio;
}

void Anime::setDirector()
{
    string director;
    cout << "Enter director: ";
    getline(cin, director);
    this->director = director;
    cout << "" << endl;
}

void Anime::addCharacter(string character)
{
    characters.push_back(character);
}

void Anime::setauthor()
{
    string author;
    cout << "Enter author: ";
    getline(cin, author);
    this->author = author;
}