    void xiugai()										//�޸ĺ���
    {
     int c;
     printf("�����޸�ѧԱ���ϵķ�ʽ:\n");					//�����ʾ��Ϣ
     printf("1.ͨ�����������޸�\n");
     printf("2.ͨ��ѧ�Ų����޸�\n");
     printf("3.����ѧԱ����\n");
     printf("4.����\n");
     scanf("%d",&c);
     if(c>4||c<1)    								 //�ж��û������ѡ���Ƿ����Ҫ��
     {
      printf("��������,������1-4֮�������\n\n\n");
      xiugai();      								//���û������ѡ��Ҫ�󲻷���,���½���������
     }
     switch(c)
     {
      case 1:changebyname();						//����changebyname()����
      break;
      case 2:changebynum();						//����changebynum()����
      break;
      case 3:charu();								//����charu()����
      break;
      case 4:
      break;
     }
    }
