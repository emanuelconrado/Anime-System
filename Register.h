#ifndef REGISTER_H
#define REGISTER_H
#include "Manga.h"
#include "Anime.h"

#ifdef _WIN32
#define CLEAR_CONSOLE "cls"
#elif linux
#define CLEAR_CONSOLE "clear"
#endif

class Register : public Manga
{
private:
    Anime *anime;
    Manga *manga;
    int totalAnime = 0;
    int totalManga = 0;
    list<Manga> mangas;
    list<Anime> animes;
    Anime vectorA[100];
    Manga vectorM[100];
public:
    Register();
    ~Register();
    void addAnime(Anime *anime);
    void addManga(Manga *manga);
    void changeAnime(string name);
    void changeManga(string name);
    void deleteAnime(string name);
    void deleteManga(string name);
    void showAnime(string name);
    void showManga(string name);
    bool checkAnime(string name);
    bool checkManga(string name);
    void showAllAnime();
    void showAllManga();
    void addAnimeToVector(list<Anime> animes);
    void addMangaToVector(list<Manga> mangas);
    list<Anime> getAnimes();
    list<Manga> getMangas();
    void registerMain();
    void readAnimeFile();
    void writeAnimeFile();
    void readMangaFile();
    void writeMangaFile();
    void showAllAnimeGenres(string genre);
    void showAllMangaGenres(string genre);
    void totalAnimegenres();
    void totalMangagenres();
};

#endif