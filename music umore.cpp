#include <iostream>		//richiama libreria di input-output
#include <ctime>		//richiama libreria gestione tempo
#include <string.h>		//richiama libreria gestione stringhe
#include <cstdlib>		//richiama libreria  stdlib
#include <windows.h>	//richiama libreria windows
#include <fstream>		//richiama libreria gestione file
using namespace std;

class music {			//dichiara classe musica
	public:
		void iniz();		//dichiara funzioni pubbliche della classe music
		void happy();
		void sad();
		void angry();
		void custom();
		void custom2();
		void custom3();
		void listen();
		void listen2();
		void listen3();
		void reset();
		void sceltcust();
		void sceltlist();
		void commandsadministrator();
	private:		//dichiara variabile privata della classe music
		int num;
};


int main()		//funzione main funzione principale
{
	music oggetto;		//crea oggetto di nome oggetto della classe music
	char scelta[100];	//dichiara variabile scelta di tipo carattere array
	oggetto.iniz();		//richiama funzione iniz del' oggetto oggetto della classe music
	cout<<"programma che ti porta ad un link in base al tuo stato d'animo(stato: 1.0.5 versione: NON COMMERCIALE)"<<endl;
	cout<<"dimmi il tuo stato d'animo"<<endl;
	cin.getline(scelta, sizeof(scelta));		//scelta assume valore da tastiera
	if (strcmp(scelta, "felice")==0)		//se scelta è "felice"
	{
		oggetto.happy();		//richiama funzione happy del' oggetto oggetto della classe music
		system("cls");		//cancella schermo
		cout<<"puoi chiudere la console"<<endl;
	}
	else if (strcmp(scelta, "triste")==0)		//se scelta è "triste
	{
		oggetto.sad();		//richiama funzione sad del' oggetto oggetto della classe music
		system("cls");		//cancella schermo
		cout<<"puoi chiudere la console"<<endl;
	}
	else if (strcmp(scelta, "arrabiato")==0)		//se scelta è "arrabiato"
	{
		oggetto.angry();		//richiama funzione angry del' oggetto oggetto della classe music
		system("cls");		//cancella schermo
		cout<<"puoi chiudere la console"<<endl;
	}
	else if (strcmp(scelta, "administrator custom")==0) //se vuoi aggiungere canzoni personalizzate
	{
		oggetto.sceltcust();		//richiama funzione sceltcust del' oggetto oggetto della classe music
		system("cls");		//cancella schermo
		cout<<"puoi chiudere la console"<<endl;
	}
	else if (strcmp(scelta, "administrator listen")==0)		//se vuoi ascoltare canzoni personalizzate
	{
		oggetto.sceltlist();		//richiama funzione sceltlist del' oggetto oggetto della classe music
		system("cls");		//cancella schermo
		cout<<"puoi chiudere la console"<<endl;
	}
	else if (strcmp(scelta, "administrator del")==0)	//se vuoi cancellare tutte le canzoni personalizzate	
	{
		int del=MessageBox(0,"cliccando si cancellerai tutte le canzoni personalizzate, vuoi continuare?","ATTENZIONE",MB_YESNO | MB_ICONWARNING);
		if (del==IDYES)		//se è si
		{
			oggetto.reset();		//richiama funzione reset del' oggetto oggetto della classe music
			system("cls");		//cancella schermo
			cout<<"tutto cancellato puoi chiudere la console"<<endl;
		}
		else		//altrimenti
		{
			exit(1);
		}
	}		
	else if (strcmp(scelta, "commands administrator")==0)		//se vuoi sapere tutti i comandi amministratore
	{
		system("cls");		//cancella schermo
		oggetto.commandsadministrator();			//richiama funzione commandsadministrator del' oggetto oggetto della classe music
	}
	else
	{
		cout<<"comando non valido, rispondi: felice, triste o arrabiato"<<endl;
	}
	getchar();
}





