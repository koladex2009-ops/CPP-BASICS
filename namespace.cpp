#include <iostream>


namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {
    using namespace second;
    /*Namespaces provides a solution for preventing name conflicts in large projects.
    Each entity needs a unique name. A namespace allows for identically named entities as
    long as the namespaces are different.*/

    std::cout << first::x << '\n';

    using namespace std;
    const string name = "kolade";
    cout << "Hello " << name << '\n';

    using std::cout;
    using std::string;

    string nickName = "koladex";
    cout << "Hello " << nickName << '\n';

    return 0;
}