#pragma once
//FunctionsSeparation
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------------------------\n"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>extern void Print(const T arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(const T arr[], const int n);