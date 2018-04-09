autocmd BufNewFile *.hpp,*.cpp exec ":call Setfilehead()"
func Setfilehead()
    call append(0, '/******************************************************************')
    call append(1, '#')
    call append(2, '#                    Filename: '.expand("%"))
    call append(3, '#')
    call append(4, '#                    Author: 4ever-young                      ')
    call append(5, '#                    Description: ----                          ')
    call append(6, '#             Create: '.strftime("%Y-%m-%d %H:%M:%S"               ))
    call append(7, '#')
    call append(8,  '******************************************************************/')
endfunc

