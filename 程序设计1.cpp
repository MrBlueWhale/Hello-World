#include <graphics.h>      // 引用图形库头文件
#include <conio.h>
int main()
{
      initgraph(640, 480);   // 创建绘图窗口，大小为 640x480 像素
		// 设置背景色为蓝色
		setbkcolor(BLUE);

		// 设置绘图色为红色
		setcolor(RED);

		int y ;
		y=50 ;



		int i=0;
		int v=1;
	
	for(i=0;i<10000;i++){
	
		cleardevice();
		circle(200,y,30);
		v+=1;

	    if(y>430)
		{   v-=1;
		v=0-v;
		y+=v;
		}else{
		y+=v;
		}
	    Sleep(100);
	}
	 
	
	_getch();              // 按任意键继续
    closegraph();          






return 0;

}
