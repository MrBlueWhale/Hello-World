#include <graphics.h>      // ����ͼ�ο�ͷ�ļ�
#include <conio.h>
int main()
{
    initgraph(640, 480);   // ������ͼ���ڣ���СΪ 640x480 ����
   // ���ñ���ɫΪ��ɫ
	setbkcolor(BLUE);

	// ���û�ͼɫΪ��ɫ
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
	}else
	{
		y+=v;
	}
Sleep(100);
	}
	 
	
	
	
	
	
	
	
	
	
	
	
	_getch();              // �����������
    closegraph();          






return 0;

}
