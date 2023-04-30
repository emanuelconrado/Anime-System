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
    int year, string studio, string director, int number_of_volumes, int number_of_pages, string author, string character = "");
    ~Manga();
    void setNumber_of_volumes(int volumes);
    void setNumber_of_pages(int pages);
    int getNumber_of_volumes();
    int getNumber_of_pages();
    void printManga();
    void MangasetName(string name);
};

#endif