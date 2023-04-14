#include "Manga.h"

//getts

int Manga::getNumber_of_volumes()
{
    return number_of_volumes;
}

int Manga::getNumber_of_pages()
{
    return number_of_pages;
}

//print manga

void Manga::printManga()
{
    cout << "Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year: " << year << endl;
    cout << "Number of volumes: " << number_of_volumes << endl;
    cout << "Number of pages: " << number_of_pages << endl;
    cout << "Author: " << author << endl;
    cout << "Rating: " << rating << endl;
    cout << "Studio: " << studio << endl;
    cout << "Director: " << director << endl;

    cout << "" << endl;
    
    /*
    cout << "Characters: " << endl;
    for (auto i = characters.begin(); i != characters.end(); i++)
    {
        cout << *i << endl;
    }
    */
}