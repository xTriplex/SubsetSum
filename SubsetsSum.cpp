#include <iostream>

    // Function to calculate the sum of all possible subsets
    int CalculateSubsetSums(const int Array[], int ArraySize)
{
    // Calculate the total number of subsets excluding the empty set
    int TotalSubsets = (1 << ArraySize - 1);

    int TotalSum = 0;

    // Multiply each element by the total number of subsets and add to the total sum
    for (int i = 0; i < ArraySize; i++)
    {
        TotalSum += Array[i] * TotalSubsets;
    }

    return TotalSum;
}
    int main()
    {
        const int Array[] = { 1, 2, 3, 4, 5, 6 };
        int ArraySize = sizeof(Array) / sizeof(Array[0]);
        int TotalSubsetSum = CalculateSubsetSums(Array, ArraySize);
        std::cout << "Sum of all subsets: " << TotalSubsetSum << std::endl;
        std::cin.get();
        return 0;
    }