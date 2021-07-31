
//
// Created by William.Hua on 2021/7/31.
//

#include "test_lib.h"
#include <cassert>
int main()
{
        assert(is_power_of_two(8));
        assert(14 == multiply_by_two(7));
        assert(-4 == divide_by_two(-7));
        assert(is_power_of_two(-8) == false);
}