//#include <bits/stdc++.h>
//
//using namespace std;
////int N =1e5+3;
////vector<int>parent(N),sizee(N);
////
////void swap(int *a,
////          int *b)
////          {
////              int temp = *a;
////              *a = *b;
////              *b = temp;
////          }
////
////int parti(int a[],int low,int high)
////{
////    int pivot = a[high];
////    int i = low-1;
////
////    for(int j=low;j<=high-1;j++)
////    {
////        if(a[j]<=pivot)
////        {
////            i++;
////            swap(&a[i],&a[j]);
////        }
////    }
////    swap(&a[i+1],&a[high]);
////
////    return (i+1);
////
////}
////
////void quicksort(int a[],int low,int high)
////{
////    if(low<high)
////    {int part = parti(a,low,high);
////
////    quicksort(a,low,part-1);
////    quicksort(a,part+1,high);
////    }
////}
////
////
////void make_set(int v)
////{
////    parent[v]=v;
////    sizee[v]=1;
////}
////
////int find_set(int a)
////{
////    if(a == parent[a])
////        return a;
////
////    return parent[a]=find_set(parent[a]);
////}
////
////void union_s(int a,int b)
////{
////    int u = find_set(a);
////    int v = find_set(b);
////
////    if(u!=v)
////    {
////
////        if(sizee[u]<sizee[v])
////            swap(u,v);
////        parent[v] = u;
////
////        sizee[u]+=sizee[v];
////    }
////}
//
////void kruskals()
////{
////    int cost = 0;
////    vector<vector<int>>v;
////    int n;cin>>n;
////    for(int i=0;i<N;i++)
////    {
////        make_set(i);
////    }
////    for(int i=0;i<n;i++)
////    {
////        int a,b,w;cin>>a>>b>>w;
////        v.push_back({w,a,b});
////    }
////    sort(v.begin(),v.end());
////    for(auto i:v)
////    {
////        int z = i[0];
////        int u = i[1];
////        int v = i[2];
////
////        int x = find_set(u);
////        int y = find_set(v);
////
////        if(x==y)
////            continue;
////        else
////        {
////            cost+=z;
////            std::cout<<u<<" "<<v<<" ";
////            union_s(u,v);
////        }
////        std::cout<<endl;
////
////    }
////    std::cout<<cost<<endl;
////}
//
////
////
////
////int cost=0;
////int N = 1e9;
//////n-vertice,m-edges
////vector<vector<int>> g;
////vector<int> dist;
////vector<int>parent;
////vector<int>vis(0);
////const int INF = 1e9;
////
////    int n,m;
////
////
////
////
////
////
////void prims(int source)
////{
////    for(int i=0;i<n;i++)
////        dist[i]=INF;
////
////    set<vector<int>>s;
////    dist[source]=0;
////    s.insert({0,source});
////    while(!s.empty())
////    {
////        auto x = *(s.begin());
////        s.erase(x);
////        vis[x[1]] = 1;
////        std::cout<<x[1]<<" "<<parent[x[1]]<<" "<<x[0]<<"\n";
////        cost+=x[0];
////        for(auto it:g[x[1]])
////        {
////            if(dist[it[0]] > it[1]){
////                s.erase({dist[it[0]],it[0]});
////                dist[it[0]] = it[1];
////                s.insert({dist[it[0]],it[0]});
////                parent[it[0]] = x[1];
////            }
////        }
////    }
////std::cout<<cost<<endl;
////
////}
//
////int v = 6;
////
////int selc_min_vertex(vector<int>&value,vector<bool>setmst)
////{
////    int mini = INT_MAX;
////    int vertex;
////    for(int i=0;i<v;++i)
////    {
////        if(setmst[i]==false && value[i]<mini)
////        {
////            vertex=i;
////            mini = value[i];
////        }
////    }
////    return vertex;
////}
////
////void prims(int g[6][6])
////{
////    int parent[v];
////    vector<int> value(v,INT_MAX);
////    vector<bool> setmst(v,false);
////
////    parent[0]=-1;
////    value[0]=0;
////
////    for(int i=0;i<v;++i)
////    {
////        int u = selc_min_vertex(value,setmst);
////        setmst[u]=true;
////
////        for(int j=0;j<v;++j)
////        {
////            if(g[u][j]!=0 && setmst[j]==false && g[u][j]<value[j])
////            {
////                value[j]=g[u][j];
////                parent[j]=u;
////            }
////        }
////    }
////
////    for(int i=0;i<v;++i)
////        cout<<parent[i]<<"  "<<i<<"   wt->"<<g[parent[i]][i]<<endl;
////
////}
//
//
////void prims()
////{
////
////}
//
//
//
//
//
//
//
//
//int main()
//{
//    int n=5;
//      vector<vector<int>> dp;
//
//        dp.push_back({1});
//        dp.push_back({1,1});
//
//        for(int i=3;i<=n;i++)
//        {
//            vector<int>v;
//            v.push_back(1);
//            int x = i-2;
//            int k=0;
//            while(x!=1)
//            {
//                v.push_back(dp[i-1][k]+dp[i-1][k+1]);
//                k++;
//                --x;
//            }
//
//            v.push_back(1);
//
//            dp.push_back(v);
//        }
//
//        for(int i=0;i<5;i++)
//        {
//            for(int j=0;j<dp[i].size();j++)
//                std::cout<<dp[i][j]<<" ";
//
//            cout<<endl;
//        }
//
//
////   // cin>>v;
////    int g[6][6]=
////    {{0,4,6,0,0,0},{4,0,6,3,4,0},
////    {6,6,0,1,8,0},{0,3,1,0,2,3},{0,4,8,2,0,7},{0,0,0,3,7,0}
////    };
////cin>>n>>m;
////for(int i=0;i<m;i++)
////    {
////        int u,v,w;
////        cin>>u>>v>>w;
////        g[u].push_back({v,w});
////
////        g[v].push_back({u,w});
////    }
////
////    prims(0);
////    int parent[n];
////    int key[n];
////    bool mstset[n];
////    for(int i=0;i<n;i++)
////        key[i]=INT_MAX,mstset[i]=false,parent[i]=-1;
////
////    key[0]=0;
////    parent[0]=-1;
////
////    for(int i=0;i<n-1;i++)
////    {
////        int mini = INT_MAX,u;
////        for(int v=0;v<n;v++)
////            if(mstset[v]==false && key[v]<mini )
////            mini = key[v],u=v;
////
////        mstset[u]=true;
////
////        for(auto it:g[u])
////        {
////            int v = it.first;int weight=it.second;
////            if(mstset[v]==false &&weight <key[v])
////                parent[v] = u,key[v]=weight;
////        }
////    }
////
////    for(int i=1;i<n;i++)
////        std::cout<<parent[i]<<" - "<<i<<endl;
//
//   // cout<<cost<<endl;
//
//
//    return 0;
//}





