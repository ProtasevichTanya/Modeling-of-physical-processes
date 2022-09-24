#include <iostream>
#include <fstream>

int main()
{
    std::ofstream object;
    object.open("text_4.txt");

    for(int i = 1; i < 31; i++)
    {
        object << i << ' ';
    };

    object.close();
    return 0;
}
