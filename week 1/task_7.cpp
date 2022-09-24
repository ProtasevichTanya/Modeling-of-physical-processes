#include <iostream>
#include <fstream>

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibonacci(n - 2) + fibonacci(n - 1);
}

int main(int argc, char *argv[])
{
    std::ofstream object;
    object.open("text_7.txt");

    object << "номер:       число:" << std::endl;

    for(int i = 1; i < atoi(argv[1]) + 1; i++)
    {
        object << i << "           "<< fibonacci(i) << std::endl;
    };

    object.close();
    return 0;
}
