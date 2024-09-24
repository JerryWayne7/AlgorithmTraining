//// 动态链表
// #include <bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     node *next;
// };
// int main()
// {
//     int n,m;    scanf("%d %d",&n,&m);
//     node *head,*now,*p,*prev;
//     head = new node; head->data = 1; head->next = NULL;
//     now = head;
//     for(int i=2;i<=n;i++){
//         p = new node; p->data = i; p->next = NULL;
//         now->next = p;
//         now = p;
//     }
//     now->next = head;  //首尾相接，循环链表
//     //以上建立链表
//     now = head, prev = head;
//     while((n--)>1){
//         for (int i = 1;i<m;i++){    //数第m个
//             prev = now;
//             now = now->next;
//         }
//         printf("%d ",now->data);
//         prev->next = now->next;
//         delete now;
//         now = prev->next;
//     }
//     printf("%d",now->data);
//     delete now;
//     return 0;
// }

//// 静态链表

//再写一遍动态链表
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

int main()
{
    int n,m; scanf("%d %d",&n,&m);
    node *next, *now, *p, *prev, *head;
    head = new node; head->data = 1; head->next = NULL;
    now = head;
    for(int i=2;i<=n;i++){
        p = new node; p->data = i; p->next = NULL;
        now->next = p;
        now = p;
    }
    now->next = head;

    return 0;
}