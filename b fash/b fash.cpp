// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
#include<iostream>
#include <list>
#include <fstream>

using namespace std;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V;    // No. of vertices

    // Pointer to an array containing adjacency
    // lists
    list<int>* adj;
public:
    Graph(int V);  // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints BFS traversal from a given source s
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex) {

        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int removeDuplicates(int** arr, int n)
{
    // Return, if array is empty
    // or contains a single element
    if (n == 0 || n == 1)
        return n;

    int** temp = new int*[n];

    // Start traversing elements
    int j = 0;
    for (int i = 0; i < n - 1; i++)

        // If current element is not equal
        // to next element then store that
        // current element
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];

    // Store the last element as whether
    // it is unique or repeated, it hasn't
    // stored previously
    temp[j++] = arr[n - 1];

    // Modify original array
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}

int main() {
    ifstream in("smalltank.in");    
    ofstream out("smalltank.out");
    int n;
    int m;
    in >> n >> m;



    int* o = new int[2 * m];
    int* d = new int[2 * m];
    int* w = new int[m];

    int number[10];
    for (int i = 0; i <= 2 * m; i++) {
        number[i] = o[i];
    }

    for (int i = 0; i < m; i++) {
        in >> o[i] >> d[i] >> w[i];
        o[m + i] = d[i];
        d[m + i] = o[i];
    }

    //ftiaxw to grafo
    Graph g(n + 1);
    for (int i = 0; i < 2 * m; i++) {
        g.addEdge(o[i], d[i]);
    }

    //ektypwnw ton grafo
    for (int i = 1; i <= n; i++) {
        g.BFS(i);
        cout << endl;
    }

    //antigrafw to w sto w2
    int wLength = sizeof(w);
    int* w2 = new int[m];
    for (int i = 0; i < m; i++) {
        w2[i] = w[i];
    }

    //pairnw ta kaysima apo to mikrotero sto megalytero
    int kati = sizeof(w) / sizeof(w[0]);
    quickSort(w, 0, kati - 1);
    //kati = removeDuplicates(w, kati);

    //ektypwnw to w kai w2
    // cout << "w: ";
    // for (int i = 0; i < kati; i++) {
    //     cout << w[i] << " ";
    // }

    // cout << "w2: ";
    // for (int i = 0; i < m; i++) {
    //     cout << w2[i] << " ";
    // }

    //elegxw posa einai ta minimum kaysima pou xreiazomai
    int kollhma;
    bool toPhra = false;
    for (int i = kati - 1; i > -1; i--) {
        int temp = w[i];
        for (int j = 0; j < m; j++) {
            if (temp - w2[j] < 0) {
                cout << "xreiazesai " << temp << " kausima";
                kollhma = j;
                toPhra = true;
                break;
            }
        }
        if (kollhma != 0) {
            break;
        }
    }

    int kollhma1 = o[kollhma];
    int kollhma2 = d[kollhma];

    //pairnw gia paradeigma to 8
    //prepei na brw tis seires tou graphou apo tis opoies yparxei to 2 kai to 5 alla den einai kollhta, meta tha dw poioi arithmoi pairnane anamesa tous kai tha dw ta kaysima ths kathe diadromhs

}