#include <stdio.h>
#include <ctype.h>

void betuValto(char a[], char b[], char c[])
{
	int i = 0;
	FILE* fp;
    fp = fopen("i68u3h.txt", "w");
    fgets(a, 32, stdin);
    fprintf(fp, "%s", a);
    fclose(fp);

    fp = fopen("i68u3h.txt", "r");
    fgets(b, 32, fp);
    fclose(fp);
    
    for(i = 0; i < 32; i++) c[i] = toupper(b[i]);
    
    fp = fopen("i68u3h.txt", "w");
    fprintf(fp, "%s", c);
    fclose(fp);
}
	

int main(int argc, char **argv)
{
	char nevEsNeptun[32], bejovo[32], kimeno[32];
	betuValto(nevEsNeptun, bejovo, kimeno);
	return 0;
}
