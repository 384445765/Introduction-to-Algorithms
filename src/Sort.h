/*
 * Sort.h
 *
 *  Created on: 2017年4月24日
 *      Author: xiaoquan
 */

#ifndef SORT_H_
#define SORT_H_

#include<vector>
#include<cstdlib>
#include<climits>
using namespace std;
class Sort {
public:
	Sort();
	//插入排序
	void InsertSort(vector<int> &A);
	//归并排序
	void MergeSort(vector<int> & A,int p,int r);
	void Merge(vector<int> &A,int p,int q,int r);

	//快排
	void QucikSort(vector<int> &A,int q,int r);
	//随机快排
	void RandomQucikSort(vector<int> &A,int q,int r);
	//计数排序
	void CountSort(vector<int> &A,vector<int> &B,int k);
	//冒泡排序
	void BubbleSort(vector<int> & A);

	virtual ~Sort();
};



#endif /* SORT_H_ */
