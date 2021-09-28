#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct queue
{
    struct Node* front=NULL;
    struct Node* back=NULL;
};
bool isEmpty(struct queue *q)
{
    cout<<"\nChecking for empty queue";
    if(q->front==NULL)
    return true;
    else
    return false;
}
void enqueue(struct queue *q,int x)
{
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    n->data=x;
    n->next=NULL;
    if(isEmpty(q)==true)
    {
        cout<<"\nEnqueuing for empty queue";
        q->front=n;
        q->back=n;
    }
    else
    {
        cout<<"\nEnqueuing non-empty queue";
        q->back->next=n;
        q->back=n;
    }
}
int dequeue(struct queue *q)
{
    if(isEmpty(q)==true)
    return -1;
    int r=q->front->data;
    q->front=q->front->next;
    cout<<"\nDequeuing the queue";
    return r;
}
bool visited(int a[8][8],int x,int y)//initialize all elements as zero and after checking for a[x][y] do a[x][y]++;
{
    cout<<"\nInside visited function";
    if((x>=0)&&(x<8)&&(y>=0)&&(y<8))
    {
        a[x][y]++;
        if(a[x][y]-1==0)
        return false;
        else
        return true;
    }
    else
    return true;
}
void bfs(int x,int y, int xf, int yf,int a[8][8])
{
    cout<<"\nIn bfs";
    if(x==xf&&y==yf)
    {
        cout<<"\nIn basic block";
        return;
    }
    struct queue *qx;
    struct queue *qy;
    int dx[]={1,2,2,1,-1,-2,-2,-1};
    int dy[]={2,1,-1,-2,-2,-1,1,2};
    int f=1;int b=x,c=y;
    while(1)
    {
        cout<<"\nIn while";
        for(int i=0;i<8;i++)
        {
            cout<<"\nIn for";
            if((b+dx[i]==xf)&&(c+dy[i]==yf))
            {
                cout<<"\nInside if block";
                bfs(x,y,b,c,a);
                cout<<"["<<b<<","<<c<<"] to ["<<xf<<","<<yf<<"]"<<endl;
                f=0;
                break;
            }
            if(visited(a,b+dx[i],c+dy[i])==false)
            {
                cout<<"\nInside if block to check visited";
                enqueue(qx,b+dx[i]);
                enqueue(qy,c+dy[i]);
            }
        }
        if(f==0)
        {
            cout<<"\nIn if block to break while";
            break;
        }
        cout<<"\nDequeuing";
        b=dequeue(qx);
        c=dequeue(qy);
    }
}
int main()
{
    int a[8][8]={0};
    int xi,yi,xf,yf;
    cout<<"Enter initial and final positions of knight\n";
    cin>>xi>>yi>>xf>>yf;
    bfs(xi,yi,xf,yf,a);
    cout<<"\nDone";
    return 0;
}