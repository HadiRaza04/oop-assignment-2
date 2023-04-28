//// --------------------------------Question# 01
//// 01
//#include <iostream>
//using namespace std;
//int main() {
//
//    int rowss=5, count=0, nextcount=0, k=0;
//    for(int i=rowss; i>=1; i--) {
//        for(int spacee=1; spacee<=rowss-i; spacee++) {
//            cout << "  ";
//            count++;
//        }
//        while(k != 2*i-1) {
//            if (count<=rowss-1) {
//                cout<<i+k<<" ";
//                count++;
//            }
//            else {
//                nextcount++;
//                cout<<i+k-2*nextcount<<" ";
//            }
//            k++;
//        }
//        nextcount=count=k=0;
//        cout<<endl;
//    }
//    
//    return 0;
//}
//// 02
//#include <iostream>  
//using namespace std;  
//int main() {  
//
//	char alphabets='A';    
//    for(int i=1; i<=5; i++) {    
//        for(int j=5; j>=i; j--)    
//            cout<<" ";    
//        for(int k=1; k<=i; k++)    
//            cout<<alphabets++;    
//            alphabets--;    
//        for(int l=1; l<i; l++)    
//            cout<<--alphabets;    
//        cout<<"\n";    
//        alphabets='A';    
//    }    
//	return 0;  
//} 
//// 03
//#include <iostream>  
//using namespace std;  
//int main() {  
//
//	int number=5;      
//	for(int i=1;i<=number;i++) {    
//		for(int j=1;j<=number-i;j++) {    
//			cout<<" ";    
//		}    
//		for(int k=1;k<=i;k++) {    
//			cout<<k;    
//		}    
//		for(int l=i-1;l>=1;l--) {    
//			cout<<l;    
//		}    
//		cout<<"\n";    
//	}    
//	return 0;  
//}   
//// 04
//#include <iostream>
//using namespace std;
//int main() {
//
//    int rows = 7;
//	int col = 1;
//    for(int i=0; i<rows; i++) {
//        for(int spaces=1; spaces<=rows-i; spaces++)
//            cout<<"  ";
//
//        for(int k=0; k<=i; k++) {
//            if (k==0 || i==0)
//                col = 1;
//            else
//                col = col*(i-k+1)/k;
//
//            cout<<col<<"   ";
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}
//// 05
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n=5, x, y, z;
//	for(x=0; x<=n; x++)
//	{
//		for(z=n; z>x; z--)
//			cout<<" ";
//		for(y=0; y<x; y++)
//		cout<<"* ";
//		cout<<"\n";	
//	}
//	for(x=1; x<n; x++)
//	{
//		for(z=0; z<x; z++)
//		cout<<" ";
//		for(y=n; y>x;  y--)
//		cout<<"* ";
//		cout<<"\n";
//	}
//	return 0;
//}
//// 06
//#include <iostream>
//using namespace std;
//int main() {
//	
//    int rows=4;
//    for(int i=0; i<rows; i++) {
//        int num=1;
//
//        for(int j=1; j<rows-i; j++) {
//            cout<<"  ";
//        }
//        for(int j=0; j<=i; j++) {
//            cout<<num<<" ";
//            num*=2;
//        }
//        num/=4;
//        for(int j=0; j<i; j++) {
//            cout<<num<<" ";
//            num/=2;
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}
//// 07
//#include <iostream>
//using namespace std;
//int main() {
//	
//   int roww=5;
//   for(int i=roww; i>=1; i--) {
//      for(int spacee=i; spacee<roww; spacee++)
//      {
//        cout<<" ";
//      }
//      for(int j=1; j<=(2*i-1); j++)
//      {
//        cout<<"*";
//      }
//      cout<<"\n";
//   }
//   for(int i=1; i<=roww; i++) {
//      for(int spacee=i; spacee<roww; spacee++)
//      {
//        cout<<" ";
//      }
//      for(int j=1; j<=(2*i-1); j++)
//      {
//        cout<<"*";
//      }
//      cout << "\n";
//   }
//
//   return 0;
//}
//// 08
//#include <iostream>
//using namespace std;
//int main() {
//	int n=5, x, y, z;
//	for(x=1; x <=n; x++)
//	{
//		for (z=x; z<n; z++)
//		cout<<" ";
//		for(y=1; y<=(2*n-1); y++)
//		{
//			if(x==n || y==1 || y==2*x-1)
//			cout<<"*";
//			else
//			cout<<" ";
//		}
//		cout<<"\n";
//	}
//	return 0;
//}
//// 09
//#include <iostream>
//using namespace std;
//int main() {
//	int n=4, x, y, z=1, m;
//	for(x=0; x<=n; x++)
//	{
//		for(y=n; y>x; y--)
//		{
//			cout<<" ";
//		}
//		cout<<"*";
//		if (x>0)
//		{
//			for(m=1; m<=z;  m++)
//			{
//				cout<<" ";
//			}
//			z+=2;
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
//	z-=4;
//	for(x=0; x<=n -1; x++)
//	{
//		for(y=0; y<=x; y++)
//		{
//			cout<<" ";
//		}
//		cout<<"*";
//		for(m=1; m<=z; m++)
//		{
//			cout<<" ";
//		}
//		z-=2;
//		if(x!=n-1)
//		{
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
//	return 0;
//}
//// 10
//#include <iostream>
//using namespace std;
//int main() {
//	
//   char alphabet='A';
//   
//   for(int i=0; i<5; i++) {
//      for(int j=0; j<5; j++) {
//         cout<<alphabet<<" ";
//         alphabet++;
//      }
//      cout<<endl;
//   }
//
//   return 0;
//}
//// 11
//#include <iostream>
//using namespace std;
//int main() {
//	
//    int n=5;
//    for(int i=1; i<=n; i++) {
//        for(int j=1; j<=n-i+1; j++) {
//            cout<<j<<" ";
//        }
//        for(int k=0; k<=2*(i-1)-1; k++) {
//            cout<<"* ";
//        }
//        for(int j=n-i+1; j>=1; j--) {
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//// 12
//#include <iostream>
//using namespace std;
//int main() {	
//   char alphabets='A';
//   
//   for(int i=1; i<=5; i++) {
//      for(int j=1; j<=5-i; j++) {
//         cout<<" ";
//      }
//      for(int k=1; k<=i; k++) {
//         cout<<alphabets<<" ";
//         alphabets++;
//      }
//      cout<<endl;
//   }
//
//   return 0;
//}
//// 14
//#include <iostream>
//using namespace std;
//int main() {
//	
//    int rowss = 5;
//    char letterss = 'A';
//    for (int i=0; i<rowss; i++) {
//        for (int j=0; j<rowss; j++) {
//            if (i==0 || i==rowss-1 || j==0 || j==rowss-1) {
//                cout<<"* ";
//            } else {
//                cout<<letterss<<" ";
//                letterss++;
//            }
//        }
//
//        cout<<endl;
//    }
//    return 0;
//}

