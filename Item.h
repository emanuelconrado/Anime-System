#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

class Item{

    protected:
        int type;
        int idgenre;
        string name;
        string genre;
        int rating;
        int year;
        string author;
    
    public:
        Item();
        Item(string name, string genre, int rating, int year, string author);
        virtual ~Item();

        //sets 
        virtual void setName(string nome);
        virtual void setGenre(string genre);
        virtual void setRating(int rating);
        virtual void setYear(int year);
        virtual void setAuthor(string author);

        //gets
        virtual string getName();
        virtual string getGenre();
        virtual int getRating();
        virtual int getYear();
        virtual string getAuthor();
        virtual int getIdGenre();


        virtual void print() = 0;

};

#endif