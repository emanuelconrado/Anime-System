#include "Manga.h"

//getts

int Manga::getNumber_of_chapters()
{
    return number_of_chapters;
}

//print manga

void Manga::printManga()
{
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year: " << year << endl;
    cout << "Number of chapters: " << number_of_chapters << endl;
    cout << "Author: " << author << endl;
    cout << "Rating: " << rating << "/5"<< endl;
    cout << "Studio: " << studio << endl;
    cout << "Director: " << director << endl;
    cout << "-----------------------------------------------------------------" << endl;

    cout << "" << endl;
    
    /*
    cout << "Characters: " << endl;
    for (auto i = characters.begin(); i != characters.end(); i++)
    {
        cout << *i << endl;
    }
    */
}