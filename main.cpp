// programme 1
#include <iostream>

using namespace std;

class  MyClass {
 int a;
 int b;
 public:
      MyClass(int x,int y);
      void afficher();
      ~MyClass();
};
MyClass::MyClass(int x=1, int y=3)
{   a=x;
    b=y;
    cout<<"le constructeur est bien appele"<<endl;
}

MyClass:: ~MyClass()
   {
       cout<<"le destructeur est bien appele"<<endl;
}

 void MyClass::afficher()
   {
       cout<<a<<endl;
       cout<<b<<endl;
}


 main()
{
    MyClass ele1;
    ele1.afficher();

}
//programme 2
#include <iostream>

using namespace std;

class  MyClass {
 int a;
 int b;
 public:
      MyClass(int x,int y);
      void afficher();
      ~MyClass();
};
MyClass::MyClass(int x=1, int y=3)
{   a=x;
    b=y;
    cout<<"le constructeur est bien appele"<<endl;
}

MyClass:: ~MyClass()
   {
       cout<<"le destructeur est bien appele"<<endl;
}

 void MyClass::afficher()
   {
       cout<<a<<endl;
       cout<<b<<endl;
}


 main()
{
    MyClass ele1;
    ele1.afficher();

}
// programme 3
#include <iostream>
using namespace std;
class Complex{

  public:
  float real;
  float imag;
  Complex(int r, int i){
    real = r;
    imag = i;
  }
};
int main(){


  float r1, i1;

  cout << "Premier nombre " <<endl;
  cout << "Entrez la partie reelle: ";
  cin >> r1;
  cout << "Entrez la partie imaginaire: ";
  cin >> i1;
  cout << "Le Premier nombre "<< r1 << " + i" << i1 <<endl;
  //créer le nombre complexe 1
     Complex c1(r1, i1);

  float r2, i2;
  cout << "Deuxième nombre"<<endl;
  cout << "Entrez la partie reelle: ";
  cin >> r2;
  cout << "Entrez la partie imaginaire: ";
  cin >> i2;
  cout << "Le Deuxième nombre "<< r2 << " + i" << i2 <<endl;
  //créer le nombre complexe 2
    Complex c2(r2, i2);

// (égalité c1 et c2

  if (c1.real == c2.real && c1.imag + c2.imag)
    cout << "les nobre complex sont egaux "<<endl;
  else
   cout << "les nobre complex sont diferant "<<endl;

  // calculer la somme des deux nombres complexes c1 et c2

  float r = c1.real + c2.real;
  float  i = c1.imag + c2.imag;
  cout << "La somme est "<< r << " + i" << i <<endl;
    // calculer la soustraction des deux nombres complexes c1 et c2

  float  r3 = c1.real - c2.real;
  float  i3 = c1.imag - c2.imag;
  cout << "La soustraction est "<< r3 << " + i" << i3 <<endl;
  // calculer la multiplication des deux nombres complexes c1 et c2

  float  r4 = (c1.real * c2.real) - (c1.imag * c2.imag);
  float  i4 = (c1.real * c2.imag) + (c1.imag *c2.real);
  cout << "La multiplication est "<< r3 << " + i" << i3 <<endl;
    // calculer la dividion  des deux nombres complexes c1 et c2

 float  r5 = ((c1.real * c2.imag) + (c1.imag *c2.real))/(( c2.imag * c2.imag) + (c2.real*c2.real));
  float  i5 = ((c1.imag * c2.imag) -(c1.real * c2.real)) /(( c2.imag * c2.imag) + (c2.real*c2.real));
  cout << "Ladivision  est "<< r3 << " + i" << i3 <<endl;
  return 0;
}
//programme4
#include <iostream>
using namespace std;
class Complex{

