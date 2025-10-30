#include <stdio.h>
// terbagi menjadi 4 bagian
// 1. pojok keri atas
// 2. pojok kanan atas
// 3. pojok kiri bawah
// 4. pojok kanan bawah

void menu()
{
	printf("== program untuk print bintang ==");
	printf("\n");
	printf("terbagi menjadi 4 bagian \n");
	printf("1. Pojok kiri atas \n");
	printf("2. Pojok kanan atas \n");
	printf("3. Pojok kiri bawah \n");
	printf("4. Pojok kanan bawah \n");
	printf("5. Exit \n");
	printf("\n");
	printf("pilih: ");
}

int main(void)
{
	int i, j, rows, space, choose, counter = 1;
	do
	{
		menu();

		if (scanf("%i", &choose) != 1) // meminta user menginput baris
			return 0;
		switch (choose)
		{
		case 1:
			printf("1. siku-siku di pojok kiri atas\n");
			printf("contoh bintang ketika baris = 3\n");
			printf("\n");
			printf("***\n");
			printf("**\n");
			printf("*\n");
			printf("\n");

			printf("silahkan masukan baris: "); if (scanf("%i", &rows) != 1) // meminta user menginput baris
				return 0;													// value baris disimpan
			//
			for (i = rows; i >= 1; i--) // (1.1)
			{
				for (j = i; j >= 1; j--) // (1.2)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		case 2:
			printf("\n");
			printf("2. siku-siku di pojok kanan atas\n");
			printf("contoh bintang ketika baris = 3\n");
			printf("\n");
			printf(" ***\n");
			printf("  **\n");
			printf("   *\n");
			printf("\n");
			printf("silahkan masukan baris: ");
			if (scanf("%i", &rows) != 1)
				return 0;
			for (i = rows; i >= 1; i--)
			{

				for (space = i; space <= rows; space++)
				{
					printf(" "); // (2.1)
				}
				for (j = i; j >= 1; j--)
				{
					printf("*"); // akan print "*" sebanyak apakah i setara dengan 1?
				}
				printf("\n");
			}
			break;
		case 3:
			printf("\n");
			printf("3. siku-siku di pojok kiri bawah \n");
			printf("contoh bintang ketika baris = 3 \n");
			printf("\n");
			printf("*\n");
			printf("**\n");
			printf("***\n");
			printf("\n");
			printf("silahkan masukan baris: ");
			if (scanf("%i", &rows) != 1)
				return 0;

			for (i = 1; i <= rows; i++)
			{
				for (j = 1; j <= i; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		case 4:

			printf("\n");
			printf("4. siku-siku di pojok kanan bawah \n");
			printf("contoh bintang ketika baris = 3 \n");
			printf("\n");
			printf("   *\n");
			printf("  **\n");
			printf(" ***\n");
			printf("\n");
			printf("silahkan masukan baris: ");
			if (scanf("%i", &rows) != 1)
				return 0;

			for (i = 1; i <= rows; i++)
			{
				for (space = rows; space >= i; space--)
				{
					printf(" ");
				}
				for (j = 1; j <= i; j++)
				{
					printf("*");
				}
				printf("\n");
				break;
			}
		case 5:
		printf("Terima kasih");
			counter = 0;
		default:
			break;
		}
	} while (counter != 0);

	return 0;
}

// 1.1 : baris ini berfungsi untuk meng print baris, dan dibaca untuk i sama dengan baris, apakah i lebih besar sama dengan 1? jika iya i dikurang 1

// 1.2 : perulangan ini berfungsi untuk menampilkan "*" dimana j adalah i (nilai i akan terus berkurang ), jika j lebih besar dari i, j akan dikurang

// 2.1 : akan print spasi dari 1 sampai rows