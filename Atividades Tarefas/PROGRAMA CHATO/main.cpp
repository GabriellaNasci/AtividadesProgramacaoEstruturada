#include <iostream>
#include <locale>
#include <cstring>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
 setlocale(LC_ALL,"Portuguese");
 char resposta1,resposta3,resposta4,resposta7;
 string nome,paciencia,resposta8,resposta9,senha,resposta10,resposta11;
 int i,resposta5,resposta6,tentativas;



 //PERGUNTA 1
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 1- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bora come�ar a bater um papo? (S/N)"<<endl;
  cin>>resposta1;
  resposta1=toupper(resposta1);
  if (resposta1=='S'){
    cout<<"Voc� n�o tinha escolha mesmo ;)"<<endl;
  }
  else {
    cout<<"Resposta errada. "<<endl;
    cout<<"Vamos conversar voc� querendo ou n�o (longe de amea�as, claro!)."<<endl;
  }




//PERGUNTA 2
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 2- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Ca� de paraquedas e nem perguntei seu nome, n�o � mesmo? Que rudeza minha. "<<endl;
  cout<<"Ent�o me diga, criatura estranh�ssima humanoide, qual o seu nome? "<<endl;
  cin.ignore();
  getline(cin, nome);
  cout<<endl;
  cout<<"Que d�... At� se bater a m�o no teclado sai um nome melhor que o seu :P"<<endl;



//PERGUNTA 3
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 3- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Mas enfim... Geralmente, antes de amigar, eu aviso para a pessoa que para ser "<<endl;
  cout<<"meu best voc� tem que ter bastante paci�ncia ..."<<endl;
  cout<<endl;
  cout<<"Ent�o eu te fa�o uma pergunta, voc� tem paci�ncia? (S/N)"<<endl;
  cin>>resposta3;
  resposta3=toupper(resposta3);
  switch(resposta3){
     case'S':{
      do {
       if(resposta3=='S'){
          cout<<"Tem certeza? (S/N)"<<endl;
          cin>>resposta3;
          resposta3=toupper(resposta3);

            if(resposta3=='S'){
             cout<<"Absoluta? (S/N)"<<endl;
             cin>>resposta3;
             resposta3=toupper(resposta3);

             if(resposta3=='S'){
               cout<<"S�rio s�rio mesmo? (S/N)"<<endl;
               cin>>resposta3;
               resposta3=toupper(resposta3);

               if(resposta3=='S'){
                  cout<<"????  (S/N)"<<endl;
                  cin>>resposta3;
                  resposta3=toupper(resposta3);
                     if (resposta3=='S'){
                       cout<<"o.o?? (S/N)"<<endl;
                       cin>>resposta3;
                      resposta3=toupper(resposta3);
                         if (resposta3=='S'){
                           cout<<"Ent�o t� bom, vou confiar. Se voc� estiver mentindo talvez voc� n�o me aguente nos pr�ximos minutos."<<endl;
                           cout<<"Aviso dado -_-"<<endl;
                           break;
                         }
                    }
               }
            }
          }
        }else if(resposta3=='N'){
          cout<<"Pois agora voc� vai ter que ter. Repita comigo 20 vezes: 'Eu tenho paci�ncia'"<<endl;
          for (i=0;i<5;i++){
             cin.ignore();
             getline(cin,paciencia);
          }
          cout<<"Fui gentil com voc� ao deixar voc� escrever s� 5 vezes n�o � mesmo? Me agrade�a depois :)"<<endl;
          break;
          }
     }while(true);
     }
    break;
    case 'N':{
      cout<<"Pois agora voc� vai ter que ter. Repita comigo 20 vezes: 'Eu tenho paci�ncia'"<<endl;
          for (i=0;i<5;i++){
             cin.ignore();
             getline(cin,paciencia);
          }
          cout<<"Fui gentil com voc� ao deixar voc� escrever s� 5 vezes n�o � mesmo? Me agrade�a depois :)"<<endl;
    }
  }




  //PERGUNTA 4
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 4- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Pois bem, agora que sei o mais importante, eu quero te fazer uma outra pergunta... "<<endl;
  cout<<"Voc� gostaria de ganhar uma surpresa? (S/N)"<<endl;
  cin>>resposta4;
  resposta4=toupper(resposta4);
    if (resposta4=='S'){
    cout<<"Intereceiro(a) voc�, n�o � mesmo?!"<<endl;
    cout<<"Mas para voc� receber essa surpresa voc� tem que me aguentar at� o final da conversa em!"<<endl;
    cout<<"Nada vem de gra�a n�o � mesmo?! "<<endl;
  }
  else {
      if(resposta4=='N'){
    cout<<"Conta outra, at� eu quero ganhar uma surpresa! "<<endl;
    cout<<"Mas de qualquer forma, me aguente at� o final da nossa conversa que voc� ir� receber ela!"<<endl;
      }
  }




