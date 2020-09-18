#include "Money.hpp"

bool Money::equals(Money newMoney)
{
    return amount_ == newMoney.amount_ && currency_ == newMoney.currency_;
}

Money* Money::dollar(int newAmount)
{
    return new Money(newAmount, "USD");
}

Money* Money::franc(int newAmount)
{
    return new Money(newAmount, "CHF");
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
