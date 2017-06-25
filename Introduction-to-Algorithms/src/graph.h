/*
 * graph.h
 *
 *  Created on: 2017年6月25日
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
	int d;//深度优先时是时间
	int pre;
	int f;//针对深度优先
	Node():color(WHITE),d(0),pre(0),f(0){}
};//定义节点

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
	int time;//针对深度优先，用来记录时间戳

	Graph(int v_num,int e_num);

	void addEdge(int u,int v,int w = 0);
	void BFS(int s);
	void Print_Path(int s,int v);

	void DFS();
	void DFS_Visit(int u);
};

#endif /* GRAPH_H_ */
