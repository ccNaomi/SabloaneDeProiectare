#ifndef TABLEOFCONTENT_H
#define TABLEOFCONTENT_H
#include <vector>
#include <string>
#include<iostream>

class TableOfContent
{
    public:
            TableOfContent();
            void addEntry(std::string title);
            void print();
    
    private:
            std::vector<std::string> titles;
};
#endif