//// 15
//#include <iostream>
//using namespace std;
//int main() {
//	
//    int rowss=10;
//    for(int i=1; i<=rowss; i++) {
//        if (i%2==0) {
//            cout<<"$ ";
//        }
//        for(int j=1; j<=rowss-i; j++) {
//            cout<<"  ";
//        }
//        for(int k=1; k<=2*i-1; k++) {
//            if (k%2==0) {
//                cout<<"* ";
//            }else {
//                cout<<"$ ";
//            }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//// --------------------------------Question# 06
//#include <iostream>
//using namespace std;
//int main() {
//	
//    char operatorr;
//    float num1, num2, result;
//    cout<<"Enter operator (-, +, /, *): ";
//    cin>>operatorr;
//    cout<<"Enter two numbers with seperated by a gap: ";
//    cin>>num1>>num2;
//
//    switch(operatorr) {
//        case '+':
//            result=num1+num2;
//            break;
//        case '-':
//            result=num1-num2;
//            break;
//        case '*':
//            result=num1*num2;
//            break;
//        case '/':
//            result=num1/num2;
//            break;
//        default:
//            cout<<"Invalid operator";
//            return 1;
//    }
//    cout<<num1<<" "<<operatorr<<" "<<num2<<" = "<<result;
//    
//    return 0;
//}
//// --------------------------------Question# 07
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	
//    string input;
//    int vowels=0, consonants=0, digits=0, whitespaces=0;
////    cout<<"Enter any word and number with spaces.";
////    cin>>input;
//	getline(cin, input);
//    for (int i=0; i<input.length(); i++) {
//        char character=tolower(input[i]);
//        if (character=='a' || character=='e' || character=='i' || character=='o' || character=='u') {
//            vowels++;
//        } else if (character>='a' && character<='z') {
//            consonants++;
//        } else if (character>='0' && character<='9') {
//            digits++;
//        } else if (character==' ') {
//            whitespaces++;
//        }
//    }
//    cout<<"Number of vowels : " <<vowels<<endl;
//    cout<<"Number of consonants : "<<consonants<<endl;
//    cout<<"Number of digits : "<<digits<<endl;
//    cout<<"Number of white spaces : "<<whitespaces<<endl;
//    
//    return 0;
//}
//// --------------------------------Question# 08
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	
//    string input, output = "";
//    getline(cin, input);
//    for(int i=0; i<input.length(); i++) {
//        if (isalpha(input[i])) {
//            output += input[i];
//        }
//    }
//    cout<<output;
//    
//    return 0;
//}
