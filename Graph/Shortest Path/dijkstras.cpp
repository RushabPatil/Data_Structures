#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>

using namespace std;



/**
 * @brief Runs Lazy Dijkstra's algorithm on the given graph.
 * 
 * @param adj - Adjacency list of the graph.
 * @param numNodes - Number of nodes in the graph.
 * @param start - Node to start from.
 * @return vector<int> - The shortest path from start to all other nodes.
 */
vector<int> lazyDijkstra(vector<vector<int>> adj, int numNodes, int start)
{
    vector<bool> visited(numNodes, false);
    vector<int> dist(numNodes, INT_MAX);

    dist[start] = 0;
    


}
