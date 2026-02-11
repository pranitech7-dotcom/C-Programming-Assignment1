 #include<stdio.h>
 #include<conio.h>
 void main ()
 {
    int id,sal,da,hra,ta,gs ,itax ,net_sal ;
    char name[20];

    printf("\nEnter Employee name :");
    scanf("%s",&name);

    printf("\nEnter emplyee id :");
    scanf("%d",&id);

    printf("\nEnter sal of employee:");
    scanf("%d",&sal);

    da = sal *0.05 ;
    hra = sal *0.12 ;
    ta = sal *0.08;
    gs = sal + hra + da + ta  ;
    itax = sal * 0.1 ;
    net_sal = gs - itax ;



    printf("\n****salary info****");
    printf("\nname of employee :%s",name);
    printf("\nid of emplyee : %d", id);
    printf("\nsalary of emplyee : %d",sal );
    printf("\nda : %d",da);
    printf("\nhra : %d", hra);
    printf("\nta : %d", ta );
    printf("\ngs : %d", gs);
    printf("\nitax : %d", itax);
    printf("\nnet salary : %d", net_sal);
    getch();
 } 