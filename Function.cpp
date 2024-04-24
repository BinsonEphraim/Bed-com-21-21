#include<iostream>
using namespace std;
// Function that calculate area of square
int Square(int side){
    int area = side * side;
    cout << "The area os square is " << area;}
 // Function that calculate  area of Rectangle
    int Rectangle(int length, int width){
        int area = length * width;
        cout << "The area of Rectangle is " << area;

    }
int Triangle(int base, int height){
    double area = (base * height)/2;
    cout <<" The area of tringle is " << area;
}

int main(){
    int choince;
    cout << " Please select the area of shape you want to calculate" << " \n" << "1.Square" << " \n" 
    << "2.Rectangle" << "\n" << "3.Triangle" <<"\n" << "4.quet program" << "\n" <<"\n"
    << "Enter Selection ";
     cin >> choince;
     if(choince == 1){
        
        cout<< " enter length of side ";
        int  length;
        cin >> length;
        Square(length);

     } else if( choince == 2){
        int length,width;
        cout<< " enter length and width ";
        cin >> length >> width;
        Rectangle(length,width);

     } else if (choince== 3){
        cout << " enter base and height ";
        int base,height;
        cin >> base >> height;
        Triangle(base,height);

        
     } else if( choince == 4){
        exit;
     } else{ cout  << " you have entered invalid input please enter valid input";
           cin >> choince;}
        
    while (choince > 4){
        cout  << " you have entered invalid input please enter valid input";
        cin >> choince;


        
        
        
    
        
     }
}
