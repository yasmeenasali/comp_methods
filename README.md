# Computational Methods, Problem Set 1 

Writing a billion numbers to an ASCII file and a binary file:
```
./gen_stdout > stored_nums.dat
```
The ASCII formatted version is printed to stdout and redirected to a file, and the binary formatted file is written inside the script 

Averaging one billion numbers:  
```
./gen_stdout | ./stdin_avg > average.dat
```
The output stored in `average.dat` is: Average is 0.499993
 
Changing the size from one billion numbers to one thousand: 
```
./gen_stdout | sort > sorted.dat
./gen_stdout | ./bin > binned.dat
```


