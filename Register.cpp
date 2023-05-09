#include "Register.h"
#include "Anime.h"
#include "Manga.h"
#include <fstream>
#include <sstream>
#include <stdlib.h>
#ifdef _WIN32
#define CLEAR_CONSOLE "cls"
#elif linux
#define CLEAR_CONSOLE "clear"
#endif
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
            int episodes, seasons, rating, year, chapters;
            int change;

            while (true)
            {
                cout << "-----------------------------------------------------------------" << endl;
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
                cout << "-----------------------------------------------------------------" << endl;

                cin >> change;
                cin.ignore();

                system("clear");

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
    cout << "--------------------------------------------------" << endl;
}

// Change manga from the list

void Register::changeManga(string name)
{
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        if (it->getName() == name)
        {
            string name, genre, studio, director, character, author;
            int episodes, seasons, rating, year, chapters;
            int change;
            while(true)
            {
                system("clear");

                cout << "-----------------------------------------------------------------" << endl;
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
                cout << "Your choice: ";

                cin >> change;
                cin.ignore();

                system("clear");

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
                    cin >> chapters;
                    it->setNumber_of_chapters(chapters);
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
    cout << "Manga not found." << endl;
    cout << "---------------------------------------------------" << endl;

}
// Delete anime from the list

void Register::deleteAnime(string name)
{
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        if (it->getName() == name)
        {
            animes.erase(it);
            cout << "Anime deleted." << endl;
            cout << "-----------------------------------------------------------------" << endl;
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
            cout << "Manga deleted." << endl;
            cout << "-----------------------------------------------------------------" << endl;
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
    cout << "-----------------------------------------------------------------" << endl;
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
        cout << "-----------------------------------------------------------------" << endl;
        cout << "" << endl;
    }
    
}

// find anime from the list

// Print all animes genrers from the list

void Register::showAllAnimeGenres(string genre)
{
    cout << "Genres: " << endl;
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        if(it->getGenre() == genre) 
        showAnime(it->getName());
    }
}

// Print all mangas genrers from the list

void Register::showAllMangaGenres(string genre)
{
    cout << "Genres: " << endl;
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        if(it->getGenre() == genre) 
        showManga(it->getName());
    }
}

bool Register::checkAnime(string name)
{
    bool check = false;

        for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
        {
            if (it->getName() == name)
            {
                check = true;
            }
        }
    
    return check;
}

// find manga from the list

bool Register::checkManga(string name)
{
    bool check = false;

        for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
        {
            if (it->getName() == name)
            {
                check = true;
            }
        }
    
    return check;
}

// Print all animes name from the list

void Register::showAllAnime()
{
    cout << "Animes: ---------------------------------------------------------" << endl;
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        cout << it->getName() << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;
    cout << "" << endl;
}

// Print all mangas name from the list

void Register::showAllManga()
{
    cout << "Mangas: ---------------------------------------------------------" << endl;
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        cout << it->getName() << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;
    cout << "" << endl;
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

void Register::readAnimeFile()
{
    ifstream file("output/anime.txt");
    string line;
    string name, genre, author, studio, director;
    int episodes, seasons, year, rating;

    if (file.is_open())
    {   
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
            totalAnime++;
        }
        }else{
            cout << "File not found." << endl;
            exit(1);
        }
    file.close();
}

// Write animes to file

void Register::writeAnimeFile(){
    ofstream file("output/anime.txt");
    if(file.is_open()){
        for(list<Anime>::iterator it = animes.begin(); it != animes.end(); it++){
            file << it->getName() << "," << it->getGenre() << "," << it->getEpisodes() << "," << it->getseasons() << "," << it->getYear() << "," << it->getauthor() << "," << it->getRating() << "," << it->getStudio() << "," << it->getDirector() << endl;
        }
    }else{
        cout << "Write operation failed" << endl;
        exit(1);
    }
    file.close();
}

// Get mangas from file

void Register::readMangaFile()
{
    ifstream file("output/manga.txt");
    string line;
    string name, genre, author, studio, director;
    int chapters, year, rating;

    if (file.is_open())
    {
        cout << "Loading file..." << endl;
        while (getline(file, line))
        {
            istringstream ss(line);
            getline(ss, name, ',');
            getline(ss, genre, ',');
            ss >> chapters;
            ss.ignore();
            ss >> year;
            ss.ignore();
            getline(ss, author, ',');
            ss >> rating;
            ss.ignore();
            getline(ss, studio, ',');
            getline(ss, director, '\n');

            manga = new Manga(name, genre, rating, year, studio, director, chapters, author);
            addManga(manga);
            addMangaToVector(getMangas());
            totalManga++;
        }
    }else{
        cout << "File not found." << endl;
        exit(1);
    }
    cout << "File loaded." << endl;
    cout << "-----------------------------------------------------------" << endl;
    file.close();
}

// Write mangas to file

