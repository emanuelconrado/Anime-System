#include "Item.h"

Item::Item()
{
    name = "";
    genre = "";
    rating = 0;
    year = 0;
    author = "";
}
Item::Item(string name, string genre, int rating, int year, string author)
{   
    setName(name);
    setGenre(genre);
    setRating(rating);
    setYear(year);
    setAuthor(author);

}

// Destructor
Item::~Item()
{
}