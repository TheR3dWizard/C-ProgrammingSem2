// function get_items, parameters (no. of items), X
// Structure has name,quantity,price X
// function print, pass i, print ith element of the array of structures X
// function search,pass a string,search for name X
// function greaterThann, pass a number and array of structures, return all items with quantity higher than n X
// function sort, pass an array of structures, sort based on price


#include <stdio.h>


struct items{
    char id[100];
    int quantity;
    int price;
};



void get_items(struct items arr[],int n,int size){
    for(int i = size;i<n+size;i++){
        printf("Enter the next item\n");
        scanf("%s %d %d",arr[i].id,&arr[i].quantity,&arr[i].price);
        
    }
}

void print_all_items(struct items arr[],int n){
    for(int i = 0;i<n;i++){
        printf("ID: %s\nQuantity: %d\nPrice: %d\n",arr[i].id,arr[i].quantity,arr[i].price);
    }
}

void print_item(struct items arr[],int i){
    printf("ID: %s\nQuantity: %d\nPrice: %d\n",arr[i].id,arr[i].quantity,arr[i].price);
}

int search_item(struct items arr[],int n,char name[100]){
    for(int i = 0;i<n;i++){
        //printf("%s %s\n",arr[i].id,name);
        if(strcmp(arr[i].id,name) == 0){
            printf("FOUND\n");
            return 1;
        } 
    }
    printf("NOT FOUND\n");
    return 0;
}

int greater_than_n(struct items arr[],int n,int size){
    int num[size];
    struct items subarr[];
    for(int i = 0;i<size;i++){
        if(arr[i].quantity > n){
            num += 1;
        }
    }
    return num;
}

void sort(struct items arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            struct items* ptr = &arr[j];
            struct items* ptr1 = &arr[j+1];
            if(ptr->price == ptr1->price){
                struct items* temp = ptr;
                ptr = ptr1;
                ptr1 = temp;
            }
        }
    }
}


int main(){
    struct items arr[100];
    int size = 1;
    get_items(arr,size,0);
    printf("BEFORE SORTING\n");
    printf("Searching = %d\n",search_item(arr,size,"book"));
    print_item(arr,1);
    print_all_items(arr,size);
    sort(arr,size);
    printf("AFTER SORTING\n");
    print_all_items(arr,size);
}




