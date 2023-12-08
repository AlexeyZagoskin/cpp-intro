#include  <iostream>
#include <math.h>

 int main()
 {
    float a , b, c;
    float area;
    int p;

   std::cin >> a >> b >> c;
   
    p = (a + b + c)/2;
    area = p*(p-a)*(p-b)*(p-c);


    std::cout << sqrt(area) << std::endl;

    return 0;
 }

