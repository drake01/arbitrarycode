
;<Program title>

jmp start

;data


;code
start: nop

;MVI C,00
lda var1
mov b,a
lda var2
add b
sta var3
hlt
var1: db 04h
var2: db 09h
var3: db 00h
