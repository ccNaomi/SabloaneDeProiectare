#ifndef TABLE_H
#define TABLE_H
#include<string>
#include<iostream>
#include "Element.h"

class Table: public Element
{
    public:
            Table(std::string title);
            void print();

    private:
            std::string title;
};
#endif




