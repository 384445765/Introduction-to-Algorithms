/*
 * Sort.h
 *
 *  Created on: 2017��4��24��
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
	//��������
	void InsertSort(vector<int> &A);
	//�鲢����
	void MergeSort(vector<int> & A,int p,int r);
	void Merge(vector<int> &A,int p,int q,int r);

	//����
	void QucikSort(vector<int> &A,int q,int r);
	//�������
	void RandomQucikSort(vector<int> &A,int q,int r);
	//��������
	void CountSort(vector<int> &A,vector<int> &B,int k);
	//ð������
	void BubbleSort(vector<int> & A);

	virtual ~Sort();
};



#endif /* SORT_H_ */
