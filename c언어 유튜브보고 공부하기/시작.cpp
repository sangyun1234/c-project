/*
1��
#include <stdio.h>// ���̺귯�� �߰�>>>printf���� �Լ��� ����Ҽ��ְ� ����

int main(void)  // void�� �Ű�����>> Ư���Լ��� �����Ҷ� �� �Լ��� ó���� ������ �޾ƿ� 
{
	printf("hello world!");
	return 0;// �ϳ��� �Լ��� ����Ǿ����� ��ȯ���� �����ִ� �����Ⱦ��>> main�Լ��� int�̱⶧�� (#3) �����Լ��� ������int �� ����ɶ� 
	//���α׷� ������ �ǹ��� 0�� ��ȯ�Ѵٴ� �ǹ� 
	//���� �����Լ� int main(void)  ,  return 0; �� ������ �ϳ��� ��Ӱ���

}
*/

/*2��
//����=x ���� ���α׷� ������ ����ɼ��ִ� �� ���=������ ���� ���α׷��� ����Ǿ� ��������ʴ°� , ���� ���� �� ������ �ʿ䰡���� ������
#include <stdio.h>
int main(void)
{
	int x;// ������ ���� x ����
	x = 5;
	//printf("%d", x); //%d>> ���ڸ����� int�� ���� ���� ��¶�
	printf("���� x �� �޸�ũ��� %d�Դϴ�.", sizeof(x)); //sizeof(x)>> ���� x�� �޸� ũ�⸦ �˷���
	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	int x = 50;
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	printf("x=%d\n", x);// \n>> �ٹٲ��� �ǹ�
	printf("y=%.2f\n", y);// %.nf>>> n��°�Ҽ��� �ڸ����� ǥ�� %d�� ������ %.nf�� �Ǽ���
	// >>����ϸ� float ���� 4����Ʈ ���������ϱ⿡ �ڿ� ���� ���ư��� >>> double ����ϸ� �� ū�� ��Ÿ�����ִ� �ڷ���
	printf("z=%.2f\n", z); //>>����ϸ� �Ҽ��� �ڸ����� ������ ǥ���� double�� 8����Ʈ �Ҵ�Ǳ⿡
	return 0; 
}
*/
/*
//�����÷ο쿡 ���Ͽ�
#include <stdio.h>
#include <limits.h> // INT_MAX�� �������� ���̺귯��(�Ѱ谪 ������ �����ϴ� ���̺귯��)

int main(void)
{
	int x = INT_MAX;// int���� �������ִ� ���� ū �� ���
	printf("int���� �ִ� x �� %d�Դϴ�\n", x);
	printf("x+1�� %d�Դϴ�.\n", x + 1);// ������ int �� �������ִ� �ִ�(�޸��Ҵ緮)�� 1�ʰ��� ���� ����Ϸ��� �õ�
	// ����ϸ� ����ū������ �ѹ��� ���Ƽ� �ּڰ����� ��µ� >>> �̰��� �ٷ� �����÷ο� 
	return 0;
}
*/
/*
//������ ��Ģ����
#include<stdio.h>
int main(void)
{
	int x = 10;
	int y = 20;
	printf("x=%d�Դϴ�.\n", x);
	printf("y=%d�Դϴ�.\n", y);
	printf("x+y�� %d�Դϴ�.\n", x + y);
	printf("x-y�� %d�Դϴ�.\n", x - y);
	printf("x*y�� %d�Դϴ�.\n", x * y);
	printf("x/y�� %d�Դϴ�.\n", x / y); //>>> ���������� ����߱⿡ �� ��µǾ���
	return 0;
}
*/

//3��
//�ڷ���
/*
#include<stdio.h>
#define MONTHS 12 // ��� MONTH�� ���� ���Ǹ� ���ش� #define ���� month�� 12 �� ����
int main(void)
{
	double monthsalary = 1000.5;
	printf("%.2f$", monthsalary*MONTHS);
	return 0;
	
}
*/
/*�ƽ�Ű�ڵ� ���, ������ �������� �����ο� ��ȯ
#include<stdio.h>
int main(void)
{
	char x = 'A'; // =char x = 65; (�̷����ص� �����ǹ̴�)  >>> �ƽ�Ű�ڵ�� 65=A 
	int y = 65;
	char z = 'B';
	int a = 66;
	printf("%c\n", x); // ���� char x = A�� int x = 65;�� �ص� �� ������ printf���� (%c>>>���ڿ� ���)�� �ϸ� ���ڿ��� ��ȯ�Ǿ� �ƽ�Ű�ڵ�� A�� ��µȴ�.
	printf("%c\n", y);
	printf("%c\n", z);
	printf("%c\n", a);
	printf("%d\n", z);

	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int x = 100;
	printf("10������ ���: %d\n ", x);
	printf("8������ ���: %o\n ", x); // %d>> ����10���� %o>>����8����
	printf("16������ ���: %x\n ", x);
	return 0;
}
*/

