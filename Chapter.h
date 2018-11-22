#ifndef CHAPTER_H
#define CHAPTER_H
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "SubChapter.h"

class Chapter
{
    public:
                Chapter(std::string chapterName);
                void createSubChapter(std::string subChapterName);
                SubChapter getSubChapter(int indexOfChaprter);
                void print();
                std::string getTitle();


    private:
           std::string chapterTitle;
           std::vector<SubChapter> subChapter;
};
#endif