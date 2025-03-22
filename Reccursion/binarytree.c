#include<stdio.h>
#include<stdlib.h>
int idx=1;
void BST(int *tree, int x){
    if(tree[idx]==-1){
        tree[idx] = x;
        return;
    }
    int temp = idx;
    if(x>tree[idx]){
        idx = 2*idx+1;
        BST(tree,x);
    }
    else if(x<tree[idx]){
        idx = 2*idx;
        BST(tree, x);
    }
    idx = temp;
}
int nodesno(int *tree, int ix) {
    if (tree[ix] == -1) return 0;
    return 1 + nodesno(tree, 2 * ix + 1) + nodesno(tree, 2 * ix);
}
int main(){
    int n;
    scanf("%d", &n);
    int *elements = (int *)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++){
        scanf("%d", &elements[i]);
    }
    int *tree=(int *)malloc(100*sizeof(int));
    for(int i=0;i<100;i++){
        tree[i] = -1;
    }
    for(int i = 0; i<n; i++){
        BST(tree, elements[i]);
    }
    for(int i = 0; i<2*n+1;i++){
        printf("%d %d\n", i, tree[i]);        
    }
    printf("Nodes no - %d", nodesno(tree, 1));
    free(elements);
    free(tree);
    return 0;
}

