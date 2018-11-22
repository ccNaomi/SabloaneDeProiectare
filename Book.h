#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <vector>
#include <iostream>
#include <vector>
#include "Chapter.h"
#include "Author.h"
#include "Element.h"
class Book//: public Element
{
    public:
        Book(std::string title, Author& author);
        int getNumberOfChapter();
        void createChapter(std::string chapterName);
        Chapter getChapter(int indexOfChapter);
        void addAuthor(Author author);
        void print();
       // void addElement(Element* element);

    private:
       std::string title;
       Author authorName;
       std::vector<Chapter> chapters;
     //  std::vector<Element*> content;
    
};
#endif