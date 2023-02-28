#include <iostream>
using namespace std; 
    int area(int a,int h);
    int area(int a,int h){
      int  area_r=0;
      area_r=a*h;
      return area_r;
    }
    int main (){
        int an;
        int ah;
        int res;
        cout<<"hallar el aerea de un rectangulo "<<endl; 
        cout<<"pongan el ancho de la rectangulo "<<endl;
        cin>>an;
        cout<<"pongan la altura de la rectangulo "<<endl;
        cin>>ah;
        cout<<"la respuesta es " <<endl;
        res=area(an,ah);
     cout<<res;   
    return 0;
}