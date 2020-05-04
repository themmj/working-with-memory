#ifndef H_JSON
#define H_JSON
#include "bool.h"


typedef enum {
	Null,
	Boolean,
	Number,
	String,
	List
} JsonType;

typedef struct _JsonValue {
	union {
		Bool boolean;
		double number;
		char* string;
		struct _JsonValue* list;
	} val;
	JsonType type;
} JsonValue;

JsonValue createJsonValue();
void setNull(JsonValue* json);
void setBoolValue(JsonValue* json, Bool value);
void setNumberValue(JsonValue* json, double value);
void setStringValue(JsonValue* json, char* value);
void setListValue(JsonValue* json, JsonValue* value);


#endif // !H_JSON
