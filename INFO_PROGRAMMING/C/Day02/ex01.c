#include <stdio.h>

int main(void) {
    // ���� �ڷ���
    // bit          : 0, 1���� �ڷḦ ��Ÿ���� �⺻����
    // char         : 1byte = 8bit = 2^8 = 256, -128~127
    // short        : 2byte
    // int          : 4byte
    // long         : 4byte
    // long long    : 8byte
    char ch1 = 'A';
    char ch2 = 65;
    // %?   : ���� ����
    // %c   : ���ڸ� ǥ���ϴ� ���Ĺ���
    // %d   : ������ ǥ���ϴ� ���Ĺ���
    printf("���� %c �ƽ�Ű �ڵ� �� : %d \n", ch1, ch1 );
    // �� �� ���� : alt + shift + ��
    printf("�ƽ�Ű �ڵ� ���� %d �� ���� %c \n", ch2, ch2 );
    
}