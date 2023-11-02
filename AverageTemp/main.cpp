#include <iostream>

int main()
{

    double TempReadings[]{30.5, 25.6, 75.9, 89.13, 5.69};

    for (auto Temp : TempReadings)
        std::cout << "Temp: " << Temp << std::endl;

    return 0;
}
