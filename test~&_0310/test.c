#define _CRT_SECURE_NO_WARNINGS

// ~ ��λ��
// | ��λ��
// &  ��λ��
//�����Զ����ƵĲ�����ʽ�����ڴ�
//eg: ������ԭ�벹�뷴����ͬ  
//    ����-1��  10000000000000000000000000000001ԭ��  11111111111111111111111111111110���� 
//     ��ȡ�����ټ�+1�ó�����   11111111111111111111111111111111

#include<stdio.h>

int main()
{
	//int a = 1;
	////00000000000000000000000000000001 1��ԭ��
	////00000000000000000000000000000001 1�Ĳ���
	////11111111111111111111111111111110 ����~a
	//// �ȼ�һ����ȡ���ó�������ԭ�� ���ܴ�ӡ��ԭ�루ϵͳ����ǲ��룩
	////�ȼ�1->   11111111111111111111111111111101
	////��ȡ��->  10000000000000000000000000000010   (��һλ1���䣬��Ϊ1��������ֵ�� ���ӦΪ-2
	//printf("%d", ~a);

	int a = 13;

	//a |= (1 << 1);

	////00000000000000000000000000001101   13��ԭ��
	////00000000000000000000000000000010   ����һλ
	////00000000000000000000000000001111    ����ڣ����ӦΪ15
	//printf("%d", a);


	a &= (~(1 << 4));

	//00000000000000000000000000010000   ������λ
	//11111111111111111111111111101111   ȡ��
	//00000000000000000000000000001101   13��ԭ��
	//00000000000000000000000000001101   ȥand�� ���a=13

	printf("%d", a);




	return 0;
}