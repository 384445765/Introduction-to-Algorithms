/*
 * graph.h
 *
 *  Created on: 2017��6��25��
 *      Author: xiaoquan
 */

#ifndef GRAPH_H_
#define GRAPH_H_

#include<vector>

using namespace std;

enum Color{
	WHITE,
	GRAY,
	BLACK
};

struct Node{
	Color color;
	int d;//�������ʱ��ʱ��
	int pre;
	int f;//����������
	Node():color(WHITE),d(0),pre(0),f(0){}
};//����ڵ�

struct Edge{
	int u;
	int v;
	int w;
	Edge():u(0),v(0),w(0){}
	Edge(int start,int end,int weight = 0):u(start),v(end),w(weight){}
};



class Graph{
private:
	vector<Node> V;
	vector<Edge> E;
	vector<vector<Edge> >Adj;
public:
	int time;//���������ȣ�������¼ʱ���

	Graph(int v_num,int e_num);

	void addEdge(int u,int v,int w = 0);
	void BFS(int s);
	void Print_Path(int s,int v);

	void DFS();
	void DFS_Visit(int u);
};

#endif /* GRAPH_H_ */
