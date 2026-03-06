#include <stdio.h>
#include <stdlib.h>

int sort(const void* x, const void* y);

struct box {
	int x;
	int y;
}m[100001];

int main() {
	int N;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &m[i].x, &m[i].y);
	}

	qsort(m, N, sizeof(struct box), sort);

	for (int i = 0; i < N; i++) printf("%d %d\n", m[i].x, m[i].y);

	return 0;
}


int sort(const void* x, const void* y) {
	struct box* a = (struct box*)x;
	struct box* b = (struct box*)y;

	if (a->x != b->x) return a->x - b->x;
	// x좌표가 다르다면, x좌표를 빼서 비교 -> 작은값이 앞으로 감 (구조체 자체가 바뀜)
	return a->y - b->y;
	// x좌표가 같다면, y좌표를 빼서 비교 -> 작은값이 앞으로 감
}