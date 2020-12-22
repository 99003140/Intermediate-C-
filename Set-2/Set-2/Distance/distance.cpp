#include"distance.h"
Distance::Distance():m_feets(0),m_inches(0)
{
}
Distance::Distance(int feet,int inche):m_feets(feet),m_inches(inche)
{
}
Distance::Distance(int val):m_feets(val),m_inches(0)
{
}
Distance Distance::operator+(const Distance& ref)
{
    return Distance(this->m_feets+ref.m_feets,this->m_inches+ref.m_inches);
}
Distance Distance::operator-(const Distance& ref)
{
    return Distance(this->m_feets-ref.m_feets,this->m_inches-ref.m_inches);
}
Distance& Distance::operator++()
{
    ++m_feets;
    ++m_inches;
    return *this;
}
Distance Distance::operator++(int)
{
    Distance temp(m_feets,m_inches);
    m_feets++;
    m_inches++;
    return temp;
}
bool Distance::operator==(const Distance& ref)
{
    return (m_feets==ref.m_feets)&&(m_inches==ref.m_inches);

}
std::ostream& operator<<(std::ostream& rout, const Distance& ref)
{
    rout<<ref.m_feets<<"+"<<ref.m_inches;
    return rout;
}
/*int Distance::getfeets()
{
    return m_feets;
}
int Distance::getinches()
{
    return m_inches;
}*/
