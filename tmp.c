// 1번
/*
#include <stdio.h>

int main()
{
	int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 1; i <= sizeof(days) / sizeof(int); i
		printf("%d월은 %d일까지 있습니다.\n", i, days[i - 1
}
*/

// 2번 *
/*
// int arr[n]와 같은 변수를 통한 가변적인 길이의 배열 선언은 c99의 경우 가능할텐데
// 왜 안되는지 모르겠음
// 안되는 이유 확인 아래에 서술함
// GCC, Clang 컴파일러에서는 VLA 지원, MSVC는 VLA를 지원하지않음
// OJ system은 우분투 기반 서버로 GCC 컴파일러를 사용하므로 VLA 사용 가능
// visual studio 2022는 MSVC를 사용할 것으로 추정됨
// visua studio에서는 동적 배열의 사용이 불가하므로 상수로 선언하되
// 사용 범위를 변수로 제한함

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int n;
	printf("입력할 정수의 개수:");
	scanf("%d", &n);

	int arr[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		printf("%d번째 요소를 입력하시오:", i);
		scanf("%d", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
}
*/

// 3번
/*
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int n;
	printf("입력할 정수의 개수:");
	scanf("%d", &n);

	int arr[MAX_SIZE], sum = 0;
	for (int i = 0; i < n; i++)
	{
		printf("%d번째 요소를 입력하시오:", i);
		scanf("%d", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--)
		sum += arr[i];
	printf("합=%d", sum);
}
*/

// 4번
/*
#include <stdio.h>

int main()
{
	int min, max;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &arr[i]);
	}
	min = max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	printf("최대값=%d 최소값=%d", max, min);
}
*/

// 5번
/*
#include<stdio.h>

int main()
{
	int score[3][4] = {
		{1, 30, 10, 11},
		{2, 40, 90, 32},
		{3, 70, 65, 56},
	}; // 학번 test1 test2 test3

	double sumScore[3];

	for (int i = 0; i < 3; i++)
	{
		sumScore[i] = 0.0;
		for (int j = 1; j < 4; j++)
			sumScore[i] += score[i][j];
		printf("학번 %d의 평균 점수 = %.f\n", score[i][0], sumScore[i] / 3);
	}
}
*/

// 6번
/*
#include	<stdio.h>

int main()
{
	int gugudan[10][10];
	for (int i = 1; i <= 10; i++)
		for (int j = 1; j <= 10; j++)
			gugudan[i - 1][j - 1] = i * j;
	int r, c;
	printf("알고싶은 구구단을 입력하시오(예: 9 3): ");
	scanf("%d %d", &r, &c);
	printf("%dX%d=%d", r, c, gugudan[r - 1][c - 1]);
}
*/

// 7번
/*
#include <stdio.h>
#define MAX_SIZE 10

int main()
{
	int r, c;
	printf("행 개수=");
	scanf("%d", &r);
	printf("열 개수=");
	scanf("%d", &c);

	int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE];

	printf("첫 번째 행렬 입력=\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	printf("두 번째 행렬 입력=\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			scanf("%d", &b[i][j]);

	int result[MAX_SIZE][MAX_SIZE];
	// 행렬곱 ab = c
	// c[i][j] = sum(k) a[i][k]*b[k][j]
	// 위에서 선언한 c와 이름이 겹치므로 c 배열의 이름을 result로 선언
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			result[i][j] = 0;
			for (int k = 0; k < c; k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d	", result[i][j]);
		}
		printf("\n");
	}
}
*/

// 8번
/*
#include <stdio.h>
#define MAX_SIZE 10

int main()
{
	int r, c;
	printf("행 개수=");
	scanf("%d", &r);
	printf("열 개수=");
	scanf("%d", &c);

	int a[MAX_SIZE][MAX_SIZE];

	printf("행렬 입력=\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d	", a[j][i]);
		}
		printf("\n");
	}
}
*/

// 9번
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_COUNT 100

int main()
{
	int a[10] = { 0 };
	int num;

	srand(time(NULL));

	for (int i = 0; i < NUM_COUNT; i++)
	{
		num = rand() % 10;
		a[num]++;
	}

	int maxIdx = 0;

	for (int i = 1; i < 10; i++)
		if (a[maxIdx] < a[i])
			maxIdx = i;

	printf("가장 많이 생성된 수=%d", maxIdx);
}
*/

// 10번
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ROLLS 60000

int main()
{
	int count[6] = { 0 };
	int dice;

	srand(time(NULL));

	for (int i = 0; i < NUM_ROLLS; i++)
	{
		dice = rand() % 6;
		count[dice]++;
	}

	printf("===============================\n");
	printf("주사위면\t\t빈도\t\n");
	printf("===============================\n");

	for (int i = 0; i < 6; i++)
		printf("   %d\t\t\t%d\n", i + 1, count[i]);
}
*/

// 11
#include <stdio.h>

int main()
{
	int count[100] = { 0 }, n, tmp;
	printf("입력할 정수의 개수(100개 이내로):");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d번째 요소를 입력하시오:", i);
		scanf("%d", &tmp);
		count[tmp]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (count[i] != 0)
		{
			printf("%d 값은 %d 번 등장", i, count[i]);
		}
	}
}
