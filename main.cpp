//
//  main.cpp
//  21octob
//
//  Created by Say Artyom on 21/10/22.
//

//#include <iostream>
//using namespace std;
//
//float division(float, float);
//
//int main() {
//    float a, b = 0;
//    cin >> a >> b;
//    cout << division(a, b) << endl;
//}
//
//float division(float a, float b) {
//    return a / b;
//}



//#include <iostream>
//using namespace std;
//
//float seconds(float);
//
//int main() {
//    float a = 0;
//    cin >> a;
//    cout << seconds(a) << endl;
//}
//
//float seconds(float a) {
//    return a * 60;
//}


//#include <iostream>
//using namespace std;
//
//bool triangle(float, float, float);
//
//int main() {
//    float a,b,c = 0;
//    cout<<"Sides - ";
//    cin >> a >> b >> c;
//    cout << (triangle(a, b, c) ? "Triangle can be formed with these sides" : "Triangle can not be formed with these sides") << endl;
//
//}
//
//bool triangle(float a,float b,float c) {
//    return (a<c+b || b<a+c || c<b+a) ? true : false;
//}

//
//#include <cctype>
//#include <iostream>
//using namespace std;
//
//char toggle(char);
//int main()
//{
//    char z;
//    cin>>z;
//    ((toggle(z) == 0) ? cout<<"Wrong Input" : cout<<z<<" in uppercase is "<< toggle(z))  << endl;
//}
//char toggle(char z)
//{
//        if(isalpha(z)){
//           z = toupper(z);
//            return z;
//        }
//        else{
//            return 0;
//        }
//}



//#include <iostream>
//using namespace std;
//
//void greet(string , string , int);
//
//int main() {
//    string first, second = "Sevara Abdullaeva";
//    int a = 220059;
//    greet(first,second,a);
//    return 0;
//}
//void greet(string first , string second, int a ) {
//    cout << "Name : " << first << second << endl;
//    cout << "ID : " << a << endl;
//}


//#include<iostream>
//using namespace std;
//int main ()
//{
//    int i = 0;
//    float  arr[7];
//    float sum = 0;
//    cout << "Enter the elements of the array : "<< endl;
//    for (i = 0; i < 7; i++)
//    cin >> arr[i];
//    for (i = 0; i < 7; i++)
//    {
//        sum += arr[i];
//    }
//    cout << "Sum of array elements : " << sum << endl;
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main ()
//{
//    int i = 0;
//    float  arr[10],z;
//
//    cout << "Enter the elements of the array : "<< endl;
//    for (i = 0; i < 10; i++)
//    cin >> arr[i];
//    cout << arr;
//    cout << "What the number : "<< endl;
//    cin>>z;
//    for(i = 0; i < 10; i++){
//        if(arr[i] == z){
//            cout << "The number " << z <<" is in an array" << endl;
//            break;
//        }
//        else{
//            cout << " The number "<< z <<" is not in an array " << endl;
//        }
//    return 0;
//}
//}

#include<iostream>
using namespace std;
int main ()
{
    int i = 0;
    float  arr[5];
    cout << "Enter the elements of the array : "<< endl;
    for (i = 0; i < 5; i++)
    cin >> arr[i];
    for (i = 0; i < 5; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
    cout<<arr[i];
    return 0;
}

