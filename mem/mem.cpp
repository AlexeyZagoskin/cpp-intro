#include <iostream>
#include <math.h>
int main ()
{
    float d, G;
    int n;
    std::cin >> n;
    d = (1.0 / 6)*n;
    
    std::cout << G << std::endl;

    for(int y = -(n-1)/2; y <= (n-1)/2; y++)
    {
        for(int x = -(n-1)/2; x <= (n-1)/2; x++)
        {   G = 1 /(2*M_PI*pow(d, 2)*exp(-(pow(x, 2)+pow(y, 2))/2*pow(d, 2)));
            std::cout << G << " " ;
        }
        std::cout << std::endl;
    }
}