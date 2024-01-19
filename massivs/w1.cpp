#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int arr[n + 1];
    arr[0]= 1;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1 ; j <= k; j++)
        {
            if (i - j < 0)
            {
                continue;
            }
            sum += arr[i - j];
        }
        
        arr[i] = sum;

    }
    
    std::cout << arr[n] << "\n";

    return 0;
}
