/*
 * main.cpp
 *
 *  Created on: 2017Äê4ÔÂ24ÈÕ
 *      Author: xiaoquan
 */

#include<iostream>
#include"Sort.h"

void PrintVec(vector<int> _A);

int main(){
	Sort s;
	int A1[8] = {2,8,7,8,3,5,2,4};

	vector<int> A(&A1[0],&A1[8]);
	PrintVec(A);
	s.BubbleSort(A);
//	s.MergeSort(A,0,7);
//	s.InsertSort(A);
//	s.QucikSort(A,0,7);
//	s.RandomQucikSort(A,0,7);
//	vector<int> B;
//	s.CountSort(A,B,8);
//	PrintVec(B);
	PrintVec(A);

}


void PrintVec(vector<int> _A){
	for(unsigned int i = 0;i < _A.size();i++){
		cout << _A[i] << ", ";
	}
	cout << endl;
}
