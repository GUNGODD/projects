#include<iostream>
#include<windows.h>
#include <string>


using namespace std;




int main()
{

      char inp, y, n, Y, N;
      int age;
      string  name , getkey;
      
    cout << "\t\t WELCOME TO CHATBOX"<<endl;
    cout << "to continue the program type 'Y' and to End type 'N' -"<< endl;
    cout << "---> "<< endl;

    cin>>inp;
//     condition whether its y or n 
if ( inp == 'y'|| inp == 'Y' ) // if y 
{
      cout << "Welcome......!" ; // do this


}
else  // if not which is n 
 {
      cout << "\n  Thanks for coming"; // do this 
      return 0;

 }
 system("cls"); // clean out the terminal gg
 
        if (getkey !="bi")
{
      cout << "\t Hello bhai\n";
      cin>> getkey;
      cout << "What is your name.?";;
      cin>> name;
      cout << name<<"\n What is your age ?\n";
      cin>> age;
      
      cout << "print the emogi";
      if (  age > 1 || age <=10) {
            cout << "child emoji"<<endl;
      cout << "alright !! then you are  " << age<< "Great"<< " " << endl;
      }

      else if (age >10  && age <=18 )

      {
            cout << "child emoji" << endl;
            cout << "alright !! then you are  " << age <<" "<<   "Great"<< " "<<endl;
      }

      else if (age > 18 && age <= 25)

      {
            cout << "child emoji" << endl;
            cout << "alright !! then you are  " << age << " "
                 << "Great"
                 << " " << endl;
      }

      else if (age > 18 && age <= 25)

      {
            cout << "child emoji" << endl;
            cout << "alright !! then you are  " << age << " "
                 << "Great"
                 << " " << endl;
      }

    return 0;
}
}