#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	char arr[80]; //OX �� ���ڿ�
	int score = 0;
	int sum = 0;
	int N; // �׽�Ʈ ���̽� ��
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr;// �迭�� ���ڿ� �Է�

		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				score++; // ���� ����
				sum += score; // ���� ����

			}
			if (arr[j] == 'X') {
				score = 0; // ���� �ʱ�ȭ
			}
		}
		cout << sum << endl;
		sum = 0; // sum �ʱ�ȭ
		score = 0; // ���� ������ �ʱ�ȭ

	}
	return 0;
}