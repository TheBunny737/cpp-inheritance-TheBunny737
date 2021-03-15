#include <iostream>
#include "Artist.h"
#include "Athlete.h"
#include "Person.h"
using namespace std;

int main() {
    Artist boy("Boy Peacemaker", 40, "Pop");
    cout << boy.introduce() << endl;

    Athlete selena("Selena Williams", 39, "Tennis");
    cout << selena.introduce() << endl;

    Person mooyoung("Teerapat Dechnambuncharchai", 19);
    cout << mooyoung.introduce() << endl;
}