//4��
//������
//��Ģ����Ѥ� 1+2���� 1,2 �� �ǿ����� +�� �����ڤѤѤ�!=not , ++=1�� ���Ѵٴ� �ǹ�, %=������

//�ʸ� ������ ǥ���ϱ�
/*
#include<stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d�ʴ� %d�� %d���Դϴ�", input, minute, second);
	return 0;
}
*/

//����������
/*
#include<stdio.h>
int main(void)
{
	int x = 0;
	printf("������ x�� %d�Դϴ�\n", x);
	x++;
	printf("������ x�� %d�Դϴ�\n", x);
	printf("������ x�� %d�Դϴ�\n", x--); //����ϰ� ���� -1�� �ȴ�.
	printf("������ x�� %d�Դϴ�\n", x);
	printf("������ x�� %d�Դϴ�\n", --x); //����� -1�� �ȴ�.
	return 0;
}
*/

//���մ��Կ�����
// (x++) = (x+=1) = (x=x+1)
/*
#include<stdio.h>

int main(void)
{
	int x = 100;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x += 50; // x = x+50 >> ����п����� = �� �ǹ̰� ���� ��� ǥ�� , ������ ���α׷��ֿ����� = �� �����Ѵٴ� �ǹ�
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x -= 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x *= 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x /= 50;
	printf("���� x�� ���� %d�Դϴ�.\n", x);
	x %= 3;
	printf("���� x�� ���� %d�Դϴ�.\n", x);

	return 0;
}
*/

//5��
//���迬����
/*
#include<stdio.h>

int main(void)
{
	int x = 50;
	int y = 30;
	// x=y >> x�� y�� ����, x==y >> ���� ��� x=y
	printf("x�� y �� ������? (���̸� 1 �����̸� 0���� ���) >>>%d\n", x == y); // c������ ��=1 ����=0 �̶�� ��Ÿ��
	printf("x�� y �� �ٸ���? (���̸� 1 �����̸� 0���� ���) >>>%d\n", x != y); // != �ٸ����� ���� �Ǻ� 
	printf("x�� y ���� ū��? (���̸� 1 �����̸� 0���� ���) >>> %d\n", x > y);
	printf("x�� y���� ������? (���̸� 1 �����̸� 0���� ���) >>> %d\n", x = y); // 30�� y�� x�� ���ԵǾ� x�� 30�� ��>> %d�� �������� ����Ǿ��ִٸ�
	// ������ �ذ�ǰ����� ������ ������ %d�� ���Ե� >>> 30�� y���� x�� ���Եǰ� x�� ���� ��µ�
	int a = 50;
	int b = 50;
	printf("a�� b �� ������? (���̸� 1 �����̸� 0���� ���) >>>%d\n", a == b);

	return 0;

}
*/
//��������
// 100< x <200  = �߸��� ǥ�� >>> ���ʺ��� �Ǻ��Ѵٴ� ���� 100<x �� �Ǻ��� �� ���̸� 1�� �����>> �׷��� 1<200 �� �Ǳ⿡ �Ǻ��� �ȵ�
// �׷��� (100<x)&&(x<200) >>> �̷��� �ؾ� ����� �Ǻ��� ��
/*
#include<stdio.h>
int main(void)
{
	int x = 50;
	int y = 30;
	printf("x�� y���� ũ�� y�� 40 �̸��Դϱ�?%d\n", (x > y) && (y < 40)); // && >> and �� �ǹ�
	printf("x�� y���� �۰ų� y�� 30�Դϱ�?%d\n", (x < y) || (y == 30)); // || >> or �� �ǹ�
	printf("x�� 50�� �ƴմϱ�?%d\n", x != 50);
	return 0;
}


*/
//���ǿ�����
/*
#include<stdio.h>

int main(void)
{
	int x = -50; 
	int y = 30;
	int absoluteX = (x > 0) ? x : -x; // ��ȣ�� ������ ���̸� ������ �� ���� �����̸� ������ ���� ���õ� >> ������ ��ȯ�Ǵ� ����
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	printf("x�� ������ %d�̰� x�� y�� �ִ��� %d �ּڰ��� %d�Դϴ�.\n ", absoluteX, max, min);
	return 0;
}
*/
//pow������
/*
#include<stdio.h>
#include<math.h> // math���� pow �� abs���� ���а��ÿ����Լ��� ��

int main(void)
{
	double x = pow(2.0, 20);  // 2�� 20������ �ϰڴ�.
	printf("2�� 20������ %.0f �Դϴ�. \n", x); // %.0f >> �Ǽ��� ǥ�� %.0f�� ������ ����Ѵٴ� �ǹ� %.2f>> �Ҽ��� �ι�°���� ��Ÿ���ٴ� �ǹ� 
	return 0;
}
*/

