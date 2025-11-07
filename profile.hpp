#include <string>
#include <vector>
#include <iostream>
class Profile{
    private:

    const std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

    public:
    //constructor decleration
    Profile(std::string n, int a, std::string ci, std::string co, std::string pro = "N/A");

    std::string view_profile();

    void add_hobby(std::string new_hobby);

};