#include"evenoddfactorial.cpp"
class Evenoddfacttable: public Evenoddfactorial
{
	protected:
		int t=1;
		
	public:
		void calctable()
		{	cout<<"Table is:"<<endl;
			for(int i=1;i<=10;i++)
			{
				t=t*num;
				cout<<num<<"x"<<i<<"="<<t<<endl;
			}
		}	
};


int main()
{
	Evenoddfacttable obj;
	obj.input();
	obj.checkevenodd();
	obj.calcfactorial();
	obj.calctable();
}

