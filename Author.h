#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>
#include <iostream>
class Author
{
    public:
            Author(std::string author);
            void print();
    private:
            std::string name;

};
#endif