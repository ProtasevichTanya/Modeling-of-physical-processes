#include <iostream>
#include <fstream>

int main()
{
    int n;
    std::cin >> n;

    std::ofstream object;
    object.open("text_5.txt");

    for(int i = 1; i < n + 1; i++)
    {
        object << i << ' ';
    };

    object.close();
    return 0;
}
