project(aexecm)
Set( pythonCflags
     -I/home/test/Downloads/Python-2.7.12 -I/home/test/Downloads/Python-2.7.12/Include
    -fno-strict-aliasing -D_FORTIFY_SOURCE=2 -g -fstack-protector --param=ssp-buffer-size=4
    -Wformat -Werror=format-security  -DNDEBUG -g -fwrapv -Wall -Wstrict-prototypes )

Set( FrameSrc tom.cpp)
Set( pythonLib python2.7 )


include_directories(/home/test/Downloads/Python-2.7.12/ /home/test/Downloads/Python-2.7.12/Include)  



Add_Executable( aexec tom.cpp  )

#INCLUDE_DIRECTORIES(/home/test/Downloads/Python-2.7.12/Include /home/test/Downloads/Python-2.7.12)
#ADD_LIBRARY(aexec /home/test/Downloads/Python-2.7.12/libpython2.7.so)

Target_Link_Libraries( aexec /home/test/Downloads/Python-2.7.12/libpython2.7.so )
