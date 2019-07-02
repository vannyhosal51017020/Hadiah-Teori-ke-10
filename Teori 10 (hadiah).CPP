#include<conio.h>
#include<iostream.h>
main()
{
int data[10];
int i,j,n,tmp;
cout<<"Pengurutan dari kecil ke besar"<<endl;
for(i=0;i<10;i++)
	{
   cout<<"Masukkan angka ke "<<(i+1)<<":  ";
   cin>>data[i];
   }
   cout<<"Data sebelum di urutkan :"<<endl;
   for(i=0;i<10;i++)
{
cout<<data[i]<<" ";
}
cout<<endl;
for(i=0;i<9;i++)
{
	for(j=i+1;j<10;j++)
   {
   	if(data[i]>data[j])
      {
      	tmp=data[i];
         data[i]=data[j];
         data[j]=tmp;
      }
   }

}
cout<<"Data setelah diurutkan : "<<endl;
for(i=0;i<10;i++)
{
	cout<<data[i]<<" ";
}

   int maks;
   maks = data[0];
   for (int i=0; i<10; i++)
   {
   	if (data[i] > maks)
      	maks = data[i];
   }
cout<<endl;
   cout<<"Data terbesar : "<<maks<<endl;
	cout<<endl;
	cout<<endl;

cout<<"Data sebelum diedit : "<<endl;
   for(i=0;i<10;i++)
{
cout<<data[i]<<" ";
}
cout<<"\nData yang baru (Edit Data)\n";
for(i=0;i<10;i++)
	{
   	cout<<"Masukkan angka ke "<<(i+1)<<": ";
   	cin>>data[i];
   }
   	cout<<"\nData setelah diedit : \n";
		for (i=0;i<10;i++)
		{
			cout<<" "<<data[i];
		}
getch();

}