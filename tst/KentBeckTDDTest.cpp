#include "gtest/gtest.h"
#include "Money.hpp"

TEST(Multiplication, USD)
{
    Money* five = Money::dollar(5);
    ASSERT_EQ(10, (five->times(2))->getAmount());
    ASSERT_EQ(15, (five->times(3))->getAmount());
}

TEST(Equality, USD)
{
    Money* five = Money::dollar(5);
    Money* otherFive = Money::dollar(5);
    ASSERT_TRUE(five->equals(*otherFive));
    Money* six = Money::dollar(6);
    ASSERT_FALSE(five->equals(*six));
    
    Money* fiveFranc = Money::franc(5);
    ASSERT_FALSE(fiveFranc->equals(*five));
}

TEST(Currency, USDCHF)
{
    Money* oneDollar = Money::dollar(1);
    Money* oneFranc = Money::franc(1);
    ASSERT_EQ("USD", oneDollar->currency());
    ASSERT_EQ("CHF", oneFranc->currency());
}
