#include "LinkedPoly.h"
#include "LinkedPoly.c"

int main(void) {
	ListHead* A, * B, * C;

	// ���� ���׽� ����Ʈ A, B, C ����
	A = createLinkedList();
	B = createLinkedList();
	C = createLinkedList();

	appendTerm(A, 4, 3);	// ���׽� ����Ʈ A�� 4x3 ��� �߰�
	appendTerm(A, 3, 2);	// ���׽� ����Ʈ A�� 3x2 ��� �߰�
	appendTerm(A, 5, 1);	// ���׽� ����Ʈ A�� 5x1 ��� �߰�
	printf("\n A(x) =");
	printPoly(A);			// ���׽� ����Ʈ A ���

	appendTerm(B, 3, 4);	// ���׽� ����Ʈ B�� 3x4 ��� �߰�
	appendTerm(B, 1, 3);	// ���׽� ����Ʈ B�� 1x3 ��� �߰�
	appendTerm(B, 2, 1);	// ���׽� ����Ʈ B�� 2x1 ��� �߰�
	appendTerm(B, 1, 0);	// ���׽� ����Ʈ B�� 1x0 ��� �߰�
	printf("\n B(x) =");
	printPoly(B);			// ���׽� ����Ʈ B ���

	addPoly(A, B, C);		// ���׽��� ���� ���� ����
	printf("\n C(x) =");
	printPoly(C);			// ���׽� ����Ʈ C ���

	getchar();  return 0;
}