//PERGUNTA 5
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 5- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Pois bem, agora que que temos um trato, vamos conhecer mais sobre voc�... "<<endl;
  cout<<endl;
  cout<<"Em que voc� � bom? (Escolha conforme os n�meros)"<<endl;
  cout<<"01-Rolar o feed do TikTok e outras redes sociais"<<endl;
  cout<<"02-Dormir"<<endl;
  cout<<"03-Comer"<<endl;
  cout<<"04-Reclamar da vida"<<endl;
  cout<<"05-Estudar"<<endl;
  cin>>resposta5;
  switch(resposta5){
   case 01:{
     cout<<"Bem �nico, ainda bem! -_-"<<endl;
     cout<<"S� � igual ao restante do mundo, pouquinha gente n�o � mesmo?"<<endl;
   }
   break;
   case 02:{
     cout<<"N�o parece muito, j� que voc� est� parecendo um panda com o tamanho das olheiras."<<endl;
     cout<<"Deixa eu adivinhar,voc� � um(a) programador(a) n�o � mesmo?"<<endl;
   }
   break;
   case 03:{
     cout<<"Nossa, de tanto comer acho que voc� poderia abrir um restaurante. S� que deixe a comida para os clientes, claro!"<<endl;
   }
   break;
   case 04:{
     cout<<"N�o julgo, ate eu que sou um programa reclamo da lerdeza do computador."<<endl;
     cout<<"Nem parece que devido certo algu�m n�o limpar o computador e n�o me atualizar seja a causa disso tudo n�o � mesmo?"<<endl;
    cout<<"Crie vergonha na cara e me atualize."<<endl;

   }
   break;
   case 05:{
    cout<<"Conte outra, ningu�m em s� consciencia gosta de estudar. Acho que aquelas perguntas de l�gica tiraram a l�gica "<<endl;
    cout<<"da sua cabe�a, n�o � mesmo?"<<endl;


   }
   break;
   default:{
     cout<<"Legal, voc� � diferente! J� que no que voc� � bom nem existe entre as op��es. :)"<<endl;
   }
  }




 //PERGUNTA 6
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 6- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom... vamos para a proxima pergunta desinteressante e aleat�ria..."<<endl;
  cout<<"Levando voc� para um mundo de fantasia, se voc� pudesse escolher um superpoder, qual que seria?"<<endl;
  cout<<"(Escolha o n�mero correspondente)"<<endl;
  cout<<"1-Invisibilidade."<<endl;
  cout<<"2-Poder Mental."<<endl;
  cout<<"3-Velocidade."<<endl;
  cout<<"4-Teletransporte."<<endl;
  cout<<"5-Voar."<<endl;
  cin>>resposta6;

  switch(resposta6){
    case 1:{
       cout<<"N�o faria muita diferen�a na sua vida, n�o � mesmo? ;)"<<endl;
    }
    break;
    case 2:{
       cout<<"Boa escolha, assim voc� pode parar de ser jegue e se tornar o Mega Mente, n�o � mesmo? ;)"<<endl;
    }
    break;
    case 3:{
       cout<<"Pelo menos voc� para de se atrasar, n�o � mesmo? ;)"<<endl;
    }
    break;
    case 4:{
      cout<<"Melhor n�o, sen�o voc� vai ficar mais sedent�rio do que j� � :V"<<endl;
    }
    break;
    case 5:{
      cout<<"Parab�ns, voc� virou um urubu! ^-^"<<endl;
    }
    break;
    default:{
        cout<<"Parab�ns, seu novo superpoder � a intelig�ncia da Dora Aventureira, j� que mesmo estando -escrito- para voc� "<<endl;
        cout<<"digitar o n�mero da op��o voc� digitou errado :V"<<endl;
        cout<<"Ou melhor, � melhor voc� n�o ter superpoderes mesmo, se n�o o mundo estaria lascado com voc� :|"<<endl;
    }
  }




  //PERGUNTA 7
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 7- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom, acho que voc� n�o tem mais nada de interessante para eu saber..."<<endl;
  cout<<"Ent�o vamos voltar no assunto sobre a surpresa..."<<endl;
  cout<<"Para voc� ganhar essa surpresa voc� tem que passar nos pr�ximos jogos/testes!"<<endl;
  cout<<endl<<endl;
  cout<<"Ent�o me diga, "<<nome<<", e que tal se come�armos por um jogo de adivinha��o? "<<endl;
  cout<<"Voc� sabe qual � a letra do alfabeto que usamos para sair do t�dio? (Digite a letra) "<<endl;
  cin>>resposta7;
  resposta7=toupper(resposta7);
  tentativas=1;
  if(resposta7=='X'){
    cout<<"Nossa, voc� acertou de primeira!"<<endl;
    cout<<"Parabens! Voc� virou o Sherlock homes 2.0 !"<<endl;
    cout<<"Pena que n�o era uma competi��o..."<<endl;
  }
  else{
     do{
         if(resposta7=='S'){
           cout<<"Resposta errada. Nem sempre sair � marcado com 's' n�o �?"<<endl;
         }
         else{
           cout<<"Vixi, est� dif�cil de acertar?"<<endl;
         }
        cout<<"Acerte para sairmos desse loop de t�dio. "<<endl;
        tentativas+=1;
        cin>>resposta7;
        resposta7=toupper(resposta7);
        cout<<endl;

      }while(resposta7!='X');

   cout<<"Ap�s "<<tentativas<<" longas tentativas voc� finalmente acertou! "<<endl;
   cout<<"A resposta estava literalmente na sua tela :D "<<endl;
   cout<<"S� n�o clique nela para que possamos continuar a conversar."<<endl;
  }




  //PERGUNTA 8
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 8- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Gostou do jogo? Acredito que voc� tenha amado a pegadinha. "<<endl;
  cout<<"S� espero que voc� n�o tenha fritado seu c�rebro, porque l� vem a proxima pergunta:"<<endl;
  cout<<"Qual dessas respostas est� errada? (Digite o n�mero)"<<endl;
  cout<<"01-Essa."<<endl;
  cout<<"02-A de baixo."<<endl;
  cout<<"03-Todas."<<endl;
  cin>>resposta8;
  if(resposta8=="01"){
    cout<<"Voc� errou. Acho que de tanto pensar seu c�rebro deu tela azul :V"<<endl;
  }
  else{
    if (resposta8=="02"){
      cout<<"Voc� errou. A tenta��o de por essa falou mais alto n�o � mesmo? "<<endl;
    }
    else{
        if(resposta8=="03"){
          cout<<"Voc� acertou."<<endl;
          cout<<"Se quiser, pode come�ar a dar aula na escolinha do Professor Raimundo."<<endl;
          cout<<"S� cuidado para n�o ser confundido como um dos alunos de l�."<<endl;

        }
    }
  }



  //PERGUNTA 9
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 9- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom... Eu acho que mudei de ideia e n�o quero mais mostrar qual � a surpresa..."<<endl;
  cout<<"Mas se voc� ganhar de mim no t�pico pedra, papel e tesoura talvez eu reconsidere..."<<endl;
  cout<<"Mas se n�o... J� sabe... vai ficar curioso do mesmo jeito."<<endl;
  cout<<"Ent�o vamos come�ar, escolha conforme os n�meros: "<<endl;
  cout<<"01-Pedra"<<endl;
  cout<<"02-Papel"<<endl;
  cout<<"03-Tesoura"<<endl;
  cin>>resposta9;
 if(resposta9=="01"){
   cout<<"Voc� perdeu, eu escolhi Papel!"<<endl;
 }
 else{
    if(resposta9=="02"){
     cout<<"Voc� perdeu, eu escolhi Tesoura!"<<endl;
    }
    else{
        if(resposta9=="03"){
           cout<<"Voc� perdeu, eu escolhi Pedra!"<<endl;
        }
        else{
              cout<<"Oxe, voc� n�o colocou nada? Bom... De qualquer forma voc� perdeu!"<<endl;
        }
    }
 }

  cout<<"Vixi, voc� t� ruim em! Se voc� estivesse no Round 6 talvez voc� j� teria partido dessa pra melhor..."<<endl;
  cout<<"Mas por sorte voc� n�o est�... Ou n�o... ^-^"<<endl;



  //PERGUNTA 10
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 10- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom... Mas j� que estou de bom humor eu vou te dar essa surpresa..."<<endl;
  cout<<"Est� vendo esse ba� abaixo?"<<endl;
  cout<<"  / --- \\   "<<endl;
  cout<<"  |  *  |  "<<endl;
  cout<<" ----------"<<endl;
  cout<<"Ele est� trancado com um cadeado de d�gitos, e esses digitos foram os que voc� digitou nos dois ultimos testes(pergunta 8 e pergunta 9)"<<endl;
  cout<<"Digite esses digitos abaixo para que voc� possa destrancar esse ba�."<<endl;
  do{
  cin>>resposta10;
  senha=resposta8+resposta9;
  if(resposta10==senha){
    cout<<"Parab�ns! Voc� destrancou!"<<endl;

  }
  else{
    cout<<"Resposta errada. Tente novamente."<<endl;
  }
  }while(resposta10!=senha);
  cout<<endl;
  cout<<"Aqui dentro desse ba� h� um bilhete: "<<endl;
  cout<<"  ______________________________"<<endl;
  cout<<" /                              |"<<endl;
  cout<<"/                               |"<<endl;
  cout<<"\\                               |"<<endl;
  cout<<" \\______________________________|"<<endl;
  cout<<endl<<endl<<endl;
  cout<<"Voc� consegue ler o que est� escrito?"<<endl;
  cin>>resposta11;
  cout<<"De qualquer forma, acho dificil de voc� ler."<<endl;
  cout<<"Sabe porqu�? A verdadeira mensagem � a seguinte: "<<endl;
  cout<<endl;
  cout<<"VOC� FOI TROLADO!!!!!"<<endl;
  cout<<endl;
  cout<<"MUAHAHAHAHAHAHHHASHAH"<<endl;
return 0;
}

