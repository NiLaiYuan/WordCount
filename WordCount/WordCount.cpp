#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) {
	int word = 0;
	int ch = 0;
	char c;
	int last = 0;
	FILE* file = NULL;
	fopen_s(&file, "D:\\Teaching Assistant\\GitTest\\WordCount\\input.txt", "r");

	while ((c = fgetc(file)) != EOF) {
		ch++;
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{

			if (last == 0) {
				word++;
				last = 1;
			}

		}
		else
		{
			last = 0;
		}
	}
	if (strcmp(argv[1], "-c") == 0) {
		printf("字符数为%d", ch);

	}
	if (strcmp(argv[1], "-w") == 0) {
		printf("单词数为%d", word);
	}
}