#include <bits/stdc++.h>

using namespace std;

int board[3][3];




void displayboard()
{
    std::cout<<board[0][0]<<"  |  "<<board[0][1]<<"   |  "<<board[0][2]<<endl;
    std::cout<<"___________________________________________________"<<endl;
    std::cout<<board[1][0]<<"  |  "<<board[1][1]<<"   |  "<<board[1][2]<<endl;
    std::cout<<"___________________________________________________"<<endl;
    std::cout<<board[2][0]<<"  |  "<<board[2][1]<<"   |  "<<board[2][2]<<endl;
}

int ans = 0;

bool result()
{
    if(board[0][0] == board[0][1] && board[0][1]==board[0][2] && board[0][0] != -1)
    {
        if(board[0][0] == 1)ans = 1;
        else
            ans = 2;



            return true;
    }
    else if(board[0][0] == board[1][0] && board[1][0]==board[2][0] && board[0][0] != -1)
    {
        if(board[0][0] == 1)ans = 1;
        else
            ans = 2;


            return true;
    }
    else if(board[0][0] == board[1][1] && board[1][1]==board[2][2] && board[0][0] != -1)
    {
        if(board[0][0] == 1)ans = 1;
        else
            ans = 2;


            return true;
    }
    else if(board[0][1] == board[1][1] && board[1][1]==board[2][1] && board[0][1] != -1)
    {
        if(board[0][1] == 1)ans = 1;
        else
            ans = 2;


            return true;
    }
    else if(board[0][2] == board[1][1] && board[1][1]==board[2][0] && board[0][2] != -1)
    {
        if(board[0][2] == 1)ans = 1;
        else
            ans = 2;


            return true;
    }
    else if(board[1][0] == board[1][1] && board[1][1]==board[1][2] && board[1][0] != -1)
    {
        if(board[1][0] == 1)ans = 1;
        else
            ans = 2;

            return true;
    }
    else if(board[2][0] == board[2][1] && board[2][1]==board[2][2] && board[2][0] != -1)
    {
        if(board[2][0] == 1)ans = 1;
        else
            ans = 2;


            return true;
    }
    else if(board[0][2] == board[1][2] && board[1][2]==board[2][2] && board[0][2] != -1)
    {
        if(board[0][2] == 1)
            ans = 1;
        else
            ans = 2;
        return true;
    }

    return false;
}

