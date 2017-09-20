#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int size = 10;



int main()
{
int randomdigits[10] = {0,0,0,0,0,0,0,0,0,0};
int userdigits[10]  = {0,0,0,0,0,0,0,0,0,0};
int amtTicket;
int choice;
int randomizer[10] = 1 + rand()%60

srand(time(NULL));

cout << "How many tickets do you want to purchase? " << endl;
cin >> amtTicket;

int price = amtTicket*5;

cout << "You need to pay: " << price << endl;


cout <<"Enter 1 for entering your own number or enter 2 for generating random numbers for you" << endl;
cin >> choice;


    if(choice==1)
    {
        cout << "Stimulating your numbers for the lottery" << endl;



        for(int i=0; i<size;i++)
        {
            cout << "Enter a digit between 1 and 60, do not repeat numbers: " << endl;
            cin >> userdigits[i];



        }
    }
    if(choice==2)
    {
        cout << "Generating random numbers for the lottery" << endl;

        for(int i = 0; i < size; i++)
        {
            randomdigits[i] = 1  + rand()%60;


        }
            cout << endl;


    }

    for(int x = 0; x < size; ++x)
    {
            if(randomizer[x] == userdigits[x])
            {
                cout << "You won the Golden prize!" << endl;
            }



    }
    for(int x = 0; x < 9; ++x)
    {
        if(randomizer[x] == userdigits[x])
        {
            cout << "You won the Silver Prize!" << endl;
        }



    }


    for(int i=0; i < size; i ++)
    {


    for(int j=i+1; j < size; j ++)
    {
        if (randomizer[i]== userdigits[i] && randomizer[j] == randomdigits [j])
            {
                cout << "You won the Bronze Prize!" << endl;
            }
    }

    }

    if (randomizer[10] =! userdigit[10] || randomdigits[10] =! randomdigits[10])
    {
        cout << "You failed; try again next time."
    }




}


/* On my honor,
The following program is a result of personal effort. I have not discussed with
anyone other than my instructor or any appropriate person in charge of the
class.
I have not used code or portion of code from another student, or any other
unauthorized source, either modified or unmodified.
If any C++ language code or documentation used in my program was obtained
from another source, such as a text book or course notes, that has been clearly
noted with a proper citation in the comments of my program.
I have not designed this program in such a way as to defeat or interfere with
the normal operation of the eniac system or cslab machines at Hunter College .
< Jeong Yang aka John Yang >
/*