void music::iniz()		//la funzione iniz della classe music
{
	srand(time(NULL));		//num assume valore da un numero pseudocasuale
	num = (rand() % 10)+1;
}





void music::sad()		//la funzione sad della classe music
{
	switch(num)		
	{
		case 1:		//se num è uguale a 1 porta al mv arrange yui solo
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=bNHhzJf6I4E&ab_channel=%E7%94%B1%E6%AF%94%E3%83%B6%E6%B5%9C%E7%B5%90%E8%A1%A3-Topic", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 2:		//se num è uguale a 2 porta al mv di kill la kill
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=ntuZWHd-l_Y&ab_channel=HolandNovak", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 3:		//se num è uguale a 3 porta al mv di your name
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=a2GujJZfXpg&list=RD_SLL2bFtCKA&index=4&ab_channel=radwimpsstaff", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 4:		//se num è uguale a 4 porta al mv di full metal alchimist
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=hvn7qmNoj48&ab_channel=PORNOGRAFFITTIVEVO", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 5:		//se num è uguale a 5 porta al mv somi
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=lBYyAQ99ZFI&ab_channel=THEBLACKLABEL", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 6:		//se num è uguale a 6 porta al mv sao 4
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=ISV28NbBDlc&ab_channel=MelodicStar", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 7:		//se num è uguale a 7 porta al ending kaguya sama
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=qL4yWQmMCb0&ab_channel=cowtc", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 8:		//se num è uguale a 8 porta al mv my hero academia 2
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=v1YojYU5nPQ&t=3s&ab_channel=Funimation", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 9:		//se num è uguale a 9 porta al mv bugie d'aprile op 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=5_iuNaULT5k&ab_channel=OpeningAnime", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 10:		//se num è uguale a 10 porta al mv bugie d'aprile op 2
			ShellExecute (NULL, "open", "https://www.youtube.com/results?search_query=+Opening+Shigatsu+wa+Kimi+no+Uso&ab_channel=OpeningAnime", NULL, NULL, SW_SHOWNORMAL);
			break;
	}
}





void music::happy()		//la funzione happy della classe music
{
	switch(num)
	{
		case 1:				//se num è uguale a 1 porta al mv oregairu zoku ed
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=_SLL2bFtCKA&list=RD_SLL2bFtCKA&index=1&ab_channel=FeebeechanchibiCh.", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 2:				//se num è uguale a 2 porta al mv dr stone op 2 
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=eL8vIdbYqsU&list=RD_SLL2bFtCKA&index=2&ab_channel=AdviAnimeXD", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 3:				//se num è uguale a 3 porta al mv jojo great day
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=E3SLE19QLEs&ab_channel=BlueTube", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 4:				//se num è uguale a 4 porta al mv di naruro blue
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=uC_SgMzlr6U&ab_channel=RiskyProSniper%27s", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 5:				//se num è uguale a 5 porta al mv my hero academia op 4
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=1oMxrHXzOsY&ab_channel=TOHOanimation%E3%83%81%E3%83%A3%E3%83%B3%E3%83%8D%E3%83%AB", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 6:				//se num è uguale a 6 porta al mv kakegurui 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=27vwjrbKFZo&ab_channel=ANIMET.R.N.D", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 7:				//se num è uguale a 7 porta al mv overloard 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=KOWcj7XKnfQ&ab_channel=Funimation", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 8:				//se num è uguale a 8 porta al mv dr stone op 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=tF4faMbs5oQ&ab_channel=TOHOanimation%E3%83%81%E3%83%A3%E3%83%B3%E3%83%8D%E3%83%AB", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 9:				//se num è uguale a 9 porta al mv my hero academia 3
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=gXAHzzL2Tv0&ab_channel=HDMelody", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 10:				//se num è uguale a 10 porta al mv overloard 3
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=S9yfM5OrpKU&ab_channel=Funimation", NULL, NULL, SW_SHOWNORMAL);
			break;
			
	}
}





