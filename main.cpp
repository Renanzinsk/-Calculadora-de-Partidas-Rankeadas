#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string calculoRank(int wins, int loses){
    int diffwin = wins - loses;
    string ranking;
    if(diffwin <= 10){
        ranking = "Ferro";}
    else if(diffwin >= 11 && diffwin <= 20){
        ranking = "Bronze";}
    else if(diffwin >= 21 && diffwin <= 50){
        ranking = "Prata";}
    else if(diffwin >= 51 && diffwin <= 80){
        ranking = "Ouro";}
    else if(diffwin >= 81 && diffwin <= 90){
        ranking = "Diamante";}
    else if(diffwin >= 91 && diffwin <= 100){
        ranking = "Lendario";}
    else if(diffwin >=101){
        ranking = "Imortal";}
    return ranking;
}

int main()
{
    int wins;
    int loses;
    cout << "Numero de vitorias: " << endl;
    cin >> wins;
    cout << "Numero de derrotas: " << endl;
    cin  >> loses;
    int awsForPrint = (wins - loses);

    string respostaDeRanking = calculoRank(wins, loses);
    //"O Her�i tem de saldo de **{saldoVitorias}** est� no n�vel de **{nivel}**"
    cout << "O Heroi tem de saldo de " << to_string(awsForPrint);
    cout << " esta no nivel de " << respostaDeRanking;

    return 0;
}
