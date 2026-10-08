#include<iostream>
#include<string>

using namespace std;

float calcMedia(float n1, float n2){
    float media;
    media=(n1+n2)/2;
    return(media);
}


//=-=-=Corpo principal do programa=-=-=
int main(){
    float nota1, nota2, media;
    cout<<"nota 1 ="; cin>>nota1;
    cout<<"nota 2 ="; cin>>nota2;
    //=-=-=chamando a função para o calculo =-=-=
    media=calcMedia(nota1,nota2);
	cout<<"Media= "<<media;
}