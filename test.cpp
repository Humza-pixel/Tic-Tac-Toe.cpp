#include <iostream>
using namespace std;
char p ='X';
int n;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
void Draw()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void inp(){
    int a;
    cout<<"It's "<<p<<"'s turn!"<<endl;
    cin>>a;
    if(a==1){
        if(matrix[0][0]=='1'){
            matrix[0][0]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
        
    if(a==2){
        if(matrix[0][1]=='2'){
            matrix[0][1]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
    if(a==3){
        if(matrix[0][2]=='3'){
            matrix[0][2]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
    if(a==4){
        if(matrix[1][0]=='4'){
            matrix[1][0]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
    if(a==5){
        if(matrix[1][1]=='5'){
            matrix[1][1]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
    if(a==6){
        if(matrix[1][2]=='6'){
            matrix[1][2]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
    if(a==7){
        if(matrix[2][0]=='7'){
            matrix[2][0]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
    if(a==8){
        if(matrix[2][1]=='8'){
            matrix[2][1]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
    if(a==9){
        if(matrix[2][2]=='9'){
            matrix[2][2]=p;
        } else{
            cout<<"No cheating alredy occupied"<<endl;
            inp();
        }
    }
}
void tgp()
{
    if (p =='X'){
        p='O';
    }else{
        p='X';
    }       
}
char w(){
    if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
        return'X';
    if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
        return'X';
    if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
        return'X';

    if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
        return'X';
    if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
        return'X';
    if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
        return'X';

    if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
        return'X';
    if(matrix[2][0]=='X' && matrix[1][1]=='X' && matrix[0][2]=='X')
        return'X';
    
    if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
        return'O';
    if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
        return'O';
    if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
        return'O';

    if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
        return'O';
    if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
        return'O';
    if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
        return'O';

    if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
        return'O';
    if(matrix[2][0]=='O' && matrix[1][1]=='O' && matrix[0][2]=='O')
        return'O';
    return '/';            
}    

int main(){
    n=0;
    Draw();
    while(1){
        n++;
        inp();
        cout<<"\n\n\n\n\n\n\n\n";
        Draw();
        if(w()=='X'){
            cout<<"X wins!"<<endl;
            break;
        } 
        else if(w()=='O'){
            cout<<"O wins!"<<endl;
            break;
        }
        else if(w()=='/'&& n==9){
            cout<<"It's a draw!"<<endl;
            break;
        }
        tgp();
    }
    return 0;
}
