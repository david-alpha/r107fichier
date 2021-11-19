# -*- coding: utf-8 -*-
"""
Created on Thu Oct 28 14:08:28 2021

@author: Biard
"""
import numpy as np
filin=open("c:/users/biard/desktop/zooc.txt","r+")
#filin.write("abcdef")
#filin.seek(3)
#print(filin.read(0))
tab=np.array([])
popo=filin.readlines()
for po in popo:
    print(po)
    i=0
    for p in po:
        if i!=0 and (p=='-' or p=='+' or p=='*' or p=='/'):
            l=i
            op=p
        i=i+1
    a=''
    b=''
    #filin.seek(0)
    for j in range(l):    
        a=a+po[j]
    #filin.seek(l+1)
    for j in range(l+1,len(po)-1,1):    
        b=b+po[j]
    if op=='+':
        res=float(a)+float(b)
    if op=='-':
        res=float(a)-float(b)
    if op=='*':
        res=float(a)*float(b)
    if op=='/':
        res=float(a)/float(b)
    tab=np.append(tab,a+op+b+'='+str(res))
filin.seek(0)
for p in tab:
    filin.write(p+'\n')               
filin.close()