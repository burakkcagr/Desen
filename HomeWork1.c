/*
Klavyeden
height
ve
width
değişkenleri için sayılar okuyunuz ve aşağıdaki deseni oluşturunuz:
|*  |
| * |
|  *|
| * |
|*  |
| * |
|  *|
| * |
|*  |
| * |
|  *|
| * |
|*  |
| * |
Burada height toplam satırların sayısı width ise |
karakterlerinin arasındaki karakter alanı sayısıdır.
*/

#include <stdio.h>

//void disp_line(int width, int pos);
//
//int main(void)
//{
//	int width, height, pos, direction;
//
//	printf("Height:");
//	scanf("%d", &height);
//	
//	printf("Width:");
//	scanf("%d", &width);
//	
//	pos = 0;
//	direction = 1;
//
//	for (int i = 0; i < height; i++)
//	{
//		disp_line(width, pos);
//
//		if (pos == width - 1)
//			direction = -1;
//		else if (pos == 0)
//			direction = 1;
//
//		pos += direction;
//	}
//
//	return 0;
//}

//void disp_line(int width, int pos)
//{
//	putchar('|');
//
//	for (int i = 0; i < width; i++)
//		if (i == pos)
//			putchar('*');
//		else
//			putchar(' ');
//
//	putchar('|');
//	putchar('\n');
//
//}

int main(void)
{
	int width, height, pos, direction;

	printf("Height:");
	scanf("%d", &height);

	printf("Width:");
	scanf("%d", &width);

	pos = 0;
	direction = 1;

	for (int i = 0; i < height; ++i)
	{
		putchar('|');

		for (int	k = 0; k < width; ++k)
			if (k == pos)
				putchar('*');
			else
				putchar(' ');

		putchar('|');
		putchar('\n');

		if (pos == width - 1)
			direction =	-1;
		else if	(pos == 0)
			direction = 1;

		pos += direction;
	}

	return 0;
}