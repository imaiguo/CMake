GCC主要执行步骤

预处理 Preprocessor
处理源文件中以 “#” 开头的预处理指令，如 #include, #define等

工具： cc1
命令： gcc -E foo.c -o foo.i
编译 Compiler
针对预处理的结果进行一系列的词法分析、语法分析、语义分析，优化后生成汇编指令，存放在.o为后缀的目标文件中

工具： cc1
命令：gcc -S foo.i -o foo,s
汇编 Assembler
汇编器将汇编语言代码转换为CPU可以执行的指令

工具： as
命令： gcc -c foo.s -o foo.o
链接 linker
链接器将汇编器称称的目标文件和一些标准库，比如Libc,libm文件组合，行程最终可执行的应用程序

工具： ld
命令： gcc foo.o -o a.out
