#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int i = 0;
	char nevEsNeptun[32], kisBetu[32], nagyBetu[32];
	
    FILE* fp;
    fp = fopen("neptunkod.txt", "w");
    fgets(nevEsNeptun, 32, stdin);
    fprintf(fp, "%s", nevEsNeptun);
    fclose(fp);

    fp = fopen("neptunkod.txt", "r");
    fgets(kisBetu, 32, fp);
    fclose(fp);
    
    for(i = 0; i < 32; i++) nagyBetu[i] = toupper(kisBetu[i]);
    
    fp = fopen("neptunkod.txt", "w");
    fprintf(fp, "%s", nagyBetu);
    fclose(fp);
    
	return 0;
}
