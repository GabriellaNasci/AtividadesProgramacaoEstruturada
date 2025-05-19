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
  cout<<"Bora começar a bater um papo? (S/N)"<<endl;
  cin>>resposta1;
  resposta1=toupper(resposta1);
  if (resposta1=='S'){
    cout<<"Você não tinha escolha mesmo ;)"<<endl;
  }
  else {
    cout<<"Resposta errada. "<<endl;
    cout<<"Vamos conversar você querendo ou não (longe de ameaças, claro!)."<<endl;
  }




//PERGUNTA 2
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 2- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Caí de paraquedas e nem perguntei seu nome, não é mesmo? Que rudeza minha. "<<endl;
  cout<<"Então me diga, criatura estranhíssima humanoide, qual o seu nome? "<<endl;
  cin.ignore();
  getline(cin, nome);
  cout<<endl;
  cout<<"Que dó... Até se bater a mão no teclado sai um nome melhor que o seu :P"<<endl;



//PERGUNTA 3
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 3- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Mas enfim... Geralmente, antes de amigar, eu aviso para a pessoa que para ser "<<endl;
  cout<<"meu best você tem que ter bastante paciência ..."<<endl;
  cout<<endl;
  cout<<"Então eu te faço uma pergunta, você tem paciência? (S/N)"<<endl;
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
               cout<<"Sério sério mesmo? (S/N)"<<endl;
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
                           cout<<"Então tá bom, vou confiar. Se você estiver mentindo talvez você não me aguente nos próximos minutos."<<endl;
                           cout<<"Aviso dado -_-"<<endl;
                           break;
                         }
                    }
               }
            }
          }
        }else if(resposta3=='N'){
          cout<<"Pois agora você vai ter que ter. Repita comigo 20 vezes: 'Eu tenho paciência'"<<endl;
          for (i=0;i<5;i++){
             cin.ignore();
             getline(cin,paciencia);
          }
          cout<<"Fui gentil com você ao deixar você escrever só 5 vezes não é mesmo? Me agradeça depois :)"<<endl;
          break;
          }
     }while(true);
     }
    break;
    case 'N':{
      cout<<"Pois agora você vai ter que ter. Repita comigo 20 vezes: 'Eu tenho paciência'"<<endl;
          for (i=0;i<5;i++){
             cin.ignore();
             getline(cin,paciencia);
          }
          cout<<"Fui gentil com você ao deixar você escrever só 5 vezes não é mesmo? Me agradeça depois :)"<<endl;
    }
  }




  //PERGUNTA 4
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 4- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Pois bem, agora que sei o mais importante, eu quero te fazer uma outra pergunta... "<<endl;
  cout<<"Você gostaria de ganhar uma surpresa? (S/N)"<<endl;
  cin>>resposta4;
  resposta4=toupper(resposta4);
    if (resposta4=='S'){
    cout<<"Intereceiro(a) você, não é mesmo?!"<<endl;
    cout<<"Mas para você receber essa surpresa você tem que me aguentar até o final da conversa em!"<<endl;
    cout<<"Nada vem de graça não é mesmo?! "<<endl;
  }
  else {
      if(resposta4=='N'){
    cout<<"Conta outra, até eu quero ganhar uma surpresa! "<<endl;
    cout<<"Mas de qualquer forma, me aguente até o final da nossa conversa que você irá receber ela!"<<endl;
      }
  }




