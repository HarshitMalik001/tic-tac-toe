#include <stdio.h>
int main(){
    int r,c;
    char name1[100],name2[100];
    printf("enter the name of first player");
    scanf("%c",&name1);
    printf("enter the name of second player");
    scanf("%c",&name2);
    int flag = 1;
    int player = 1;
    int gameflag = 0;
    while (flag):
        gameflag = 0;
        for (int i = 0;i<3 ; i++){
            for (int j = 0 ; j<3 ;j++){
                if (' '==tk[i][j]){
                    gameflag == 1;
                    break;
                }
            }
        }
        if (gameflag){
            if (player == 1){
                print("\n %s TURN ".name1);
                r = int(input('Enter the row in which to put O '))
                c = int(input('Enter the coulomn in which to put O '))
                player = player+1
            }
            elif player == 2:
                print()
                print(" {}'s TURN ".format(name2))
                r = int(input('Enter the row in which to put X '))
                c = int(input('Enter the coulomn in which to put X '))
                player = player-1
            for i in range(1):
                    if player==2:
                        if tk[r-1][c-1] == ' ':
                            tk[r-1][c-1]='O'
                        else :
                            player = player - 1
                    if player==1:
                        if tk[r-1][c-1] ==' ':
                            tk[r-1][c-1]='X'
                        else:
                            player = player +1
                            
                            
            tktk(tk)
            if tk[0][0]==tk[0][1] and tk[0][1]==tk[0][2] and tk[0][2]!=' ':
                flag = False
                w = tk[0][0]
            elif tk[0][0]==tk[1][0] and tk[1][0]==tk[2][0] and tk[2][0]!=' ':
                flag = False
                w = tk[0][0]
            elif tk[1][0]==tk[1][1] and tk[1][1]==tk[1][2] and tk[1][2]!=' ':
                flag = False
                w = tk[1][0]
            elif tk[0][1]==tk[1][1] and tk[1][1]==tk[2][1] and tk[2][1]!=' '  :
                flag = False
                w = tk[0][1]
            elif tk[2][0]==tk[2][1] and tk[2][1]==tk[2][2] and tk[2][2]!=' '  :
                flag = False
                w = tk[2][0]
            elif tk[0][2]==tk[1][2] and tk[1][2]==tk[2][2] and tk[2][2]!=' ':
                flag = False
                w = tk[0][2]
            elif tk[0][0]==tk[1][1] and tk[1][1]==tk[2][2] and tk[2][2]!=' ' :
                flag= False
                w = tk[0][0]
            elif tk[0][2]==tk[1][1] and tk[2][0]==tk[1][1] and tk[1][1]!=' ':
                flag = False
                w = tk[0][2]
        else:
            w = 'd'
            flag = False
    
        }
}
