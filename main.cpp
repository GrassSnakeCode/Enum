#include <iostream>
#include <string>

using namespace std;

enum dayofweek{monday=1,tuesday,wednesday=20,thursday,friday,saturday,sunday};

void menu()
{
    cout << " Select the day of the week " << endl;
    cout << endl;
    cout << " 1.Monday " << endl;
    cout << " 2.tuesday " << endl;
    cout << " 3.wednesday " << endl;
    cout << " 4.thursday " << endl;
    cout << " 5.friday " << endl;
    cout << " 6.saturday " << endl;
    cout << " 7.sunday " << endl;

}
string getDay(dayofweek days)
    {
        switch(days)

        {
            case monday :
                return "Monday";
            break;
              case tuesday :
                return "Tuesday";
            break;
              case wednesday :
                return "Wednesday";
            break;
              case thursday :
                return "Thursday";
            break;
              case friday :
                return "Friday";
            break;
              case saturday :
                return "Saturday";
            break;
              case sunday :
                return "Sunday";
            break;

        }
    }


int main()

{
    int days;
    char ch;
        do
        {
                 system("clear");
                 menu();
                 while(!(cin >> days))
                 {
                   cin.clear();
                   cin.ignore(1024,'\n');
                   system("clear");
                   menu();
                   cout << endl;
                   cout << " incorrect data, try again ;) " << endl;

                 }

                 cout << getDay(dayofweek(days)) <<endl;

            do
                {


                    cout << "Do you want to continue the program? [Y/N]" << endl;
                    cin >> ch;
                    cin.ignore(1024,'\n');

                }
                while( ch!= 'y' && ch!= 'Y' && ch!= 'n' && ch!= 'N');

    }
    while (ch=='y'||ch=='Y');




    return 0;
}
