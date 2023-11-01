#include <iostream>

using namespace std;
int weapon;
int browse;
int armor;
int resource;
int gold{100};
int armors();
int weapons();
int resources();
int mainMenu();

int main(){
    //Output master menu and take user's input
    mainMenu();

    return 0;
}
/*-------------------------------------------------------------------------------
Function Name: mainMenu
Parameters:
Return type: int
Description: mainMenu outputs an initial menu that either returns 0 and leaves the 
program or leads to another menu.
-----------------------------------------------------------------------------------*/
int mainMenu(){
    //Output main menu and allow user to navigate
    do{
        cout << "Welcome to my shop! Please enter the number corresponding to the type of item you'd like to browse: \n1.Weapons \n2.Armor \n3.Resources \n4.Leave the store" << endl;
        cin >> browse;
        switch(browse)
        {
            //Create cases for user's input
            case 1:
            weapons();
            break;

            case 2:
            //Output submenu and take user's input
            armors();
            break;

            case 3:
            //Output submenu and take user's input
            resources();
            //Close the program
            case 4:
            cout << "Have a great day!";
            return 0;
            break;

            //Output if user doesn't make a valid choice
            default:
            cout << "That is not a valid choice" << endl;
            break;
        }
    }while(browse < 1 || browse > 4);
    return 0;
}
/*-------------------------------------------------------------------------------
Function Name: weapons
Parameters:
Return type: int
Description: weapons allows the user to purchase a weapon with their gold or return
to the main menu.
-----------------------------------------------------------------------------------*/
int weapons(){
        //Output gld and ask user for input
        do{
        cout << "You have " << gold << " gold left." << endl;
        cout << "Please enter the number corresponding to the weapon you'd like to buy: \n1.Steel warhammer - 30 gold \n2.Iron axe - 20 gold \n3.Enchanted bastard sword - 50 gold \n4.Return to main menu" << endl;
        cin >> weapon;
        //Switch based on user's input
        switch(weapon)
        {
            //Make cases based on user's input
            case 1:
            if(gold >= 30){
            cout << "That'll be 30 gold" << endl;
            gold -= 30;
            }
            else{
                cout << "You do not have enough gold for that." << endl;
            }
            break;

            case 2:
            if(gold >= 20){
            cout << "That'll be 20 gold!"<< endl;
            gold -= 20;
            }
            else{
                cout << "You do not have enough gold for that."<< endl;
            }
            break;

            case 3:
            if(gold >= 50){
            cout << "That'll be 50 gold!"<< endl;
            gold -= 50;
            }
            else{
                cout << "You do not have enough gold for that."<< endl;
            }
            break;
            //Returns to main menu
            case 4:
            mainMenu();
            return 0;
            break;

            default:
            cout << "That is not a valid choice" << endl;
            break;
        }
    }while(gold > 0);
    //End if gold runs out
    if(gold == 0){
        cout << "You've run out of gold, come back when you have more!";
    }
    return 0;
}
/*-------------------------------------------------------------------------------
Function Name: armors
Parameters:
Return type: int
Description: armors allows the user to purchase some armor with their gold or return
to the main menu.
-----------------------------------------------------------------------------------*/
int armors(){
    do{
    //Output gold and ask user for input
    cout << "You have " << gold << " gold left." << endl;
    cout << "Please enter the number corresponding to the armor you'd like to buy: \n1.Iron helmet - 30 gold \n2.Leather greaves - 10 gold \n3.Elven chestplate - 80 gold \n4.Return to main menu" << endl;
    cin >> armor;
        //Switch based on user's input
        switch(armor)
        {
            //Make cases based on user's input
            case 1:
            if(gold >= 30){
            cout << "That'll be 30 gold!"<< endl;
            gold -= 30;
            }
            else{
                cout << "You do not have enough gold for that."<< endl;
            }
            break;

            case 2:
            if(gold >= 10){
            cout << "That'll be 10 gold!"<< endl;
            gold -= 10;
            }
            else{
                cout << "You do not have enough gold for that."<< endl;
            }
            break;

            case 3:
            if(gold >= 80){
            cout << "That'll be 80 gold!"<< endl;
            gold -= 80;
            }
            else{
                cout << "You do not have enough gold for that."<< endl;
            }
            break;

            case 4:
            mainMenu();
            return 0;
            break;
            //Return to main menu
            default:
            cout << "That is not a valid choice" << endl;
            break;
        }
    }while(gold > 0);
    //End if gold runs out
    if(gold == 0){
        cout << "You've run out of gold, come back when you have more!";
    }
    return 0;
}
/*-------------------------------------------------------------------------------
Function Name: resources
Parameters:
Return type: int
Description: resources allows the user to purchase a resource with their gold or return
to the main menu.
-----------------------------------------------------------------------------------*/
int resources(){
    //Output gold and allow user to purchase item
    do{
        cout << "You have " << gold << " gold left." << endl;
        cout << "Please enter the number corresponding to the resource you'd like to buy: \n1.Health potion - 10 gold \n2.Quiver of iron arrows - 15 gold \n3.Large mana potion - 25 gold \n4.Return to main menu" << endl;
        cin >> resource;
        //Switch based on user's input
        switch(resource)
        {
            //Make cases based on user's input
            case 1:
            if(gold >= 10){
            cout << "That'll be 10 gold!"<< endl;
            gold -= 10;
            }
            else{
                    cout << "You do not have enough gold for that."<< endl;
            }
            break;

            case 2:
            if(gold >= 15){
            cout << "That'll be 15 gold!";
            gold -= 15;
            }
            else{
                    cout << "You do not have enough gold for that."<< endl;
            }
            break;

            case 3:
            if(gold >= 25){
            cout << "That'll be 25 gold!"<< endl;
            gold -= 25;
            }
            else{
                    cout << "You do not have enough gold for that."<< endl;
            }
            break;
            //Return to main menu
            case 4:
            mainMenu();
            return 0;
            break;

            default:
            cout << "That is not a valid choice" << endl;
            break;
        }
    }while(gold > 0);
    //End if gold runs out
    if(gold == 0){
        cout << "You've run out of gold, come back when you have more!";
    }

    return 0;
}