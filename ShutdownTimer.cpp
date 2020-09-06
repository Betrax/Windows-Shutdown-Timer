#include <iostream>
#include <Windows.h>

int main()
{
    int Secs;
    
    int seconds;
    int minutes;
    int hours;

    std::cout << "Seconds: ";
    std::cin >> Secs;

    
    //Timer
    while (Secs > 0)
    {
        seconds = Secs;
        system("cls");
        
        
        hours = seconds / 3600;
        minutes = (seconds - hours * 3600) / 60;
        seconds = (seconds - hours * 3600) - minutes * 60;

        if (hours > 0)
        {
            std::cout << "Will shutdown after: " << hours << "h " << minutes << "m " << seconds << "s";
        }
        else if (minutes > 0)
        {
            std::cout << "Will shutdown after: " << minutes << "m " << seconds << "s";
        }
        else
        {
            std::cout << "Will shutdown after: "<< seconds << "s";
        }
        

        Secs = Secs - 1;
        Sleep(1000);
    }
    
    //Shutdown
    system("C:\\WINDOWS\\System32\\shutdown /s");
}

