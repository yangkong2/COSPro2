///*
//극좌표계를 직교좌표계로 변환하는 프로그램
//*/
//
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//
//	//0. 변수 선언
//	double x = 0.0; // = 0.0(실수)으로 무조건 변수 초기화 시키기
//	double y = 0.0;
//	double r = 0.0;
//	double degree = 0.0;
//	double radian = 0.0;
//
//	//1. x좌표 입력
//	printf("x축 좌표를 실수로 입력하시오: ");
//	scanf_s("%lf", &x);
//
//	//2. y 좌표 입력
//	printf("y축 좌표를 실수로 입력하시오: ");
//	scanf_s("%lf", &y);
//
//	//3. r 값 계산
//	r = sqrt(x * x + y * y);
//
//	//4. degree 값 계산
//	radian = atan2(y, x);
//
//	//5. degree 값을 radian으로 계산
//	degree = radian * 180.0 / 3.14159;
//
//	//6. 결과 값 출력
//	printf("입력 좌표 (x, y): [%6.2lf, %6.2lf]\n", x, y);
//	printf("극좌표 r = %6.2lf\n", r);
//	printf("극좌표 각도 = %6.2lf\n", degree);
//
//
//	return 0;
//}