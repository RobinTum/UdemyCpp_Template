#include <cstdint>
#include <iostream>

int main()
{
    constexpr static auto num_rows = std::uint32_t{3};
    constexpr static auto num_cols = std::uint32_t{2};

    std::uint32_t my_matrix[num_rows][num_cols] = {{1, 2}, {3, 4}, {5, 6}};

    std::uint32_t column_sum[num_cols]{};

    for (std::uint32_t i = 0; i < num_rows; i++)
    {
        for (std::uint32_t j = 0; j < num_cols; j++)
        {
            column_sum[j] += my_matrix[i][j];
        }
    }

    for (std::uint32_t i = 0; i < num_cols; i++)
    {
        std::cout << column_sum[i] << " ";
    }
    std::cout << std::endl;



    return 0;
}
