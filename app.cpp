#include "profile.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    //object of profile
    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

    sam.add_hobby("listening to audiobooks and podcasts");
    sam.add_hobby("playing rec sports like bowling and kickbal");
    sam.add_hobby("writing a speculative fiction novel");
    sam.add_hobby("reading advice columns");
    


    cout << sam.view_profile() << endl;

}