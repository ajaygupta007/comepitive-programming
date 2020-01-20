#include<Stdio.h>
typedef struct{
	int x;
	int y;
} point;
typedef struct
{
	point TL;
	point BR;
}rect;
int main()
{
 rect r={{0,2},{5,7}};
 printf("[(%d %d) (%d %d)]",r.TL.x,r.TL.y,r.BR.x,r.BR.y);
 return 0;	
}
