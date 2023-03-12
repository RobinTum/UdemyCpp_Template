#include <cstdint>
#include <iostream>

#include "exercise2.h"

// Exercise 1
void push_back(std::int32_t *&input_array,
               const std::size_t size,
               const std::int32_t value)
{
    int *p_temp = nullptr;
    p_temp = new int[size+1];

    for (std::size_t i = 0; i < size; i++)
    {
        p_temp[i] = input_array[i];
    }
    p_temp[size] = value;

    delete[] input_array;
    input_array = p_temp;
}

// Exercise 2
void pop_back(std::int32_t *&input_array, const std::size_t size)
{
    int *p_temp = nullptr;
    p_temp = new int[size-1];

    for (std::size_t i = 0; i < size-1; i++)
    {
        p_temp[i] = input_array[i];
    }

    delete[] input_array;
    input_array = p_temp;
}
