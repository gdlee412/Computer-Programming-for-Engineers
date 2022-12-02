#include <iostream>
#include <map>
#include <string>
//using namespace std;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
    map<string, string> planets;

    planets["Mercury"] = "Hot planet";
    planets["Venus"] = "Atmosphere of sulfuric acid";
    planets["Earth"] = "Home";
    planets["Mars"] = "The Red Planet";
    planets["Jupiter"] = "Largest planet in our solar system";
    planets["Saturn"] = "Has Rings";
    planets["Uranus"] = "Tilts on its side of the earth";
    planets["Neptune"] = "1500 mile-per-hour winds";
    planets["Pluto"] = "Dwarf planet";

    cout << "Entry of Mercury - " << planets["Mercury"] << endl << endl;

    if(planets.find("Mercury") != planets.end())
    {
        cout << "Mercury is in the map." << endl;
    }

    if(planets.find("Ceres") == planets.end())
    {
        cout << "Ceres is not in the map." << endl << endl;
    }

    cout << "Iterating through all the planets:" << endl;
    map<string, string>::const_iterator iter;
    //The iterator will output the map in order sorted by key
    for(iter = planets.begin(); iter != planets.end(); iter++)
    {
        cout << iter->first << " - " << iter->second << endl;
    }
    return 0;
}