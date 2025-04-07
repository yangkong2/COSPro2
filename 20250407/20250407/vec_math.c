/*
벡터 합과 내적, 외적 계산프로그램
*/

#include <stdio.h>
#include <math.h>

int main(void)
{

	//0. 변수 선언
	double x1 = 0.0; // = 0.0(실수)으로 무조건 변수 초기화 시키기
	double y1 = 0.0;
	double x2 = 0.0;
	double y2 = 0.0;
	double sum_x = 0.0;
	double sum_y = 0.0;
	double dot_product = 0.0;
	double cross_product = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;
	double const pi = 3.14159;

	//1. 첫 번째 벡터 입력 받기
	printf("첫 번째 벡터 입력 받기\n");
	printf("x1 값을 입력하시오: ");
	scanf_s("%lf", &x1);
	printf("y1 값을 입력하시오: ");
	scanf_s("%lf", &y1);

	//2. 두 번째 벡터 입력 받기
	printf("\n두 번째 벡터 입력 받기\n");
	printf("x2 값을 입력하시오: ");
	scanf_s("%lf", &x2);
	printf("y2 값을 입력하시오: ");
	scanf_s("%lf", &y2);
	

	//3. 벡터의 합 계산
	sum_x = x1 + x2;
	sum_y = y1 + y2;
	

	//4. 벡터의 내적 계산
	dot_product = (x1 * x2) + (y1 * y2);
	

	//5. 벡터의 외적 계산
	cross_product = (x1 * x2) - (y1 * y2);

	//6. 결과 값 출력
	printf("\n2차원 내적: %lf", dot_product);
	printf("\n2차원 외적: %lf", cross_product);

	//7. 3차원으로 확장
	double z1 = 0.0;
	double z2 = 0.0;
	double sum_z = 0.0;
	printf("\n세 번째 벡터 입력 받기\n");
	printf("z1 값을 입력하시오 : ");
	scanf_s("%lf", &z1);
	printf("z2 값을 입력하시오: ");
	scanf_s("%lf", &z2);
	sum_z = z1 + z2;

	//각도값 계산
	angle_radian = atan2(sum_y, sum_x);

	//각도값을 radian으로 계산
	angle_degree = angle_radian * 180.0 / pi;

	//벡터의 내적 계산
	dot_product = sum_x * sum_y * cos(angle_degree);

	//벡터의 외적 계산 (2차원 벡터의 외적은 스칼라 값으로, z축 방향의 크기를 나타냅니다)
	cross_product = sum_x * sum_y * sin(angle_degree);


	printf("3차원 내적: %6.2lf", dot_product);

	printf("\n3차원 외적: %6.2lf", cross_product);


	return 0;
}