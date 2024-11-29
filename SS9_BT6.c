#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, n = 0;
    int **array;
    int tong = 0;
    int tich;
    int tonglonnhat = 0;
    int count;
    do {
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Nhap so hang trong mang: ");
                scanf("%d", &a);
                printf("Nhap so cot trong mang: ");
                scanf("%d", &b);
        
                array = (int **)malloc(a * sizeof(int *));
                for (int i = 0; i < a; i++) {
                    array[i] = (int *)malloc(b * sizeof(int));
                }
                
                printf("Nhap cac phan tu: ");
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        scanf("%d", &array[i][j]);
                    }
                }
                break;
            case 2:
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        printf("%d ", array[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                tong = 0; 
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < b; j++) {
                        if (array[i][j] % 2 != 0) {
                            tong += array[i][j];
                        }
                    }
                }
                printf("Tong cac gia tri le la: %d\n", tong);
                break;
            case 4:
                tich = 1;
                for (int i = 0; i < b; i++) {
                    tich *= array[0][i];
                    tich *= array[a - 1][i];
                }
                for (int i = 0; i < a; i++) {
                    tich *= array[i][0];
                    tich *= array[i][b - 1];
                }
                tich /= array[0][0]; 
                tich /= array[a - 1][b - 1];
                tich /= array[a - 1][0];
                tich /= array[0][b - 1];
                printf("Tich cac phan tu tren bien la: %d\n", tich);
                break;
            case 5:
                if (a != b) {
                    printf("Ma tran khong hop le!\n");
                    break;
                }
                printf("Cac phan tu tren duong cheo chinh cua ma tran la: \n");
                for (int i = 0; i < a; i++) {
                    printf("%d\n", array[i][i]);
                }
                break;
            case 6:
                if (a != b) {
                    printf("Ma tran khong hop le!\n");
                    break;
                }
                printf("Cac phan tu tren duong cheo phu cua ma tran la: \n");
                for (int i = 0; i < a; i++) {
                    printf("%d\n", array[i][a - 1 - i]);
                }
                break;
            case 7:
                tonglonnhat = -1;
                for (int i = 0; i < a; i++) {
                    tong = 0;
                    for (int j = 0; j < b; j++) {
                        tong += array[i][j];
                    }
                    if (tong > tonglonnhat) {
                        tonglonnhat = tong;
                        count = i + 1;
                    }
                }
                printf("Dong co tong lon nhat la: %d\n", count);
                break;
            case 8:
		    exit (0);
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (n < 9);
    return 0;
}
