#include <stdio.h>
#include <stdlib.h>

int sort(const void* p1, const void* p2);

struct box {
	int age;
	char name[101];
	int id; // 입력순서
}m[100001];

int main() {
	int N;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d %s", &m[i].age, m[i].name);
		m[i].id = i;
	}

	qsort(m, N, sizeof(struct box), sort);

	for (int i = 0; i < N; i++) printf("%d %s\n", m[i].age, m[i].name);

	return 0;
}


int sort(const void* p1, const void* p2) {
	struct box* a = (struct box*)p1;
	struct box* b = (struct box*)p2;

	if (a->age != b->age) return a->age - b->age;
	// 나이가 다르다면, 나이를 빼서 비교 -> 작은값이 앞으로 감
	return a->id - b->id;
	// 나이가 같다면, 가입순서를 빼서 비교 -> 작은값이 앞으로 감
}