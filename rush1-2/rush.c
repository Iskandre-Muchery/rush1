/*
** EPITECH PROJECT, 2017
** rush.c
** File description:
** rush
*/
void	my_putchar(char);

void	write(int,char*,int);

void	makeFirstLigne(int i,int colonne)
{
	if (i == colonne)
		my_putchar('/');
	if (i > 1 && i < colonne)
		my_putchar('*');
	if (i == 1)
		my_putchar('\\');
}

void	makeCorpLigne(int i,int colonne)
{
	if (i == colonne)
		my_putchar('*');
	if (i != 1 && i != colonne)
		my_putchar(' ');
	if (i == 1)
		my_putchar('*');
}

void	makeLastLigne(int i,int colonne)
{
	if (i == colonne)
		my_putchar('\\');
	if (i > 1 && i < colonne)
		my_putchar('*');
	if (i == 1)
		my_putchar('/');
}

void	rush(int colonne, int ligne)
{
	int i = colonne;
	int j = ligne;

	if (colonne == 0 || ligne == 0)
	{
		write(1,"Invalid size",12);
		my_putchar('\n');
		return;
	}
	else if (ligne == 1)
	{
		while (i > 0)
		{
			my_putchar('*');
			i--;
		}
		my_putchar('\n');
	}
	else if (colonne == 1)
	{
		while (j > 0)
		{
			my_putchar('*');
			my_putchar('\n');
			j--;
		}
	}
	else {
		while (j > 0)
		{
			while (i > 0)
			{
				if (j == ligne)
				{
					makeFirstLigne(i,colonne);
				}
				if (j != 1 && j != ligne)
				{
					makeCorpLigne(i,colonne);
				}
				if (j == 1)
				{
					makeLastLigne(i,colonne);
				}
				i--;
			}
			my_putchar('\n');
			j--;
			i = colonne;
		}
	}
}
