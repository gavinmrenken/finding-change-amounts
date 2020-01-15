//  change.cpp
//  Created by Gavin Renken on 10/9/19.
//  Copyright © 2019 Gavin Renken. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // initializing 3 main variables to be used throughout the program
    int num_dollars = 0 ;
    double num_cents = 0 ; // created as double to store decimals
    double grand_total = 0 ;
    
    cout << "How many toonies do you have?\n" ;
    int num_toonies = 0 ; // declaring a integer type for the amount of toonies the user has
    cin >> num_toonies ;
    grand_total += (num_toonies * 2.00) ;  // adding the amount of toonies reported, multiplying it by its monetary value, and adding it into the grand total
    
    // repeating above process but for loonies valued at $1
    cout << "How many loonies do you have?\n" ;
    int num_loonies = 0 ;
    cin >> num_loonies ;
    grand_total += (num_loonies * 1.00) ;
    
    // repeating above process but for fiftycent pieces
    cout << "How many fifty cent pieces do you have?\n" ;
    int num_fiftycent = 0 ;
    cin >> num_fiftycent ;
    grand_total += (num_fiftycent * 0.50) ;
    
    // repeating above process for quarters
    cout << "How many quarters do you have?\n" ;
    int num_quarters = 0 ;
    cin >> num_quarters ;
    grand_total += (num_quarters * 0.25) ;
    
    // repeating above process for dimes
    cout << "How many dimes do you have?\n" ;
    int num_dimes = 0;
    cin >> num_dimes ;
    grand_total += (num_dimes * 0.10) ;
    
    // repeating above process for nickels
    cout <<  "How many nickels do you have?\n" ;
    int num_nickels = 0;
    cin >> num_nickels ;
    grand_total += (num_nickels * 0.05) ;
    
    // preparing grand_total to be reported out in cout
    num_dollars = grand_total / 1.00 ; // finding amount of dollars in the grand_total and storing it in a variable
    num_cents = (grand_total - num_dollars) * 100 ; // taking the remainder in cents and  storing it in a variable in integer form
    
    // reports final results in dollars and cents
    cout << "The grand total is " << num_dollars << " dollars" << " and " << num_cents << " cents. Have a nice day, eh!\n" ;
    
    return 0;
}
