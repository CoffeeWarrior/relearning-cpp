#include <iostream>

using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius){
    return pi*radius*radius;
}

void area_circle(){
    double radius{0};
    cout << "\nEnter the radius of a circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_volue_cylinder(double radius, double height){
    return calc_area_circle(radius) * height;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the  of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with height " << height << " and radius " << radius << " is " << calc_volue_cylinder(radius, height) << endl;
}

int main(){

    area_circle();
    volume_cylinder();
    return 0;
}