void Register::writeMangaFile(){
    ofstream file("output/manga.txt");
    if(file.is_open()){
        for(list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++){
            cout << "---------------------------------------------------" << endl;
            cout << "Writing to file..." << endl;

            //Oshi no Ko,Drama,116,2020,Aka Akasaka,5,Shueisha’s Weekly Young Jump,Marue Horiuchi
            
            file << it->getName() << "," << it->getGenre() << "," << it->getNumber_of_chapters() << "," << it->getYear() << "," << it->getauthor() << "," << it->getRating() << "," << it->getStudio() << "," << it->getDirector() << endl;
        }
    }else{
        cout << "Write operation failed" << endl;
        exit(1);
    }
    cout << "File written." << endl;
    cout << "---------------------------------------------------" << endl;
    file.close();
}

// total anime registered by genre

void Register::totalAnimegenres()
{
    string vector[] = {"Shonen", "Shoujo", "Seinen", "Josei", "Ecchi", "Harem", "Isekai", "Mecha", "Slice Of Life"};
    for (list<Anime>::iterator it = animes.begin(); it != animes.end(); it++)
    {
        if(it->getGenre() == vector[0])Shonen++;
        else if(it->getGenre() == vector[1])Shoujo++;
        else if(it->getGenre() == vector[2])Seinen++;
        else if(it->getGenre() == vector[3])Josei++;
        else if(it->getGenre() == vector[4])Ecchi++;
        else if(it->getGenre() == vector[5])Harem++;
        else if(it->getGenre() == vector[6])Isekai++;
        else if(it->getGenre() == vector[7])Mecha++;
        else if(it->getGenre() == vector[8])SliceOfLife++;
    }
}

// total manga registered by genre

void Register::totalMangagenres(){
    string vector[] = {"Shonen", "Shoujo", "Seinen", "Josei", "Ecchi", "Harem", "Isekai", "Mecha", "Slice Of Life"};
    for (list<Manga>::iterator it = mangas.begin(); it != mangas.end(); it++)
    {
        if(it->getGenre() == vector[0])Shonen++;
        else if(it->getGenre() == vector[1])Shoujo++;
        else if(it->getGenre() == vector[2])Seinen++;
        else if(it->getGenre() == vector[3])Josei++;
        else if(it->getGenre() == vector[4])Ecchi++;
        else if(it->getGenre() == vector[5])Harem++;
        else if(it->getGenre() == vector[6])Isekai++;
        else if(it->getGenre() == vector[7])Mecha++;
        else if(it->getGenre() == vector[8])SliceOfLife++;
    }
}

// Register anime and manga

