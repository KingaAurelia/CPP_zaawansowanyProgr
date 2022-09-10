// Zadanie18Utwórz jason z podanego stringa: Nastêpnie wypisz sumê wynagrodzenia wraz z bonusem dla Stefana



#include <iostream>
#include <string>
#include "json.hpp"
using json = nlohmann::json;


int main()
{
    std::string jsonString(R"(
    
    {
        "company":{
            "employee":{
                "name":"Stefan",
                    "payroll" : {
                    "salary":1500,
                        "bonus" : 800
                }
            }
        }
})");
    
json j = json::parse(jsonString);
json employee = j["company"]["employee"];

std::string employeeName = employee["name"];
int salary = employee["payroll"]["salary"];
int bonus = employee["payroll"]["bonus"];
int sum = salary + bonus;

std::cout << "Zarobki pracownika " << employeeName << "a to: " << sum << std::endl;
}

