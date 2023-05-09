#include "Manga.h"

// Default constructor

Manga::Manga()
{
    type = 2;
    name = "";
    genre = "";
    rating = 0;
    year = 0;
    publisher = "";
    chapters = 0;
}

// Constructor with parameters

Manga::Manga(string name, string genre, float rating, int year, string publisher, int chapters, string author)
: Item(name, genre, rating, year, author)
{
    this->type = 2;
    setPublisher(publisher);
    setChapters(chapters);
}

// Destructor

Manga::~Manga()
{
}

void Manga::print()
{
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year: " << year << endl;
    cout << "Number of chapters: " << chapters << endl;
    cout << "Author: " << author << endl;
    cout << "Rating: " << rating << "/5"<< endl;
    cout << "Studio: " << publisher << endl;
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