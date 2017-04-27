/*
 * main.cpp
 *
 *  Created on: 2017Äê4ÔÂ24ÈÕ
 *      Author: xiaoquan
 */

#include<iostream>
#include "Sort.h"

void PrintVec(vector<int> _A);

int main(){
	Sort s;


	vector<int> A = { 2, 8, 6, 1, 3, 5, 4, 7,9,10 };
	PrintVec(A);

	s.HeapSort(A);
//	s.BubbleSort(A);
//	s.MergeSort(A,0,7);
//	s.InsertSort(A);
//	s.QucikSort(A,0,7);
//	s.RandomQucikSort(A,0,7);
//	vector<int> B;
//	s.CountSort(A,B,8);
//	PrintVec(B);
	PrintVec(A);

	cin.get();
	return 0;
}


void PrintVec(vector<int> _A){
	for(unsigned int i = 0;i < _A.size();i++){
		cout << _A[i] << ", ";
	}
	cout << endl;
}
