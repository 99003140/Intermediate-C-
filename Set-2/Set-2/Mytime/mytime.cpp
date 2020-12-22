#include"mytime.h"
#include<iostream>
MyTime::MyTime():m_hours(0),m_minutes(0),m_seconds(0)
{
}
MyTime::MyTime(int hr,int min,int sec):m_hours(hr),m_minutes(min),m_seconds(sec)
  {
  }
MyTime::MyTime(int hr,int min):m_hours(hr),m_minutes(min)
  {
  }
  MyTime MyTime::operator+(const MyTime& ref)
  {
      return MyTime(this->m_hours+ref.m_hours,this->m_minutes+ref.m_minutes,this->m_seconds+ref.m_seconds);
  }
  MyTime MyTime::operator-(const MyTime& ref)
  {
    return MyTime(this->m_hours-ref.m_hours,this->m_minutes-ref.m_minutes,this->m_seconds-ref.m_seconds);
  
  }
  MyTime& MyTime::operator++()
  {
      ++m_hours;
      ++m_minutes;
      ++m_seconds;
      return *this;
  }
  MyTime MyTime::operator++(int)
  {
      MyTime temp(m_hours,m_minutes,m_seconds);
      m_hours++;
      m_minutes++;
      m_seconds++;
  }
  bool MyTime::operator==(const MyTime& ref)
  {
      return (m_hours==ref.m_hours)&&(m_minutes==ref.m_minutes)&&(m_seconds==ref.m_seconds);
  }
  void MyTime::display()
  {
      std::cout<<"Hours:"<<m_hours
      <<"Minutes:"<<m_minutes
      <<"Seconds:"<<m_seconds;
  }
  /*int MyTime::gethours()
  {
      return m_hours;
  }
  int MyTime::getminutes()
  {
      return m_minutes;
  }
  int MyTime::getseconds()
  {
      return m_seconds;
  }*/


