#include<stdio.h>

int num;

void subset(int n) {
	if (n > num)
	{
		return;
	}
	else {
		printf("%d ", n);
		subset(n + 1);

	}
}
int main() {


	scanf("%d", &num);
	subset(1);

	//�κ������� ����: 2�� num���� -1 (�������� ���ϱ�) 

	return 0;
}