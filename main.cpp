// Name: Peter Choi
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>

int main()

{

// Declare variables.

    int total_days,
        hotel_string_size,
        meal_string_size,
        total_string_size;
    
    double hotel_expenses,
           meal_expenses,
           total_expenses;

    std::string trip_location, 
                location_output,
                dollar_sign = "$",
                hotel_amount,
                meal_amount,
                total_amount,
                hotel_output,
                meal_output,
                total_output;                ;    
    
// Request inputs from user.
    std::cout << "Business Trip Tracker for MINHEE71 Corp.\n";
    std::cout << "Where was the location of the trip? ";
    std::getline(std::cin, trip_location);
    std::cout << "Total days you spent on the trip? ";
    std::cin >> total_days;
    std::cout << "How much were your hotel expenses? $";
    std::cin >> hotel_expenses;
    std::cout << "How much were your meal expenses? $";
    std::cin >> meal_expenses;
    std::cout << std::endl << std::endl;
    
    
//Background work.
    
    //Total of hotel and meal meal_expenses.
    total_expenses = hotel_expenses + meal_expenses;   
    
    //Concatenate "$" to *_amount strings with to_strings function on *_expenses variables.
    hotel_amount = dollar_sign + std::to_string(hotel_expenses);
    meal_amount = dollar_sign + std::to_string(meal_expenses);
    total_amount = dollar_sign + std::to_string(total_expenses);
    
    //*_amount strings contained 6 digits after decimal point. This removes the last 4 digits. 
    hotel_string_size = hotel_amount.length() - 4; 
    meal_string_size = meal_amount.length() - 4;
    total_string_size = total_amount.length() - 4;
    
    //Limit the output displays.
    location_output = trip_location.substr (0,20);
    hotel_output = hotel_amount.substr (0,hotel_string_size);
    meal_output = meal_amount.substr (0,meal_string_size);
    total_output = total_amount.substr (0,total_string_size);
    
// Display results for user.
      std::cout << "Here is a summary of your expenses for your business trip.\n";
      std::cout << std::endl;
      
      // Header rows.
      std::cout << std::setw(20) << std::left << "Location";
      std::cout << std::setw(12) << std::right << "Totals Days";
      std::cout << std::setw(15) << std::right << "Hotel Expenses";
      std::cout << std::setw(14) << std::right << "Meal Expenses";
      std::cout << std::setw(15) << std::right << "Total Expenses";
      std::cout << std::endl;
      
      std::cout << std::setw(20) << std::left << "--------------------"; //for Location
      std::cout << std::setw(12) << std::right << "-----------"; //for Total Days
      std::cout << std::setw(15) << std::right << "--------------"; //for Hotel Expenses
      std::cout << std::setw(14) << std::right << "-------------"; //for Meal Expenses
      std::cout << std::setw(15) << std::right << "--------------"; //for Total Expenses
      std::cout << std::endl;
    
      // Data output row. 
      std::cout << std::setw(20) << std::left << location_output; 
      std::cout << std::setw(12) << std::right << total_days;
      std::cout << std::setw(15) << std::right << hotel_output; 
      std::cout << std::setw(14) << std::right << meal_output; 
      std::cout << std::setw(15) << std::right << total_output; 

      std::cout << std::endl;

  return 0;
}