  public:
  float real;
  float imag;
  Complex(int r, int i){
    real = r;
    imag = i;
  }
};
int main(){


  float r1, i1;

  cout << "Premier nombre " <<endl;
  cout << "Entrez la partie reelle: ";
  cin >> r1;
  cout << "Entrez la partie imaginaire: ";
  cin >> i1;
  cout << "Le Premier nombre "<< r1 << " + i" << i1 <<endl;
  //créer le nombre complexe 1
     Complex c1(r1, i1);

  float r2, i2;
  cout << "Deuxième nombre"<<endl;
  cout << "Entrez la partie reelle: ";
  cin >> r2;
  cout << "Entrez la partie imaginaire: ";
  cin >> i2;
  cout << "Le Deuxième nombre "<< r2 << " + i" << i2 <<endl;
  //créer le nombre complexe 2
    Complex c2(r2, i2);

// (égalité c1 et c2

  if (c1.real == c2.real && c1.imag + c2.imag)
    cout << "les nobre complex sont egaux "<<endl;
  else
   cout << "les nobre complex sont diferant "<<endl;

  // calculer la somme des deux nombres complexes c1 et c2

  float r = c1.real + c2.real;
  float  i = c1.imag + c2.imag;
  cout << "La somme est "<< r << " + i" << i <<endl;
    // calculer la soustraction des deux nombres complexes c1 et c2

  float  r3 = c1.real - c2.real;
  float  i3 = c1.imag - c2.imag;
  cout << "La soustraction est "<< r3 << " + i" << i3 <<endl;
  // calculer la multiplication des deux nombres complexes c1 et c2

  float  r4 = (c1.real * c2.real) - (c1.imag * c2.imag);
  float  i4 = (c1.real * c2.imag) + (c1.imag *c2.real);
  cout << "La multiplication est "<< r3 << " + i" << i3 <<endl;
    // calculer la dividion  des deux nombres complexes c1 et c2

 float  r5 = ((c1.real * c2.imag) + (c1.imag *c2.real))/(( c2.imag * c2.imag) + (c2.real*c2.real));
  float  i5 = ((c1.imag * c2.imag) -(c1.real * c2.real)) /(( c2.imag * c2.imag) + (c2.real*c2.real));
  cout << "Ladivision  est "<< r3 << " + i" << i3 <<endl;
  return 0;
}
//programe 5
#include <iostream>
#include <string>

using namespace std;

class Animal{
    protected:
 string n;
 int a;
 public:
     Animal(string x,int y);
     void set_value();
};
class Zebra :public Animal{
    string origine;
  public:
    Zebra( string x,int y,string o): Animal(x,y){
    origine=o;};
    void set_value();
};
class Dolphin:public Animal{
    string origine;
  public:
   Dolphin(string x,int y ,string o): Animal(x,y){
    origine=o;
   };
    void set_value();
};

Animal::Animal(string x,int y)
  {
    n = x;
    a = y;
  }
void Zebra::set_value(){
    cout<<" les informqtion sur zebra: mon nom est "<<n<<" mon age est "<< a <<" ans" <<" " <<" ma origine est:"<<origine<<endl ;
}
void Dolphin::set_value(){
    cout<<" les informqtion sur Dolphin :mon nom est "<<n<<" mon age est "<< a <<" ans" <<" " <<" ma origine est:"<<origine <<endl  ;
}



int main()
{
    Zebra Zebra ( "anna" ,2 , "kinia");
    Dolphin Dolphin ("anna"  ,2 , "kinia");
    Zebra.set_value();
    Dolphin.set_value();

	return 0;
}
//programme 6
#include <iostream>
#include <string>

using namespace std;

class Animal{
    protected:
 string n;
 int a;
 public:
     Animal(string x,int y);
     void set_value();
};
class Zebra :public Animal{
    string origine;
  public:
    Zebra( string x,int y,string o): Animal(x,y){
    origine=o;};
    void set_value();
};
class Dolphin:public Animal{
    string origine;
  public:
   Dolphin(string x,int y ,string o): Animal(x,y){
    origine=o;
   };
    void set_value();
};

Animal::Animal(string x,int y)
  {
    n = x;
    a = y;
  }
