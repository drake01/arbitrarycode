#"Christensen, David A. (CHC)" <DChristensen@chc.gov.mb.ca> with thanks to
#Andy Lester
#!/usr/bin/perl
undef $/;@t=split//,<DATA>; print map{$_<0?chr(-$_):$t[$_]} qw
/-74 32 10 11 5 40 41 44 43 75 80 76 27 48 64 65 26 54 7 1 91 -107 69 58/;
__END__
David Christensen
Technical Consultant
Manitoba Public Library Services

%%
#Mark-Jason Dominus http://www.plover.com/

require 5.00553;
use re 'eval';
$|=1;
$z = qr{(?{local$d=1})
        (?:`(?{$d++})
          |.(?{$d--})
        )+?
        (?(?{$d})(?!))
       }x;
$_="``As`SB``Ad``S``BS`BBI``Ae``B`SI`Ed``A?``C``CIi`pI``E?Z``BZZZZZ`KI
```CX`KIZZQZZZQZZZZZQZZZZQZ``BZZ```CX`KX`KXQ``Ee``EeZZZZZQZ```CX`KIZZQ
```CX`KIZZQZZZZQ```CXZ`KIZZQ``Ee```CX`KIZZQ``EdZZZQZ``BZZ```CX`KX`KXQ`
`BZ```CX`KIZZ`KXZQ``Ee```CX`KIZZQ``EdZZZQ``BZZZZ`KXQZ``BZZ```CX`KX`KXQ
``B```CXZ`KIZZ`KXQ``Ee``EeZZZZZQ``B``EeZZZ`KXQ``Ee``EdZZZQ``Ee```CX`KI
ZZQ``EdZZZQ``Ed``Ee```CX`KX`KI";
s/\n//g;s/Q/`KI``E?/g;s/X/IZZZ/g;s/Z/``Es/g;
1 while
  s{`I($z)          (?{$q=0})|``K($z)($z)                    (?{$q=1})
   |```S($z)($z)($z)(?{$q=2})|```B($z)($z)($z)               (?{$q=3})
   |```C($z)($z)($z)(?{$q=4})|``A($z)($z)                    (?{$q=5})
   |`i($z)     (?{$R++,$q=6})|`p($z)(?{print(chr 120-$R), $R=0, $q=7})
   |`E($z)          (?{$q=8})|`V($z)                         (?{$q=9})
   }
   {local $^W;
   $q<5 ?($1,$2,"``$4$6`$5$6","`$7`$8$9","``$10$12$11")[$q]
   :$q==5?($bind{$13}=$14,"")
   :($15,"",$bind{$17},"")[$q-6]
    }ex;
%%
Author:  Mark-Jason Dominus
@P=split//,".URRUU\c8R";@d=split//,"\nrekcah xinU / lreP rehtona tsuJ";sub p{
@p{"r$p","u$p"}=(P,P);pipe"r$p","u$p";++$p;($q*=2)+=$f=!fork;map{$P=$P[$f|ord
($p{$_})&6];$p{$_}=/ ^$P/ix?$P:close$_}keys%p}p;p;p;p;p;map{$p{$_}=~/^[P.]/&&
close$_}%p;wait until$?;map{/^r/&&<$_>}%p;$_=$d[$q];sleep rand(2)if/\S/;print

[note: Won 2nd place in the 5th annual obfuscated Perl contest.
 see http://perl.plover.com/obfuscated/ for more info. ]
%%
#Yanick Champoux
#http://www.iro.umontreal.ca/~champoux/sigs/
print map chr$_[0]-ord$_,@_='200ocT�gZYT`cV�xcV\�`ge]cV'=~m;(\d+|.);g;
%%
#Richard Proctor <Richard@waveney.org>
@{$_}=(@{$_-1},1)for(1..9);
map{s/./sprintf"%02d",ord$&/eg}($h,$l)
=("0X\cFMWD\cDDF.CD","\cY\"\cEY*\\\cH\\<\cEK\\");
print chr((@{substr($h,$_,1)}.@{substr($l,$_,1)})+32)for(0..23)
%%
#Richard Proctor <Richard@waveney.org>
sub x{for(split'',"Abigail!"x3){print chr(shift()+ord)}}
x(9,19,10,13,-65,-8,2,78,51,6,-4,11,-65,-25,-7,81,43,-66,-33,-6,2,2,-7,81)
%%
#Gaal Yahas <gaal@forum2.org>
perl -le
   '@Just_another_Perl_hacker=map{/^[^*].*hack/&&s,_, ,g&s,$,\,,&print}%::'
%%
From merlyn@iwarp.intel.com (Randal Schwartz) 1 Feb 90 22:28:58 GMT
@a=split(/(\d)/,"4Hacker,2another3Perl1Just");shift(@a);%a=@a;print "@a{1..4}";
%%
From Andrew.Vignaux@comp.vuw.ac.nz (Andrew Vignaux) 22 Aug 90 11:10:18 GMT
$s=(localtime(time))[0]; sub n { ($a - $b) * $s; }
print grep(s/.*\t//,sort n grep($_=++$i/-50."\t$_",split(/\n*/,<<JAPH)));
,rekcah lreP rehtona tsuJ
JAPH
%%
From merlyn@iwarp.intel.com (Randal Schwartz) 29 Aug 90 19:14:54 GMT
print pack("c*",(32..127)[42,85,83,84,0,65,78,79,84,72,69,82,0,48,69,82,76,0,72
,65,67,75,69,82,12])
%%
Date:         6 Feb 90 22:31:17 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print grep(s/^\d+(.*)/$1 /, sort(split(/ /,"8hacker, 4Perl 1Just 2another")));
%%
Date:         5 Feb 90 18:08:59 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
%_=split(/(\D+)/,"7Perl6another8hacker,5Just");print"@_{5..8}";
%%
From:         merlyn
print pack('C25', grep($_ && $_ -= 256, split(/(\d\d\d)/, <<STRANGE)));
330373371372288353366367372360357370288336357370364288360353355363357370300
STRANGE
%%
Date:         11 Feb 90 20:32:28 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
for (unpack('C25', 'Just another Perl hacker,')) {
        printf "%03d", $_ + 256;
}
$_="wHFG NABGURE cREY UNPXRE,";y/a-zA-Z/N-ZA-Mn-za-m/;print;
%%
Date:         15 Feb 90 23:01:59 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_="Just another Perl hacker,";for$i(1..length){print substr($_,$i-1,1);}
%%
Date:         18 Feb 90 19:05:13 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print pack('C25', reverse unpack('C25', ',rekcah lreP rehtona tsuJ'));
%%
Date:         21 Feb 90 18:13:49 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print reverse split(/\/*/,",rekcah lreP rehtona tsuJ");
%%
Date:         21 Feb 90 20:51:25 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
echo Just another Perl hacker,|perl -e 'print$1if($_=<STDIN>)=~/^(.*)/;'
%%
Date:         23 Feb 90 19:01:21 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)

format STDOUT =
@<<< @<<<<<< @<<< @<<<<<,
$Just, $another, $Perl, $hacker
.
for("Just","another","Perl","hacker"){eval"\$$_=\$_;";};write;
%%
Date:         23 Feb 90 19:04:55 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$,=' ';print grep(s/^.//, sort "2another","4hacker,","1Just","3Perl");
%%
Date:         23 Feb 90 23:23:53 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@a=split(/X*/," ,JPacehklnorstu");print@a[2,15,13,14,0,4,10,11,14,7,6,12,0,3,6,12,9,0,7,4,5,8,6,1
2,1];
%%
Date:         27 Feb 90 17:33:57 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
Subject:      Re: more termcap.pl problems & a quick question
In-reply-to:  pem@frankland-river.aaii.oz.au (Paul E. Maisano)
Organization: Stonehenge; netaccess via Intel, Beaverton, Oregon, USA
Newsgroups:   comp.lang.perl

In article <1172@frankland-river.aaii.oz.au>, pem@frankland-river (Paul E. Maisano) writes:
| sub p {
|      local($str) = @_;
|      $str =~ s/([\000-\037])/"^".pack("c", ord($1)+0100)/eg;
|      print $str;
| }
[well, he said more than that, but that's the important part... :-]

how about handling DEL too?

sub unctrl {
        local($_) = @_;
        s/([\000-\037\177])/'^'.pack('c',ord($1)^64)/eg;
        $_;
}

print &unctrl("\000\002\n\r\027ABC\177"),"\n";

results in:

^@^B^J^M^WABC^?

print &unctrl("Just another Perl hacker,");
%%
Date:         27 Feb 90 17:48:36 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
for (split(/(.)/,"Just another Perl hacker,")) {print if $_;}
%%
Date:         28 Feb 90 01:32:25 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@a=<;echo Just another Perl hacker,>; print join(" ",@a);
%%
Date:         28 Feb 90 01:51:32 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
mkdir("/tmp/$$",0777); chdir "/tmp/$$";
grep(open(X,">$_"),"1Just","2another","3Perl","4hacker,");
print join(" ",grep(s/^.//,<*>)); chdir ".."; system "rm -rf $$";
%%
Date:         28 Feb 90 02:03:37 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = <<END; s/../pack('C',hex($&))/ge; print;
4a75737420616e6f74686572205065726c206861636b65722c
END
%%
Date:         28 Feb 90 16:09:35 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$\="hacker,";$,="another ";print"Just ","Perl ";
%%
Date:         28 Feb 90 22:45:45 GMT
From:         tneff@bfmny0.UU.NET (Tom Neff)
@a=split(//,'1111211111131223311361214223121412311341121111222123616111111122'.
'21233212615112114212321211121111222123321120');for$r(@a){for(1..$r){vec($s,$i,
1)=$v;$i++;}$v^=1;}print"$s\n";
%%
Date:         1 Mar 90 06:27:25 GMT
From:         jgreely@giza.cis.ohio-state.edu (J Greely)
print reverse(split(/!?/,join(' ',sort split(/ /,"tsuJ rehtona lrep ,rekcah"))));
%%
Date:         1 Mar 90 17:06:10 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
for('Snobol','Perl'){print"Just another $_ hacker,\n";}
%%
Date:         5 Mar 90 17:39:29 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
pipe(R,W);if(!fork){exit print W"Just another Perl hacker,";}close(W);print<R>;
%%
Date:         6 Mar 90 11:07:32 GMT
From:         Andrew.Vignaux@comp.vuw.ac.nz (Andrew Vignaux)
@l = split (/(..)/,'1a7r4J1n0a7e7c1o8n248o1t4u8v4s7.207l27547a7n7g1h'.
'0 511e3h7.8i564t3a6P1r7p8c8e6e3c3k7e3e533r7r286r6l4 6 1 8,7l7 3,');
srand; $_=3*int(rand(2))+2; /^$_/;
foreach (split(//,&g)) {/^$_/;print &g;} print "\n";
sub g {join('',grep(s/^.//,grep(//,@l)));}
%%
Larry>   for(split(//,'))*))91:+9.*4:1A1+9,1))2*:..)))2*:31.-1)4131)1))2*:3)"'))
Larry>   {for(ord){$i+=$_&7;grep(vec($s,$i++,1)=1,1..($_>>3)-4);}}print"$s\n";
Larry> And a special version just for Randal:
Larry>   grep(do{for(ord){$i+=$_%8;grep(vec($s,$i++,1)=1,5..($_>>3||print"$s\n"));}},
Larry>   (@x=split(//,"))*))91:+9.*4:1A1+9,1))2*:..)))2*:31.-1)4131)1))2*:3)\7")));
%%
Date:         6 Mar 90 18:08:23 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
open(C,"|uncompress");$_=<<EOF;s/../pack('C',hex($&))/ge;print C $_;
1f9d904aeacca103228c9b3774d094910302ca423620d08419b366210b05
EOF
%%
Date:         6 Mar 90 21:36:52 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print $_ x (($_ = "just another Perl hacker,") =~ s/j/J/);
%%
Date:         7 Mar 90 05:58:52 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_="kheauroes ,rJttParn lhc e";srand(1);
while($a=length){$a=rand($a);print(substr($_,$a,1));substr($_,$a,1)="";}
%%
Date:         7 Mar 90 18:12:26 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)

open(M,"/usr/games/lib/quiz.k/morse") || die "morse: ($!)";
while(<M>) {next unless /([A-Z]):(.*)/; $m{$2}=$1;} close(M);
print grep($_ = ($m{$_} || $_), split(/([^-.])/,<<EOF)); exit 0;
.--- ..- ... -/.- -. --- - .... . .-./.--. . .-. .-../.... .- -.-. -.- . .-.,
EOF
%%
Date:         26 Mar 90 16:20:37 GMT
From:         raymond@sunkist.berkeley.edu (Raymond Chen)
$_='x"Not ";"x\"another \";\'x\\"perl \\";x\\"hacker,\\"\'"';s/x/print/g;eval eval eval;
%%
Date:         10 Mar 90 01:44:00 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
for($i=129600;@x=gmtime($i),(print substr('Just another Perl hacker,',$x[5]*12+$x[4]-840,1)),($i+
=2639520)<66117600;){;}
%%
Date:         10 Mar 90 01:55:18 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
printf "%c"x 25,74,117,115,116,32,97,110,111,116,104,101,114,32,80,101,114,108,32,104,97,99,107,1
01,114,44;
%%
Date:         11 Mar 90 01:03:06 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
%X=split(/(\d)/,'another2Perl4hacker,8Just1');sub X {$X{$a}<$X{$b}?-1:1;} print join(" ",sort X k
eys X);
%%
Date:         11 Mar 90 16:56:40 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print join('',grep(s/.*"(.)".*/$1/,split(/\n/,<<)));
Gimme a "J"!
Gimme a "u"!
Gimme an "s"!
Gimme a "t"!
Gimme a " "! :-)
Gimme an "a"!
Gimme an "n"!
Gimme an "o"!
Gimme a "t"!
Gimme an "h"!
Gimme an "e"!
Gimme an "r"!
Gimme a " "! :-)
Gimme a "P"!
Gimme an "e"!
Gimme an "r"!
Gimme an "l"!
Gimme a " "! :-)
Gimme an "h"!
Gimme an "a"!
Gimme a "c"!
Gimme a "k"!
Gimme an "e"!
Gimme an "r"!
Gimme a ","! :-)
What's that spell??

%%
Date:         13 Mar 90 20:00:26 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print +(split(//,'Just anoherPlck,'))[0..7,3,8..10,4,11,9,10,12,4,8,5,13,14,9,10,15];
%%
Date:         20 Mar 90 01:21:37 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_=',Pr0e=kRcza0hb 5lOr+e"PE :rBe}hRtho]nhaj nt.s[u=J@';s/../unshift(a,$&)/eg;chop(@a);print@a;
%%
Date:         17 Mar 90 18:30:39 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)

@ARGV=split(//,'Just another Perl hacker,');push(@x,'')while@x<@ARGV;
for$x($[..$#x){grep(*y=*_,$x[$x]);$y=shift;}print@x;

@ARGV=split(//,'Just another Perl hacker,');push(@x,'')while@x<@ARGV;
for$y(@x){$y=shift;}print@x;

%%
Date:         17 Mar 90 22:34:02 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@X=split(//,'Just another Perl hacker,');*Y=*X;print @Y;
%%
Date:         20 Mar 90 01:21:37 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_=',Pr0e=kRcza0hb 5lOr+e"PE :rBe}hRtho]nhaj nt.s[u=J@';s/../unshift(a,$&)/eg;chop(@a);print@a;
%%
Date:         20 Mar 90 01:53:40 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print "Just another Perl hacker," x "1no time to write a cute signature";
%%
Date:         20 Mar 90 20:35:16 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_='5O1v3v5y9)1b7u2q4x1i0e3u2"3S9n5w7s6&7o7h8k1l6k3u3/';s/(.)(.)/pack('C',ord($2)-$1)/eg;print;
%%
Date:         20 Mar 90 23:33:06 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
eval <<EOF;
print "Just another Perl hacker,"
EOF
%%
Date:         21 Mar 90 16:38:55 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_="7072696e7420274a75737420616e6f74686572205065726c206861636b65722c27";
s/../pack('C',hex($&))/eg; eval;
%%
Date:         23 Mar 90 04:37:57 GMT
From:         raymond@hilbert.berkeley.edu (Raymond Chen)
$_="krJhruaesrltre c a cnp,ohet";$_.=$1,print$2while s/(..)(.)//;
%%
Date:         24 Mar 90 22:36:53 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@a=split(//,",rkeacrl hher PeJust anot");print splice(@a,@a*2/3,@a*2/3+1)while@a;
%%
Date:         27 Mar 90 00:25:41 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_=q(q-q:!print "Just another Perl hacker," :-) ;-7 while$_=eval
%%
Date:         27 Mar 90 00:31:26 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
for(1..32){grep((print "${_}Just another Perl hacker,$_\r"),'-','\\','|','/');}
%%
Date:         27 Mar 90 16:16:30 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@p=split(//,",rekcah lreP rehtona tsuJ");p:print pop(p);goto p if @p;
%%
Date:         27 Mar 90 16:36:46 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$|=1;$_=<<'-- ';s#..#printf"%c",(fork?wait&&$?/256:exit hex($&))#eg;
4a75737420616e6f74686572205065726c206861636b65722c
%%
Date:         28 Mar 90 16:12:34 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
open(STDERR,">&STDOUT");warn "Just another Perl hacker,\n"
%%
Date:         28 Mar 90 18:06:57 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = "Just a sed user,";s/a/another/;s/sed/Perl/;s/user/hacker/;print
%%
Date:         28 Mar 90 19:27:25 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_="reJ alounPt srhaetchr, ek";s/(..)(.)(..)/(print$2),$3.$1/eg;s/(.)(.)(.)/(print$2),$3.$1/eg;pr
int
%%
Date:         28 Mar 90 21:35:44 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
($_="Just another Perl hacker,"); 0 while s#.# do {print $&;} #e,s/^1//;
%%
Date:         30 Mar 90 19:18:27 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_=<<EOF;for$c(97..121){$x=sprintf("%c",$c);printf"%c",32+eval"y/$x/ /";}
ldhnxdqflccjgixntpttudphiwljotwvvqsoiifujkxcfxsjtsxahsgobxhbkwocoglgkj
vjiibdlqcjtgifhhvbpjqswfuxtjqudgcvsfdhufnsfxgjsvwxjjckgxpogktbkdgxpxkt
sillcoidtqkqcxnsoptdhgqhnjhkolojcgbxcipiniokdpdnhvuvwondpqgcudjiucgdli
llilclpsniuogqntvvbuwpdhdgvnbfaiplndubaipapwisjxocfuvsasjifdbcdtbtojfd
phpxidhbdavxpxpbidcfbaxwwvddbpscdccatxbpckhavtldtvlvsgbpvlqxolowbvcloa
jlfltiqwqqjafxlfpcgiqbxsvpgpvgsiblwgllvicfcifkulujvspoxklihaxkddnohidk
gfsffjtugalibsginvhbkikuawfpcgppvvdfpkocjsluvcqnskvtjuppkfglpbcbsvxqxi
opxwkovjhvqwojkfckqysxqsibbanxivcitctldvxilcvupxxldhnvsthocjcolhwqtwti
nitspguakklhgkjwvlfwddsvuuwixhqvjpgbjpjtbojanxwutxsvuvicdgnsikkqqbdthu
lwcasbqokhpwxskbqpcdlngqwnwqtbxpugafvnkhhbhscgusitstucvlubgilfaaulphlv
ohpogqwqoauqtbvboupwjpfhggvkkbsbcxiolqkppdiqltjnxnsnstdsosfupcyjxwgpqg
ahuscvvhohjxipcqwjxdwdusxwgyydatihdlbigusjqlpocdfpijvfhwuuggbtginttlxi
wcqklviatnjgbnslbhxbgxqwvqyfvxnxiulktwigvbbodwfqjkduopfyugjqqfhdxgqbjs
dupicidbqflkowtbnjqiwpqxpynibbiqhbagsuiqkpbfqnjyooswwchbqkpxqbwgxhkwoq
htokfhhjdsavpkdldlkndkcwcghybhpcsocdwboqtnilvkwqvtxdwadbjqihjfdtgksblk
aaddbwhalcdgtgblbhdsvnxcuqqbfldhkjfghdpvtnxsnoipfcvslxicolwfxbjbcnbwgo
vlvhfcqcjonddjttdcsgxxiulvljsjsiuhhfwpkocngspoxdjsykwpofgplkncopvcwlgq
xscfxpfiidtghbxspjcbjuuuhnvqwviuciobkapaxbisdnixjsakqsahlfihtlqxsfjgbo
xaptdwcvlgohpvggoujoogjcobjwwugkfdbklhghuuthcbksdqcvcgatokqcdichpiwbjc
buxyhwhnuxkiqwivdbgpvjqfuditkplfcsjjkflohigswtdjtahfclqkxouvabxfotbuhf
tbfqlqkibvagngkuvwnpjcqhpowfqhuaoqccdlupdwosvupxqbvqpkihvftwfbsodsyjgp
hhbxhwfhkiadlwfwxunbhuqppbhjguctjldfoqtgkllcllxtxxklxwdtcdhklxusxjcixg
EOF
%%
Date:         2 Apr 90 18:45:15 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@A=split(/\n/,<<'-- ');$A[9-$b-($b>5)]=~s/\*/vec($_,8*length($`)+$b-1,1)=1/eg while++$b<9;print;

**** ******* **** ******
 ************ ***********
.........................
 ***    *  * * *       *
*     ** *      * *  *  *
 * *  *** *   * *     * *
* *   **   *   *    ** *
 **  * *  *   *    ****
--
%%
Date:         3 Apr 90 22:44:56 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@ARGV=split(/\S\n?/,<<EOF);$a+=length(shift),vec($_,$a,1)=1while@ARGV;print;
 :-)  :-)   :-)  :-)  :-)  :-) :-) :-)  :-) :-)   :-) :-) :-)    :-)  :-) :-)
 :-)       :-)   :-)     :-) :-)   :-) :-) :-)  :-) :-)  :-) :-) :-) :-)  :-)
 :-)    :-)  :-) :-) :-)     :-)  :-) :-)  :-)  :-)   :-) :-)   :-)   :-) :-)
 :-)       :-)       :-)  :-)  :-)  :-)   :-) :-)   :-)   :-) :-) :-)    :-)
 :-)  :-) :-)       :-)      :-)  :-) :-)  :-)     :-) :-)  :-) :-)    :-) :-)
  :-) :-)  :-)  :-) :-)  :-)  :-)   :-) :-)   :-)   :-) :-) :-)    :-) :-)  :-)
EOF
--
%%
Date:         3 Apr 90 22:40:40 GMT
From:         raymond@wish-bone.berkeley.edu (Raymond Chen)
$x=split(/( )/,'Not another perl hacker,');$_=q$x$x$x;s$x$print shift(@_)$eg;
%%
Date:         4 Apr 90 03:02:23 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@_=("Just another Perl hacker," =~ /(.*) (.*) (.*) (.*)/);print"@_";
%%
Date:         10 Apr 90 02:18:38 GMT
From:         tneff@bfmny0.UU.NET (Tom Neff)
system qq|perl -e 'system qq!echo Just another ANSI Perl hacker,!'|
%%
Date:         11 Apr 90 08:46:10 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
eval q(eval q-eval q:print"Just another Perl hacker,"  :-)
%%
Date:         16 Apr 90 15:58:21 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_='987;s/^(\d+)/$1-1/e;$1?eval:print"Just another Perl hacker,"';eval
%%
Date:         17 Apr 90 00:20:39 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
@L = split(/ /, <<EOL); eval '$'.pop(@L).'='.@L while @L;
zero one two three four five six seven eight nine
EOL
for (split(/\s+/,<<"EOF")) { printf "%c",$_; }
$seven$four $one$one$seven $one$one$five $one$one$six $three$two
$nine$seven $one$one$zero $one$one$one $one$one$six $one$zero$four
$one$zero$one $one$one$four $three$two $eight$zero $one$zero$one
$one$one$four $one$zero$eight $three$two $one$zero$four $nine$seven
$nine$nine $one$zero$seven $one$zero$one $one$one$four $four$four
EOF
%%
Date:         18 Apr 90 13:47:12 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_=",rekcah lreP rehtona tsuJ";s/.$/eval 'print $&',""/e while length
%%
Date:         19 Apr 90 23:21:03 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print grep($_=sprintf("%c",exp($_)),split(/\s+/,<<'-- '));
4.311 4.766 4.749 4.758 3.481 4.580 4.705 4.714 4.758 4.649 4.620 4.741 3.481
4.388 4.620 4.741 4.687 3.481 4.649 4.580 4.600 4.677 4.620 4.741 3.795
%%
Date:         27 Apr 90 14:55:59 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = "cker,rl haer PeanothJust "; s/(.{5})$/(print$1),""/e while length
%%
Date:         27 Apr 90 19:12:09 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = <<EOF; s/(\d\d)(\d\d)\s*/substr(($!=$1,"$!"),$2,1)/eg; print;
J0204020301020103042001060101010202060107010801031300010701080210
0103020604200205150401070108,
EOF
%%
Date:         27 Apr 90 21:02:12 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = <<EOF; s#[-+]\d+#pack('C',$c+=$&)#eg; print;
+74+43-2+1-84+65+13+1+5-12-3+13-82+48+21+13-6-76+72-7+2+8-6+13-70
EOF
--
%%
Date:         30 Apr 90 21:03:34 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_="Just_another_Perl_hacker,";open(_,">$_");print<$_*>;unlink;
%%
Date:         2 May 90 16:44:45 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = "Jvtu bopuifs Pfsm ibdlfs,"; y/a-z/za-y/; print
%%
Date:         6 Apr 90 17:09:14 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
sub _{$b-$a;}print((split(//,",rekcah lreP rehtona tsuJ"))[sort _ 0..24])
%%
Date:         18 Apr 90 23:02:31 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_='vec(1,1,1); print substr($_ ^ "<\020\020\134\021M_CEA^RP\042\014\034\030\000\033\024\001\030\
021\000\004",0,25)'; eval
%%
Date:         18 Apr 90 23:02:31 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_='vec(1,1,1); print substr($_ ^ "<\020\020\134\021M_CEA^RP\042\014\034\030\000\033\024\001\030\0
21\000\004",0,25)'; eval
%%
Date:         19 Apr 90 17:18:27 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print ('Just ','anoth','er Pe','rl ha','cker,')[0..4]
%%
Date:         2 May 90 16:44:45 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = "Jvtu bopuifs Pfsm ibdlfs,"; y/a-z/za-y/; print
%%
Date:         15 May 90 16:02:24 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
open(P,"|perl");print P"format=\nJust another Perl hacker,\n.\nwrite"
%%
Date:         22 May 90 21:41:18 GMT
From:         flee@shire.cs.psu.edu (Felix Lee)
@a=split(//,$]);@b=split(//,"k ple th\nhroeaarcn.");$k=$#a=$#b;@a=sort grep($_.=$k++,@a);print@b[substr(pop(@a),1,2)-$#b]while(@a);
%%
Date:         25 May 90 15:29:25 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_=pack("c25",65..90);y/A-Y/Just another Perl hacker,/;print
%%
Date:         26 May 90 00:00:37 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
sub isplit { # &isplit(word,string) => array
        local($word,$_) = @_;
        local(@ind,@result,$start,$end);
        @ind = (0);
        s#$word#push(ind,length($`),length($`.$&)),$&#ieg;
        push(ind,length);
        # @ind now has pairs of indicies (0-origin) into $_
        # that bound the non-$word items; convert into result:
        while (@ind) {
                $start = shift(ind);
                $end = shift(ind);
                push(result,substr($_,$start+$[,$end-$start));
        }
        @result;
}
print &isplit("z","JzuZsztZ zaZnzoZtzhZezrZ zPZezrZlz ZhzaZczkZezrZ,");
%%
Date:         5 Jun 90 19:07:58 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$,=" "; print +("hacker,","Just","Perl","another")[1,3,2,0];
%%
Date:         14 Jun 90 06:38:52 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
open(o,"|cat");print o "Just another Perl hacker,"
%%
Date:         15 Jun 90 01:37:14 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print `perl -e 'print STDERR "Just another Perl hacker,"' 2>&1`
%%
Date:         15 Jun 90 16:15:31 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = <<'-- '; s/../printf "%c",hex($&)/ge;
4a75737420616e6f74686572205065726c206861636b65722c
--
%%
Date:         15 Jun 90 22:06:24 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
printf "%s %s %s %s%c", 'Just', 'another', 'Perl', 'hacker', 44
%%
Date:         16 Jun 90 19:22:20 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print <;echo Just another perl hacker,>
%%
Date:         18 Jun 90 07:49:28 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = "Just another Perl hacker,"; { redo if s/./(print $&),""/e; }
%%
Date:         18 Jun 90 15:53:11 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print "Just another Perl hacker," if "you can't think of anything better..."
%%
Date:         20 Jun 90 17:51:58 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_ = <<'-- '; s/../pack("c",hex($&))/eg; eval;
7072696e7420224a75737420616e6f74686572205065726c206861636b65722c22
--
%%
Date:         25 Jun 90 20:58:27 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
%_=split(/(\D+)/,"4Perl1Just8hacker,2another");print"@_{sort(keys(_))}"
%%
Date:         26 Jun 90 18:02:43 GMT
From:         bill@ksr.com (Bill Mann)
$_="another Just hacker $]".`ps c$$`;@_=split;print"@_[1,0,$#_,11,13,2],\n";
%%
Date:         27 Jun 90 00:20:08 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
%_=@_=("Perl","hacker,");print"@_[!print 'Just '] @_{(keys _)[!print 'another ']}"
%%
%%
Date:         28 Jun 90 17:57:59 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print "$ARGV[push(@ARGV,'Just another Perl hacker,')]"
%%
Date:         30 Jun 90 21:11:02 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
for("hacker","Perl","another","Just"){substr($x,0,0)="$_ ";}substr($x,-1,1)=",";print$x
%%
Date:         1 Jul 90 18:24:21 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
print grep($_=pack("c",hex($_)),unpack("A2"x 25,"4a75737420616e6f74686572205065726c206861636b65722
c"))
%%
Date:         1 Jul 90 22:55:10 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$x=25;print substr(',rekcah lreP rehtona tsuJ',$x,1) while --$x >= 0
%%
Date:         3 Jul 90 00:19:58 GMT
From:         raymond@bosco.berkeley.edu (Raymond Chen)
$_="-|";open _||print"creaJklrnue  osrhptt,aeh ";while(<_>){$}=5;s/(.{$}})(.)/(print$2),$1/eg whil
e--$};print;}
%%
Date:         5 Jul 90 17:18:01 GMT
From:         merlyn@iwarp.intel.com (Randal Schwartz)
$_="cker,rl haer PeanothJust ";1 while s/(.{5})(.{5})?/$_{$2}=$1,$2/e;print while $_=$_{$_};
%%

