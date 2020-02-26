#include <iostream>
#include <iomanip>

using namespace std;

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);     //when using default values, only declare in either prototype or definition

int main(){
    double cost{0};
    cost = calc_cost(100.0, 0.08, 4.25);

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(100.0, .008);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(200.0);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost();
    return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping){   //when using default values, only declare in either prototype or definition
    return (base_cost + (base_cost*tax_rate) + shipping);
}