#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int a,b,c,d;
    printf("\nEnter The Four Integer Numbers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a%2==0 && b%2==0 && c%2==0 && d%2==0){
        printf("None of the Numbers are ODD!\n");

    }else if(a%2!=0 && b%2==0 && c%2==0 && d%2==0){
        printf("%d is the Highest ODD number amongst Four \n",a);

    }else if(a%2==0 && b%2!=0 && c%2==0 && d%2==0){
        printf("%d is the Highest ODD number amongst Four \n",b);

    }
    else if(a%2==0 && b%2==0 && c%2!=0 && d%2==0){
        printf("%d is the Highest ODD number amongst Four \n",c);

    }
    else if(a%2==0 && b%2==0 && c%2==0 && d%2!=0){
        printf("%d is the Highest ODD number amongst Four \n",d);

    }else if(a%2!=0 && b%2!=0 && c%2==0 && d%2==0){
        if(a>b){
            printf("%d is the Greatest ODD number\n",a);
        }else{
            
            printf("%d is the Greatest ODD number\n",b);

        }
    }else if(a%2!=0 && b%2==0 && c%2!=0 && d%2==0){
        if(a>c){
            printf("%d is the Greatest ODD number\n",a);
        }else{
            
            printf("%d is the Greatest ODD number\n",c);

        }
    }else if(a%2!=0 && b%2==0 && c%2==0 && d%2!=0){
        if(a>d){
            printf("%d is the Greatest ODD number\n",a);
        }else{
            
            printf("%d is the Greatest ODD number\n",d);

        }
    }else if(a%2==0 && b%2!=0 && c%2!=0 && d%2==0){
        if(b>c){
            printf("%d is the Greatest ODD number\n",b);
        }else{
            
            printf("%d is the Greatest ODD number\n",c);

        }
    }else if(a%2==0 && b%2!=0 && c%2==0 && d%2!=0){
        if(b>d){
            printf("%d is the Greatest ODD number\n",b);
        }else{
            
            printf("%d is the Greatest ODD number\n",d);

        }
    }else if(a%2==0 && b%2==0 && c%2!=0 && d%2!=0){
        if(c>d){
            printf("%d is the Greatest ODD number\n",c);
        }else{
            
            printf("%d is the Greatest ODD number\n",d);

        }
    }else if(a%2!=0 && b%2!=0 && c%2!=0 && d%2==0){
        if(a>b && a>c){
            printf("%d is the Greatest ODD number\n",a);
        }else if(b>a && b>c){
            printf("%d is the Greatest ODD number\n",b);
        }else if(c>a && c>b){
            printf("%d is the Greatest ODD number\n",c);
        }
    }else if(a%2==0 && b%2!=0 && c%2!=0 && d%2!=0){
       if(d>b && d>c){
            printf("%d is the Greatest ODD number\n",d);
        }else if(b>d && b>c){
            printf("%d is the Greatest ODD number\n",b);
        }else if(c>d && c>b){
            printf("%d is the Greatest ODD number\n",c);
        }
    }else if(a%2!=0 && b%2!=0 && c%2!=0 && d%2!=0){
        
         if(a>b){
            if(a>c){
                if(a>d){
                    printf("%d is the greatest ODD number. ",a);
                }else
                {
                    printf("%d is the greatest ODD number. ",d);
                }

            }else if(b>a)
            {
                if(b>c){
                    if(b>d){
                            printf("%d is the greatest ODD number. ",b);
                    }else
                    {
                        printf("%d is the greatest ODD number. ",d);
                    }
                }
            }
    }else
    {
                    if(c>d){
                            printf("%d is the greatest ODD number. ",c);
                    }else
                    {
                        printf("%d is the greatest ODD number. ",d);
                    }
    }
    }
}       

