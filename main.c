#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x ;
    
    printf("请输入一个数以判断是否为素数:\n");
    scanf("%d",&x);
    
    int i ;
    int Prime = 1 ;
    
    for (i = 2 ; i < x ; i++ ) {
        if ( x % i == 0 ) {
            Prime = 0 ;
            break ;
        }
    }
    
    if (Prime == 1) {
        printf("是素数\n");
    }else{
        printf("不是素数\n");
    }
    return 0;
}
