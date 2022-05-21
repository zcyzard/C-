//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////A、B、C、D、E、F六人,尽可能多挑人，A、B至少一个,A、D不能同时去,
////A、E、F要去两人,BC都去或都不去,CD去一个,若D不去,E也不去,最多去多少人？
//int main()
//{
//	//1表示去,0表示不去
//	int a, b, c, d, e, f;
//	for (a = 0; a <= 1; a++)
//		for (b = 0; b <= 1; b++)
//			for (c = 0; c <= 1; c++)
//				for (d = 0; d <= 1; d++)
//					for (e = 0; e <= 1; e++)
//						for (f = 0; f <= 1; f++)
//							if ((a + b) >= 1 && (a + d) <= 1 && (a + e + f) == 2 && ((b + c == 2) || (b + c == 0)) && (c + d == 1) && (d + e == 0))
//							{
//								if (a == 1)
//									printf("A ");
//								if (b == 1)
//									printf("B ");
//								if (c == 1)
//									printf("C ");
//								if (d == 1)
//									printf("D ");
//								if (e == 1)
//									printf("E ");
//								if (f == 1)
//									printf("F ");
//							}
//}