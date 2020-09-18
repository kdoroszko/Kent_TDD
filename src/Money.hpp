#pragma once

#include <string>

class Expression {};

class Money : public Expression
{
public:
    
    Money(int newAmount, std::string newCurrency) : amount_(newAmount), currency_(newCurrency) {}
    
    bool equals(Money newMoney);
    static Money* dollar(int newAmount);
    static Money* franc(int newAmount);
    Money* times(int multiplier);
    std::string currency() const;
    Expression* plus(Money addend);
    int getAmount() const;
    
private:
    
    int amount_;
    std::string currency_;
};
