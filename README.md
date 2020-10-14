# Computational Methods, Problem Set 1 

## Output Files

The ASCII and binary billion number files are saved on my computer, they are too large to store here.

All other files can be found in the `data` subdirectory (`average.dat`, `sorted.dat`, `binned.dat`)  

## Commands to generate output files  

Recompile the scripts with:
```
gcc -Wall gen_stdout.c -o gen_stdout
```

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


