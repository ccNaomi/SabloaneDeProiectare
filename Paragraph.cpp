#include <iostream>
#include <string>
#include "Paragraph.h"
#include<iostream>
#include<string>

Paragraph::Paragraph(std::string text)
{
    this->text=text;
}
void Paragraph::print()
{
    std::cout<<this->text;
}