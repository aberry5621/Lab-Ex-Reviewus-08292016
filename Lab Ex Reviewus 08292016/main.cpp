//
//  main.cpp
//  Lab Ex Reviewus 08292016
//
//  Created by ax on 10/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//


# define prog 2

#if(prog == 1)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Future Investment Value \n";
    
    // Initialize data storage
    double i = 0.0, apr = 0.0;
    int y = 0.0;
    double fiv = 0.0;
    
    // Input
    cout << "Enter the investment amount: ";
    cin >> i;
    cout << "Enter the interest rate percentage: ";
    cin >> apr;
    cout << "Enter the number of years: ";
    cin >> y;
    
    // Processing
    fiv = i * pow((1 + ((apr/100) / 12.0)),(y * 12));
    
    // Output
    cout << "Accumulated value is $" << fiv << endl;
    
    
    return 0;
}

#elif(prog == 2)

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout << "The Sum Of All Digits \n";
    
    // Initialize data storage
    int input = 0, sum = 0;
    
    // Input
    cout << "Enter a digit between 0 - 1000: ";
    cin >> input;
    
    // Processing
    sum += input % 10;
    input = input / 10;
    sum += input % 10;
    input = input / 10;
    sum += input % 10;
    input = input / 10;
    
    // Output
    cout << "SUM: " << sum << endl;
    
    return 0;
}

#endif