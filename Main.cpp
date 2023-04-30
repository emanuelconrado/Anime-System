#include "Register.h"
#include "Anime.h"
#include "Manga.h"
#include <fstream>
#include <sstream>

int main()
{
    Register registers;
    Anime *anime;
    Manga *manga;
    string name, genre, studio, director, character, author;
    int episodes, seasons, rating, year, pages, volumes;
    
    registers.registerMain();
    system("pause");
    return 0;
}