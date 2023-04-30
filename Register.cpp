#include "Register.h"
#include <fstream>
#include <sstream>
using namespace std;

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

// Change anime from the list

void Register::changeAnime(string name)
{
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        if (it->getName() == name)
        {
            string name, genre, studio, director, character, author;
            int episodes, seasons, rating, year, pages, volumes;
            int change;

            while (true)
            {
                cout << "What do you want to change?" << endl;
                cout << "1. Name" << endl;
                cout << "2. Genre" << endl;
                cout << "3. Year" << endl;
                cout << "4. Episodes" << endl;
                cout << "5. Seasons" << endl;
                cout << "6. Rating" << endl;
                cout << "7. Studio" << endl;
                cout << "8. Director" << endl;
                cout << "9. Author" << endl;
                cout << "10. Exit" << endl;

                cin >> change;
                cin.ignore();

                switch (change)
                {
                case 1:
                    cout << "Name: ";
                    getline(cin, name);
                    it->setName(name);
                    break;
                case 2:
                    cout << "Genre: ";
                    getline(cin, genre);
                    it->setGenre(genre);
                    break;
                case 3:
                    cout << "Year: ";
                    cin >> year;
                    it->setYear(year);
                    break;
                case 4:
                    cout << "Episodes: ";
                    cin >> episodes;
                    it->setEpisodes(episodes);
                    break;
                case 5:
                    cout << "Seasons: ";
                    cin >> seasons;
                    it->setSeasons(seasons);
                    break;
                case 6:
                    cout << "Rating: ";
                    cin >> rating;
                    it->setRating(rating);
                    break;
                case 7:
                    cout << "Studio: ";
                    getline(cin, studio);
                    it->setStudio(studio);
                    break;
                case 8:
                    cout << "Director: ";
                    getline(cin, director);
                    it->setDirector(director);
                    break;
                case 9:
                    cout << "Author: ";
                    getline(cin, author);
                    it->setauthor(author);
                    break;
                case 10:
                    return;
                default:
                    cout << "Invalid option." << endl;
                    break;
                }
            }
        }
    }

    cout << "Anime not found." << endl;
    cout << "" << endl;
}

// Change manga from the list

void Register::changeManga(string name)
{
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        if (it->getName() == name)
        {
            string name, genre, studio, director, character, author;
            int episodes, seasons, rating, year, pages, volumes;
            int change;
            while(true)
            {
                cout << "What do you want to change?" << endl;
                cout << "1. Name" << endl;
                cout << "2. Genre" << endl;
                cout << "3. Year" << endl;
                cout << "4. Volumes" << endl;
                cout << "5. Pages" << endl;
                cout << "6. Rating" << endl;
                cout << "7. Studio" << endl;
                cout << "8. Director" << endl;
                cout << "9. Author" << endl;
                cout << "10. Exit" << endl;

                cin >> change;
                cin.ignore();

                switch (change)
                {
                case 1:
                    cout << "Name: ";
                    getline(cin, name);
                    it->setName(name);
                    break;
                case 2:
                    cout << "Genre: ";
                    getline(cin, genre);
                    it->setGenre(genre);
                    break;
                case 3:
                    cout << "Year: ";
                    cin >> year;
                    it->setYear(year);
                    break;
                case 4:
                    cout << "Volumes: ";
                    cin >> volumes;
                    it->setNumber_of_volumes(volumes);
                    break;
                case 5:
                    cout << "Pages: ";
                    cin >> pages;
                    it->setNumber_of_pages(pages);
                    break;
                case 6:
                    cout << "Rating: ";
                    cin >> rating;
                    it->setRating(rating);
                    break;
                case 7:
                    cout << "Studio: ";
                    getline(cin, studio);
                    it->setStudio(studio);
                    break;
                case 8:
                    cout << "Director: ";
                    getline(cin, director);
                    it->setDirector(director);
                    break;
                case 9:
                    cout << "Author: ";
                    getline(cin, author);
                    it->setauthor(author);
                    break;
                case 10:
                    return;
                default:
                    cout << "Invalid option." << endl;
                    break;
            }
            }
        }        
    }
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

        cout << "Manga not found." << endl;
        cout << "" << endl;
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

// Get animes from file

