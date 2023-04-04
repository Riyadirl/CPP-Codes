#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int vertices, edges;
    cin >> vertices >> edges;

    vector< int > Graph[vertices];

    for(int i=0; i<edges; i++)
    {
        int from, to; cin >> from >> to;
        Graph[from].push_back(to);
    }

    cout << "**************Graph****************\n";
    for(int i=0; i<vertices; i++)
    {
        cout << i << " --> ";
        for(int j=0; j<Graph[i].size(); j++)
            cout << Graph[i][j] << " ";
        cout << endl;
    }
    cout << "***********************************\n";


    /// Breath First Search

    int visited[vertices] = {0};
    queue< int > Queue;
    int source; cin >> source;

    Queue.push(source);

    while(!Queue.empty())
    {
        int startToVisit = Queue.front();
        Queue.pop();

        if(visited[startToVisit]==1)
            continue;

        for(int i=0; i<Graph[startToVisit].size(); i++)
        {
            int to = Graph[startToVisit][i];

            if(visited[to]==0)
                Queue.push(to);
        }
        visited[startToVisit] = 1;
        cout << startToVisit << " ";
    }
    cout << endl;
    return 0;
}