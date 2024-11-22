#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node*createnode(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;

};

void addedge(struct node*adj[],int i,int j){
    struct node*newnode=createnode(j);
    newnode->next=adj[i];
    adj[i]=newnode;

    newnode=createnode(i);      //for undirected graph
    newnode->next=adj[j];
    adj[j]=newnode;

};

void displayadjlist(struct node*adj[],int V){
    for(int i=0;i<V;i++){
        printf("%d :",i);
        struct node *temp=adj[i];
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }

};

// Main function
int main() {
  
    // Create a graph with 4 vertices and no edges
    int V = 4;
    struct node* adj[V];
    for (int i = 0; i < V; i++) {
        adj[i] = NULL; // Initialize adjacency list
    }

        // Now add edges one by one
    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 2);
    addedge(adj, 2, 3);

    printf("Adjacency List Representation:\n");
    displayadjlist(adj, V);

    return 0;
}




