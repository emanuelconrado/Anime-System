#ifndef MANGA_H
#define MANGA_H
#include "Anime.h"

class Manga : public Anime
{
protected:
    int number_of_volumes;
    int number_of_pages;
public:
    Manga();
    Manga(string name, string genre, int rating, 
    int year, string studio, string director, int number_of_volumes, int number_of_pages);
    ~Manga();
    void setNumber_of_volumes();
    void setNumber_of_pages();
    int getNumber_of_volumes();
    int getNumber_of_pages();
    void printManga();
    void MangasetName();
};

#endif