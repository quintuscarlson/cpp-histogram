# Histogram Program (C++)

## Overview
This project implements a simple histogram data structure that reads integer values from a text file and counts the frequency of each value. The main program demonstrates how to load data, print histogram statistics, and combine two histograms using operator overloading.

## Features
- Reads integers from one or more input files
- Counts occurrences of each value
- Computes common statistics:
  - Minimum value with nonzero count
  - Maximum value with nonzero count
  - Mode 
  - Median value
  - Mean and variance
  - Total number of values
- Supports:
  - operator[] to get frequency of a value
  - operator+= to merge two histograms
  - operator<< to print a formatted histogram

## How It Works
1. The program reads integers from a file.
2. Each valid number increments the corresponding frequency counter.
3. Statistics are computed by scanning the frequency array and, when needed, expanding counts into an ordered list for median calculation.
4. The main program outputs the statistics, prints the histogram, and demonstrates histogram merging.

## File Requirements
Provide a text file containing integers separated by newlines.   
**Example:**  
1   
3   
3   
5   
9   
2   
2   
1   
4   
7   
9   
9   
3  

## How To Run
**Compile with:**
g++ main.cpp histogram.cpp -o histogram  
**Run with:**
./histogram

## Example Output
Size: 14  
Min: 1  
Max: 9  
Mode: 3  
Median: 3  
Mean: 4.14  
Variance: 6.62  
1: **  
2: **  
3: ***  
4: *  
5: *  
7: *  
9: ***  

## Project Structure
- main.cpp — demonstration program
- histogram.h — class declaration
- histogram.cpp — implementation
- data.txt — sample input file

## Skills Demonstrated
- File I/O
- Array-based counting
- Basic statistics
- Operator overloading
- Encapsulation and class design

## Notes on Originality
This project was based on an assignment with a starter skeleton provided by the instructor. The implementation of the histogram logic, statistics, and operator behavior reflects my work using that structure. This README does not claim exclusive authorship over the original skeleton, only over the work I added.
