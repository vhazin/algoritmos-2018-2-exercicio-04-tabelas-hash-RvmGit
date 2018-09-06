#include <stdio.h>

int main(){
    int N,M,C,chave,valor;
    scanf("%d",&N);
    int fast,slow,x,y,i,j;
    for(x =0;x<N;x++){
        scanf("%d %d",&M,&C);
        int exibicao[M][C];
        for (fast =0;fast<M;fast++){
            for(slow =0;slow<C;slow++){
                exibicao[fast][slow]=0;
            }
        }
        for (y=0;y<C;y++){
            scanf("%d",&chave);
            valor = chave%M;
            exibicao[valor][y]=chave;
        }
        for (i =0;i<M;i++){
            printf("%d -> ",i);
            for (j=0;j<C;j++){
                if (exibicao[i][j]!= 0){
                    printf("%d -> ",exibicao[i][j]);
                }
            }
            printf("\\\n");
        }
        if (x!=N-1){
            printf("\n");
        }
    }
}