void music::angry()			//la funzione angry della classe music
{
	switch(num)
	{
		case 1:				//se num è uguale a 1 porta al mv fire force op 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=wfCcs0vLysk&list=RDeL8vIdbYqsU&index=3&ab_channel=Mrs.GREENAPPLE", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 2:					//se num è uguale a 2 porta al mv the promised neverland op 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=lm0cTOQpOf8&list=RDeL8vIdbYqsU&index=5&ab_channel=MelodicStar", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 3:				//se num è uguale a 3 porta al mv naruto
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=dlFA0Zq1k2A&list=RDeL8vIdbYqsU&index=4&ab_channel=KANABOONVEVO", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 4:				//se num è uguale a 4 porta al mv my hero academia 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=2SVZ_2z79rQ&ab_channel=PORNOGRAFFITTIVEVO", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 5:				//se num è uguale a 5 porta al mv crossing fiel
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=KId6eunoiWk&ab_channel=lxixsxaVEVO", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 6:				//se num è uguale a 6 porta al music umbrella accademy
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=TJjomVKbt7c&ab_channel=TheUmbrellaAcademy", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 7:				//se num è uguale a 7 porta al mv one punch man 1
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=atxYe-nOa9w&ab_channel=animelab", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 8:				//se num è uguale a 8 porta al mv sasageyo
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=CID-sYQNCew&ab_channel=animelab", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 9:				//se num è uguale a 9 porta al mv blue exorchist
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=PzcRgzM7wk8&ab_channel=animelab", NULL, NULL, SW_SHOWNORMAL);
			break;
		case 10:				//se num è uguale a 10 porta al mv question assasination classroom
			ShellExecute (NULL, "open", "https://www.youtube.com/watch?v=iug12DnMNHQ&ab_channel=Funimation", NULL, NULL, SW_SHOWNORMAL);
			break;
	}
}





void music::custom()		//la funzione custom della classe music, la maggior parte del codice della funzione è scritto in linguaggio C con la copantibilità del Linguaggio c++
{
	char custom[1000];		//dichiara custom di tipo carattere array
	char bf[100];		//dichiara variabile bf di tipo carattere array
	int customnum;		//dichiara variabile customnum di tipo intero
	FILE *cus;
	cus=fopen("song customsad.busca", "a");	//apri file song customsad.busca in modalità appened
	cout<<"inserisci il brano personalizzato"<<endl;
	cin.getline(custom, sizeof(custom));		//inserisci il link personalizzato e salvalo nella variabile custom
	fprintf(cus, "\n%s", custom);		//scrivi valore variabile custom sul file song customsad.busca
	fclose(cus);		//chiudi file song customsad.busca
	FILE *cus2;
	cus2=fopen("song customsad.busca", "r");	//apri file song customsad.busca in modalità lettura
	while(!feof(cus2))		//finchè non legge tutto il file
	{
		customnum=customnum+1;		//la variabile customnum assume valore tra l'operazione di customnum+1
		fscanf(cus2, "%s", bf);		
	}
	fclose(cus2);		//chiudi file song customsad.busca
	ofstream cus3("custom systemsad.busca", ios::out);		//apri file custom systemsad.busca in modalità scrittura
	cus3<<customnum<<endl;		//salva valore customnum in custom systemsad.busca
	cus3.close();		//chiudi file custom systemsad.busca
}










