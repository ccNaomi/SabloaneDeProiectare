#include"Table.h"
#include<string>
#include<iostream>

Table::Table(std::string title)
{
    this->title=title;
}
void Table::print()
{
    std::cout<<this->title;
}