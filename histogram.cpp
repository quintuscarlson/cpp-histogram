//this code defines all of the functions that are declared in the header file
#include "histogram.h"


//initializes a histogram object using data retrieved from a text file
Histogram::Histogram(string filename) {
//initializes all values in the counts array to 0
for (int j = 0; j < MAX+1; j++){
   counts[j] = 0;
}

//reads the file and modifys the counts array according to how many of each value were found in the txt file
for (int k = 0; k < MAX+1; k++){
int total = 0; // var to store total
ifstream in(filename); // open a file called data.txt as an input stream in
int val; // var to store one int at a time
while (in >> val) { // read int tokens from stream 1-by-1 until end of file
	if (val == k){
total += 1; // add value of each token to total
}}
in.close(); // close file
counts[k] = total;
}
}

//initializes a histogram object with no parameter and initializes all indexes of counts to 0
Histogram::Histogram(){
for (int j = 0; j < MAX+1; j++){
   counts[j] = 0;
}}

//checks how many elements are in the counts array and returns the result
size_t Histogram::size()const{
	size_t total = 0;

	//traverses the array and adds each count to the total
	for (int j = 0; j < MAX+1; j++){
		total+=counts[j];
	}

	//returns total of all counts
	return total;
}


//function traverses the array and outputs the smallest value with a positive count
size_t Histogram::min()const{
	size_t result = MAX+1;

//traverses the counts array and checks if the count isnt 0 and is less than the current min, if it is it replaces the current min
	for (int j = 0; j < MAX+1; j++){
		if (counts[j] != 0 && j < result){
			result = j;
		}
	}

	return result;
}


//function traverses the array and returns the largest value with positive count
size_t Histogram::max()const{
	size_t result = 0;

//traverses the array and checks if the current value is greater than the current max, if so it replaces the current max
	for (int j = 0; j < MAX+1; j++){
		if (counts[j] != 0 && j > result){
			result = j;
		}}

		//if the max was 0 than it replaces it with MAX+1
    if (result == 0){
		result = MAX + 1;
	}
	return result;
}

//this function returns the value with the highest count
size_t Histogram::mode()const{
	size_t result = 0;

//this loop traverses the array and keeps track of the value with the highest count
	for (int j = 0; j < MAX + 1; j++){
		if (counts[j] > counts[result]){
			result = j;
		}
	}

	return result;
}

//this function returns the average of the middle values
size_t Histogram::median()const{

	//creates new array that stores all of the non-zero values
	size_t resultA[size()];
	size_t median;
	int i = 0;

//this loop goes through the counts array and copys all non zero values into the new array
	for(int j = 0; j <MAX+1; j++){
		if(counts[j] != 0){
			int c = counts[j];

			while (c != 0){
				resultA[i++] = j;
				c--;
			}
		}
	}
//if the size of counts is even this takes the average of the values between the two middle values in the new array
	if(size()%2 == 0){
		median = (resultA[size()/2] +resultA[size()/2-1])/2;
	}
//if the size of counts is odd this code selects the middle value in the new array
	else{
		median = resultA[size()/2];
	}
	return median;
}

//this function calculates the mean by adding up all the values and dividing by the size
double Histogram::mean()const{
	double total = 0.0;

//this loop calculates the total by multiplying each count by its value
	for(int j = 0; j < MAX+1; j++){
		total+=counts[j]*j;
	}
//this calculates the mean by dividing the total by the size
	double result = total/size();

	return result;
}

//this function calculates the variance of counts 
double Histogram::variance()const{
	double total = 0.0;

//this loop adds up all of the squares of the difference from the mean for all values
	for(int j = 0; j < MAX+1; j++){
		total+= counts[j] * (j-mean()) * (j-mean());
	}

//this calculates the result by dividing the result from the loop by the size
	double result = total/size();

	return result;
}


//this function overloads the [] operator as a member function
size_t Histogram::operator [](size_t val)const{

//outputs the count at the value entered in the parameter
size_t result = counts[val];
return result;
}


//this function overloads the += operator as a member function
void Histogram::operator +=(const Histogram& rhs){

	//this loops through every index and adds the counts from the parameter array to the current object array
	for (int j = 0; j < MAX+1; j++){
		counts[j]+= rhs[j];
	}}


//this function overloads the << operator as a non-member function
ostream& operator <<(ostream& out, const Histogram& h){

//this loops through the values from min to max and outputs each value and a semicolon
	for(int j = h.min(); j < h.max()+1; j++){
		cout<<j<<": ";
		int c = h[j];

//this adds the nessecary amount of count by adding a star until the count = 0 decrementing by 1 each time through the loop
		while(c != 0){
			cout<<"*";
			c--;
		}
		cout<<endl;
	}
	return out;
}






