#include <iostream>
#include <algorithm>


int add(int x, int y) {
    return x + y;
}

int main()
{
    int x = 1, y = 2;
    std::cout << add(x, y) << std::endl;
    return 0;
}
