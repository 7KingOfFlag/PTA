    void xiugai()										//修改函数
    {
     int c;
     printf("输入修改学员资料的方式:\n");					//输出提示信息
     printf("1.通过姓名查找修改\n");
     printf("2.通过学号查找修改\n");
     printf("3.插入学员资料\n");
     printf("4.返回\n");
     scanf("%d",&c);
     if(c>4||c<1)    								 //判断用户输入的选项是否符合要求
     {
      printf("输入有误,请输入1-4之间的数字\n\n\n");
      xiugai();      								//若用户输入的选项要求不符合,重新进入主界面
     }
     switch(c)
     {
      case 1:changebyname();						//调用changebyname()函数
      break;
      case 2:changebynum();						//调用changebynum()函数
      break;
      case 3:charu();								//调用charu()函数
      break;
      case 4:
      break;
     }
    }
