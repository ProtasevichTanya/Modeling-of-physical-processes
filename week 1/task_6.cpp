#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ofstream object;
    object.open("text_6.txt");

    for(int i = 1; i < atoi(argv[1]) + 1; i++)
    {
        object << i << ' ';
    };

    object.close();
    return 0;
}
