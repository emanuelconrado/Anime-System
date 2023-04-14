#include "Anime.h"

string Anime::getName()
{
    return name;
}

string Anime::getGenre()
{
    return genre;
}

int Anime::getEpisodes()
{
    return episodes;
}

int Anime::getRating()
{
    return rating;
}

int Anime::getYear()
{
    return year;
}

string Anime::getStudio()
{
    return studio;
}

string Anime::getDirector()
{
    return director;
}

list<string> Anime::getCharacters()
{
    return characters;
}

int Anime::getidgenre()
{
    return idgenre;
}

void Anime::printAnime()
{
    cout << "Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Episodes: " << episodes << endl;
    cout << "Seasons: " << seasons << endl;
    cout << "Year: " << year << endl;
    cout << "Author: " << author << endl;
    cout << "Rating: " << rating << endl;
    cout << "Studio: " << studio << endl;
    cout << "Director: " << director << endl;
    
    //cout << "Characters: " << endl;

    cout << "" << endl;
}

int Anime::getseasons()
{
    return seasons;
}

string Anime::getauthor()
{
    return author;
}