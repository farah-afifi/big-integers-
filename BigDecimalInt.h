#ifndef BIGDECIMALINT_H
#define BIGDECIMALINT_H

#include <iostream>
#include <string.h>
#include <cstring>
#include <sstream>
using namespace std;

class BigDecimalInt
{
    friend ostream& operator << (ostream& , BigDecimalInt);

    public:
        BigDecimalInt();

        BigDecimalInt (string decStr); // Initialize from string
        BigDecimalInt (int decInt);    // Initialize from integer

        BigDecimalInt operator + (BigDecimalInt anotherDec);
        BigDecimalInt operator - (BigDecimalInt anotherDec);

    protected:

    private:
        string BigNumber;
        string sign;

        int NumberSize;


};
void AddZeroes(int n , string& s);
string RemoveZeros(string strNum);
void FindSmallerAndBigger(string &bigger , string &smaller , bool &isAssumptionTrue);
#endif // BIGDECIMALINT_H


