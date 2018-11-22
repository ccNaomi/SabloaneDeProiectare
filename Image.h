#ifndef IMAGE_H
#define IMAGE_H
#include "Element.h"
#include<string>
#include<iostream>

class Image: public Element 
{
    public:
            Image(std::string imageName);
            void print();
    private:
            std::string imageName;
};         
#endif
