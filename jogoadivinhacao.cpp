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

    bool acertou = chute == numero_secreto;

     if(acertou){
         cout << "Parabéns você acertou o número !" << endl;
     }else {
         cout << "Infelizmente você errou o chute" << endl;
     }
 }
 