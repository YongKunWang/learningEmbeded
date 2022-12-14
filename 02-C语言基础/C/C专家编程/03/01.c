// 分析C语言的声明

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXTOKENS 100
#define MAXTOKENLEN 64

enum type_tag { IDENTIFIER, QUALIFIER, TYPE};

struct token{ 
	char type;
	char string[MAXTOKENLEN];
};

int top = -1;

struct token stack[MAXTOKENS];
struct token this;

#define pop stack[top --]
#define push(s) stack{++top} = s;

enum type_tag classify_string(void)
// 推断标识符类型
{ 
	char * s = this.string;
	if(!strcmp(s, "const")){ 
		strcpy(s, "read-only");
		return QUALIFIER;
	}
	if(!strcmp(s, "volatile")) return QUALIFIER;
	if(!strcmp(s, "void")) return TYPE;
	if(!strcmp(s, "char")) return TYPE;
	if(!strcmp(s, "signed")) return TYPE;
	if(!strcmp(s, "unsigned")) return TYPE;
	if(!strcmp(s, "short")) return TYPE;
	if(!strcmp(s, "int")) return TYPE;
	if(!strcmp(s, "long")) return TYPE;
	if(!strcmp(s, "float")) return TYPE;
	if(!strcmp(s, "double")) return TYPE;
	if(!strcmp(s, "struct")) return TYPE;
	if(!strcmp(s, "union")) return TYPE;
	if(!strcmp(s, "enum")) return TYPE;

	return INDENTIFIER;
}

void gettoken(void)
// 读取下一个标记到"this"
{ 
	char *p = this.string;
	// 跳过空格
	while((*p = getchar( )) == ' ');
	
	if(isalnum(*p))
	{ 
		

	}
}


void read_to_first_identifier( )
{ 
	


}

int main( )
{ 
	read_to_first_identifier( );


	return 0;
}
