#include "gtest/gtest.h"
#include "Money.hpp"

TEST(Multiplication, USD)
{
    Dollar five(5);
    ASSERT_EQ(10, (five.times(2)).getAmount());
    ASSERT_EQ(15, (five.times(3)).getAmount());
}

TEST(FrancMultiplication, CHF)
{
    Franc five(5);
    ASSERT_EQ(10, (five.times(2)).getAmount());
    ASSERT_EQ(15, (five.times(3)).getAmount());
}

TEST(Equality, USD)
{
    Dollar five(5);
    Dollar otherFive(5);
    ASSERT_TRUE(five.equals(otherFive));
    Dollar six(6);
    ASSERT_FALSE(five.equals(six));
    
    Franc fiveFranc(5);
    Franc otherFiveFranc(5);
    ASSERT_TRUE(fiveFranc.equals(otherFiveFranc));
    Franc sixFranc(6);
    ASSERT_FALSE(fiveFranc.equals(sixFranc));
    
    ASSERT_FALSE(fiveFranc.equals(five));
}
