package main

import (
	"os"
	"flag" //command line option parser 
)

var omitNewline=flag.Bool("n",false,"don't print final newline")

const (
	Space=" "
	Newline="\n"
)


func main() {
	flag.Parse() //scans the arg list and sets up flags
	var s string =""
	for i :=0; i<flag.NArg(); i++{
	if i>0 {
		s+=Space
}
s+=flag.Arg(i)
}
os.Stdout.WriteString(s)
}