//PERGUNTA 5
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 5- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Pois bem, agora que que temos um trato, vamos conhecer mais sobre você... "<<endl;
  cout<<endl;
  cout<<"Em que você é bom? (Escolha conforme os números)"<<endl;
  cout<<"01-Rolar o feed do TikTok e outras redes sociais"<<endl;
  cout<<"02-Dormir"<<endl;
  cout<<"03-Comer"<<endl;
  cout<<"04-Reclamar da vida"<<endl;
  cout<<"05-Estudar"<<endl;
  cin>>resposta5;
  switch(resposta5){
   case 01:{
     cout<<"Bem único, ainda bem! -_-"<<endl;
     cout<<"Só é igual ao restante do mundo, pouquinha gente não é mesmo?"<<endl;
   }
   break;
   case 02:{
     cout<<"Não parece muito, já que você está parecendo um panda com o tamanho das olheiras."<<endl;
     cout<<"Deixa eu adivinhar,você é um(a) programador(a) não é mesmo?"<<endl;
   }
   break;
   case 03:{
     cout<<"Nossa, de tanto comer acho que você poderia abrir um restaurante. Só que deixe a comida para os clientes, claro!"<<endl;
   }
   break;
   case 04:{
     cout<<"Não julgo, ate eu que sou um programa reclamo da lerdeza do computador."<<endl;
     cout<<"Nem parece que devido certo alguém não limpar o computador e não me atualizar seja a causa disso tudo não é mesmo?"<<endl;
    cout<<"Crie vergonha na cara e me atualize."<<endl;

   }
   break;
   case 05:{
    cout<<"Conte outra, ninguém em sã consciencia gosta de estudar. Acho que aquelas perguntas de lógica tiraram a lógica "<<endl;
    cout<<"da sua cabeça, não é mesmo?"<<endl;


   }
   break;
   default:{
     cout<<"Legal, você é diferente! Já que no que você é bom nem existe entre as opções. :)"<<endl;
   }
  }




 //PERGUNTA 6
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 6- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom... vamos para a proxima pergunta desinteressante e aleatória..."<<endl;
  cout<<"Levando você para um mundo de fantasia, se você pudesse escolher um superpoder, qual que seria?"<<endl;
  cout<<"(Escolha o número correspondente)"<<endl;
  cout<<"1-Invisibilidade."<<endl;
  cout<<"2-Poder Mental."<<endl;
  cout<<"3-Velocidade."<<endl;
  cout<<"4-Teletransporte."<<endl;
  cout<<"5-Voar."<<endl;
  cin>>resposta6;

  switch(resposta6){
    case 1:{
       cout<<"Não faria muita diferença na sua vida, não é mesmo? ;)"<<endl;
    }
    break;
    case 2:{
       cout<<"Boa escolha, assim você pode parar de ser jegue e se tornar o Mega Mente, não é mesmo? ;)"<<endl;
    }
    break;
    case 3:{
       cout<<"Pelo menos você para de se atrasar, não é mesmo? ;)"<<endl;
    }
    break;
    case 4:{
      cout<<"Melhor não, senão você vai ficar mais sedentário do que já é :V"<<endl;
    }
    break;
    case 5:{
      cout<<"Parabéns, você virou um urubu! ^-^"<<endl;
    }
    break;
    default:{
        cout<<"Parabéns, seu novo superpoder é a inteligência da Dora Aventureira, já que mesmo estando -escrito- para você "<<endl;
        cout<<"digitar o número da opção você digitou errado :V"<<endl;
        cout<<"Ou melhor, é melhor você não ter superpoderes mesmo, se não o mundo estaria lascado com você :|"<<endl;
    }
  }




  //PERGUNTA 7
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 7- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom, acho que você não tem mais nada de interessante para eu saber..."<<endl;
  cout<<"Então vamos voltar no assunto sobre a surpresa..."<<endl;
  cout<<"Para você ganhar essa surpresa você tem que passar nos próximos jogos/testes!"<<endl;
  cout<<endl<<endl;
  cout<<"Então me diga, "<<nome<<", e que tal se começarmos por um jogo de adivinhação? "<<endl;
  cout<<"Você sabe qual é a letra do alfabeto que usamos para sair do tédio? (Digite a letra) "<<endl;
  cin>>resposta7;
  resposta7=toupper(resposta7);
  tentativas=1;
  if(resposta7=='X'){
    cout<<"Nossa, você acertou de primeira!"<<endl;
    cout<<"Parabens! Você virou o Sherlock homes 2.0 !"<<endl;
    cout<<"Pena que não era uma competição..."<<endl;
  }
  else{
     do{
         if(resposta7=='S'){
           cout<<"Resposta errada. Nem sempre sair é marcado com 's' não é?"<<endl;
         }
         else{
           cout<<"Vixi, está difícil de acertar?"<<endl;
         }
        cout<<"Acerte para sairmos desse loop de tédio. "<<endl;
        tentativas+=1;
        cin>>resposta7;
        resposta7=toupper(resposta7);
        cout<<endl;

      }while(resposta7!='X');

   cout<<"Após "<<tentativas<<" longas tentativas você finalmente acertou! "<<endl;
   cout<<"A resposta estava literalmente na sua tela :D "<<endl;
   cout<<"Só não clique nela para que possamos continuar a conversar."<<endl;
  }




  //PERGUNTA 8
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 8- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Gostou do jogo? Acredito que você tenha amado a pegadinha. "<<endl;
  cout<<"Só espero que você não tenha fritado seu cérebro, porque lá vem a proxima pergunta:"<<endl;
  cout<<"Qual dessas respostas está errada? (Digite o número)"<<endl;
  cout<<"01-Essa."<<endl;
  cout<<"02-A de baixo."<<endl;
  cout<<"03-Todas."<<endl;
  cin>>resposta8;
  if(resposta8=="01"){
    cout<<"Você errou. Acho que de tanto pensar seu cérebro deu tela azul :V"<<endl;
  }
  else{
    if (resposta8=="02"){
      cout<<"Você errou. A tentação de por essa falou mais alto não é mesmo? "<<endl;
    }
    else{
        if(resposta8=="03"){
          cout<<"Você acertou."<<endl;
          cout<<"Se quiser, pode começar a dar aula na escolinha do Professor Raimundo."<<endl;
          cout<<"Só cuidado para não ser confundido como um dos alunos de lá."<<endl;

        }
    }
  }



  //PERGUNTA 9
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 9- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom... Eu acho que mudei de ideia e não quero mais mostrar qual é a surpresa..."<<endl;
  cout<<"Mas se você ganhar de mim no típico pedra, papel e tesoura talvez eu reconsidere..."<<endl;
  cout<<"Mas se não... Já sabe... vai ficar curioso do mesmo jeito."<<endl;
  cout<<"Então vamos começar, escolha conforme os números: "<<endl;
  cout<<"01-Pedra"<<endl;
  cout<<"02-Papel"<<endl;
  cout<<"03-Tesoura"<<endl;
  cin>>resposta9;
 if(resposta9=="01"){
   cout<<"Você perdeu, eu escolhi Papel!"<<endl;
 }
 else{
    if(resposta9=="02"){
     cout<<"Você perdeu, eu escolhi Tesoura!"<<endl;
    }
    else{
        if(resposta9=="03"){
           cout<<"Você perdeu, eu escolhi Pedra!"<<endl;
        }
        else{
              cout<<"Oxe, você não colocou nada? Bom... De qualquer forma você perdeu!"<<endl;
        }
    }
 }

  cout<<"Vixi, você tá ruim em! Se você estivesse no Round 6 talvez você já teria partido dessa pra melhor..."<<endl;
  cout<<"Mas por sorte você não está... Ou não... ^-^"<<endl;



  //PERGUNTA 10
  cout<<endl<<endl;
  cout<<"======================================"<<endl;
  cout<<"PERGUNTA 10- "<<endl;
  cout<<"======================================"<<endl;
  cout<<"Bom... Mas já que estou de bom humor eu vou te dar essa surpresa..."<<endl;
  cout<<"Está vendo esse baú abaixo?"<<endl;
  cout<<"  / --- \\   "<<endl;
  cout<<"  |  *  |  "<<endl;
  cout<<" ----------"<<endl;
  cout<<"Ele está trancado com um cadeado de dígitos, e esses digitos foram os que você digitou nos dois ultimos testes(pergunta 8 e pergunta 9)"<<endl;
  cout<<"Digite esses digitos abaixo para que você possa destrancar esse baú."<<endl;
  do{
  cin>>resposta10;
  senha=resposta8+resposta9;
  if(resposta10==senha){
    cout<<"Parabéns! Você destrancou!"<<endl;

  }
  else{
    cout<<"Resposta errada. Tente novamente."<<endl;
  }
  }while(resposta10!=senha);
  cout<<endl;
  cout<<"Aqui dentro desse baú há um bilhete: "<<endl;
  cout<<"  ______________________________"<<endl;
  cout<<" /                              |"<<endl;
  cout<<"/                               |"<<endl;
  cout<<"\\                               |"<<endl;
  cout<<" \\______________________________|"<<endl;
  cout<<endl<<endl<<endl;
  cout<<"Você consegue ler o que está escrito?"<<endl;
  cin>>resposta11;
  cout<<"De qualquer forma, acho dificil de você ler."<<endl;
  cout<<"Sabe porquê? A verdadeira mensagem é a seguinte: "<<endl;
  cout<<endl;
  cout<<"VOCÊ FOI TROLADO!!!!!"<<endl;
  cout<<endl;
  cout<<"MUAHAHAHAHAHAHHHASHAH"<<endl;
return 0;
}

