#include"evenodd.cpp"
class Evenoddfactorial: public Evenodd
{
	protected:
		int f=1;
	public:		
	void calcfactorial()
	{
		for(int i=num;i>=1;i--)
		f=f*i;
		cout<<"Factorial :"<<f<<"\n";
	}
		
};

/*int main()
{
	Evenoddfactorial obj;
	obj.input();
	obj.checkevenodd();
	obj.calcfactorial();
}*/
