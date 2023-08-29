global main
extern printf

main:
    mov   edi, format    ; Move the address of 'format' into the EDI register (destination index)
    xor   eax, eax       ; Clear the EAX register (used for return values)
    call  printf         ; Call the 'printf' function
    mov   eax, 0         ; Move 0 into the EAX register (used for return values)
    ret                  ; Return from the 'main' function

format: db `Hello, Holberton\n`,0   ; Define a null-terminated string 'Hello, Holberton\n'

