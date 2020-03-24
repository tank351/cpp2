/*
 * Authors : hosam hegly & aiman younis
*/
#include "PhoneticFinder.hpp"

#include <iostream>

using namespace std;





	string phonetic::find(string text,string word) {
        string str="";
		if(word.length()>text.length())
		throw "Word length must be smaller or equal to text";
		if(text==""||word=="")
		throw "text and word mustnt be null";
		size_t i=0;
		    string text3 = "xxx yyy yiyiheysayios";

		while(i<text.length())
		{
			while(i<text.length()&&text.at(i)!=' ')
			{
				
                str=str+text.at(i);
		    	i++;
	
			}
			size_t j=0;
			int counter=0;
			if(str.length()==word.length())
			while(j<str.length())
			{
				char a=tolower(str.at(j));
				char b=tolower(word.at(j));
				
				if(tolower(a)==tolower(b))
				{
					counter++;
				}
				else
				{
				if((a=='v'||a=='w')&&(b=='v'||b=='w'))
				{
					counter++;
				}
				
				if((a=='b'||a=='f'||a=='p')&&(b=='b'||b=='f'|b=='p'))
				{
					counter++;
				}
		    	if((a=='c'||a=='k'||a=='q')&&(b=='c'||b=='k'|b=='q'))
				{
					counter++;
				}
				if((a=='g'||a=='j')&&(b=='g'||b=='j'))
				{
					counter++;
				}
				if((a=='s'||a=='z')&&(b=='s'||b=='z'))
				{
					counter++;
				}
				if((a=='d'||a=='t')&&(b=='d'||b=='t'))
				{
					counter++;
				}
				if((a=='o'||a=='u')&&(b=='o'||b=='u'))
				{
					counter++;
				}
				if((a=='i'||a=='y')&&(b=='i'||b=='y'))
				{
					counter++;
				}
				}
				
				
				j++;
			}
			if(counter==word.length())
			return str;
			str="";
			i++;

		}
		throw "the word you've entered is not contained in the text";
		
	}

		

	

