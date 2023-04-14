#include "Manga.h"

//setts

void Manga::setNumber_of_volumes()
{
    int volumes;
    cout << "Enter number of volumes: ";
    cin >> volumes;
    cin.ignore();
    number_of_volumes = volumes;
}

void Manga::setNumber_of_pages()
{
    int pages;
    cout << "Enter number of pages: ";
    cin >> pages;
    cin.ignore();
    number_of_pages = pages;
}

void Manga::MangasetName()
{
    cout << "Enter manga name: ";
    string name;
    getline(cin, name);
    this->name = name;
}