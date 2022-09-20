#include <iostream>
using namespace std;

int main()
{
    //enum = sequential numerical values
    enum MODE {WEAPON, EQUIPMENT, GEM, DEFENSE};
    cout << "Weapon " << WEAPON << endl;
    cout << "Equipment " << EQUIPMENT << endl;
    cout << "GEM " << GEM << endl;
    cout << "DEFENSE " << DEFENSE << endl;

    cout << "================" << endl;
    enum MODE1 {weapon, equipment, gem = 10, defense};
    cout << "Weapon " << weapon << endl;
    cout << "Equipment " << equipment << endl;
    cout << "GEM " << gem << endl;
    cout << "DEFENSE " << defense << endl;

    int mode;

    cout << "Enter mode (0: Weapon, 1: Equipment, 2: Gem, 3: Defense): ";
    cin >> mode;

    switch(mode)
    {
        case WEAPON:
            cout << "Weapon" << endl; break;
        case EQUIPMENT:
            cout << "Equipment" << endl; break;   
        case GEM:
            cout << "Gem" << endl; break;
        case DEFENSE:
            cout << "defense" << endl; break;
    }

    //strong enums: not numbers
    enum class Weather {Rainy, Sunny, Windy};
    Weather day = Weather::Rainy;

    switch(day)
    {
        case Weather::Rainy:
            cout << "Rainy" << endl; break;
        case Weather::Sunny:
            cout << "Sunny" << endl; break;
        case Weather::Windy:
            cout << "Windy" << endl; break;
    }

    return 0;
}