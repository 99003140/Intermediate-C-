#include<iostream>
#include<list>
#include "book.h"
#include "library.h"
#include"book.cxx"
#include"library.cpp"
using namespace std;
int main()
{
Library l1;
l1.addBook(101,"abc","fds",1990,435.00,45);
l1.addBook(102,"ert","wer",1991,567.00,15);
l1.addBook(103,"klh","fgf",1992,322.00,53);
l1.addBook(104,"pyt","hye",1993,905.20,10);
l1.addBook(105,"ere","qwa",1994,123.00,65);
l1.isBookFound(110);
l1.removeBookByISBN(101);
l1.findBookByISBN(104);
l1.displayAll();
return 0;
}
