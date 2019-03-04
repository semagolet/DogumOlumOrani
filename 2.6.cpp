#include <iostream>
using namespace std;
class YerlesimBirimi
{
	public:
	string isim;
	float nufus,dogumsayisi,olumsayisi;
    void isimAta(string);
    void nufusAta(float);
    void dogumAta(float);
    void olumAta(float);
    float dogumOrani();
    float olumOrani();
};
void YerlesimBirimi::isimAta(string is)
{
isim=is;
}
void YerlesimBirimi ::nufusAta(float nuf)
{ 
   nufus=nuf;
}
void YerlesimBirimi::dogumAta(float dogSay)
{ 
 dogumsayisi=dogSay;
}
   
void YerlesimBirimi::olumAta(float olSay)
{
	olumsayisi=olSay;
}
float YerlesimBirimi::dogumOrani()
{
	return dogumsayisi/nufus;
}
float YerlesimBirimi::olumOrani()
  {
  	return olumsayisi/nufus;
	}  
    
int main ()
{
	int n,d,o;
	string ad;
	YerlesimBirimi diz[2];
	for (int i=0; i<2;i++)
	{
	cout<<"Yerlesim Biriminin ismini giriniz: ";
	cin>>diz[i].isimAta(ad);
	cout<<"Nufusunu giriniz: ";
	cin>>diz[i].nufusAta(n);
	cout<<"Dogum sayisini giriniz: ";
	cin>>diz[i].dogumAta(d);
	
	cout<<"Olum sayisini giriniz: ";
	cin>>diz[i].olumAta(o);
	
	
	
	cout<< ad<<"- - -"<<"Dogum Orani:"<<diz[i].dogumOrani()<<endl;
	cout<< ad<<"- - -"<<"Olum Orani: "<<diz[i].olumOrani()<<endl;
	}
	
	return 0;
	
}
