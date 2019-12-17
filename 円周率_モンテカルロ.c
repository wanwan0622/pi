#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    srand(time(NULL)); //時刻の値を初期値とした乱数
    int count = 0;
    
    int i = 0;
    int total = 10000;
    while (i <= total){
	    double x = (double)rand() / RAND_MAX; //キャスト：（）内に変数型を入れると直後の変数の型が変わる
    	double y = (double)rand() / RAND_MAX; //0〜1の範囲で乱数を生成
    	//printf("x = %f\ny = %f\n",x,y);
    
    	if (x*x + y*y <= 1){
        	count += 1; //円の中に入っている点の数を数える
   		}
    	//printf("count = %d",count);
        i += 1;
    }
    
    double percent = (double)count / total;
    printf("percent = %f\n", percent);
    
    double pi = 4 * percent;
    printf("pi = %f\n",pi);
    
    return 0;
}
