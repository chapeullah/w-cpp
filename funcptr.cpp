#include <iostream>
  
int sum(int, int);
int subtract(int, int);
   
int main()
{
    int a{10};
    int b{5};
    int (*operation)(int, int) {sum};
    int result = operation(a, b);
    std::cout << "result = " << result << std::endl;
       
    operation = subtract;
    result = operation(a, b);
    std::cout << "result = " << result << std::endl;
}
int sum(int x, int y)
{
    return x+y;
}
int subtract(int x, int y)
{
    return x-y;
}