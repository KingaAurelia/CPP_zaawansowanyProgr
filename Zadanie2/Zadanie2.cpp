//Zadanie 2
//Napisz funkcj�, kt�ra przyjmie dwa stringi i zwr�ci ile liter maj� wsp�lnych.


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "minion";
    string second = "banana";
    int count = 0;

    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] == second[i])

        {
            count++;
        }

    }
    cout << "Liczba wspolnych liter w tych stringach to: "<<count;

}