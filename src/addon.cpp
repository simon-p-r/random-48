#include <node.h>

#include "rand-48.h"

using namespace v8;


void Random(const FunctionCallbackInfo<Value> & args) {
	Isolate * isolate = args.GetIsolate();
    uint64_t random = getRandomNumber();
	Local<Number> num = Number::New(isolate, static_cast<double>(random));
	args.GetReturnValue().Set(num);
}

void Init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "random", Random); 
}

NODE_MODULE(rand, Init)