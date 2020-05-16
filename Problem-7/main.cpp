//
//  main.cpp
//  Problem-7
//
//  Created by mohammed-alani on 5/16/20.
//  Copyright © 2020 mohammed-alani. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

bool isPrime(long unsigned int x)
{
 
    
    if (x <3)
    {
        return true;
    }
    else
    {
        for (int i = 3; i <= sqrt(x);i=i+2)
        {
            if (x%i == 0 || x%2 == 0)
            {
                return false;
            }
        }
    }
    return true;
    
}

long unsigned int findThe10001Prime()
{
    vector <long unsigned int> out;
    out.push_back(2);
    int x = 3;
    while (out.size()<10001)
    {
        if (isPrime(x))
        {
            out.push_back(x);
        }
        
        x = x +2;
    }
    return out.back();
    
}
int main()
{
    cout << findThe10001Prime() << endl;
    return 0;
}
