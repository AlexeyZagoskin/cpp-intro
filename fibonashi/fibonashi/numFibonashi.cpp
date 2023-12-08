#include  <iostream>
int main()
{
    int n;
    std::cin >> n;

    int a = 0, b = 1;

     int fib_num = 0;
     for(int i = 0; i < n-1 ; i++)
     {
        fib_num = a + b;
        b = a;
        a = fib_num;
     }
     std::cout<< fib_num << std::endl;

     return 0;
}
