#include "Money.hpp"

bool Money::equals(Money newMoney)
{
    return amount_ == newMoney.amount_ && type_ == newMoney.type_;
}

std::string Money::currency() const
{
    return currency_;
}

int Money::getAmount() const
{
    return amount_;
}

Dollar::Dollar(int newAmount, std::string newCurrency)
    : Money(newAmount, newCurrency)
{
    type_ = 0;
}

Money* Dollar::times(int multiplier)
{
    return Money::dollar(amount_ * multiplier);
}

Franc::Franc(int newAmount, std::string newCurrency)
    : Money(newAmount, newCurrency)
{
    type_ = 1;
}

Money* Franc::times(int multiplier)
{
    return Money::franc(amount_ * multiplier);
}

Money* Money::dollar(int newAmount)
{
    return new Dollar(newAmount, "USD");
}

Money* Money::franc(int newAmount)
{
    return new Franc(newAmount, "CHF");
}