void tictac()
{
    displayboard();

    int p1=0,p2=0;
    int turn =0;
    bool flag = true;
    while(flag)
    {
        int cur = -1;
        if(turn%2 == 0)
            {
                cin>>p1;
                cur = p1;
            }
        else
            {
                cin>>p2;
                cur = p2;
            }

        if(cur == 0)
        {
            if(board[0][0] == -1)
            {
                if(turn%2 == 0)
                {
                    board[0][0] = 1;
                }
                else
                    board[0][0] = 0;
            }
            else
                continue;
        }
        else if(cur == 1)
        {
            if(board[0][1] == -1)
            {
                if(turn%2 == 0)
                {
                    board[0][1] = 1;
                }
                else
                    board[0][1] = 0;
            }
            else
                continue;

        }
        else if(cur == 2)
        {
            if(board[0][2] == -1)
            {
                if(turn%2 == 0)
                {
                    board[0][2] = 1;
                }
                else
                    board[0][2] = 0;
            }
            else
                continue;

        }else if(cur == 3)
        {
            if(board[1][0] == -1)
            {
                if(turn%2 == 0)
                {
                    board[1][0] = 1;
                }
                else
                    board[1][0] = 0;
            }
            else
                continue;

        }else if(cur == 4)
        {
            if(board[1][1] == -1)
            {
                if(turn%2 == 0)
                {
                    board[1][1] = 1;
                }
                else
                    board[1][1] = 0;
            }
            else
                continue;

        }
        else if(cur == 5)
        {
            if(board[1][2] == -1)
            {
                if(turn%2 == 0)
                {
                    board[1][2] = 1;
                }
                else
                    board[1][2] = 0;
            }
            else
                continue;

        }
        else if(cur == 6)
        {
            if(board[2][0] == -1)
            {
                if(turn%2 == 0)
                {
                    board[2][0] = 1;
                }
                else
                    board[2][0] = 0;
            }
            else
                continue;

        }
        else if(cur == 7)
        {
            if(board[2][1] == -1)
            {
                if(turn%2 == 0)
                {
                    board[2][1] = 1;
                }
                else
                    board[2][1] = 0;
            }
            else
                continue;

        }
        else if(cur == 8)
        {
            if(board[2][2] == -1)
            {
                if(turn%2 == 0)
                {
                    board[2][2] = 1;
                }
                else
                    board[2][2] = 0;
            }
            else
                continue;

        }

        displayboard();
        if(result())
        {
            flag = false;
        }
        if(turn == 8)
            break;
        turn++;

    }
    if(!result())
        std::cout<<"draw"<<endl;
    else if(ans == 1)
    std::cout<<"player 1 won"<<endl;
    else
        std::cout<<"player 2 won"<<endl;
}


int main()
{

int k = 0;
    for(int i=0;i<3;i++)
        for(int j = 0;j<3;j++)
            {
                board[i][j] = -1;
            }
    tictac();
}





















