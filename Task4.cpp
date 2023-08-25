/*        TASK 4
        WORD COUNT

Develop a program that counts the number of words in a given
text file. Prompt the user to enter the file name and display the
total word count.
*/

#include<iostream>
using namespace std ; 

int main ()
{
    char x[20] ;
    cout<<"Enter a text file : " ;
    cin.getline(x , 20) ;

    int i , count =0 ;

    for(i=0 ; x[i] ; i++)
    {
        if ((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z'))
            count++ ;
    }

    cout<<"Total word count is "<<count ;
    return 0 ;
}
