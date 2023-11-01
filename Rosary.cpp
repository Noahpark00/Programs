#include <iostream>

using namespace std;

int main()
{
    //Declare variables for prayers
    int decade{0};
    char choice;
    int mystery{1};
    int hm{0};
    //Loop to repeat rosary
    while(choice != 'n'){
        //Reset variable
        decade = 0;
        hm = 0;
        mystery = 1;

        //Loop for beginning of rosary
        int i;
        for(i=0; 3>i; i++)
        {
            cout << "Hail Mary, full of grace the Lord is with thee\n";
            cout << "Blessed art though amongst women and blessed is the fruit of thy womb, Jesus\n";
            cout << "Holy Mary, mother of God, pray for us sinners\n";
            cout << "now and at the hour of our death, amen."<<endl;  
        }
        //Loop for decades
        while(decade < 5)
        {
            cout << "Glory be to the father, and the son and the Holy Spirit\n";
            cout << "As it was in the beginning is now and ever shall be\n";
            cout << "World without end, amen." <<endl;

            cout << "Mystery " << mystery << "\n";

            cout << "Our Father who art in Heaven hallowed be thy name\n";
            cout << "thy kingdom come, thy will be done, on Earth as it is in Heaven\n";
            cout << "Give us this day our daily bread and forgive us our trespasses\n";
            cout << "As we forgive those who trespass against us and lead us not into temptation\n";
            cout << "but deliver us from evil." <<endl;
            //Loop for Hail Mary's
            while(hm < 10)
            {
                cout << "Hail Mary, full of grace the Lord is with thee\n";
                cout << "Blessed art though amongst women and blessed is the fruit of thy womb, Jesus\n";
                cout << "Holy Mary, mother of God, pray for us sinners\n";
                cout << "now and at the hour of our death, amen."<<endl;
                hm++;
            }
            decade++;
            mystery++;
            hm = 0;
        }
        //End of rosary
        cout << "Hail Holy Queen, Mother of Mercy, our life our sweetness and our hope\n";
        cout << "To Thee do we cry poor banished children of eve\n";
        cout << "To thee do we send up our sighs, mourning and weeping\n";
        cout << "In this valley of tears. Turn then, most gracious advocate\n";
        cout << "eyes of mercy towards us, and after this our exile\n";
        cout << "Show unto us the blessed fruit of thy womb, Jesus\n";
        cout << "O clement, O loving, O sweet virgin Mary\n";
        cout << "Pray for us most holy mother of God\n";
        cout << "That we may be worthy of the promises of Christ.\n";
        //Prompt to repeat
        cout << "Would you like to pray again? y or n:";
        cin >> choice;
    }
    cout << "Have a blessed day!";
    return 0;
}