/*
 * graph.h
 *	��22�� ������ͼ�㷨
 *	�����������
 *	�����������
 *  Created on: 2017��6��25��
 *      Author: xiaoquan
 */

#ifndef GRAPH_H_
#define GRAPH_H_

#include<vector>
#include<queue>
#include<iostream>
#include<cmath>

using namespace std;

enum Color{
	WHITE,
	GRAY,
	BLACK
};

const int inf = 0x3fffffff;
const int NIL = 0;
struct Node{
	Color color;
	int d;//(������ȼ�¼��Դ�ڵ�s���ýڵ�ľ���)(�������ʱ��¼����ʱ��,������������)
	int pre;//��¼ǰһ�ڵ㣨ǰ�̣�
	int f;//���������ȼ�¼����ʱ��,������������
	Node():color(WHITE),d(0),pre(0),f(0){}
};//����ڵ�

struct Edge{
	int u;//���
	int v;//�յ�
	int w;//Ȩ��
	Edge():u(0),v(0),w(0){}
	Edge(int start,int end,int weight = 0):u(start),v(end),w(weight){}
};



class Graph{
private:
	vector<Node> V;//����
	vector<Edge> E;//��
	vector<vector<Edge> >Adj;//�ڽӱ�
public:
	//���������ȣ�������¼ʱ���
	int time;

	//��ʼ��ͼ
	Graph(int v_num,int e_num);

	//���������u->v(w)û��Ȩ�ص�Ĭ��Ϊ1������
	void addEdge(int u,int v,int w = 1);

	//������ȱ���
	void BFS(int s);

	//ȫ���ڵ�������ȱ���
	void DFS();
	//�����ڵ�������ȱ���
	void DFS_Visit(int u);

	//��ӡ�ؼ�·��
	void Print_Path(int s,int v);
};

#endif /* GRAPH_H_ */
