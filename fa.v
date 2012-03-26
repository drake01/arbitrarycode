module fa(a,b,cin,sum,cout);
input a,b,cin;
output sum,cout;
xor(sum,a,b,cin);
wire p=a&b;
wire q=a&cin;
wire r=b&cin;
or(cout,p,q,r);
endmodule
module fa_tb();
reg a,b,cin;
wire sum,cout;
initial 
begin
	$monitor("a=%b, b=%b, cin=%b, sum=%b",a,b,cin,sum,cout);
	a=1'b0; b=1'b0; cin=1'b0;
	#20	cin=1'b0;
	#20	cin=1'b1;
	#20	b=1'b1; cin=1'b0;
	#20	cin=1'b1;
	#20	a=1'b1; b=1'b0; cin=1'b0;
	#20	cin=1'b1;
	#20	b=1'b1; cin=1'b0;
	#20	cin=1'b1;
end
fa inst(.a(a),.b(b),.cin(cin),.sum(sum),.cout(cout));
endmodule
