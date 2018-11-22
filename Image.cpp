#include<string>
#include<iostream>
#include "Image.h"

Image::Image(std::string imageName)
{
   this->imageName=imageName;
}
void Image::print()
{
    std::cout<<this->imageName;
}