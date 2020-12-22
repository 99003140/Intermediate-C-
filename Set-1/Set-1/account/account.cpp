#include "account.h"
#include<iostream>

 Account::Account():m_accNumber(""),m_accName(""),m_balance(0.0)
 {

 }
 Account::Account(std::string num,std::string name,double bal):m_accNumber(num),m_accName(name),m_balance(bal)
 {

 }
 Account::Account(std::string num,std::string name):m_accNumber(num),m_accName(name)
 {

 }
 Account::Account(const Account& ref):m_accNumber(ref.m_accNumber),m_accName(ref.m_accName),m_balance(ref.m_balance)
 {

 }
 Account::~Account()
{
}
void Account::debit(double amount)
{
    m_balance=m_balance-amount;
}
void Account::credit(double amount)
{
    m_balance=m_balance+amount;
}
double Account::getBalance() const
{
    return m_balance;
}
void Account::dispay() const
{
     std::cout << "AccountNumber: " << m_accNumber
            <<  "AccountName :"  << m_accName
            <<  "Balance"  << m_balance;
}