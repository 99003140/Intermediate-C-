#include "book.h"
#include<iostream>
#include<string>

Book::Book():m_isbn(0),m_title(""),m_author(""),m_year(0),m_price(0.0),m_pages(0)
{

}
Book::Book(int isbn,std::string title,std::string author,int year,double price,int pages):m_isbn(isbn),m_title(title),m_author(author),m_year(year),m_price(price),m_pages(pages)
{

}
int Book::isbn()const
{
    return m_isbn;
}
std::string Book::title()const
{
    return m_title;
}
std::string Book::author()const
{
    return m_author;
}
int Book::year()const
{
    return m_year;
}
double Book::price() const
{
    return m_price;
}
int Book::pages() const
{
    return m_pages;
}
void Book::display() const
{
    std::cout<<"isbn:"<<m_isbn<<"\n"
    <<"title:"<<m_title<<"\n"
    <<"author:"<<m_author<<"\n"
    <<"year:"<<m_year<<"\n"
    <<"price:"<<m_price<<"\n"
    <<"pages:"<<m_pages<<"\n"
    <<"////////////////////////////////////"<<"\n";
}