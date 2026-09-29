#include <stdio.h>

void change_value(int x)
{
    x = x * 2;
}

void change_array(int arr[])
{
    for (int i = 0; i < 3; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int arr[3] = {10, 20, 30};

    change_value(arr[0]);

    return 0;
}
