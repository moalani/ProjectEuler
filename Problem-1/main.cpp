//
//  main.cpp
//  Problem-1
//
//  Created by mohammed-alani on 5/14/20.
//  Copyright © 2020 mohammed-alani. All rights reserved.

// Problem 1
/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/

#include <iostream>
using namespace std;

// function takes any number as the ceiling we are interested in summing up until

int returnMultiples(int N)

{
    int mults = 0;
    for (int i = 1; i < N ; i++)
    {
        if ((i%3 == 0) || (i%5 == 0))
        {
            
            mults += i;
        }
    }
    
    return mults;
}

int main()
{
    cout << returnMultiples(1000) << "\n";
}
