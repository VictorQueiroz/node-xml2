#include <nan.h>
#include <node.h>

#include <libxml/xmlsave.h>

using namespace v8;
using namespace node;

namespace {
	NAN_METHOD(tryMe) {
		NanScope();
		NanReturnUndefined();
	}
}

extern "C" void init (Handle<Object> target) {
	NanScope();

	NODE_SET_METHOD(target, "try_me", tryMe);
}

NODE_MODULE(node_xml2, init);