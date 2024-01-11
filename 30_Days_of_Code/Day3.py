

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    N = int(input().strip())
    if N%2!=0:
        print("Weird")
    if N in range(2,5):
        if N%2==0:
            print("Not Weird")
    if N in range(6,21):
        if N%2==0:
            print("Weird")
    if N>20:
        if N%2==0:
            print("Not Weird")