//6��
//���ǹ�&&�ݺ���
/*
#include<stdio.h>

int main(void) 
{
	int x = -150;
	if (x < 0)
	{
		x = -x;
	}
	printf("x�� ������ %d�Դϴ�. ", x);
	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	int score = 97; // << ������ �ٲٸ� ��� ������� �ٲ�
	if (score >= 90)
	{
		printf("����� ������ A�Դϴ� .\n");
	}
	else if (score >= 80)
	{
		printf("����� ������ B�Դϴ� .\n");
	}
	else if (score >= 70)
	{
		printf("����� ������ C�Դϴ� .\n");
	}
	else  // if�� else if�� ��� �ش� ���� �ʴ°��
	{
		printf("����� ������ f�Դϴ�");
	}
	return 0;
}
*/

//7��

/*
//���� �˰���, �����̶� 4�⸶��, 100������϶��� �ƴ�, 400�� �����϶��� ������ ���� 
#include<stdio.h>

int main(void)
{
	int year = 2016;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d���� �����Դϴ�.\n", year);

	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
	return 0;
}
*/

//1���� 1000������ ���� ���غ���(while �� Ȱ��)
/*
#include<stdio.h>

int main(void)
{
	int x = 1;
	int sum = 0;
	while (x <= 1000)
	{
		sum = sum + x;
		x++;
	}
	printf("1���� 1000������ ���� %d�Դϴ�", sum);
	return 0;
}
*/
//�簢�� ����ϱ�( for�� ���)
/*
#include<stdio.h>
#define N 10 // ��� N �ʱ�ȭ

int main(void)
{
	int i, j;   //i�� j�ʱ�ȭ
	for (i = 0; i < N; i++) // i�ʱ�ȭ(�ʱⰪ) , �����߰�, �ݺ� (���ֳ����� ����)
	{
		

		for (j = 0; j<=N; j++)

		{
			printf("��");
		}
		printf("\n");

		
	}

	return 0;
}
*/
//�Ƕ�̵� ����ϱ�
/*
#include<stdio.h>
#define N 20
int main(void)
{
	int i, j;
	for (i = 0; i < N; i++) //20���� �ݺ��ϰڴ� >>> �Ƕ�̵� ���̼���
	{
		for (j = N - i - 1; j > 0; j--) // ������ ĭ�� ( ���� ������ ���� �Է¾��ص���, �� ���� ���鸸 ����ϸ� ��)
		{
			printf(" ");

		}
		for (j =0;j<i; j++ ) // ������ �Է�
		{
			printf("��");

		}
		for (j = 0; j < i-1; j++) // �߰����� ������ �Է�
		{
			printf("��");

		}
		printf("\n");
	}

	return 0;
	
}
*/
/*
#include<stdio.h>
#define S 10
int main(void)
{
	int x;
	int y;
		for (x = 1; x <= S; ++x)
		{
			for (y=x; y>0; y--) 
			{
				printf("*");
			}
			printf("\n");
	}
		
	return 0;
}
*/
//�𷡽ð�
/*
#include<stdio.h>
#define S 7
int main(void)
{
	int x;
	int y;
	for (x = 0; S - 2 * x > 0; x++) //0123 456
	{
		for (y = x; (y > 0) && (y < 4); y--) //0123
		{
			printf(" ");
		}
		for (y = S - 2 * x; y > 0; y--)
		{
			printf("*");

		}
		printf("\n");
	}
	for (x = 1; x <= 3; x++)
	{
		for (y = S - x; y > 4; y--)
		{
			printf(" ");
		}
		for (y = 1 + 2 * x; y > 0; y--)
		{
			printf("*");
		}
		printf("\n");

	}

	return 0;
}
*/
#include<stdio.h>

int main(void)
{
	int x = 7;
	printf("%d�� 7�Դϴ�", x);
		return 0;
}