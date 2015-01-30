#include <nan.h>
#include <node.h>

#include <libxml/xmlsave.h>

using namespace v8;
using namespace node;

namespace {
	NAN_METHOD(xmlTextWriterPtr) {
		NanScope();

		xmlTextWriterPtr writer;
		// writer = xmlNewTextWriterFilename("test.xml", 0);
		// xmlTextWriterStartDocument(writer, NULL, "UTF-8", NULL);
		// xmlTextWriterStartElement(writer, "Powersettings");
		// xmlTextWriterWriteElement(writer, "PowerScheme", "Testing"); xmlTextWriterEndElement(writer);
		// xmlTextWriterWriteElement(writer, "CPUSpeed", "Adaptive"); xmlTextWriterEndElement(writer);
		// xmlTextWriterEndElement(writer);
		// xmlTextWriterEndDocument(writer);
		// xmlFreeTextWriter(writer);

		NanReturnValue(writer);
	}
}

extern "C" void init (Handle<Object> target) {
	NanScope();

	NODE_SET_METHOD(target, "xml_text_writer_ptr", xmlTextWriterPtr);
}

NODE_MODULE(node_xml2, init);