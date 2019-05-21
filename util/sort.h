#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void swap(int *xp, int *yp);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void merge(int arr[], int start,int mid,int end);
void mergeSort(int arr[],int start, int end);
void printArray(int arr[], int size);
void mainDummy_sort();