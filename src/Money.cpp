#include "Money.hpp"

bool Money::equals(Money newMoney)
{
    return amount == newMoney.amount && type == newMoney.type;
}

int Money::getAmount() const
{
    return amount;
}

Dollar::Dollar(int newAmount)
{
    amount = newAmount;
    type = 0;
}

Money Dollar::times(int multiplier)
{
    return Dollar(amount * multiplier);
}

Franc::Franc(int newAmount)
{
    amount = newAmount;
    type = 1;
}

Money Franc::times(int multiplier)
{
    return Franc(amount * multiplier);
}

// Money* Money::dollar(int newAmount)
// {
//     return new Dollar(newAmount);
// }
