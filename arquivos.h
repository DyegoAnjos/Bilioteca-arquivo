/*Biblioteca feita por Dyego dos Anjos Cordeiro*/
/*versão 2.0 ajustes em nomes*/

/*
	A biblioteca "arquivo.h" tem funções que usam struct como parâmetros, será necessário adicionar a struct usada e mudar
	o tipo da struct nas funções e caso você não esteja usando uma biblioteca que tenha a sua struct você terá que adicionar
	ela aqui no arquivo.
*/



int ArqDeletarStc(/*tipo da struct*/ *Struct, int tamanho, int deletar, char *arquivoNome){
	
	FILE *arquivo;
	
	for(int i=deletar;i<=tamanho;i++){
		Struct[i]=Struct[i+1];
	}
	
	arquivo=fopen(arquivoNome, "w");
	for(int i=0;i<tamanho;i++){
		fwrite(&Struct[i],sizeof(struct /*tipo da struct*/),1,arquivo);
	}
	fclose(arquivo);
	tamanho--;
	if(tamanho<0){
		remove(arquivoNome);
		arquivo=fopen(arquivoNome,"w");
		fclose(arquivo);
	}
		
	return tamanho;
}

int ArqEscreverStc(/*tipo da struct*/ *Struct, int tamanho, char *arquivoNome, char *metodo){
	FILE *arquivo;
	
	arquivo=fopen(arquivoNome, metodo);
	if(arquivo== NULL)
		return -1;
	
	for(int i=0;i<=tamanho;i++)
		fwrite(&Struct[i],sizeof(struct /*tipo da struct*/),1,arquivo);
	
	
	fclose(arquivo);
	return 1;
}

int ArqLerStc(/*tipo da struct*/ *Struct, char *arquivoNome){
	FILE *arquivo;
	
	int i=-1;
	arquivo=fopen(arquivoNome, "r");
	if(arquivo == NULL)
		return -1;
	
	while(!feof(arquivo)){
		i++;	
		fread(&Struct[i],sizeof(struct /*tipo da struct*/),1,arquivo);
	}
	fclose(arquivo);
	return i-1;
}
