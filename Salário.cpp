#include<iostream>
#include<string>
using namespace std;

int main()
{
    float hr,mes, salariohr,beneficios,conta,esc,opc,valor;
    cout<<"Digite seu salário base por mês" <<endl;
    cin>>mes;
    cout<<"Digite a quantidade de horas que você trabalha por dia" <<endl;
    cin>>hr;
    salariohr = mes/hr;
    cout<<"Seu salário base por hora é igual à: " << salariohr <<" Por Hora" <<endl;
    
    
    cout<<"Você apresenta algum dos benefícios abaixo?"<<endl;
    cout<<"1-Insalubridade"<<endl;
    cout<<"2-Noturno"<<endl;
    cout<<"3-Periculosidade"<<endl;
    cout<<"4-Periculosidade e Noturno"<<endl;
    cout<<"5-Noturno e Insalubridade"<<endl;
    cout<<"6-Periculosidade e insalubridade"<<endl;
    cout<<"7-Periculosidade,insalubridade e noturno"<<endl;
    cout<<"0-Não"<<endl;
    cin>>beneficios;
    
    if(beneficios == 1){
        conta = mes+(mes*0.4);
        cout<< "Seu salário com o acrécimo de Insalubridade é igual à: " << conta <<endl;
    }
    
    else if(beneficios == 2){
        conta = mes+(mes*0.2);
        cout<< "Seu salário com o acrécimo de Insalubridade é igual à: " << conta <<endl;
    }
    
    else if(beneficios == 3){
        conta = mes+(mes*0.3);
        cout<<"Seu salário com o acrécimo de Insalubridade é igual à: " << conta <<endl;
    }
    
    else if(beneficios == 4){
    conta = mes+(mes*0.5);
    cout<<"Seu salário com o acrécimo de Insalubridade é igual à: " << conta <<endl;
    }
    
    else if(beneficios == 5){
    conta = mes+(mes*0.6);
    cout<<"Seu salário com o acrécimo de Insalubridade é igual à: " << conta <<endl;
    }
    
    else if(beneficios == 6){
    conta = mes+(mes*0.7);
    cout<<"Seu salário com o acrécimo de Insalubridade é igual à: " << conta <<endl;
    }
    
    else if(beneficios == 7){
    conta = mes+(mes*0.9);
    cout<<"Seu salário com o acrécimo de Insalubridade é igual à: " << conta <<endl;
    }
    
    
    if (conta != 0){
        cout<<"O seu contrato apresenta algum desconto?"<<endl;
        cout<<"1-Vale transporte"<<endl;
        cout<<"2-Imposto de renda"<<endl;
        cout<<"3-Inss"<<endl;
        cout<<"4-Imposto de renda e Inss"<<endl;
        cout<<"5-Imposto de renda e Vale transporte"<<endl;
        cout<<"6-Vale transporte e Inss"<<endl;
        cout<<"7-Vale transporte, inss e imposto de renda"<<endl;
        cout<<"0-Não"<<endl;
        cin>>opc;
        
        if(opc == 1){
            valor = conta - (conta*0.06);
            cout<<"Seu salário total é igual à: " << valor;
        }
        
        else if(opc == 2){
            valor = conta - (conta*0.15);
            cout<<"Seu salário total é igual à: " << valor;
            }
            
        else if(opc == 3){
            valor = conta - (conta*0.075);
            cout<<"Seu salário total é igual à: " << valor;
        }
        
        else if(opc == 4){
            valor = conta - (conta*0.225);
            cout<<"Seu salário total é igual à: " << valor;
        }
        
        else if(opc == 5){
            valor = conta - (conta*0.225);
            cout<<"Seu salário total é igual à: " << valor;
        }
        
        else if(opc == 6){
            valor = conta - (conta*0.221);
            cout<<"Seu salário total é igual à: " << valor;
                }
                
            else if(opc == 7){
            valor = conta - (conta*0.285);
            cout<<"Seu salário total é igual à: " << valor;
            }
    else{
       cout<< "Você continua com o salário de: " << mes <<endl; 
    }
    }   
    return 0;
}
