#include <string>
#include <vector>
#include "profile.hpp"
#include <iostream>
using namespace std;

//constructor defintion
Profile::Profile(std::string n, int a, std::string ci, std::string co, std:: string pro) 
    : name(n), age(a), city(ci), country(co), pronouns(pro) {}

    std::string Profile::view_profile(){
        string bio;
        bio = "Name: " + name;
        bio += "\nAge: " + to_string(age);
        bio += "\nCity: " + city;
        bio += "\nCountry: " + country;
        bio += "\nPronouns: " + pronouns;
        bio += "\nHobbies: ";
        for(const auto& hob : hobbies){
            bio += hob + ", ";
        } 

        return bio;

    }

    void Profile::add_hobby(string new_hobby){
        hobbies.push_back(new_hobby);
    }