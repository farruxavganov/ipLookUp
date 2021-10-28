#include <iostream>
#include <string>
using namespace std;

int main()
{
    while(true){
        string domain;
        cout << "Enter domain name: "; cin >> domain;
        domain = "nslookup " + domain;
        system(domain.c_str());
        system("pause");
        system("cls");
    }
    return 0;
}
