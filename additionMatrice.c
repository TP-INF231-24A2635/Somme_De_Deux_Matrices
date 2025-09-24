#include<stdio.h>
//fonction de remplissage des matrices par l'utilisateur
void initialisation(int l, int c, float m[l][c]){
	int i,j;

	printf("\nNB: le remplissage de la matrice se fait par les lignes de la gauche vers la droite:\n");
	for(i=0 ;i<l ;i++)
		for(j=0 ;j<c ;j++)
			scanf("%f",&m[i][j]);
			
}

int main(){
	int i,j,l,c;
	
	printf("entrer le nombre de ligne et le nombre de colone des matrices que vous souhaiter additiner: ");
	scanf("%d %d",&l,&c);
	
	//declaration des matrices 
	float m1[l][c], m2[l][c], m[l][c];
	
	printf("\nEntrez les coeficients de la premiere matrice");
	initialisation(l,c,m1);
	printf("\nEntrez les coeficients de la deuxieme matrice");
	initialisation(l,c,m2);
	
	//remplissage de la matrice resultante de l'addition des deux autres
	for(i=0 ;i<l ;i++){
		for(j=0 ;j<c ;j++)
			m[i][j] = m1[i][j] + m2[i][j];
	}
	
	//affichage des resultat
	printf("\n");
	printf("la matrice resultante de la somme de c'est deux matrices est la suivante:\n");
	for(i=0 ;i<l ;i++){
		printf("(");
		for(j=0 ;j<c ;j++)
			printf("%.2f ",m[i][j]);
		printf(")");
		printf("\n");
	}

return 0;
}
