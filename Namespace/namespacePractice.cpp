#include <iostream>


// Namespace - provides a solution for naming conflicts 
//             in large projects.
 

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {

    // using namespace second;
    using std::cout;
    using std::string;

    int x = 5;
    string name = "zack";

    std::cout << "My name is " << name << " and my favorite number is " << x;
    
    return 0;
}