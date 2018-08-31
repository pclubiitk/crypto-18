#!/usr/bin/python2.7

import sys

Hash = {
        "1":"Iron Man",
        "2":"Iron Man 2",
        "3":"The Incredible Hulk",
        "4":"Thor",
        "5":"Captain America: The First Avenger",
        "6":"The Avengers",
        "7":"Iron Man 3",
        "8":"Agents of S.H.I.E.L.D.",
        "9":"Thor: The Dark World",
        "10":"Captain America: The Winter Soldier",
        "11":"Guardians of the Galaxy",
        "12":"Guardians of the Galaxy Vol. 2",
        "13":"Daredevil",
        "14":"Avengers: Age of Ultron",
        "15":"Jessica Jones",
        "16":"Ant-Man",
        "17":"Doctor Strange",
        "18":"Luke Cage",
        "19":"Captain America: Civil War",
        "20":"Black Panther",
        "21":"Spider-Man: Homecoming",
        "22":"Iron Fist",
        "23":"The Defenders",
        "24":"The Punisher",
        "25":"Inhumans",
        "26":"Thor: Ragnarok",
        "27":"Avengers: Infinity War",
        }

def func(data, count):
    if Hash[str(count)] == data.strip():
        return "Carry on !!\n"
    else:
        return data
        #return Hash[str(count)]
  
if __name__ == "__main__":
      
    flag = "The flag is flag{}"

    count=1
    max_count=27
    #data=' '.join(sys.argv[1:])
    #response = func(data, count)
    while 1 :
        data=sys.stdin.readline()
        response = func(data, count)
        if response.strip() == "Carry on !!":
            count = count+1
        if count==max_count:
            response=flag
        if response:
            print "OK ... " + response.strip()
