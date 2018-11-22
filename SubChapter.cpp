#include <string>
#include <iostream>
#include "SubChapter.h"
#include "Image.h"
#include "Paragraph.h"
#include "Table.h"
#include<vector>

SubChapter::SubChapter(std::string subChapterName)
{
    this->name=subChapterName;
}
void SubChapter::createNewImage(std::string imageName)
{
    Element* tmp= new Image(imageName);
    e.push_back(tmp);
}
void SubChapter::createNewParagraph(std::string text)
{
    Element* tmp=new Paragraph (text);
    e.push_back(tmp);
}
void SubChapter::createNewTable(std::string title)
{
    Element* tmp=new Table (title);
    e.push_back(tmp);
}
void SubChapter::print()
{
    std::cout<<"subChapter:"<<this->name;
  //  for(Element* element : e)
   // {
  //      e.print();
  //  }
}
std::string SubChapter::getTitle()
{
    return name;
}