#include <stdio.h>
#define MAX 30
int main(void) {
        int i,j,n,bt[MAX],tat[MAX],wt[MAX];
        float awt=0, atat=0;
        printf("Enter the number of processes: ");
        scanf("%d", &n);
        printf("Enter the burst time of the process: ");
        for(i=0; i<n; i++){
                scanf("%d", &bt[i]);
        }
        printf("Process\tBurst Time\tWaiting Time\tTurnaround Time");
        for(i=0;i<n;i++){
                wt[i]=0;
                tat[i]=0;
                for(j=0;j<i;j++){
                        wt[i]=wt[i]+bt[i];
                }
                tat[i]=wt[i]+bt[i];
                awt=awt+wt[i];
                atat=atat+tat[i];
                printf("%d\t%d\t\t%d\t\t%d", i+1, bt[i], wt[i], tat[i]);
        }
        awt=awt/n;
        atat=atat/n;
        printf("Average waiting time: %f", awt);
        printf("Average turnaround time: %f", atat);
        
  return 0;
}