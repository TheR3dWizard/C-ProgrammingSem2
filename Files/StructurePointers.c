#include <stdio.h>
#include <string.h>

struct items{
    char id[100];
    int quantity;
    int price;
};

void print_all_items(struct items arr[],int n){
    for(int i = 0;i<n;i++){
        printf("ID: %s\nQuantity: %d\nPrice: %d\n",arr[i].id,arr[i].quantity,arr[i].price);
    }
}

void print_item(struct items arr[],int i){
    printf("ID: %s\nQuantity: %d\nPrice: %d\n",arr[i].id,arr[i].quantity,arr[i].price);
}

void get_items(struct items arr[],int n,int size){
    for(int i = size;i<n+size;i++){
        printf("Enter the next item\n");
        scanf("%s %d %d",arr[i].id,&arr[i].quantity,&arr[i].price);
        
    }
}


int main(){
    FILE *fwptr;
    FILE *frptr;
    fwptr = fopen("ShopItems.bin","wb");
    frptr = fopen("ShopItems.bin","rb");
    int SIZE = 2;

    struct items arr[SIZE];
    struct items arr1[SIZE];
    get_items(arr,SIZE,0);
    struct items *iptr = arr;
    struct items  *iptr1 = arr1;
    fwrite(iptr,sizeof(struct items),SIZE,fwptr);
    fread(&arr1,sizeof(struct items),SIZE,frptr);
    
    print_all_items(arr1,SIZE);

}