#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* C style strings
    WITHOUT cstring CLASS
    char s1[] = "ankush";
    char s2[5] = "singh";
    char s3[] = {'a','n','k','u','s','h'};
    char s4[7] = {'a','n','k','u','s','h','\0'};
    
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;

   char s1[100];
   cout<<"Enter your name: "<<endl;
   cin.getline(s1,100);
   cout<<"Name is: "<<s1<<endl;
       */
    // WITH CSTRING CLASS
    string s ="Ankush Singh";
    cout<<"Name is: "<<s<<endl;
    cout<<"Enter a string"<<endl;
    getline(cin,s); // prints the whole string

    string s1;
    cout<<"String is "<<s<<endl;
    cout<<"Again enter a string"<<endl;
    cin>>s1; // this type of input gives the FIRST WORD
    cout<<"2nd time entered string is: "<<s1<<endl;
    return 0;
}
