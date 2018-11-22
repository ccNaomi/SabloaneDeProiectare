#ifndef PARAGRAPH_H
#define PARAGRAPH_H
#include "Element.h"

class Paragraph: public Element
{
    public:
            Paragraph(std::string text);
            void print();

    private:
            std::string text;

};
#endif