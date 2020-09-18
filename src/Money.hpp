#pragma once

#include <string>

class Money
{
public:
    
    Money(int newAmount, std::string newCurrency) : amount_(newAmount), currency_(newCurrency) {}
    
    bool equals(Money newMoney);
    static Money* dollar(int newAmount);
    static Money* franc(int newAmount);
    virtual Money* times(int multiplier);
    std::string currency() const;
    int getAmount() const;
    
protected:
    
    int amount_;
    std::string currency_;
    int type_;
};