void Zebra::set_value(){
    cout<<" les informqtion sur zebra: mon nom est "<<n<<" mon age est "<< a <<" ans" <<" " <<" ma origine est:"<<origine<<endl ;
}
void Dolphin::set_value(){
    cout<<" les informqtion sur Dolphin :mon nom est "<<n<<" mon age est "<< a <<" ans" <<" " <<" ma origine est:"<<origine <<endl  ;
}



int main()
{
    Zebra Zebra ( "anna" ,2 , "kinia");
    Dolphin Dolphin ("anna"  ,2 , "kinia");
    Zebra.set_value();
    Dolphin.set_value();

	return 0;
}
//programme 7
class vecteur3d
{
private:
    float x,y,z;
public:
    vecteur3d(float x1=0,float y1=0,float z1=0);
    friend ostream&  operator << (ostream& COUT,vecteur3d &v1);
    friend vecteur3d operator + (vecteur3d &v1,vecteur3d &v2);
    friend vecteur3d operator * (vecteur3d &v1,vecteur3d &v2);
    friend bool operator ==(vecteur3d &v1,vecteur3d &v2);
    friend float norme  (vecteur3d &v1);
    friend float normax (vecteur3d &v1,vecteur3d &v2);
    void afficher() {
		cout << "f("<<x<<","<<y<<","<<z<<")" << endl;
	}
};

//constructeur
vecteur3d::vecteur3d(float x1,float y1,float z1)
{
    this->x=x1;
    this->y=y1;
    this->z=z1;
}
//l'operateur de produit
vecteur3d operator * (vecteur3d &v1,vecteur3d &v2)
{
    vecteur3d v=vecteur3d();
    v.x=v1.x*v2.x;
    v.y=v1.y*v2.y;
    v.z=v1.z*v2.z;
    v.afficher();
    return v;
}
//l'operateur de la somme
vecteur3d operator + (vecteur3d &v1,vecteur3d &v2)
{
    vecteur3d v=vecteur3d();
    v.x=v1.x+v2.x;
    v.y=v1.y+v2.y;
    v.z=v1.z+v2.z;
    v.afficher();
    return v;
}
//l'operateur de comparaison
bool operator ==(vecteur3d &v1,vecteur3d &v2)
{
    if(v1.x!=v2.x | v1.y!=v2.y | v1.z!=v2.z)
        return false;
    if (v1.x==v2.x & v1.y==v2.y & v1.z==v2.z)
        return true;
}

//le norme de vecteur
float norme  (vecteur3d &v1)
{
    vecteur3d v=vecteur3d();
    v.x=v1.x*v1.x;
    v.y=v1.y*v1.y;
    v.z= v1.z*v1.z;
    return  sqrt(v.x + v.y + v.z);
}
//le norme maximal
float normax(vecteur3d &v1,vecteur3d &v2)
{
    if(norme(v1) > norme(v2))
        {
        cout << "la norme maximal est:" << norme(v1)<<endl;
        return norme(v1);
        }
    else
    {
        cout << "la norme maximal est:" << norme(v2)<<endl;
        return norme(v2);
    }
}
ostream&  operator << (ostream& COUT,vecteur3d &v1)
{
    return COUT;
}

int main()
{
    vecteur3d v(0,0,2),w(0,0,2);
    v.afficher();
    vecteur3d z=v+w;
    vecteur3d k=v*w;
    cout << "votre vecteur est:"<<boolalpha<<(v==w)<<endl;
    cout << "la somme des vecteur est:";
    z.afficher();
    cout << "le produit scalaire des vecteur est:";
    k.afficher();
    norme(v);
    normax(v,w);

    return 0;
}
// programme 8
#include <iostream>
#include <string>

using namespace std;
class Media{
protected:
    string titre;
    public:
     Media(string t);
     void imprimer() ;
     char *id();
};

class Audio : virtual public Media{
 protected:
    int date;
 public:
 Audio (string t, int d):Media(t){
    date= d;
   }
   void imprimer() ;
   char *id();
   void contexte();
};

class Livre : public Media{
 protected:
    int page;
    string auteur ;
 public:
 Livre (string t,string a, int p):Media(t){
    page= p;
    auteur =a;
   }
   void imprimer() ;
   char *id();
   void resume();
};

