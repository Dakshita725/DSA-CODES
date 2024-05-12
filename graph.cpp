#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class Graph
{
   private:
    vector<string> nodes;
    int **graph;
    int nodeCount;
   public:
    Graph(int maxNode)
    {
        nodeCount=0;
        graph=new int *[maxNode];
        for(int i=0;i<maxNode;i++)
        {
            graph[i]=new int[maxNode];
        }
        for(int i=0;i<maxNode;i++)
        {
            for(int j=0;i<maxNode;j++)
            {
                graph[i][j]=0;
            }
        }
    }
void AddNode(const string& v)
{
    if(find(nodes.begin(),nodes.end(),v)!=nodes.end())
    {
        cout<<"\n"<<v<<" is already present "<<endl;
    }
    else
    {
        nodes.push_back(v);
        nodeCount++;
    }
}
void AddEdge(const string& v1,const string& v2)
{
  int index1=getIndex(v1);
  int index2=getIndex(v2);
  if(index1==-1||index2==-1)
  {
      cout<<"\n one or both index are not present in the graph : \n";
  }
  else
  {
      graph[index1][index2]=1;
      graph[index2][index1]=1;
  }
}
void AddWeightedEdge(const string& v1, const string& v2, int weight)
{
  int index1= getIndex(v1);
  int index2 = getIndex(v2);
   if (index1-1 || index2 -1)
   {
    cout << "One or both vertices are not present in the graph" << endl;
   }
   else
   {
    graph[index1] [index2] = weight;
    graph[index2][index1]= weight; // For undirected graph
   }
}

void deleteNode(const string& v)
{
  int index = getIndex(v);
  if (index == -1)
  {
   cout<<"\n"<<v<<" is not present in the graph" << endl;
  }
  else
  {
     nodes.erase(nodes.begin() + index);
     delete[] graph[index];
     for (int i = index; i < nodeCount-1; ++i)
     {
      graph[1] = graph[1 + 1];
     }
     nodeCount--;
}
}

void printGraph()
{

    for(int i=0;i<nodeCount;i++)
    {
        cout<<nodes[i]<<"\t";
        for(int j=0;j<nodeCount;j++)
        {
            cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }
}
   private:
    int getIndex(const string v)
    {
        vector<string>::iterator it=find(nodes.begin(),nodes.end(),v);
        if(it!=nodes.end())
        {
            return distance(nodes.begin(),it);
        }
        return -1;
    }
};
int main()
{
    Graph obj(10);
    string v1,v2;
    int choice,weight;
    while(1)
    {
        cout<<"1. Add node : \n";
        cout<<"2. Add edge : \n";
        cout<<"3. Add a weighted edge (undirected) : \n";
        cout<<"4. Print Graph : \n";
        cout<<"5. Delete node : \n";
        cout<<"6. Exit : \n";
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<"\n";
        switch(choice)
        {
          case 1:
              cout<<"\nEnter character you want to insert : ";
              cin>>v1;
              obj.AddNode(v1);
              break;
          case 2:
                 cout<<"\nEnter vertex v1 : ";
                 cin>>v1;
                 cout<<"\nEnter vertex v2 : ";
                 cin>>v2;
                 obj.AddEdge(v1,v2);
                 break;
          case 3:
            cout<<"\nEnter vertex v1 : ";
            cin>>v1;
            cout<<"\nEnter vertex v2 : ";
            cin>>v2;
            cout<<"\nEnter weight : ";
            cin>>weight;
               obj.AddWeightedEdge(v1,v2,weight);
               break;
          case 4:
               obj.printGraph();
               break;
          case 5:
              cout<<"\n Enter node you want to delete : \n";
              cin>>v1;
              obj.deleteNode(v1);
          case 6:
            exit(0);
          default:
            cout<<"\nInvalid choice : \n";
        }
    }
    return 0;
}
