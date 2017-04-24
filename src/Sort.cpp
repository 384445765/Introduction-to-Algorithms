/*
 * Sort.cpp
 *
 *  Created on: 2017年4月24日
 *      Author: xiaoquan
 */

#include "Sort.h"


Sort::Sort() {
	// TODO Auto-generated constructor stub

}

Sort::~Sort() {
	// TODO Auto-generated destructor stub
}

void Sort::InsertSort(vector<int> &A){
	for(unsigned int i = 1;i < A.size();i++){
		int key = A[i];
		int j = i -1;
		while(j >= 0 && A[j] > key){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
	}
}


void Sort::QucikSort(vector<int> &A,int q,int r){
	if(q < r){
		int x = A[r];//选取主元
		int p = q - 1;//记录主元位置(主元素最后所在位置的前一个)
		for(int i = q;i < r;i++){
			if(A[i] < x){
				p++;
				swap(A[p],A[i]);
			}
		}
		swap(A[++p],A[r]);

		QucikSort(A,q,p-1);
		QucikSort(A,p+1,r);
	}
}

void Sort::RandomQucikSort(vector<int> &A,int q,int r){
	if(q < r){

		swap(A[rand()%(r - q + 1)+q],A[r]);//随机产生
		int x = A[r];//选取主元
		int p = q - 1;//记录主元位置(主元素最后所在位置的前一个)
		for(int i = q;i < r;i++){
			if(A[i] < x){
				p++;
				swap(A[p],A[i]);
			}
		}

		swap(A[++p],A[r]);

		RandomQucikSort(A,q,p-1);
		RandomQucikSort(A,p+1,r);
	}
}


void Sort::CountSort(vector<int> &A,vector<int> &B,int k){
	vector<int> C(k+1,0);//存储数组A中比数A[i]小的个数(只用下标1-k的位置)
	for(unsigned int i = 0;i < A.size();i++)
		C[A[i]]++;
	for(int i = 1;i < k+1;i++)
		C[i] += C[i-1];
	B.resize(A.size(),0);
	for(unsigned int i = 0;i < A.size();i++){
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}
}

