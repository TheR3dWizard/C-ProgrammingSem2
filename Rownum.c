int main(){
    int arr[3][3];
    int x,y;
    printf("Enter row and column of element:\n");
    scanf("%d%d",&x,&y);
    int mem = &arr;
    printf("Address of array is: %d\n",mem);
    int elempos = mem + 3*4*(x-1) + 4*(y-1);
    printf("Address of element is: %d\n",elempos);
}

