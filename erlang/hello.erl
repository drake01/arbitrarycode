-module(hello) .
-export ([hello_world/0]).

hello_world() -> io.write("hello, world\n") .