void music::custom2()			//la funzione custom2 della classe music, la maggior parte del codice della funzione è scritto in linguaggio C con la copantibilità del Linguaggio c++
{
	char custom2[1000];		//dichiara custom2 di tipo carattere array
	char bf2[100];		//dichiara variabile bf2 di tipo carattere array
	int customnum2;		//dichiara variabile customnum di tipo intero
	FILE *cus;
	cus=fopen("song customhappy.busca", "a");	//apri file song customhappy.busca in modalità appened
	cout<<"inserisci il brano personalizzato"<<endl;
	cin.getline(custom2, sizeof(custom2));		//inserisci il link personalizzato e salvalo nella variabile custom
	fprintf(cus, "\n%s", custom2);		//scrivi valore variabile custom2 sul file song customhappy.busca
	fclose(cus);		//chiudi file song customhappy.busca
	FILE *cus2;
	cus2=fopen("song customhappy.busca", "r");	//apri file song customhappy.busca in modalità lettura
	while(!feof(cus2))		//finchè non legge tutto il file
	{
		customnum2=customnum2+1;		//la variabile customnum2 assume valore tra l'operazione di customnum2+1
		fscanf(cus2, "%s", bf2);		
	}
	fclose(cus2);		//chiudi file song customhappy.busca
	ofstream cus3("custom systemhappy.busca", ios::out);		//apri file custom systemhappy.busca in modalità scrittura
	cus3<<customnum2<<endl;		//salva valore customnum in custom systemhappy.busca
	cus3.close();		//chiudi file custom systemhappy.busca
}





void music::custom3()		//la funzione custom3 della classe music, la maggior parte del codice della funzione è scritto in linguaggio C con la copantibilità del Linguaggio c++
{
	char custom3[1000];		//dichiara custom3 di tipo carattere array
	char bf3[100];		//dichiara variabile bf3 di tipo carattere array
	int customnum3;		//dichiara variabile customnum3 di tipo intero
	FILE *cus;
	cus=fopen("song customangry.busca", "a");	//apri file song customangry.busca in modalità appened
	cout<<"inserisci il brano personalizzato"<<endl;
	cin.getline(custom3, sizeof(custom3));		//inserisci il link personalizzato e salvalo nella variabile custom3
	fprintf(cus, "\n%s", custom3);		//scrivi valore variabile custom3 sul file song customangry.busca
	fclose(cus);		//chiudi file song customangry.busca
	FILE *cus2;
	cus2=fopen("song customangry.busca", "r");	//apri file song customangry.busca in modalità lettura
	while(!feof(cus2))		//finchè non legge tutto il file
	{
		customnum3=customnum3+1;		//la variabile customnum3 assume valore tra l'operazione di customnum3+1
		fscanf(cus2, "%s", bf3);		
	}
	fclose(cus2);		//chiudi file song customangry.busca
	ofstream cus3("custom systemangry.busca", ios::out);		//apri file custom systemangry.busca in modalità scrittura
	cus3<<customnum3<<endl;		//salva valore customnum in custom systemangry.busca
	cus3.close();		//chiudi file custom systemangry.busca
}






void music::listen()	//la funzione listen della classe music
{
	int listen, l;		//dichiara variabili listen e l di tipo intero
	char clist[1000];		//dichiara variabile clist di tipo carattere array
	ifstream list("custom systemsad.busca", ios::in);		//apri file custom systemsad.busca in modalità lettura
	if (list==NULL)		//verifica se il file custom systemsad.busca si apra correttamente
	{
		MessageBox(0,"assicurati di aver prima utilizzato il comando amministratore 'administrator custom' o se i relativi file siano nella stessa directory del programma","comando amministratore non funziona",MB_OK | MB_ICONWARNING);
		exit(1);
	}
	ifstream list1("song customsad.busca", ios::in);		//apri file song customsad.busca in modalità lettura
	if (list1==NULL)		//verifica se il file song customsad.busca si apra correttamente
	{
		MessageBox(0,"assicurati di aver prima utilizzato il comando amministratore 'administrator custom' o se i relativi file siano nella stessa directory del programma","comando amministratore non funziona",MB_OK | MB_ICONWARNING);
		exit(1);
	}
	list>>listen;				//salva contenuto del filre custom systemsad.busca nella variabile listen
	srand(time(NULL));		//genera numero pseudocasuale e salva il valore nella variabile numlist
	int numlist =(rand() % listen)-1;		
	listen=listen-numlist;		//listen assume valore dall'operazione tra listen-numlist
	for(l=0; l<listen; l++)		//finché l è minore di listen
	{
		list1.getline(clist, sizeof(clist));		//salva contenuto di song customsad nella variabile clist
	}
	ShellExecute (NULL, "open", clist, NULL, NULL, SW_SHOWNORMAL);		//apri il contenuto personalizzato
	list.close();		//chiudi file custom systemsad.busca
	list1.close();		//chiudi file song customsad.busca
}





