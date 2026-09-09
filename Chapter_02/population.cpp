// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.


#include <iostream>

int main() {
    // Starting population base provided in the assignment
    long long population = 312032486; 
    
    // Calculate total seconds in a year (365 days)
    long long seconds_in_year = 365 * 24 * 60 * 60;

    // Calculate rates per year based on the assumptions
    double births_per_year = (double)seconds_in_year / 7.0;
    double deaths_per_year = (double)seconds_in_year / 13.0;
    double immigrants_per_year = (double)seconds_in_year / 45.0;

    // Net growth or change in one single year
    double net_growth_per_year = births_per_year - deaths_per_year + immigrants_per_year;

    std::cout << "Initial population: " << population << std::endl;

    // Project and display the population for each of the next 5 years
    for (int i = 1; i <= 5; ++i) {
        population += net_growth_per_year;
        std::cout << "Year " << i << " population projection: " << population << std::endl;
    }

    return 0;
}