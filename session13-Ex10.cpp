#include<stdio.h>

int arr[100];
int n;

void fix();
void initialization();
void print();
void more();
void deleteElement();
void sortArrayAscending();
void sortArrayDescending();
void searchLinear();
void searchBinary();
int displayMenu();

int main(){
    int choice;
    do{
        choice = displayMenu();
        switch(choice){
            case 1:
                initialization();
                break;
            case 2:
                print();
                break;
            case 3:
                more();
                printf("Mang sau khi them la: \n");
                for(int i = 0; i < n; i++){
                    printf("%d\t", arr[i]);
                }
                printf("\n");
                break;
            case 4:
                fix();
                printf("Mang sau khi sua la: \n");
                for(int i = 0; i < n; i++){
                    printf("%d\t", arr[i]);
                }
                printf("\n");
                break;
            case 5:
                deleteElement();
                break;
            case 6:
                {
                    int subChoice;
                    printf("\n1. Sap xep tang dan\n");
                    printf("2. Sap xep giam dan\n");
                    printf("Lua chon: ");
                    scanf("%d", &subChoice);
                    if (subChoice == 1)
                        sortArrayAscending();
                    else if (subChoice == 2)
                        sortArrayDescending();
                    else
                        printf("Lua chon khong hop le!\n");
                }
                break;
            case 7:
                {
                    int subChoice;
                    printf("\n1. Tim kiem tuyen tinh\n");
                    printf("2. Tim kiem nhi phan\n");
                    printf("Lua chon: ");
                    scanf("%d", &subChoice);
                    if (subChoice == 1)
                        searchLinear();
                    else if (subChoice == 2)
                        searchBinary();
                    else
                        printf("Lua chon khong hop le!\n");
                }
                break;
            case 8:
                printf("Hen gap lai!\n");
                break;
            default:
                printf("So nhap khong hop le!\n");
        }    
    } while(choice != 8);
    return 0;
}

void initialization(){
    printf("Nhap so phan tu cho mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cho mang: \n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}

void print(){
    printf("Cac phan tu cua mang la: ");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void more(){
    int addIndex, newValue;
    printf("Nhap vi tri muon them phan tu: ");
    scanf("%d", &addIndex);
    if(addIndex > n || addIndex > 100){
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap so muon them vao mang: ");
    scanf("%d", &newValue);
    
    if(addIndex == n){
        arr[addIndex] = newValue;
        n++;
    } else {
        for(int i = n; i > addIndex; i--){
            arr[i] = arr[i - 1];
        }
        n++;
        arr[addIndex] = newValue;
    }
      printf("Mang sau khi them la: \n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void fix(){
    int addIndex, newValue;
    printf("Nhap vi tri muon sua: ");
    scanf("%d", &addIndex);
    if(addIndex < 0 || addIndex >= n){
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap so muon sua: ");
    scanf("%d", &newValue);
    arr[addIndex] = newValue;
    printf("Mang sau khi sua la: \n");
    	for(int i = 0; i < n; i++){
        	printf("%d\t", arr[i]);
    	}
    printf("\n");
}

void deleteElement(){
    int index;
    printf("Nhap vi tri phan tu muon xoa: ");
    scanf("%d", &index);
    
    if (index < 0 || index >= n){
        printf("Vi tri khong hop le!\n");
        return;
    }

    for(int i = index; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--; 
    printf("Mang sau khi xoa la: \n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void sortArrayAscending(){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan: \n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void sortArrayDescending(){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan: \n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void searchLinear(){
    int value;
    printf("Nhap phan tu muon tim: ");
    scanf("%d", &value);
    
    for(int i = 0; i < n; i++){
        if(arr[i] == value){
            printf("Phan tu %d da tim thay tai chi so %d\n", value, i);
            break;  
        }
    }
    printf("Phan tu %d khong ton tai trong mang.\n", value);
}
void searchBinary(){
    int value, left = 0, right = n - 1, mid;
    printf("Nhap phan tu muon tim: ");
    scanf("%d", &value);

    sortArrayAscending();

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == value) {
            printf("Phan tu %d da tim thay tai chi so %d\n", value, mid);
            return;
        }
        else if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    printf("Phan tu %d khong ton tai trong mang.\n", value);
}
int displayMenu(){
    int choice;
    printf("\n****************Menu****************\n");
    printf("1. Nhap so phan tu can va gia tri cac phan tu\n");
    printf("2. In ra gia tri cac phan tu dang quan ly\n");
    printf("3. Them mot phan tu vao vi tri chi dinh\n");
    printf("4. Sua mot phan tu o vi tri chi dinh\n");
    printf("5. Xoa mot phan tu o vi tri chi dinh\n");
    printf("6. Sap xep cac phan tu\n");
    printf("7. Tim kiem phan tu nhap vao\n");
    printf("8. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    return choice;
}
