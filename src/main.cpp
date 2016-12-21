#include <stdio.h>
#include <string>
#include "document.h"
#include "html.h"

/* Parse options */





int main() {
	std::string test = "*bold*";
	hoedown_buffer *ib, *ob;
	ib = hoedown_buffer_new(1024);
	hoedown_buffer_puts(ib, test.c_str());



	/*
	data.done = 0;
	data.show_time = 0;
	data.iunit = DEF_IUNIT;
	data.ounit = DEF_OUNIT;
	data.filename = NULL;
	data.renderer = RENDERER_HTML;
	data.toc_level = 0;
	data.html_flags = 0;
	data.extensions = 0;
	data.max_nesting = DEF_MAX_NESTING;
	*/
	int a = 10;
    int b = a + 10;
    return 0;
}