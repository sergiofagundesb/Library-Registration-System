/*O problema consiste em elaborar um cadastro para 20 livros, contendo as seguintes
informa��es: c�digo, t�tulo, autor, �rea, ano, editora, quantos exemplares dispon�veis?. Desenvolver um menu
com as seguintes op��es:
1. Cadastrar os livros.
2. Imprimir as informa��es dos livros.
3. Pesquisar livros por c�digo.
4. Ordenar os livros por ano.
5. Sair do programa.*/
// Irei desenvolver com aloca��o de mem�ria din�mica , fazendo o programa ser escal�vel
//Cada livro ter� um arquivo de texto(?) isso demoraria um ano para carregar tudo.
// que tal usar MySQL?
//quantos exemplares emprestados? etc? quem sabe... Primeiro fazer o MVP

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_BOOKS 20 // Ser� por aloca��o din�mica de mem�ria posteriormente!

void showUserMenu();
void choice(int option);
void signUpBook();
void showBooksList();
void scanBook(int code);

int booksAmount = 0;
int i;

struct book
{
	int code;
	char title[64];
	char author[64];
	char genre[64];
	int year;
	char publisher[32];
	int avaiableCopies;
};

struct book info[MAX_BOOKS]; //Later I intend to use malloc, pointers and all that stuff


int main(){
	setlocale(LC_ALL, "Portuguese");
	showUserMenu();
	return 0;
}
void showUserMenu()
{
	int keyword;
	int *ptr;
	printf("%p",*ptr);
	printf("[========== Sistema de Cadastro de Livros ==========]\n");
	printf("1. Cadastrar os livros.\n");
	printf("2. Imprimir as informa��es dos livros.\n");
	printf("3. Pesquisar livros por c�digo.\n");
	printf("4. Ordenar os livros por ano.\n");
	printf("5. Sair do programa.\n");
	scanf("%d",&keyword);
	choice(keyword);
	fflush(stdin);
}

void choice(int option)
{
	switch(option){
		case 1:
			signUpBook();
			break;
		case 2:
			printf("chegou aqui");
			showBooksList();
			break;
		case 3:
			int entrada;
			printf("Digite o c�digo a ser pesquisado: ");
			scanf("%d",&entry);
			scanNumber(entry);
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

void signUpBook()
{
	char answer;
	printf("Digite o c�digo do livro:\n");
	scanf("%d",&info[booksAmount].code);
	fflush(stdin);
	printf("Digite o nome do livro:\n");
	fgets(info[booksAmount].title,sizeof(info[booksAmount].title),stdin);
	fflush(stdin);
	printf(info[booksAmount].title);
	printf("Digite o autor\n");
	fgets(info[booksAmount].author,sizeof(info[booksAmount].author),stdin);
	fflush(stdin);
	printf("Digite a �rea/g�nero\n");
	fgets(info[booksAmount].genre,sizeof(info[booksAmount].genre),stdin);
	printf("Digite o ano:\n");
	scanf("%d",&info[booksAmount].year);
	fflush(stdin);
	printf("Digite a editora:\n");
	fgets(info[booksAmount].publisher,sizeof(info[booksAmount].publisher),stdin);
	printf("Digite a quantidade de exemplares do livro\n");
	scanf("%d",&info[booksAmount].avaiableCopies);
	fflush(stdin);
	system("cls");
	booksAmount++;
	printf("Cadastro do livro n�mero %d realizado com sucesso. Deseja cadastrar mais livros?(s/n) ",booksAmount);
	scanf(" %c",&answer);
	fflush(stdin);
	if(answer == 's' || answer == 'S')
	{
		signUpBook();
	}
	else if(answer == 'n' || answer == 'N')
	{
		showBooksList();
	}
	
}
void showBooksList()
{
	if(booksAmount == 0)
	{	
		system("cls");
		printf("\n[ERRO] N�o h� livros cadastrados\n");
		main();
	}
	for(i = 0; i < booksAmount; i++)
	{
		printf("================================");
		printf("C�digo: %d",info[booksAmount].code);
		printf("Nome: %s", info[booksAmount].title);
		printf("Autor: %s",info[booksAmount].author);
		printf("Tem�tica: %s",info[booksAmount].genre);
		printf("Ano de publica��o: %d",info[booksAmount].year);
		printf("Editora: %s",info[booksAmount].publisher);
		printf("Exemplares dispon�veis: %d", info[booksAmount].avaiableCopies);
		printf("=================================");
	}
	void 
} 