#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int arr[n][m];


    for (int i = 0; i < n; i++)
    {

        for (int j = 0 ; j < m; j++)
        {

            if(i == 0 || j == 0)
            {
                arr[i][j] = 1;
                continue;
            }

            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

        }
    }

    std::cout << arr[n - 1][m -1] << "\n";
}

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < m; j++)
//         cout << a[i][j] << " ";
//      cout << endl;
// }
// Вывод 2 мерного масива
