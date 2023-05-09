#ifndef MANGA_H
#define MANGA_H
#include "Item.h"

class Manga : public Item
{
protected:
    string publisher;
    int chapters;
    int Shonen = 0, Shoujo = 0, Seinen = 0, Josei = 0, Ecchi = 0, Harem = 0, Isekai = 0, Mecha = 0, SliceOfLife = 0;

public:
    Manga();
    Manga(string name, string genre, float rating, 
    int year, string publisher, int chapters, string author);
    ~Manga();

    //set
    void setChapters(int chapters);
    void setPublisher(string publisher);

    //get
    int getChapters();
    string getPublisher();

    void print();

};

#endif