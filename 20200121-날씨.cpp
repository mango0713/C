 #include <stdio.h>
 
 main()
 {
 	int ojo;
 	
	printf("오늘 날씨 온도는 \n");
 	scanf ("%d", &ojo);
	 
	if (ojo < 0)
	{
		printf ("오늘 날씨는 영하 이며,");
	}                                             
	else
	{
		printf ("오늘 날씨는 영상이며");
		
	} 
	
	printf ("현재 온도는 %d 입니다", ojo);
 }
