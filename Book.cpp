#include "Book.h"
#include <string>
#include <iostream>

#include "Author.h"

Book::Book(std::string title, Author& author):
authorName(author)
{
    this->title=title;
}
void Book::createChapter(std::string chapterName)
{
    Chapter tmp(chapterName);
    chapters.push_back(tmp);
    
}
Chapter Book::getChapter(int indexOfChapter)
{
    return chapters[indexOfChapter]; 
}
void Book::addAuthor(Author author)
{
    this->authorName=author;
}
void Book::print()
{
    std::cout<<"\n";
    std::cout<<"Book:  "<<this->title<<"    ";
    authorName.print();
    for (Chapter chapter : chapters) 
   {
        chapter.print();
        std::cout<<"\n";
    }
}
int Book::getNumberOfChapter()
{
    return chapters.size();
}
/*void Book::addElement(Element* element)
{
    this->content.push_back(element);
}*/