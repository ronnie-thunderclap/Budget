#include<iostream>

using namespace std;

int main()
{
  double paycheck = 0.00;
  double Car_payment = 242.00;
  double Geico = 120.00;
  double Spectrum = 50.00;
  double Rent = 1250.00;
  double CC_BofA = 100.00;
  double Discover = 100.00;
  double CC_APPL =  100.00;
  double Anytime_Fitness = 40.00; 
  double AMZ_Prime = 15.00;
  double Spotify = 10.00;
  double Netflix = 15.00;
  double FPL =100.00;
  double total_payments = 0.00;
  double total_income = 0.00;
  double total_expenses = 0.00;
  double total_savings = 0.00;
  bool paycheck_status = true; 

  cout << "Enter your paycheck amount: " << endl;  
  cin >> paycheck; 

  if (paycheck <= 1500.00)
  {
    paycheck_status = false;
    cout << " You are not making a lot of money! " << endl;

        // Update payment values by dividing them by two
        Car_payment /= 2;
        Geico /= 2;
        Spectrum /= 2;
        Rent /= 2;
        CC_BofA /= 2;
        Discover /= 2;
        CC_APPL /= 2;
        Anytime_Fitness /= 2;
        AMZ_Prime /= 2;
        Spotify /= 2;
        Netflix /= 2;
        FPL /= 2;
    
        // Display updated payment values
        cout << "Updated payments after dividing by two:" << endl;
        cout << "Car payment: " << Car_payment << endl;
        cout << "Geico: " << Geico << endl;
        cout << "Spectrum: " << Spectrum << endl;
        cout << "Rent: " << Rent << endl;
        cout << "CC_BofA: " << CC_BofA << endl;
        cout << "Discover: " << Discover << endl;
        cout << "CC_APPL: " << CC_APPL << endl;
        cout << "Anytime Fitness: " << Anytime_Fitness << endl;
        cout << "AMZ Prime: " << AMZ_Prime << endl;
        cout << "Spotify: " << Spotify << endl;
        cout << "Netflix: " << Netflix << endl;
        cout << "FPL: " << FPL << endl;

        // Calculate total payments
        double total_payments = Car_payment + Geico + Spectrum + Rent + CC_BofA + Discover + CC_APPL + Anytime_Fitness + AMZ_Prime + Spotify + Netflix + FPL;
        cout << "Total payments (half month/biweekly): " << total_payments << endl;

    
  }

  


    return 0;
}