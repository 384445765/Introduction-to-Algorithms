/*
 * Sort.h
 *
 *  Created on: 2017Äê4ÔÂ24ÈÕ
 *      Author: xiaoquan
 */

#ifndef SORT_H_
#define SORT_H_

#include<vector>
#include<cstdlib>
using namespace std;
class Sort {
public:
	Sort();

	void InsertSort(vector<int> &A);
	void QucikSort(vector<int> &A,int q,int r);

	void RandomQucikSort(vector<int> &A,int q,int r);

	void CountSort(vector<int> &A,vector<int> &B,int k);

	virtual ~Sort();
};



#endif /* SORT_H_ */
