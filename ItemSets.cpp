#include "Item.h"

// Sets

void Item::setName(string name)
{   
    this->name = name;
}

void Item::setGenre(string genre)
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

void Item::setRating(float rating)
{
    this->rating = rating;
}

void Item::setYear(int year)
{
    this->year = year;
}

void Item::setAuthor(string author)
{
    this->author = author;
}