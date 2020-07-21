parse: phase3.lex phase3.yy
	bison -v -d --file-prefix=parser phase3.yy
	flex phase3.lex
	g++ -std=c++11 -o parser parser.tab.cc lex.yy.c -lfl
clean:
	rm -f lex.yy.c parser.tab.* parser.output *.o parser location.hh position.hh stack.hh 
