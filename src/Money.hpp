#pragma once

class Money
{
public:
    
    bool equals(Money newMoney);
    static Money* dollar(int newAmount);
    static Money* franc(int newAmount);
    virtual Money times(int multiplier) {}
    int getAmount() const;
    
protected:
    
    int amount;
    int type;
};

class Dollar : public Money
{
public:
    
    Dollar(int newAmount);
    
    Money times(int multiplier);
};

class Franc : public Money
{
public:
    
    Franc(int newAmount);
    
    Money times(int multiplier);
};