void Register::registerMain()
{
    Register registers;
    Anime *anime;
    Manga *manga;
    string name, genre, studio, director, character, author;
    int episodes, seasons, rating, year, chapters;
    int choice = 1;
    int RegisteredAnime = 0;
    int RegisteredManga = 0;

    readAnimeFile();
    readMangaFile();

    while (choice != 0)
    {
        
        cout << "1. Add anime" << endl;
        cout << "2. Add manga" << endl;
        cout << "3. Show section" << endl;
        cout << "4. Delete section" << endl;
        cout << "5. Amendment section" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore();
    

        if(choice == 7655)
        {  
            //Print relatório
            totalAnimegenres();
            totalMangagenres();
            ofstream relatorio;
            relatorio.open("relatorio.txt");
            relatorio << "Animes registered: " << RegisteredAnime << endl;
            relatorio << "Mangas registered: " << RegisteredManga << endl;
            relatorio << "Total Anime: " << totalAnime + RegisteredAnime << endl;
            relatorio << "Total Manga: " << totalManga + RegisteredManga << endl;
            relatorio << "Total: " << totalAnime + RegisteredAnime + totalManga + RegisteredManga << endl;
            relatorio << "Animes and Manga Shonen: " << Shonen << endl;
            relatorio << "Animes and Manga Shoujo: " << Shoujo << endl;
            relatorio << "Animes and Manga Seinen: " << Seinen << endl;
            relatorio << "Animes and Manga Josei: " << Josei << endl;
            relatorio << "Animes and Manga Ecchi: " << Ecchi << endl;
            relatorio << "Animes and Manga Harem: " << Harem << endl;
            relatorio << "Animes and Manga Isekai: " << Isekai << endl;
            relatorio << "Animes and Manga Mecha: " << Mecha << endl;
            relatorio << "Animes and Manga Slice Of Life: " << SliceOfLife << endl;
            cout << "Relatório gerado com sucesso!" << endl;
            cout << "-----------------------------------------------------------------" << endl;
            relatorio.close();
        }

        system(CLEAR_CONSOLE);
        
        switch (choice)
        {
        case 1:
    
            cout << "Enter anime name: ";
            getline(cin, name);
            if(checkAnime(name)){
                char choice;
                cout << "Anime already registered." << endl;
                cout << "" << endl;
                cout << "Enter 1 if you want to show the anime" << endl;
                cout << "Enter 0 enter to try again" << endl;
                cin >> choice;
                if(choice == '1'){
                    showAnime(name);
                    break;
                }else{
                    cout << "..." << endl;
                    break;
                }
            }
            cout << "Enter anime genre: ";
            getline(cin, genre);
            cout << "" << endl;

            cout << "Enter anime episodes: ";
            cin >> episodes;
            cout << "" << endl;

            cout << "Enter anime seasons: ";
            cin >> seasons;
            cout << "" << endl;

            cout << "Enter anime year: ";
            cin >> year;
            cin.ignore();
            cout << "" << endl;

            cout << "Enter anime author: ";
            getline(cin, author);
            cout << "" << endl;

            cout << "Enter anime rating: ";
            cin >> rating;
            cin.ignore();
            cout << "" << endl;

            cout << "Enter anime studio: ";
            getline(cin, studio);
            cout << "" << endl;

            cout << "Enter anime director: ";
            getline(cin, director);
            cout << "" << endl;

            anime = new Anime(name, genre, episodes, rating, year, studio, director, seasons, author);
            addAnime(anime);
            addAnimeToVector(getAnimes());
            RegisteredAnime++;
            break;

        case 2: 

            cout << "Enter manga name: ";
            getline(cin, name);
            if(checkManga(name)){
                char choice;
                cout << "Manga already registered." << endl;
                cout << "" << endl;
                cout << "Enter 1 if you want to show the Manga" << endl;
                cout << "Enter 2 to try again" << endl;
                cin >> choice;
                if(choice == '1'){
                    showManga(name);
                    break;
                }else{
                    cout << "..." << endl;
                    break;
                }
            }
            cout << "Enter manga genre: ";
            getline(cin, genre);
            cout << "" << endl;

            cout << "Enter manga chapters: ";
            cin >> chapters;
            cout << "" << endl;

            cout << "Enter manga year: ";
            cin >> year;
            cin.ignore();
            cout << "" << endl;

            cout << "Enter manga author: ";
            getline(cin, author);
            cout << "" << endl;

            cout << "Enter manga rating: ";
            cin >> rating;
            cin.ignore();
            cout << "" << endl;

            cout << "Enter manga studio: ";
            getline(cin, studio);
            cout << "" << endl;

            cout << "Enter manga director: ";
            getline(cin, director);
            cout << "" << endl;

            manga = new Manga(name, genre, rating, year, studio, director, chapters, author);
            addManga(manga);
            addMangaToVector(getMangas());
            RegisteredManga++;
            break;

        case 3: //Show section
            int expression;
            cout << "-----------------------------------------------------------------" << endl; 
            cout << "1. Show anime" << endl;
            cout << "2. Show manga" << endl;
            cout << "3. Show all anime name" << endl;
            cout << "4. Show all manga name" << endl;
            cout << "5. Show animes by genres" << endl;
            cout << "6. Show mangas by genres" << endl;
            cout << "0. Exit" << endl;
            cout << "Your choice: ";
            cin >> expression;
            cin.ignore();
            system(CLEAR_CONSOLE);

            switch (expression)
            {
            case 1:
                cout << "Enter anime name: ";
                getline(cin, name);
                cout << "" << endl;
                showAnime(name);
                break;
            case 2:
                cout << "Enter manga name: ";
                getline(cin, name);
                cout << "" << endl;
                showManga(name);
                break;
            case 3:
                showAllAnime();
                break;
            case 4:
                showAllManga();
                break;
            case 5:
                cout << "Enter the genre: ";
                getline(cin, genre);
                showAllAnimeGenres(genre);
                break;
            case 6:
                cout << "Enter the genre: ";
                getline(cin, genre);
                showAllMangaGenres(genre);
                break;
            default:
                break;
            }
            break;
        case 4: //Delete section
            int expression2;
            cout << "-----------------------------------------------------------------" << endl;
            cout << "1. Delete anime" << endl;
            cout << "2. Delete manga" << endl;
            cout << "0. Exit" << endl;
            cout << "Your choice: ";
            cin >> expression2;
            cin.ignore();
            system(CLEAR_CONSOLE);

            switch (expression2)
            {
            case 1:
                cout << "Enter the anime name that you want to delete: ";
                getline(cin, name);
                cout << "" << endl;
                deleteAnime(name);
                break;
            case 2:
                cout << "Enter the manga name that you want to delete: ";
                getline(cin, name);
                cout << "" << endl;
                deleteManga(name);
                break;
            }
            break;
        case 5: // Amendment section
            int expression3;
            cout << "-----------------------------------------------------------------" << endl;
            cout << "1. Change anime" << endl;
            cout << "2. Change manga" << endl;
            cout << "0. Exit" << endl;
            cout << "Your choice: ";
            cin >> expression3;
            cin.ignore();
            system(CLEAR_CONSOLE);

            switch (expression3)
            {
            case 1:
                cout << "Enter the anime name that you want to change: ";
                getline(cin, name);
                cout << "" << endl;
                changeAnime(name);
                break;
            case 2:
                cout << "Enter the manga name that you want to change: ";
                getline(cin, name);
                cout << "" << endl;
                changeManga(name);
                break;
            }
            break;
        case 0:
            writeAnimeFile();
            writeMangaFile();
            break;
        default:
            cout << "Wrong choice!" << endl;
            break;
        }
    }
}
