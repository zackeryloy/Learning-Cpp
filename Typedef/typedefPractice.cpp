#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;


int main () {

    // typedef - reserved keyword used to create an adiditional name
    //           (alias) for another data type.
    //           New identifier for an existing type.
    //           Helps with readability and reduces typos
    //           Using keyword is more widley used than typedef

    
    text_t firstName = "Zackery";
    number_t age = 18;

    std::cout << age << std::endl;
    std::cout << firstName;




    return 0;
}