class Presse : virtual public Media{
 protected:
    int date ;
    string auteur ;
 public:
 Presse ( string t,string a, int d ):Media(t){
    date = d;
    auteur = a;
   }
   void imprimer() ;
   char *id();
   void detaile();
};

class CD :  public Audio{
    string nom;
 public:
 CD (string t, int d ,string n):Media(t),Audio(t,d){
    nom= n;
   }
   void imprimer() ;
   char *id();
   void plusinf();
};

class Cassette :  public Audio{
    string nom;
 public:
 Cassette (string t, int d ,string n):Media(t),Audio(t,d){
    nom= n;
   }
   void imprimer() ;
   char *id();
   void det();
};

class Disque :  public Audio{
    int code;
 public:
 Disque (string t, int d ,int c):Media(t),Audio(t,d){
    code= c;
   }
   void imprimer() ;
   char *id();
   void infodis();
};

class Magazine : virtual public Presse{
 protected:
    int code ;
 public:
 Magazine ( string t,string a, int d ,int c ):Media(t),Presse (t,a,d){
    code=c;
   }
   void imprimer() ;
   char *id();
   void infoMag();
};
class Journal : virtual public Presse{
 protected:
    int serie ;
 public:
 Journal ( string t,string a, int d ,int s ):Media(t),Presse (t,a,d){
    serie=s;
   }
   void imprimer() ;
   char *id();
   void infoJou();
};
class Revue : virtual public Presse{
 protected:
    int code ;
 public:
 Revue ( string t,string a, int d ,int c ):Media(t),Presse (t,a,d){
    code=c;
   }
   void imprimer() ;
   char *id();
   void infoReV();
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
// programme 9
#include <iostream>
#include <string>

using namespace std;
class Media{
protected:
    string titre;
    public:
     Media(string t);
     void imprimer() ;
     char *id();
};

class Audio : virtual public Media{
 protected:
    int date;
 public:
 Audio (string t, int d):Media(t){
    date= d;
   }
   void imprimer() ;
   char *id();
   void contexte();
};

class Livre : public Media{
 protected:
    int page;
    string auteur ;
 public:
 Livre (string t,string a, int p):Media(t){
    page= p;
    auteur =a;
   }
   void imprimer() ;
   char *id();
   void resume();
};

class Presse : virtual public Media{
 protected:
    int date ;
    string auteur ;
 public:
 Presse ( string t,string a, int d ):Media(t){
    date = d;
    auteur = a;
   }
   void imprimer() ;
   char *id();
   void detaile();
};

class CD :  public Audio{
    string nom;
 public:
 CD (string t, int d ,string n):Media(t),Audio(t,d){
    nom= n;
   }
   void imprimer() ;
   char *id();
   void plusinf();
};

class Cassette :  public Audio{
    string nom;
 public:
 Cassette (string t, int d ,string n):Media(t),Audio(t,d){
    nom= n;
   }
   void imprimer() ;
   char *id();
   void det();
};

class Disque :  public Audio{
    int code;
 public:
 Disque (string t, int d ,int c):Media(t),Audio(t,d){
    code= c;
   }
   void imprimer() ;
   char *id();
   void infodis();
};

class Magazine : virtual public Presse{
 protected:
    int code ;
 public:
 Magazine ( string t,string a, int d ,int c ):Media(t),Presse (t,a,d){
    code=c;
   }
   void imprimer() ;
   char *id();
   void infoMag();
};
class Journal : virtual public Presse{
 protected:
    int serie ;
 public:
 Journal ( string t,string a, int d ,int s ):Media(t),Presse (t,a,d){
    serie=s;
   }
   void imprimer() ;
   char *id();
   void infoJou();
};
class Revue : virtual public Presse{
 protected:
    int code ;
 public:
 Revue ( string t,string a, int d ,int c ):Media(t),Presse (t,a,d){
    code=c;
   }
   void imprimer() ;
   char *id();
   void infoReV();
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
