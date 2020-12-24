#ifndef __BOOK_H
#define __BOOK_H
#include<string>

class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
  //TODO: default ctor
  Book();
  //TODO: param ctor
   Book(int,std::string,std::string,int,double,int);
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), year()
  //                       - price(), pages()
  int isbn()const;
  std::string title()const;
  std::string author()const;
  int year()const;
  double price() const;
  int pages() const;
  //TODO:- display
  void display() const;
  //TODO:- const suffix for immutable function
};
#endif