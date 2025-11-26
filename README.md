# C++ Histogram Library

A lightweight C++ implementation of a histogram data structure capable of loading integer values from text files, computing frequency distributions, and generating common statistical metrics. A demonstration program (`main.cpp`) is included to showcase usage.

---

## Features

- Load integer values from a file into a fixed-size histogram  
- Compute key statistics:
  - Minimum and maximum value with nonzero count  
  - Mode  
  - Median  
  - Mean  
  - Variance  
  - Total number of values  
- Operator overloads for intuitive use:
  - `operator[]` — access frequency of a value  
  - `operator+=` — merge histograms  
  - `operator<<` — formatted textual output  
- Implemented using only the C++ standard library

---

## Project Structure

├── main.cpp # Demonstration program
├── histogram.h # Class declaration
├── histogram.cpp # Class implementation
├── data.txt # Example dataset
└── data2.txt # Additional dataset

---

## Building

Compile with any C++11-compatible compiler:

```bash
g++ main.cpp histogram.cpp -o histogram

Run the program:
./histogram
Ensure the data files are located in the same directory as the executable.

---

## Usage Example

Histogram h("data.txt");
cout << "Mean: " << h.mean() << endl;
cout << "Median: " << h.median() << endl;
cout << h << endl;

Histogram w("data2.txt");
h += w; 
