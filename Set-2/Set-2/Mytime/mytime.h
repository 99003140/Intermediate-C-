#include<string>

class MyTime {
  int m_hours;
  int m_minutes;
  int m_seconds;
  public:
  MyTime();
  MyTime(int,int,int);
  MyTime(int,int);
  MyTime operator+(const MyTime&);

  MyTime operator-(const MyTime&);

  //MyTime operator+(int);
  //MyTime operator-(int);
  MyTime& operator++();
  MyTime operator++(int);
  bool operator==(const MyTime&);
  //bool operator<(const MyTime&);
  //bool operator>(const MyTime&);
  void display();
  int gethours(){return m_hours;}
  int getminutes(){return m_minutes;}
  int getseconds(){return m_seconds;}

};