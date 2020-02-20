import os,sys
#file_name=input("File Name:")
file_name=str(sys.argv[1])
os.system("gcc -c "+str(file_name)+' -o '+str(file_name.replace(".c",".o"))+' -finline-functions -O2')
os.system("objdump -d "+str(file_name.replace(".c",".o")))
