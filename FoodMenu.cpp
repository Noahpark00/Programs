#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout << "Enter your food choice: 1.Pizza 2.Hotdog 3.Taco 4.Shrimp and grits: ";
    cin >> choice;

    while(choice < 1 || choice > 4)
    {
        cout << "Not a valid choice." << endl;
        cout << "Enter your food choice: 1.Hotdog 2.Burger 3.Chicken tenders 4.Shrimp and grits: ";
        cin >> choice;
    }
    if(choice == 1)
    {
        cout << "Great choice";
    }
    if(choice == 2)
    {
        cout << "Those poor dogs";
    }
    if (choice == 3)
    {
        cout << "Great choice";
    }
    if (choice == 4)
    {
        cout << "Great choice";
    }
}
