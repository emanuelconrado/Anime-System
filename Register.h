#ifndef REGISTER_H
#define REGISTER_H
#include "Manga.h"
#include "Anime.h"

class Register : public Manga
{
private:
    list<Manga> mangas;
    list<Anime> animes;
    Anime vectorA[100];
    Manga vectorM[100];
public:
    Register();
    ~Register();
    void addAnime(Anime *anime);
    void addManga(Manga *manga);
    void deleteAnime(string name);
    void deleteManga(string name);
    void showAnime(string name);
    void showManga(string name);
    void printAllAnimes();
    void printAllMangas();
    void addAnimeToVector(list<Anime> animes);
    void addMangaToVector(list<Manga> mangas);
    list<Anime> getAnimes();
    list<Manga> getMangas();
};

#endif