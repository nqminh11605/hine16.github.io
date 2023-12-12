/*Bài 7.10: Định nghĩa cấu trúc ma trận gồm hai số nguyên lưu trữ số hàng và số cột của ma trận và một
mảng nhiều chiều để lưu trữ các phần tử của ma trận. Viết chương trình thực hiện:
- Nhập ma trận
- In ma trận
- Tìm giá trị lớn nhất của ma trận

- Tính giá trị trung bình các phần tử của ma trận*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 100
typedef struct maTran
{
    int h,c;
    float giaTri;
}maTran;
int main()
{
    // Nhập ma trận

    int a[MAX][MAX], h, c, i, j;
    printf("Nhap so hang m: ");
    scanf("%d", &h);
    printf("Nhap so cot n: ");
    scanf("%d", &c);
    for(i=1; i<=h;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("Nhap a[%d][%d]: ", i,j) ;
            scanf("%d",&a[i][j]);
        }
    }

    // in ra ma trận
    printf("Matrix: \n");
    for(i=1; i<=h;i++)
    {
        for(j=1;j<=c;j++)
            {
                printf(" %d ",a[i][j]) ;
                
            }
        printf("\n") ;
    }

    // Tìm giá trị lớn nhất của ma trận
   int max = a[0][0]; // Giả sử phần tử đầu tiên là lớn nhất
    for (int i = 0; i < h; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            if (a[i][j] > max) 
            {
                max = a[i][j];
            }
        }
    }
    printf("GTLN= %d\n",max);

    //Tính giá trị trung bình các phần tử của ma trận
    float sum=0;  
    for(i=0; i<=h;i++)
    {
        for(j=0;j<=c;j++)
            {
                sum+=a[i][j];
            } 
    } 
    float avr = sum / (h * c);
    printf("TBC= %f", avr );
    return 0;

}

