#ifndef SUBCHAPTER_H
#define SUBCHAPTER_H
#include <string>
#include <iostream>

#include <vector>
#include "Element.h"

class SubChapter 
{
    public:
                SubChapter(std::string subChapterName);
                void createNewParagraph(std::string text);
                void createNewImage(std::string imageName);
                void createNewTable(std::string title);
                void print();
                void getSubChapter(int indexOfChaprter);
                std::string getTitle();


    private:
                std::string name;
                std::vector<Element *> e;
};
#endif