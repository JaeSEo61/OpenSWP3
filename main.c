#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main()
{
	int choice = 0;
	printf("Utiliy Pack(������ ���� ����)\n");
	printf("1. ���� ��ȯ��	2. ���� ����	3. ���� ��� ����	4. ���ڿ� ó�� ����	5. ���� ��й�ȣ ������\n\n");

	printf("���ϴ� ������ ��ȣ�� �Է��ϼ���: ");
	scanf("%d", &choice);
	printf("\n");
	switch (choice)
	{
	case 1:
		printf("1�� ���� ��ȯ�⸦ �����ϼ̽��ϴ�.\n");
		// ���� ��ȯ�� ��� ����
		break;
	case 2:
		printf("2�� ���� ���⸦ �����ϼ̽��ϴ�.\n");
		// ���� ���� ��� ����
		break;
	case 3:
		printf("3�� ���� ��� ���⸦ �����ϼ̽��ϴ�.\n");
		// ���� ��� ���� ��� ����
		break;
	case 4:
		printf("4�� ���ڿ� ó�� ������ �����ϼ̽��ϴ�.\n");
		// ���ڿ� ó�� ��� ����
		break;
	case 5:
		printf("5�� ���� ��й�ȣ �����⸦ �����ϼ̽��ϴ�.\n");
		// ���� ��й�ȣ ������ ��� ����
		break;
	default:
		printf("�߸��� �����Դϴ�. ���α׷��� �����մϴ�.\n");
		break;
	}
}
