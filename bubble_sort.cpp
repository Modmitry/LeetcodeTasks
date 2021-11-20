#include <iostream>
#include <algorithm>



void fill_array(int mass[], const int& length)
{
    for (auto i = 0; i < length; i++)
    {
        mass[i] = rand() % 10;
    }
}

void print_array(int mass[], const int& length)
{
    for (auto i = 0; i < length; i++)
    {
        std::cout << mass[i] << ", ";    
    }
    std::cout << "\n";
}

// bubble_sort
void bubble_sort(int mass[], const int& length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j < length - i; j++)
        {
            if (mass[j-1] > mass[j])
            {
                int temp = mass[j-1];
                mass[j-1] = mass[j];
                mass[j] = temp;
            }
        }
    }
}




int main()
{
    const int SIZE = 10;
    int arr[SIZE];
  
    fill_array(arr, SIZE);
    print_array(arr, SIZE);

    bubble_sort(arr, SIZE);
    print_array(arr, SIZE);

    return 0;
}

