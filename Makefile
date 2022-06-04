parser: parser.tab.c lex.yy.c tree.cpp
	g++ parser.tab.c lex.yy.c tree.cpp -o parser

lex.yy.c: lexical.l parser.tab.c
	flex lexical.l

parser.tab.c: parser.y
	bison -d parser.y

clean:
	rm -rf lex.yy.c parser.tab.c parser.tab.h parser