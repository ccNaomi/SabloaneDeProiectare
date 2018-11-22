#include <string>
#include <iostream>
#include "Author.h"
#include "Book.h"
#include "Chapter.h"
#include "SubChapter.h"
#include "Element.h"
#include "TableOfContent.h"
#include "Image.h"

int main()
{
    Author tolkien ("J.R.R.Tolkien");
    {
        Book lor("Lord of the rings",tolkien);
        lor.addAuthor(tolkien);
        lor.createChapter("A Long-expected Party");
        lor.createChapter("The Shadow of the Past");
        lor.createChapter("The OLd Forest");
        lor.createChapter("The White Rider");
            Chapter firstchapter = lor.getChapter(0);
            firstchapter.createSubChapter("something");
        SubChapter sub1 = firstchapter.getSubChapter(0);
        sub1.createNewParagraph("paragraph1");
        sub1.createNewImage("Image1");
        sub1.createNewTable("table1");

       // lor.print();

        int n = lor.getNumberOfChapter();

        TableOfContent toc;
            for(int i=0;i<n;i++)
            {   
                Chapter c = lor.getChapter(i);
                toc.addEntry(c.getTitle());
            }
        toc.print();
    }
}