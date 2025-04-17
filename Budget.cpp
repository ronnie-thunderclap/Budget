#include<iostream>

using namespace std;

int main()
{
  // Fixed Expenses
  double rent = 576.92;
  double bankOfAmerica = 53.08;
  double spectrum = 23.08;
  double discover = 42.00;
  double appleCard = 46.15;
  double geico = 53.08;

  // Goal-Oriented Expenses
  double gbTrip = 143.00;
  double generalSavings = 285.71; // New $4000 goal
  double carLoanMain = 280.58;
  double studentLoanMain = 155.54;

  // Second Income Contributions
  double carLoanSecond = 241.00;
  double studentLoanSecond = 100.00;


  double surplus = 0.00;
  double total_income = 0.00;
  double total_expenses = 0.00;
  double total_savings = 0.00;
  bool status = true; 

  cout << "Enter your paycheck amount: " << endl;  
  cin >> total_income; 

  if (total_income >= 1850.00)
  {
    status = true;
    cout << " You are making a lot of money! Here's what you have to pay this week (biweekly-payment) " << endl;
        // Display updated payment values
    cout << "Rent: $" << rent << endl;
    cout << "Bank of America: $" << bankOfAmerica << endl;  
    cout << "Spectrum: $" << spectrum << endl;
    cout << "Discover: $" << discover << endl;
    cout << "Apple Card: $" << appleCard << endl; 
    cout << "Geico: $" << geico << endl;
    cout << "Car Loan (Main): $" << carLoanMain << endl;
    cout << "Student Loan (Main): $" << studentLoanMain << endl;
    cout << "Car Loan (Second): $" << carLoanSecond << endl;
    cout << "Student Loan (Second): $" << studentLoanSecond << endl;
    cout << "General Savings: $" << generalSavings << endl;
    cout << "GB Trip: $" << gbTrip << endl;
    cout << "Total Income: $" << total_income << endl;

    // Calculate total expenses
    total_expenses = rent + bankOfAmerica + spectrum + discover + appleCard + geico + carLoanMain + studentLoanMain + carLoanSecond + studentLoanSecond + generalSavings + gbTrip;
    cout << "Total Expenses: $" << total_expenses << endl;
    // Calculate surplus
    surplus = total_income - total_expenses;
    cout << "Surplus is: $" << surplus << endl;
    
    // surplus amount decision 
    if (surplus >= 150.00)
    {
      //take half of the surplus and put it aside 
      double Surplus_1 = surplus * .2;
      double Surplus_2 = surplus * .8;
      cout << "You have a surplus of $" << surplus << endl;
      cout << "You can put aside $" << Surplus_2 << " for your savings." << endl;
      cout << "You will use $" << Surplus_1 << "out of the surplus for your expenses." << endl;
      

      // take the a percentage of surplus_1 and add a specific percentage to selected expenses (car, bank of America, discover, student loan, general savings and gb trip)
      double bankOfAmerica_percentage = Surplus_1 * 0.10; // 10% of surplus_1
      double discover_percentage = Surplus_1 * 0.10; // 10% of surplus_1
      double studentLoan_percentage = Surplus_1 * 0.15; // 10% of surplus_1
      double generalSavings_percentage = Surplus_1 * 0.10; // 10% of surplus_1
      double gbTrip_percentage = Surplus_1 * 0.15; // 10% of surplus_1
      double carLoan_percentage = Surplus_1 * 0.40; // 40% of surplus_1

      // print the percentage of surplus_1 and the amount to be added to each expense
      cout << "You will add $" << bankOfAmerica_percentage << " to your Bank of America payment." << endl;
      cout << "You will add $" << discover_percentage << " to your Discover payment." << endl;
      cout << "You will add $" << studentLoan_percentage << " to your Student Loan payment." << endl;
      cout << "You will add $" << generalSavings_percentage << " to your General Savings." << endl; 
      cout << "You will add $" << gbTrip_percentage << " to your GB Trip." << endl;
      cout << "You will add $" << carLoan_percentage << " to your Car Loan payment." << endl;
      // Update the payment values
      bankOfAmerica += bankOfAmerica_percentage;
      discover += discover_percentage;
      studentLoanMain += studentLoan_percentage;
      generalSavings += generalSavings_percentage;
      gbTrip += gbTrip_percentage;
      carLoanMain += carLoan_percentage;
      // Print the updated payment values
      cout << "Updated Bank of America payment: $" << bankOfAmerica << endl;
      cout << "Updated Discover payment: $" << discover << endl;
      cout << "Updated Student Loan payment: $" << studentLoanMain << endl;
      cout << "Updated General Savings: $" << generalSavings << endl;
      cout << "Updated GB Trip: $" << gbTrip << endl;
      cout << "Updated Car Loan payment: $" << carLoanMain << endl; 

        // Calculate total payments  
    }

    //end simulation
}

  


    return 0;
}