# decimal-binary-converter
a CLI written in c++ that converts binary number to decimal and decimal number to binary

## Building

- To build, run: ```cmake -S src -B build -G "MinGW Makefiles" && cmake --build build && cd build```


## Running

- To run the program, type ex..: ```.\decimal-binary-converter.exe --dec2bin 112```
- to see the available arguments, type: ```.\decimal-binary-converter.exe --help```

```
to use: .\decimal-binary-converter.exe [--parameters] [number]
  --dec2bin To convert decimal to binary
  --bin2dec To convert binary to decimal
```
