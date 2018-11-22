#include "TableOfContent.h"
#include<iostream>
#include<string>
#include<vector>
#include<iterator>

TableOfContent::TableOfContent()
{

}
void TableOfContent::addEntry(std::string title)
{
   this->titles.push_back(title);
}
void TableOfContent::print()
{
    int i=0;
    for(std::vector<std::string>::iterator it = titles.begin(); it != titles.end(); ++it)
      {
        //std::cout<< *it ;
        i=i+1;
        std::cout<<"Chapter:  "<< i << "........."<< *it <<'\n';
      }
}