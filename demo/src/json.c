#include "json.h"

JsonValue createJsonValue()
{
	JsonValue newVal;
	newVal.type = Null;
	newVal.val.string = 0;
	return newVal;
}

void setNull(JsonValue *json)
{
	json->type = Null;
}

void setBoolValue(JsonValue *json, Bool value)
{
	json->type = Boolean;
	json->val.boolean = value;
}

void setNumberValue(JsonValue *json, double value)
{
	json->type = Number;
	json->val.number = value;
}

void setStringValue(JsonValue *json, char *value)
{
	json->type = String;
	json->val.string = value;
}

void setListValue(JsonValue *json, JsonValue *value)
{
	json->type = List;
	json->val.list = value;
}
