#include "Money.hpp"

bool Money::equals(Money newMoney)
{
    return amount_ == newMoney.amount_ && currency_ == newMoney.currency_;
}

Money* Money::times(int multiplier)
{
    return new Money(amount_ * multiplier, currency_);
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

Franc::Franc(int newAmount, std::string newCurrency)
    : Money(newAmount, newCurrency)
{
    type_ = 1;
}

Money* Money::dollar(int newAmount)
{
    return new Dollar(newAmount, "USD");
}

Money* Money::franc(int newAmount)
{
    return new Franc(newAmount, "CHF");
}
