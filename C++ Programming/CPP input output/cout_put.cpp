#include <iostream> 
using namespace std; 

// Driver Code 
int main() 
{ 
	char arr[]="Hi my name is pratik bal";
	
	char ch='s';
	cout.put(ch);
}

/*
cout.put() is commonly used in scenarios where you need precise control over individual characters being output to the standard output stream (cout). Here are some common scenarios where cout.put() is used:

Outputting Individual Characters: When you want to output characters individually rather than as part of a string. This can be useful when constructing formatted output or when dealing with data where each character has specific significance.

Outputting Non-Printable Characters: When you need to output non-printable characters such as newline ('\n'), tab ('\t'), carriage return ('\r'), backspace ('\b'), etc. These characters are not directly representable in a string literal, so cout.put() is used to output them individually.

Writing to Files: When writing to a file stream (ofstream), put() is used similarly to cout.put() to write individual characters to the file.

Customized Output Formatting: When you need customized formatting for your output, such as padding with spaces, aligning text, or any other specific character manipulation.

Outputting Characters from Arrays or Pointers: When you want to output characters from arrays or pointers directly without converting them to strings.

Writing Low-Level I/O Operations: In certain low-level I/O operations where you need direct control over characters being written to an output device or a file.*/