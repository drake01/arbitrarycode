module test;
reg [7:0] memory[0:7]; //declare an 8-byte memory
integer i;
initial
begin
  //read memory file init.dat. address locations given in memory
  $readmemb("init.dat", memory);

  //display contents of initialized memory
  for(i=0; i < 8; i = i + 1)
    $display("Memory [%0d] = %b", i, memory[i]);
end
endmodule
