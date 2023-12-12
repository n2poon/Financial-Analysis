#include <iostream>
#include <cstdlib>
using namespace std;

int main(const int argc, const char* const argv[])
{
    float d = atof(argv[1]); //desired total
    float p = atof(argv[2]); //monthly deposit
    float i = atof(argv[3]); //percent yearly int rate

    float total=0; //total in bank acc
    int monthsIn=0; //num of months that money has been in acc
    int years=0; //num of years accumulating interest
    int totmonths=0; //num of months accumulating interest

    while (total<d)
    {
        total += (total*i/12/100);
        total += p;
        monthsIn++;
    }

    years = monthsIn/12;
    totmonths = monthsIn%12;

    cout<< "Desired Savings: $" << d<<endl;
    cout<< "Monthly Payment: $"<< p<<endl;
    cout<< "Percent Interest Rate: %"<< i<<endl;

    cout<<"Time to reach desired savings: " << years << " years and " << totmonths << " months"<<endl;
    cout<<"Amount in account: $" << total;
    return 0;r

}
