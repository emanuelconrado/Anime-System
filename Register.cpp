#include "Register.h"

// Default constructor

Register::Register()
{
    animes = {};
    mangas = {};
}

// Destructor

Register::~Register()
{
}

// Add anime to the list

void Register::addAnime(Anime *anime)
{
    animes.push_back(*anime);
}

// Add manga to the list

void Register::addManga(Manga *manga)
{
    mangas.push_back(*manga);
}

// Delete anime from the list

void Register::deleteAnime(string name)
{
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        if (it->getName() == name)
        {
            animes.erase(it);
            break;
        }
    }
}

// Delete manga from the list

void Register::deleteManga(string name)
{
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        if (it->getName() == name)
        {
            mangas.erase(it);
            break;
        }
    }
}

// Print animes from the list

void Register::showAnime(string name)
{
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        if (it->getName() == name)
        {
            it->printAnime();
            return;
        }
    }

    cout << "Anime not found." << endl;
    cout << "" << endl;
}

// Print mangas from the list

void Register::showManga(string name)
{
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        if (it->getName() == name)
        {
            it->printManga();
            break;
        }

        if(it == mangas.end() && it->getName() != name)
        {
            cout << "Manga not found." << endl;
            cout << "" << endl;
        }
    }
    
}

// Print all animes name from the list

void Register::printAllAnimes()
{
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        cout << it->getName() << endl;
    }
}

// Print all mangas name from the list

void Register::printAllMangas()
{
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        cout << it->getName() << endl;
    }
}

// Add manga to the vector

void Register::addMangaToVector(list<Manga> mangas)
{
        for (int i = 0; i < 100; i++)
        {
            if (vectorM[i].getidgenre() == i)
            {
                vectorM[i] = mangas.front();
                break;
            }
        }
}

// Add anime to the vector

void Register::addAnimeToVector(list<Anime> animes)
{
        for (int i = 0; i < 100; i++)
        {
            if (vectorA[i].getidgenre() == i)
            {
                vectorA[i] = animes.front();
                break;
            }
        }
}

// Get animes from the list

list<Anime> Register::getAnimes()
{
    return animes;
}

// Get mangas from the list

list<Manga> Register::getMangas()
{
    return mangas;
}