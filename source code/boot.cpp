// Copyright (c) ghgltggamer 2023
// Written by ghgltggamer
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	cout<<"Config Logs -- default (Version installed 0.a.f.1)"<<endl<<endl;
	
	string code;
	
	while (1 == 1){
		
		cin>>code;
		
		// code 
		
		if (code == "ul"){
			
			// ul data list
			string ul_datalist;
			cin>>ul_datalist;
			
			if (ul_datalist == "wrt"){
				
				
				// wrt args
				string text;
				getline(cin, text);
				
				cout<<text<<endl<<endl;
				
				
			}// for wrt
			
			
			
			else if (ul_datalist == "fs"){
				
				
				string fs_arg;
				cin>>fs_arg;
				
				
				// fs arg check
				
				if (fs_arg == "--rw"){
					
					// rw = fs read whole code
					
					// while
					string fs_data;
					
					cin>>fs_data;
					
					// with fs_data whole reading st()
					
					ifstream fs(fs_data);
					
					string fs_hold;
					
					
					if (fs.is_open()){
						
						// data should show
						while (getline(fs, fs_hold)){
						
						cout<<fs_hold<<endl;
						
					}// while loop inside fs
					
					
					}// fs file check
					else {
						
						cout<<endl<<endl<<"ERR>>FS_ERR(Can't open any file which does not exist)"<<endl<<endl;
						
					}// err for fs
					
					
					
					
				}// for fs/--w
				
				else {
					
					ifstream fs(fs_arg);
					string fs_data;
					fs>>fs_data;
					
					// checking weather the fs can open the file or not
					
					if (fs.is_open()){
						
						// data should show
						cout<<fs_data<<endl<<endl;
					}
					else {
						
						cout<<endl<<endl<<"ERR>>FS_ERR(Can't open any file which does not exist)"<<endl<<endl;
						
					}// for err
					
					
				}// for fs/--w not recognised
				
				
			}// for fs
			
			
			
		}// for ul
		
	}
	
	return 0;
}