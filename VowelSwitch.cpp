///Switch-case Does not suppport logic gate

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any Alphabet Here : ";
    cin>>ch;

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E': 
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<"Vowel"<<endl;
        break;
        default :
        cout<<"Consonant or number or Symble"<<endl;
    }


    return 0;
}