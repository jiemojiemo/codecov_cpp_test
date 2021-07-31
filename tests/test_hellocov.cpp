
//
// Created by William.Hua on 2021/7/31.
//
#include <gmock/gmock.h>
#include "test_lib.h"

TEST(ATest, Test)
{
    is_power_of_two(8);
    multiply_by_two(7);
    divide_by_two(-7);
    is_power_of_two(-8);
}