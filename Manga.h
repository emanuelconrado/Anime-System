#ifndef MANGA_H
#define MANGA_H
#include "Anime.h"

class Manga : public Anime
{
protected:
    int number_of_chapters;
    int Shonen = 0, Shoujo = 0, Seinen = 0, Josei = 0, Ecchi = 0, Harem = 0, Isekai = 0, Mecha = 0, SliceOfLife = 0;
public:
    Manga();
    Manga(string name, string genre, int rating, 
    int year, string studio, string director, int number_of_chapters, string author, string character = "");
    ~Manga();
    void setNumber_of_chapters(int volumes);
    int getNumber_of_chapters();
    void printManga();
    void MangasetName(string name);
};

#endif