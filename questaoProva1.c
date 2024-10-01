#include <stdio.h>

int user1, user2, user3, user4, candidato1 = 0, candidato2 = 0, candidato3 = 0;

int main() {

    printf("Qual o seu voto user1?  : \n candidatos:|| 1 || 2 || 3 ||; \n");
    scanf("%d", &user1);
    printf("Qual o seu voto user2?  : \n candidatos:|| 1 || 2 || 3 ||; \n");
    scanf("%d", &user2);
    printf("Qual o seu voto user3?  : \n candidatos:|| 1 || 2 || 3 ||; \n");
    scanf("%d", &user3);
    printf("Qual o seu voto user4?  : \n candidatos:|| 1 || 2 || 3 ||; \n");
    scanf("%d", &user4);


    if (user1 == 1) {
        candidato1++;
    } else if (user1 == 2) {
        candidato2++;
    } else if (user1 == 3) {
        candidato3++;
    } else {
        printf("user1 votou nulo\n");
    }

    if (user2 == 1) {
        candidato1++;
    } else if (user2 == 2) {
        candidato2++;
    } else if (user2 == 3) {
        candidato3++;
    } else {
        printf("user2 votou nulo\n");
    }

    if (user3 == 1) {
        candidato1++;
    } else if (user3 == 2) {
        candidato2++;
    } else if (user3 == 3) {
        candidato3++;
    } else {
        printf("user3 votou nulo\n");
    }

    if (user4 == 1) {
        candidato1++;
    } else if (user4 == 2) {
        candidato2++;
    } else if (user4 == 3) {
        candidato3++;
    } else {
        printf("user4 votou nulo\n");
    }


    if (candidato1 > candidato2 && candidato1 > candidato3) {
        printf("Candidato 1 ganhou\n");
    } else if (candidato2 > candidato1 && candidato2 > candidato3) {
        printf("Candidato 2 ganhou\n");
    } else if (candidato3 > candidato1 && candidato3 > candidato2) {
        printf("Candidato 3 ganhou\n");
    } else {

        int seqCandidato1 = 0, seqCandidato2 = 0, seqCandidato3 = 0;


        if (user1 == 1 && user2 == 1) seqCandidato1++;
        if (user2 == 1 && user3 == 1) seqCandidato1++;
        if (user3 == 1 && user4 == 1) seqCandidato1++;


        if (user1 == 2 && user2 == 2) seqCandidato2++;
        if (user2 == 2 && user3 == 2) seqCandidato2++;
        if (user3 == 2 && user4 == 2) seqCandidato2++;


        if (user1 == 3 && user2 == 3) seqCandidato3++;
        if (user2 == 3 && user3 == 3) seqCandidato3++;
        if (user3 == 3 && user4 == 3) seqCandidato3++;


        if (seqCandidato1 > seqCandidato2 && seqCandidato1 > seqCandidato3) {
            printf("Candidato 1 ganhou por sequência\n");
        } else if (seqCandidato2 > seqCandidato1 && seqCandidato2 > seqCandidato3) {
            printf("Candidato 2 ganhou por sequência\n");
        } else if (seqCandidato3 > seqCandidato1 && seqCandidato3 > seqCandidato2) {
            printf("Candidato 3 ganhou por sequência\n");
        } else if ((seqCandidato1 > 0 && seqCandidato2 > 0) || (seqCandidato1 > 0 && seqCandidato3 > 0) || (seqCandidato2 > 0 && seqCandidato3 > 0)) {
            printf("Houve um empate, pois mais de um candidato teve sequência\n");
        } else {
            printf("Houve um empate\n");
        }
    }

    return 0;
}
