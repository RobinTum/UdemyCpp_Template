#include <cstdint>
#include <iostream>

int main()
{
    char array1[] = "Hello World!";

    std::uint32_t i = 0;

    while(array1[i] != '\0')
    {
        i++;
    }

    std::cout << "String length: " << i << std::endl;

    return 0;
}
