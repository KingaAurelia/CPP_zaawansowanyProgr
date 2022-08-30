// Zadanie 1
//Napisz funkcjê, która odwróci podanego stringa.

#include <iostream>
using namespace std;

int main() 
{

    string aboutMe = "BedeProgramistka";

    string reversedAboutMe;

    for (int i = aboutMe.length() - 1; i >= 0; i--) 
    {
        reversedAboutMe.push_back(aboutMe[i]);
    }
    std::cout << "About me: " << aboutMe << endl;
    std::cout << "Reversed about me: " << reversedAboutMe << endl;

}
