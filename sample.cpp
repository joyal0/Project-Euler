#include<iostream>
using namespace std;

int main()
{
	string s[] = {"jarsigner","javadoc","javap","jcmd","jconsole","jdb","jdeprscan","jdeps","jfr","jhsdb","jimage","jinfo","jlink","jmap","jmod","jpackage","jps","jrunscript","jshell","jstack","jstat","jstatd","jwebserver","keytool","rmiregistry","serialver"};
	for(int i=0;i<26;++i)
	{
		cout<<"sudo update-alternatives --install /usr/bin/"<<s[i]<<" "<<s[i]<<" /usr/lib/jvm/jdk-19/bin/"<<s[i]<<"\n";
		cout<<"sudo update-alternatives --config "<<s[i]<<"\n";
	}
	return 0;
}