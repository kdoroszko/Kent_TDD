#pragma once

#include <string>
#include "Money.hpp"

class Bank
{
public:
    
    Money* reduce(Expression source, std::string to);
};
