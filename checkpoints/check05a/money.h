/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars;
   int cents;

public:
   void prompt();
   void display() const;
   int getDollars() const;
   int getCents() const;
   void setDollars(int);
   void setCents(int);
};

#endif