void music::listen2()			//la funzione listen2 della classe music
{
	int listena2, l2;		//dichiara variabili listena2 e l2 di tipo intero
	char clist2[1000];		//dichiara variabile clist2 di tipo carattere array
	ifstream list2("custom systemhappy.busca", ios::in);		//apri file custom systemhappy.busca in modalità lettura
	if (list2==NULL)		//verifica se il file custom systemhappy.busca si apra correttamente
	{
		MessageBox(0,"assicurati di aver prima utilizzato il comando amministratore 'administrator custom' o se i relativi file siano nella stessa directory del programma","comando amministratore non funziona",MB_OK | MB_ICONWARNING);
		exit(1);
	}
	ifstream list12("song customhappy.busca", ios::in);		//apri file song customhappy.busca in modalità lettura
	if (list12==NULL)		//verifica se il file song customhappy.busca si apra correttamente
	{
		MessageBox(0,"assicurati di aver prima utilizzato il comando amministratore 'administrator custom' o se i relativi file siano nella stessa directory del programma","comando amministratore non funziona",MB_OK | MB_ICONWARNING);
		exit(1);
	}
	list2>>listena2;				//salva contenuto del filre custom systemhappy.busca nella variabile listen
	srand(time(NULL));		//genera numero pseudocasuale e salva il valore nella variabile numlist2
	int numlist2 =(rand() % listena2)-1;		
	listena2=listena2-numlist2;		//listena2 assume valore dall'operazione tra listena2-numlist2
	for(l2=0; l2<listena2; l2++)		//finché l2 è minore di listena2
	{
		list12.getline(clist2, sizeof(clist2));		//salva contenuto di song customhappy nella variabile clist2
	}
	ShellExecute (NULL, "open", clist2, NULL, NULL, SW_SHOWNORMAL);		//apri il contenuto personalizzato
	list2.close();		//chiudi file custom systemhappy.busca
	list12.close();		//chiudi file song customhappy.busca
}





void music::listen3()			//la funzione listen3 della classe music
{
	int listen3, l3;		//dichiara variabili listen3 e l3 di tipo intero
	char clist3[1000];		//dichiara variabile clist3 di tipo carattere array
	ifstream lista3("custom systemangry.busca", ios::in);		//apri file custom systemangry.busca in modalità lettura
	if (lista3==NULL)		//verifica se il file custom systemangry.busca si apra correttamente
	{
		MessageBox(0,"assicurati di aver prima utilizzato il comando amministratore 'administrator custom' o se i relativi file siano nella stessa directory del programma","comando amministratore non funziona",MB_OK | MB_ICONWARNING);
		exit(1);
	}
	ifstream list13("song customangry.busca", ios::in);		//apri file song customangry.busca in modalità lettura
	if (list13==NULL)		//verifica se il file song customangry.busca si apra correttamente
	{
		MessageBox(0,"assicurati di aver prima utilizzato il comando amministratore 'administrator custom' o se i relativi file siano nella stessa directory del programma","comando amministratore non funziona",MB_OK | MB_ICONWARNING);
		exit(1);
	}
	lista3>>listen3;				//salva contenuto del filre custom systemangry.busca nella variabile listen3
	srand(time(NULL));		//genera numero pseudocasuale e salva il valore nella variabile numlist3
	int numlist3 =(rand() % listen3)-1;		
	listen3=listen3-numlist3;		//listen3 assume valore dall'operazione tra listen3-numlist3
	for(l3=0; l3<listen3; l3++)		//finché l3 è minore di listen3
	{
		list13.getline(clist3, sizeof(clist3));		//salva contenuto di song customangry nella variabile clist
	}
	ShellExecute (NULL, "open", clist3, NULL, NULL, SW_SHOWNORMAL);		//apri il contenuto personalizzato
	lista3.close();		//chiudi file custom systemangry.busca
	list13.close();		//chiudi file song customangry.busca
}







