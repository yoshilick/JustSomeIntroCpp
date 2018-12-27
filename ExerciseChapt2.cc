
// Just a simple example that uses SWITCH 

int main()// C++ programs start by executing the function main
{
    double inches_to_cm = 2.54; // cm in 1 inch

    char unit;
    double length;

    std::cout << "please enter length and i / c for inches Vs. cm\n";
    std::cin >> length >> unit;

    std::cout << "\nlength= " << length;
    std::cout << "\nunit= " << unit << "\n";



    switch(unit){

        case 'c' : std::cout << length << " inches is: " << length*inches_to_cm << " cm";
                   break;

        case 'i' : std::cout << length << " inches is: " << length*inches_to_cm << " cm";
                   break;

        default:
            std::cout << "I dont know that (\"" << unit << "\" unit)";

    }
