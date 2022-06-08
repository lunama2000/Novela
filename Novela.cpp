#include <iostream>
using namespace std;

int pregunta(string, string);

int main() {
  int amabilidad = 10;
  int fuerza = 10;
  cout << "Bienvenido, eres un caballero que fue reclutado para asesinar al dragon que esta atormentando el castillo del rey, en tu aventura tendras que tomar varias decisiones que te llevaran a lograr tu objetivo"<< endl << endl;

  cout << "Has llegado al pueblo y la primer persona que te encuentras es una viejita" << endl << endl;
  cout << "-Viejita: Hola caballero, se ve que eres nuevo por aqui, dejeme explicarle cual es nuestra situacion\n" << endl;

  switch(pregunta("Si cuenteme por favor", "Hagase a un lado señora")){
    case 1 : cout << "-Viejita: Pues hay un dragon en el castillo y ya, el escritor no le quiso dar mas lore al asunto xd\nSuerte" << endl; amabilidad+=1;break;
    case 2 : cout <<"-Viejita: Kmara" << endl; amabilidad-=1; break;
  }

  cout << endl << endl;
  //--------------------------------------------------

  cout << "Continuas caminando y llegas a una tienda de frutas, tienes mucha hambre pero no hay nadie atendiendo" << endl << endl;

  switch(pregunta("Ni modo buscare otra tienda donde si atiendan", "Voy a tomar esta manzana, nadie se dara cuenta")){
    case 1 : cout << "Volteas y te das cuenta que la viejita de antes te estaba viendo, por suerte no hiciste una locura" << endl; break;
    case 2 : cout <<"Te comes la manzana, volteas y te das cuenta que la viejita de antes te estaba viendo\n-Viejita: Ah kmara kmara porque tomas eso!?" << endl; amabilidad-=3; fuerza+=1;break;
  }

  cout << endl << endl;
  //--------------------------------------------------

    cout << "Sales corriendo porque la viejita te esta incomodando, para matar al dragon necesitas una espada asi que te acercas a una persona para preguntar donde puedes conseguir una" << endl << endl;
  if(amabilidad > 9){
    cout << "-Extraño: De hecho yo tengo una espada, quieres que te la preste?" << endl<< endl;
  }else{
    cout << "-Extraño: Mmmmm no te ves de fiar, pero yo tengo una espada, te la puedo vender" << endl<< endl;
  }

  switch(pregunta("Si, la quiero :D", "Creo que mejor buscaré algo mejor")){
    case 1 : cout << "-Extraño: Ten cuidala mucho, era de mi abuelo" << endl; fuerza+=3;break;
    case 2 : cout <<"-Extraño: Kmara" << endl; amabilidad-=1; fuerza-=1; break;
  }

  cout << endl << endl;
  //--------------------------------------------------

  
    cout << "Estas muy cansado y necesitas dormir un poco asi que llegas a una posada" << endl << endl;
  if(amabilidad > 9){
    cout << "-Posadero: Hola caballero, se ve que va a salvar al castillo, aqui hay una habitacion para usted" << endl<< endl;
    switch(pregunta("Muchas gracias, buenas noches", "No tendra algo que pueda comer? Muero de hambre")){
    case 1 : cout << "-Posadero: No hay de que" << endl; fuerza+=2; amabilidad+=1;break;
    case 2 : cout <<"-Posadero: Ten este baguette" << endl; fuerza+=4; break;
  }
  }else{
    cout << "-Posadero: Usted es el hombre del que me han hablado que ha sido muy grosero con las personas del pueblo? Larguese de mi negocio" << endl<< endl;
    switch(pregunta("Que grosero, yo no hice nada", "Lo voy a matar, aqui en corto aunque este cansado")){
    case 1 : cout << "-Posadero: Yo no me relaciono con foragidos" << endl; fuerza+=3;break;
    case 2 : cout <<"-Posadero: *c muere*" << endl; amabilidad-=5; fuerza-=1; break;
  }
  }


  cout << endl << endl;
  //--------------------------------------------------

  
    cout << "El que programo este juego se quedo sin ideas asi que con el poder el guion hace que el dragon se canse de esperar a vencerte, asi que va por ti y te enfrenta" << endl << endl;
  if(fuerza > 15){
    cout << "Durante tu aventura te la rifaste y comiste, descansaste y obtuviste los recursos necesarios para matar al dragon\n Yei" << endl<< endl;

    if(amabilidad > 8){
      cout << "Tambien te las arreglaste para ser amable con las personas del pueblo, asi que todos te quieren y te agradecen por haberlos salvado, este es el final feliz :) todos te dan un bsote\nUwU" << endl << endl;
    }else{
      cout << "Pero te pasaste de lanza con la banda del pueblo y aunque los salvaste del dragon, como que caes mal y entre todos te cholearon hasta matarte XD\nGAME OVER" << endl << endl;
    }
    
  }else{
    cout << "La neta como que no la armaste y estas muy debil, el dragon te mato XD\nGAME OVER" << endl<< endl;
    
  }


  cout << endl << endl;
  //--------------------------------------------------
}

int pregunta(string a, string b){
  int resp = 0;
  while (resp < 1 || resp > 2){
    cout << "Tu dices...\n";
      cout << " 1) " << a << endl << " 2) " << b << endl;
    cin >> resp;
  }

  cout << endl;
  switch(resp){
    case 1 : cout << "-Tu: " << a << endl; break;
    case 2 : cout <<"-Tu: " << b << endl; break;
  }
  return resp;
}