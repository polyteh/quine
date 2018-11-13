#include <iostream>
using namespace std;
char quote=34;//ASCII code for quote
char tab=9;//ASCII code for tabulation
int main()
{
		string quine []= 	{
		"#include <iostream>",
		"using namespace std;",
		"char quote=34;//ASCII code for quote",
		"char tab=9;//ASCII code for tabulation",
		"int main()",
		"{",
		"string quine []=  {",
		"};",
		"for (int i=0; i<7;i++) cout<<quine[i]<<endl;",
		"for (int i=0; i<15;i++) cout<<tab<<quote+quine[i]+quote+','<<endl;",
		"for (int i=7; i<15;i++) cout<<quine[i]<<endl;",
		"int k;",
		"cin>>k;",
		"return 0;",
		"}",
						};		
		for (int i=0; i<7;i++) cout<<quine[i]<<endl;
		for (int i=0; i<15;i++) cout<<tab<<quote+quine[i]+quote+','<<endl;
		for (int i=7; i<15;i++) cout<<quine[i]<<endl;				
	int k;
	cin>>k;
    return 0;
}