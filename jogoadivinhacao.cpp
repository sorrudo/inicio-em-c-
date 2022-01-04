 #include<iostream>
 using namespace std;
 
 
 int main () {
     cout << "****************************************" << endl;
     cout << "* Seja Bem Vindo Ao Jogo De Adivinhação *" << endl;
     cout << "****************************************" << endl;

     int numero_secreto = 42;

     cout << "Digite Um Número ?" << endl;
     int chute;

     cin >> chute;
     cout <<"O valor do seu chute é: " << chute << endl;

     if(chute ==numero_secreto){
         cout << "Parabéns você acertou o número !" << endl;
     }else {
         cout << "Infelizmente você errou o chute" << endl;
     }
 }
 