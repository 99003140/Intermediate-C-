#include"customer.h"
#include<iostream>
Customer::Customer():m_custId(""),m_custName(""),m_phone(""),m_balance(0.0)
{
}
Customer::Customer(std::string cus,std::string name,std::string phone,double bal):m_custId(cus),m_custName(name),m_phone(phone),m_balance(bal)
{

}
Customer::Customer(std::string cus,std::string name,std::string phone):m_custId(cus),m_custName(name),m_phone(phone)
{

}
 Customer::Customer(const Customer& ref):m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance)
 {

 }
Customer::~Customer()
{
}
 void Customer::credit(double amount)
 {
     m_balance=m_balance+amount;
 }         //recharge or billPay
  void Customer::makeCall(double amount)
  {
      m_balance=m_balance-amount;
  }
  double Customer::getBalance() const
  {
      return m_balance;
  }
  void Customer::dispay() const
  {
       std::cout << "CustomerId: " << m_custId
            <<  "CustomerName :"  << m_custName
            <<  "Phone"  << m_phone
            <<  "Balance"  << m_balance;
}