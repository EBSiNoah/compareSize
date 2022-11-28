# -*- coding: utf-8 -*-
"""
Created on Sun Nov 27 16:07:20 2022

@Author: skm
@Filename .py
"""
# 0<= a,b <=100
# return "<" || ">" || "="
import random

def comN(a,b):
    output=[">","<","="]
    idx=0
    
    if(a>b):
        idx=0
    elif(a<b):
        idx=1
    else:
        idx=2
    
    return output[idx]

def comN01(a,b):
    global num
    com=["="]
    # com=[">" for i in range(1,101)]
    # com=["<" for j in range(101,201)]
    for i in range(1,101):
        com.append(">")
    for j in range(101,201):
        com.append("<")
    
    return com[a-b]

def comN01A00(a,b):
    f = "=" + ">"*100 + "<"*100
    
    return f[a-b]

def comN01A01(a,b, N ):
    f = "=" + ">"*N + "<"*N
    
    return f[a-b]

    

def compareT():
    comN01(random.randrange(0,100),random.randrange(0,100))

def main():
    compareT()
    
if(__name__=="__main__"):
    main()