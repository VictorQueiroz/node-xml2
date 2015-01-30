#include <iostream>
#include <libxml/xmlwriter.h>

int main () {
	xmlBufPtr buffer;
	xmlDocPtr document;
	xmlNodePtr node;
	
	node = xmlNewChild(node, NULL, BAD_CAST "node3", BAD_CAST "this node has attributes");

	size_t size = xmlBufNodeDump(buffer, document, node, 0, 0);

	std::cout << document;

	return 0;
}