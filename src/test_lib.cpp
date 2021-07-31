
//
// Created by William.Hua on 2021/7/31.
//

bool is_power_of_two(int n)
{
    if (n < 0)
        return false;

    return (n & (n - 1)) == 0;
}

int multiply_by_two(int n)
{
    return n << 1;
}

int divide_by_two(int n)
{
    return n >> 1;
}