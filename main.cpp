// This program tests all of the functions in the Histogram class and outputs the results to the console
#include <iostream>
#include "histogram.h"
using namespace std;
int main() {

//initalizes two histogram objects
Histogram h("data.txt");
Histogram w("data2.txt");

//tests the size() function
cout<< "Size: " << h.size()<<endl;

//tests the min() function
cout<< "Min: " << h.min()<<endl;

//tests the max() function
cout<< "Max: " << h.max()<<endl;

//tests the mode() function
cout<< "Mode: " << h.mode()<<endl;

//tests the median() function
cout<< "Median: "<< h.median()<<endl;

//tests the mean() function
cout<< "Mean: " <<h.mean()<<endl;

//tests the variance() function
cout<< "Variance: "<<h.variance()<<endl;

//tests the overloaded []
cout<< "[] Operator test: "<<h[2] << endl;

//tests the overloaded non-member operator <<
cout << "Here is the complete Histogram: \n"<<h<<endl;

//tests the overloaded += operator by adding two Histogram objects and then outputing it to the console
h+=w;
cout<< "+= Operator test: \n"<< h<<endl; 
return 0;
}
