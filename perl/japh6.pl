# chipmunk (aka Ronald J Kimball) <rjk@linguist.dartmouth.edu>
#!perl -l
$_={1..28};$/=[$_,P,a..z,J,$"];print+map{$_&1?$/->{$_}:$/->[$_|1]}
(27,21,19,20,28,1,14,15,20,8,5,18,28,0,5,18,12,28,8,1,3,11,5,18)
