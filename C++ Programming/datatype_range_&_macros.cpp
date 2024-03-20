// C++ code to demonstrate the macros for data types
#include &lt;iostream&gt;
#include &lt;limits.h&gt; // for int,char macros
#include &lt;float.h&gt; // for float,double macros
using namespace std;
int main()
{

// Displaying ranges with the help of macros
cout &lt;&lt; &quot;char ranges from : &quot; &lt;&lt; CHAR_MIN &lt;&lt; &quot; to &quot; &lt;&lt; CHAR_MAX;
cout &lt;&lt; &quot;\n\nshort char ranges from : &quot; &lt;&lt; SCHAR_MIN &lt;&lt; &quot; to &quot; &lt;&lt; SCHAR_MAX;
cout &lt;&lt; &quot;\n\nunsigned char ranges from : &quot; &lt;&lt; 0 &lt;&lt; &quot; to &quot; &lt;&lt; UCHAR_MAX;

cout &lt;&lt; &quot;\n\n\nshort int ranges from : &quot; &lt;&lt; SHRT_MIN &lt;&lt; &quot; to &quot; &lt;&lt; SHRT_MAX;
cout &lt;&lt; &quot;\n\nunsigned short int ranges from : &quot; &lt;&lt; 0 &lt;&lt; &quot; to &quot; &lt;&lt; USHRT_MAX;
cout &lt;&lt; &quot;\n\nint ranges from : &quot; &lt;&lt; INT_MIN &lt;&lt; &quot; to &quot; &lt;&lt; INT_MAX;
cout &lt;&lt; &quot;\n\nunsigned int ranges from : &quot; &lt;&lt; 0 &lt;&lt; &quot; to &quot; &lt;&lt; UINT_MAX;
cout &lt;&lt; &quot;\n\nlong int ranges from : &quot; &lt;&lt; LONG_MIN &lt;&lt; &quot; to &quot; &lt;&lt; LONG_MAX;
cout &lt;&lt; &quot;\n\nunsigned long int ranges from : &quot; &lt;&lt; 0 &lt;&lt; &quot; to &quot; &lt;&lt; ULONG_MAX;
cout &lt;&lt; &quot;\n\nlong long int ranges from : &quot; &lt;&lt; LLONG_MIN &lt;&lt; &quot; to &quot; &lt;&lt; LLONG_MAX;
cout &lt;&lt; &quot;\n\nunsigned long long int ranges from : &quot; &lt;&lt; 0 &lt;&lt; &quot; to &quot; &lt;&lt; ULLONG_MAX;

cout &lt;&lt; &quot;\n\n\nfloat ranges from : &quot; &lt;&lt; FLT_MIN &lt;&lt; &quot; to &quot; &lt;&lt; FLT_MAX;
cout &lt;&lt; &quot;\n\nnegative float ranges from : &quot; &lt;&lt; -FLT_MIN &lt;&lt; &quot; to &quot; &lt;&lt; -FLT_MAX;
cout &lt;&lt; &quot;\n\ndouble ranges from : &quot; &lt;&lt; DBL_MIN &lt;&lt; &quot; to &quot; &lt;&lt; DBL_MAX;
cout &lt;&lt; &quot;\n\nnegative double ranges from : &quot; &lt;&lt; -DBL_MIN &lt;&lt; &quot; to &quot; &lt;&lt; +DBL_MAX;

return 0;

}