Anime *Register::readAnimeFile()
{
    ifstream file("output/anime.txt");
    string line;
    string name, genre, author, studio, director;
    int episodes, seasons, year, rating;

    if (file.is_open())
    {   
        cout << "Loading file..." << endl;
        while (getline(file, line))
        {
            istringstream ss(line);
            getline(ss, name, ',');
            getline(ss, genre, ',');
            ss >> episodes;
            ss.ignore();
            ss >> seasons;
            ss.ignore();
            ss >> year;
            ss.ignore();
            getline(ss, author, ',');
            ss >> rating;
            ss.ignore();
            getline(ss, studio, ',');
            getline(ss, director, '\n');

            //Boku no Hero, Shonen, 24, 2, 2014, Kōhei Horikoshi, 3, Bones, Yuzuru 

            anime = new Anime(name, genre, episodes, rating, year, studio, director, seasons, author);
            addAnime(anime);
            addAnimeToVector(getAnimes());
        }
        }else{
            cout << "File not found." << endl;
        }
    cout << "File loaded." << endl;
    file.close();
    return anime;
}

// Register anime and manga

void Register::registerMain()
{
    Register registers;
    Anime *anime;
    Manga *manga;
    string name, genre, studio, director, character, author;
    int episodes, seasons, rating, year, pages, volumes;
    int choice = 1;
    int quantityAnime = 0;
    int quantityManga = 0;

    addAnime(readAnimeFile());
    addAnimeToVector(getAnimes());

    while (choice != 0)
    {
        cout << "1. Add anime" << endl;
        cout << "2. Add manga" << endl;
        cout << "3. Show anime" << endl;
        cout << "4. Show manga" << endl;
        cout << "5. Delete anime" << endl;
        cout << "6. Delete manga" << endl;
        cout << "7. Change anime" << endl;
        cout << "8. Change manga" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 7655)
        {
            //Print relatório
            ofstream relatorio;
            relatorio.open("relatorio.txt");
            relatorio << "Animes registered: " << quantityAnime << endl;
            relatorio << "Mangas registered: " << quantityManga << endl;
            cout << "Relatório gerado com sucesso!" << endl;
            relatorio.close();
        }

        switch (choice)
        {
        case 1:
            cout << "Enter anime name: ";
            getline(cin, name);
            cout << "Enter anime genre: ";
            getline(cin, genre);
            cout << "Enter anime episodes: ";
            cin >> episodes;
            cout << "Enter anime seasons: ";
            cin >> seasons;
            cout << "Enter anime year: ";
            cin >> year;
            cin.ignore();
            cout << "Enter anime author: ";
            getline(cin, author);
            cout << "Enter anime rating: ";
            cin >> rating;
            cin.ignore();
            cout << "Enter anime studio: ";
            getline(cin, studio);
            cout << "Enter anime director: ";
            getline(cin, director);
            anime = new Anime(name, genre, episodes, rating, year, studio, director, seasons, author);
            addAnime(anime);
            addAnimeToVector(getAnimes());
            quantityAnime++;
            break;

        case 2:
            cout << "Enter manga name: ";
            getline(cin, name);
            cout << "Enter manga genre: ";
            getline(cin, genre);
            cout << "Enter manga pages: ";
            cin >> pages;
            cout << "Enter manga volumes: ";
            cin >> volumes;
            cout << "Enter manga year: ";
            cin >> year;
            cin.ignore();
            cout << "Enter manga author: ";
            getline(cin, author);
            cout << "Enter manga rating: ";
            cin >> rating;
            cin.ignore();
            cout << "Enter manga studio: ";
            getline(cin, studio);
            cout << "Enter manga director: ";
            getline(cin, director);
            manga = new Manga(name, genre, rating, year, studio, director, volumes, pages, author);
            addManga(manga);
            addMangaToVector(getMangas());
            quantityManga++;
            break;
        case 3:
            cout << "Enter anime name: ";
            getline(cin, name);
            cout << "" << endl;
            showAnime(name);
            break;
        case 4:
            cout << "Enter manga name: ";
            getline(cin, name);
            cout << "" << endl;
            showManga(name);
            break;
        case 5:
            cout << "Enter the anime name that you want to delete: ";
            getline(cin, name);
            cout << "" << endl;
            deleteAnime(name);
            break;
        case 6:
            cout << "Enter the manga name that you want to delete: ";
            getline(cin, name);
            cout << "" << endl;
            deleteManga(name);
            break;
        case 7:
            cout << "Enter the anime name that you want to change: ";
            getline(cin, name);
            cout << "" << endl;
            changeAnime(name);
            break;
        case 0:
            break;
        default:
            cout << "Wrong choice!" << endl;
            break;
        }
    }
}
