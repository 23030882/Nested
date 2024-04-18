#include <iostream>

using namespace std;

int main()
{

    int age,allowance;

    string language ,Degree;


    cout << "Hello Welcome to the partner mate verifier" << endl;

    cout << "Please enter your age" << endl;
    cin >> age;

    cout << "Please enter your monthly allowance" << endl;
    cin >> allowance;

    cout << "Please enter the degree your are studying for the first word only" << endl;
    cin >> Degree;

    cout << "Please enter your spoken language" << endl;
    cin >> language;

    if(age>=16)
    {
     cout << "age requirement met" <<endl;

    }
    if (allowance>=2000)
    {
     cout <<"allowance requirement met"<< endl;

    }
    if (Degree == "computer")
    {
     cout << "Degree requirement met" << endl;

    }
    if (language == "pedi")
    {
     cout << "Spoken language requirement met" << endl;
    }

    if(age>=16 && allowance>=2000 && Degree == "computer" && language == "pedi"){
        cout << "all requirements met call me 0630675364" << endl;
    }

    else
    {
        cout << " some requirements not met" << endl;
    }


    return 0;
}
