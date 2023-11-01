#include <iostream>

using namespace std;

int main(){
    //Output master menu and take user's input
    cout << "Welcome to my shop! Please enter the number corresponding to the type of item you'd like to browse: \n1.Weapons \n2.Armor \n3.Resources" << endl;
    int browse;
    cin >> browse;
    //Create switch based on user's input
    switch(browse)
    {
        //Create cases for user's input
        case 1:
        //Output submenu and take user's input
        cout << "Please enter the number corresponding to the weapon you'd like to buy: \n1.Steel warhammer - 30 gold \n2.Iron axe - 20 gold \n3.Enchanted bastard sword - 50 gold" << endl;
        int weapon;
        cin >> weapon;
        //Switch based on user's input
        switch(weapon)
        {
            //Make cases based on user's input
            case 1:
            cout << "That'll be 30 gold, have a great day!";
            break;

            case 2:
            cout << "That'll be 20 gold, have a great day!";
            break;

            case 3:
            cout << "That'll be 50 gold, have a great day!";
            break;

            default:
            cout << "That is not a valid choice";
            break;
        }
        break;

        case 2:
        //Output submenu and take user's input
        cout << "Please enter the number corresponding to the armor you'd like to buy: \n1.Iron helmet - 30 gold \n2.Leather greaves - 10 gold \n3.Elven chestplate - 80 gold" << endl;
        int armor;
        cin >> armor;
        //Switch based on user's input
        switch(armor)
        {
            //Make cases based on user's input
            case 1:
            cout << "That'll be 30 gold, have a great day!";
            break;

            case 2:
            cout << "That'll be 10 gold, have a great day!";
            break;

            case 3:
            cout << "That'll be 80 gold, have a great day!";
            break;

            default:
            cout << "That is not a valid choice";
            break;
        }
        break;

        case 3:
        //Output submenu and take user's input
        cout << "Please enter the number corresponding to the resource you'd like to buy: \n1.Health potion - 10 gold \n2.Quiver of iron arrows - 15 gold \n3.Large mana potion - 25 gold" << endl;
        int resource;
        cin >> resource;
        //Switch based on user's input
        switch(resource)
        {
            //Make cases based on user's input
            case 1:
            cout << "That'll be 10 gold, have a great day!";
            break;

            case 2:
            cout << "That'll be 15 gold, have a great day!";
            break;

            case 3:
            cout << "That'll be 25 gold, have a great day!";
            break;

            default:
            cout << "That is not a valid choice";
            break;
        }
        //Output if user doesn't make a valid choice
        default:
        cout << "That is not a valid choice";
        break;
    }
    return 0;
}