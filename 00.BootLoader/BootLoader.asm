[ORG 0x00]; 
[BITS 16];   

SECTION .text;

mov ax, 0xB800;
mov fs, ax;
;mov ds, ax;origin code

mov bh, 0x2A
mov bl, 'O'
mov [fs:0x00],bx
mov bl, 'S'
mov [fs:0x02],bx
;mov byte [0x00], 'O'; origin code
;mov byte [0x01], 0x4A;origin code
;mov byte [0x02], 'S';origin code
;mov byte [0x03], 0x4A;origin code

jmp $;

times 510 - ($ - $$) db 0x00;
db 0x55;
db 0xAA;
