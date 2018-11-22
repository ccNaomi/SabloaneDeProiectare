#include "Author.h"
#include <string>
#include <iostream>
Author::Author(std::string author)
{  
    this->name=author;   
}

 void Author::print()
{
    std::cout<<"Name:   "<<this->name;
    std::cout<<"\n";
}
