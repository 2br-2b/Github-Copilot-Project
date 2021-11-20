# Homework 1 
# Design a program with the class FMCLprog1.   This class will prompt the user for two ints and display those numbers with their sum.   5 points.   Due Friday, 9/3/21.    FMCL = First, Middle, Confirmation (if any), Last initials in your name. 
# Done in python 


class FMCLprog1:
    def __init__(self):
        self.num1 = int(input("Enter a number: "))
        self.num2 = int(input("Enter another number: "))
        self.sum = self.num1 + self.num2
        print("The sum of your numbers is", self.sum)
        
        
FMCLprog1()