void music::reset()			//la funzione reset della classe music
{
	char reset1[100]={"song customsad.busca"};		//dichiara variabile reset1 di tipo carattere array
	char reset2[100]={"custom systemsad.busca"};	//dichiara variabile reset2 di tipo carattere array
	char reset3[100]={"song customhappy.busca"};		//dichiara variabile reset3 di tipo carattere array
	char reset4[100]={"custom systemhappy.busca"};	//dichiara variabile reset4 di tipo carattere array
	char reset5[100]={"song customangry.busca"};		//dichiara variabile reset5 di tipo carattere array
	char reset6[100]={"custom systemangry.busca"};	//dichiara variabile reset6 di tipo carattere array
	remove(reset1);		//cancella file song customsad.busca
	remove(reset2);		//cancella file custom systemsad.busca
	remove(reset3);		//cancella file song customhappy.busca
	remove(reset4);		//cancella file custom systemhappy.busca
	remove(reset5);		//cancella file song customangry.busca
	remove(reset6);		//cancella file custom systemangry.busca
}





void music::commandsadministrator()		//la funzione commands administrator della classe music
{
	//spunta a schermo tutti i comandi aministratore
	cout<<"administrator custom-->inserisci canzoni personalizzati"<<endl;
	cout<<"administrator listen-->ascolta in maniera casuale le tue canzoni personalizzate"<<endl;
	cout<<"administrator reset-->cancella TUTTE le tue canzoni personalizzate"<<endl;
}





void music::sceltcust()				//la funzione sceltcust della classe music
{
	music oggetto1;		//crea oggetto di nome oggetto1 della classe music
	char sceltcust[100];		//dichiara variabile sceltcust di tipo carattere array
	cout<<"quale delle 3 categoria vuoi inserire questa canzone personalizzata?"<<endl;
	cin>>sceltcust;			//la variabile sceltcust assume valore da tastiera
	getchar();
	if (strcmp(sceltcust, "triste")==0)		//se è triste
	{
		oggetto1.custom();		//richiama funzione custom del' oggetto oggetto1 della classe music
	}
	else if (strcmp(sceltcust, "felice")==0)		//se è felice
	{
		oggetto1.custom2();		//richiama funzione custom2 del' oggetto oggetto1 della classe music
	}
	else if (strcmp(sceltcust, "arrabiato")==0)		//se è arrabiato
	{
		oggetto1.custom3();		//richiama funzione custom3 del' oggetto oggetto1 della classe music
	}
	else
	{
		cout<<"comando non valido, rispondi: felice, triste o arrabiato"<<endl;
	}
}





void music::sceltlist()		//la funzione sceltlist della classe music
{
	music oggetto2;		//crea oggetto di nome oggetto2 della classe music
	char sceltlista[100];		//dichiara variabile sceltalista di tipo carattere array
	cout<<"ok una canzone personalizzata"<<endl<<"dimmi il tuo stato d'animo?"<<endl;
	cin>>sceltlista;		//la variabile sceltalista assume valore da tastiera
	getchar();
	if (strcmp(sceltlista, "triste")==0)		//se è triste
	{
		oggetto2.listen();		//richiama funzione listen del' oggetto oggetto2 della classe music
	}
	else if (strcmp(sceltlista, "felice")==0)		//se è felice
	{
		oggetto2.listen2();		//richiama funzione listen2 del' oggetto oggetto2 della classe music
	}
	else if (strcmp(sceltlista, "arrabiato")==0)		//se è arrabiato
	{
		oggetto2.listen3();		//richiama funzione listen3 del' oggetto oggetto2 della classe music
	}
	else
	{
		cout<<"comando non valido, rispondi: felice, triste o arrabiato"<<endl;
	}
}
