#include "Register.h"
#include "Anime.h"
#include "Manga.h"

int main()
{   
    Register registers;
    Anime *anime;
    Manga *manga;
    int choice = 1;
    string name, genre, studio, director, character, author;
    int episodes, seasons, rating, year, pages, volumes;

    while (choice != 0)
    {
        cout << "1. Add anime" << endl;
        cout << "2. Add manga" << endl;
        cout << "3. Show anime" << endl;
        cout << "4. Show manga" << endl;
        cout << "5. Delete anime" << endl;
        cout << "6. Delete manga" << endl;
        cout << "0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore();

        cout << "" << endl;

        switch (choice)
        {
        case 1:

            //Anime character input
            
            /*
            while (character != "0")
            {
                cout << "Enter character name: ";
                getline(cin, character);
                if (character != "0")
                {
                    registers.addCharacter(character);
                }
                
                cout << "" << endl;
                cout << "Enter 0 to exit." << endl;
            }
            */

            anime = new Anime(name, genre, episodes, rating, year, studio, director, seasons, author);
            registers.addAnime(anime);
            registers.addAnimeToVector(registers.getAnimes());
            break;

        case 2:
            manga = new Manga(name, genre, rating, year, studio, director, volumes, pages);
            registers.addManga(manga);
            registers.addMangaToVector(registers.getMangas());
            break;
        case 3:
            cout << "Enter anime name: ";
            getline(cin, name);
            cout << "" << endl;
            registers.showAnime(name);
            break;
        case 4:
            cout << "Enter manga name: ";
            getline(cin, name);
            cout << "" << endl;
            registers.showManga(name);
            break;
        case 5:
            cout << "Enter the anime name that you want to delete: ";
            getline(cin, name);
            cout << "" << endl;
            registers.deleteAnime(name);
            break;
        case 6:
            cout << "Enter the manga name that you want to delete: ";
            getline(cin, name);
            cout << "" << endl;
            registers.deleteManga(name);
            break;
        case 0:
            break;
        default:
            cout << "Wrong choice!" << endl;
            break;
        }
    }
    


    system("pause");
    return 0;
}