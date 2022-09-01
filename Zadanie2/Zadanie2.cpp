//Zadanie 2
//Napisz funkcjê, która przyjmie dwa stringi i zwróci ile liter maj¹ wspólnych.


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