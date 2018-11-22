#include <string>
#include <iostream>
#include "SubChapter.h"
#include "Chapter.h"

Chapter::Chapter(std::string chapterName)
{
    this->chapterTitle=chapterName;
}
void Chapter::createSubChapter(std::string subChapterName)
{
    SubChapter tmp(subChapterName);
    subChapter.push_back(tmp);
}
SubChapter Chapter::getSubChapter(int indexOfChaprter)
{
    return subChapter[indexOfChaprter];
}
void Chapter::print()
{
    std::cout<<"Chapter:  "<<this->chapterTitle;
    std::cout<<"\n";
  
}
std::string Chapter::getTitle()
{
    return chapterTitle;
}
