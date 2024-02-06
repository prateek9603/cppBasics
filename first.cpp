#include<bits/stdc++.h>
using namespace std;

// --------------- boiler plate
// int main() {
    
//     return 0;
// }



// --------------- First Program

// int main() {
//     std::cout << "MY FIRST C++ PROGRAM COMPLILLED SUCCESSFULLY";
//     return 0;
// }

// --------------- adding 2 integer

// int main() {
//     int a ,b,sum;
//     cout<<"Enter the first number : ";
//     cin>>a;
//     cout<<"Enter the second number : ";
//     cin>>b;
//     sum = a+b ;
//     cout<<"sum of "<<a<<" and "<<b<<" is "<<sum;
//     return 0;
// }

//  --------------- average of 2 integer

// int main(){
//     int a,b, avg ; 
//     cout<<"enter first number:"<<endl ;
//     cin>>a ;
//     cout<<"enter second number:"<<endl;
//     cin>>b;
//     avg = (a + b)/2.0;
//     cout<<"Average of integer number "<<a<<" and "<<b<<" is = "<<avg;

//     return(0);
// }

// ---------------area of circle

// int main(){
//     float r, area ;
//     const float  pi = 3.14;
//     cout << "Enter radius: ";
//     cin >> r;
//     area = pi * r * r ;
//     cout<<"Area of circle of the given radius is  = "<<area;
//     return 0;
// }

// --------------- temperature  from  Fahrenheit  to  Celsius    [C=(F-32)*5/9]

// int main(){
//     float F,C ;
//     cout<<"enter temprature in  Fahrenheit= ";
//     cin>>F;
//     C=(F-32)*5/9;
//     cout<<"Temperature in Celsius="<<C<<endl;

//     cout<<"enter temprature in  Celisius= ";
//     cin >> C;
//     F=C*9/5+32;
//     cout<<"Temperature in Fahrenite= "<<F;
    
//     return 0;
// }

// ---------------convert  time  from  hours,  minutes,  seconds  into  total seconds

// int main(){
//     int  hrs, mins, secs ,total_seconds;
//     cout<<"enter totat hours";
//     cin>>hrs;
//     cout<<"enter totat minutes";
//     cin>>mins;
//     cout<<"enter totat seconds";
//     cin>>secs;

//     total_seconds = hrs*3600 + mins*60 + secs;

//     cout<<"Toatal seconds are "<<total_seconds;
//      return 0;
// }

//  -------------------- Swap 2 numbers using 3rd variable
// int main(){
//     int a,b,t;
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;

//     cout<<"a = "<<a<<" b = "<<b<<endl;
//     t=a;
//     a=b;
//     b=t;
//     cout << "The swapped numbers are : a = "<<a<<" and b = "<<b;
//     return 0;
// }

// -------------------- Swap 2 numbers without using 3rd variable;
// int main(){
//     int a,b;
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;

//     cout<<"a = "<<a<<" b = "<<b<<endl;

//     a = a+b;
//     b  = a-b;
//     a = a-b;

//     cout << "The swapped numbers are : a = "<<a<<" and b = "<<b;
//     return 0;
// }

// --------------------Swap 3 numbers using 4th variable

// int main(){
//     int a,b,c,t;
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;
//     cout << "Enter third number: ";
//     cin >> c;

//     cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

//     t=a;
//     a=b;
//     b=c;
//     c=t;

//     cout << "The swapped numbers are : a = "<<a<<", b = "<<b<<" and c = "<<c;
//     return 0;
// }

// --------------------Swap 3 numbers without 4th variable

// int main(){
//     int a,b,c;
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;
//     cout << "Enter third number: ";
//     cin >> c;

//     cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

//     a=a+b+c;
//     b=a-b-c;
//     c=a-b-c;
//     a=a-b-c;
    
//      cout << "The swapped numbers are : a = "<<a<<", b = "<<b<<" and c = "<<c;
//     return 0;
// }

// --------------Swap 2 numbers in a single line.

// int main(){
//     int a,b;
//     cout<<"Enter 2 numbers :"<<endl;
//     cin>>a>>b;
    
//     swap(a,b);
//     cout << "The swapped numbers are : a = "<<a<<" and b = "<<b;

//     return 0;
// }

// --------------remainder of two numbers

// int main(){
//     int a,b;
//     float rem;

//     cout<<"enter 2 integer numbers : "<<endl;
//     cin>>a>>b;
//     rem = float(a%b);
//     cout<<"Remainder = "<<rem;
//     return 0;
// }

// --------------remainder  of  two  numbers  without  modulus operator

// int main(){
//     int a , b;
//     cout<<"enter dividend : "<<endl;
//     cin>>a;
//     cout<<"enter divisor : "<<endl;
//     cin>>b;

//     while(a>=b){
//         a -= b;
//     }
        
//     cout<<"Remainder = "<<a ;

//     return 0;
// }

// ---------------sum of digits of a 3 digit number

// int main(){
//     int num;
//     cout << "Enter the three digit number: ";
//     cin>>num;
//     int sum=0;
//     int a = num % 10;
//     int b = (num / 10) % 10;
//     int c = num / 100;

//     sum = a+b+c;
//     cout<<sum;
//     return 0;
// }

// -------------total seconds into hours, minutes and seconds

// int main(){
//     int ts ;
//     cout<<"enter total Seconds : "<<endl;

//     cin>>ts;

//     int hrs = (ts/3600);
//     ts -= hrs*3600;
//     int mins = (ts/60);
//     ts -= mins * 60;

//     cout<<hrs<<":"<<mins<<":"<<ts<<endl;

//     return 0;
// }

// ------------denominations of a given rupees

// int main(){
//     int rs;
    
//     cout<<"Enter amount to know indian currency denominations : "<<endl;
//     cin>>rs;

//     int fiveh = 0;
//     while(rs>=500){
//       rs -= 500;
//       fiveh++;
//     }

//     int twoh = 0;
//     while(rs>=200){
//       rs -= 200;
//       twoh++;
//     }
//     int oh = 0;
//     while(rs>=100){
//       rs -= 100;
//       oh++;
//     }
//     int fifty = 0;
//     while(rs>=50){
//       rs -= 50;
//       fifty++;
//     }
//     int twenty = 0;
//     while(rs>=20){
//       rs -= 20;
//       twenty++;
//     }
//     int ten = 0;
//     while(rs>=10){
//       rs -= 10;
//       ten++;
//     }
//     int five = 0;
//     while(rs>=5){
//       rs -= 5;
//       five++;
//     }
//     int two = 0;
//     while(rs>=2){
//       rs -= 2;
//       two++;
//     }
//     int one = 0;
//     while(rs>=1){
//       rs -= 1;
//       one++;
//     }

//     cout<<"Indian currency denominations for following amount are: "<<endl;
//     cout<<"500 = "<<fiveh<<" ; 200 = "<<twoh<<" ; 100 = "<<oh<<" ; 50 = "<<fifty<<" ; 20 = "<<twenty<<" ; 10 = "<<ten<<" ; 5 = "<<five<<" ; 2 = "<<two<<" ; 1 = "<<one<<endl;

       

//       return 0;
// }

// ---------------------program  to  merge  three  number.

int main(){
    int a,b,c;
    cout<<"Enter  first no : "<<endl;
    cin>>a;
    cout<<"Enter  second no : "<<endl;
    cin>>b;
    cout<<"Enter  third no : "<<endl;
    cin>>c;

    cout<< 100*a + 10*b + c;
}