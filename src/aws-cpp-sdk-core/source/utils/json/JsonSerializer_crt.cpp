/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>

#include <iterator>
#include <algorithm>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/Document.h>

#include <aws/common/json.h>
#include <aws/common/byte_buf.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Json;

// Helper: get the default CRT allocator
static struct aws_allocator* crt_allocator()
{
    return aws_default_allocator();
}

// Helper: add or replace a key in an object (CRT doesn't have replace, so remove then add)
static void AddOrReplace(aws_json_value* root, const char* key, aws_json_value* value)
{
    if (aws_json_value_has_key_c_str(root, key))
    {
        aws_json_value_remove_from_object_c_str(root, key);
    }
    aws_json_value_add_to_object_c_str(root, key, value);
}

JsonValue::JsonValue() : m_value(nullptr), m_wasParseSuccessful(true)
{
}

JsonValue::JsonValue(aws_json_value* value) :
    m_value(value ? aws_json_value_duplicate(value) : nullptr),
    m_wasParseSuccessful(true)
{
}

JsonValue::JsonValue(const Aws::String& value) : m_value(nullptr), m_wasParseSuccessful(true)
{
    struct aws_byte_cursor input = aws_byte_cursor_from_array(value.c_str(), value.length());
    m_value = aws_json_value_new_from_string(crt_allocator(), input);

    if (!m_value)
    {
        m_wasParseSuccessful = false;
        m_errorMessage = "Failed to parse JSON.";
    }
}

JsonValue::JsonValue(Aws::IStream& istream) : m_value(nullptr), m_wasParseSuccessful(true)
{
    Aws::StringStream memoryStream;
    std::copy(std::istreambuf_iterator<char>(istream), std::istreambuf_iterator<char>(), std::ostreambuf_iterator<char>(memoryStream));
    const auto input = memoryStream.str();
    struct aws_byte_cursor cursor = aws_byte_cursor_from_array(input.c_str(), input.length());
    m_value = aws_json_value_new_from_string(crt_allocator(), cursor);

    if (!m_value)
    {
        m_wasParseSuccessful = false;
        m_errorMessage = "Failed to parse JSON. Invalid input.";
    }
}

JsonValue::JsonValue(const JsonValue& value) :
    m_value(value.m_value ? aws_json_value_duplicate(value.m_value) : nullptr),
    m_wasParseSuccessful(value.m_wasParseSuccessful),
    m_errorMessage(value.m_errorMessage)
{
}

JsonValue::JsonValue(JsonValue&& value) :
    m_value(value.m_value),
    m_wasParseSuccessful(value.m_wasParseSuccessful),
    m_errorMessage(std::move(value.m_errorMessage))
{
    value.m_value = nullptr;
}

JsonValue::JsonValue(const Aws::Utils::DocumentView& value) :
    m_value(value.m_json ? aws_json_value_duplicate(const_cast<aws_json_value*>(value.m_json)) : nullptr),
    m_wasParseSuccessful(true),
    m_errorMessage({})
{
}

void JsonValue::Destroy()
{
    if (m_value)
    {
        aws_json_value_destroy(m_value);
        m_value = nullptr;
    }
}

JsonValue::~JsonValue()
{
    Destroy();
}

JsonValue& JsonValue::operator=(const JsonValue& other)
{
    if (this == &other)
    {
        return *this;
    }

    Destroy();
    m_value = other.m_value ? aws_json_value_duplicate(other.m_value) : nullptr;
    m_wasParseSuccessful = other.m_wasParseSuccessful;
    m_errorMessage = other.m_errorMessage;
    return *this;
}

JsonValue& JsonValue::operator=(JsonValue&& other)
{
    if (this == &other)
    {
        return *this;
    }

    using std::swap;
    swap(m_value, other.m_value);
    swap(m_errorMessage, other.m_errorMessage);
    m_wasParseSuccessful = other.m_wasParseSuccessful;
    return *this;
}

JsonValue& JsonValue::operator=(const Aws::Utils::DocumentView& other)
{
    Destroy();
    m_value = other.m_json ? aws_json_value_duplicate(const_cast<aws_json_value*>(other.m_json)) : nullptr;
    m_wasParseSuccessful = true;
    m_errorMessage = {};
    return *this;
}

JsonValue& JsonValue::WithString(const char* key, const Aws::String& value)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto val = aws_json_value_new_string_from_c_str(crt_allocator(), value.c_str());
    AddOrReplace(m_value, key, val);
    return *this;
}

JsonValue& JsonValue::WithString(const Aws::String& key, const Aws::String& value)
{
    return WithString(key.c_str(), value);
}

JsonValue& JsonValue::WithNull(const char* key)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto val = aws_json_value_new_null(crt_allocator());
    AddOrReplace(m_value, key, val);
    return *this;
}

JsonValue& JsonValue::WithNull(const Aws::String& key)
{
    return WithNull(key.c_str());
}

JsonValue& JsonValue::AsNull()
{
    Destroy();
    m_value = aws_json_value_new_null(crt_allocator());
    return *this;
}

JsonValue& JsonValue::AsString(const Aws::String& value)
{
    Destroy();
    m_value = aws_json_value_new_string_from_c_str(crt_allocator(), value.c_str());
    return *this;
}

JsonValue& JsonValue::WithBool(const char* key, bool value)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto val = aws_json_value_new_boolean(crt_allocator(), value);
    AddOrReplace(m_value, key, val);
    return *this;
}

JsonValue& JsonValue::WithBool(const Aws::String& key, bool value)
{
    return WithBool(key.c_str(), value);
}

JsonValue& JsonValue::AsBool(bool value)
{
    Destroy();
    m_value = aws_json_value_new_boolean(crt_allocator(), value);
    return *this;
}

JsonValue& JsonValue::WithInteger(const char* key, int value)
{
    return WithDouble(key, static_cast<double>(value));
}

JsonValue& JsonValue::WithInteger(const Aws::String& key, int value)
{
    return WithDouble(key.c_str(), static_cast<double>(value));
}

JsonValue& JsonValue::AsInteger(int value)
{
    Destroy();
    m_value = aws_json_value_new_number(crt_allocator(), static_cast<double>(value));
    return *this;
}

JsonValue& JsonValue::WithInt64(const char* key, long long value)
{
    // Store as double — CRT JSON only supports double for numbers.
    // For values that exceed double precision, this may lose precision.
    return WithDouble(key, static_cast<double>(value));
}

JsonValue& JsonValue::WithInt64(const Aws::String& key, long long value)
{
    return WithInt64(key.c_str(), value);
}

JsonValue& JsonValue::AsInt64(long long value)
{
    Destroy();
    m_value = aws_json_value_new_number(crt_allocator(), static_cast<double>(value));
    return *this;
}

JsonValue& JsonValue::WithDouble(const char* key, double value)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto val = aws_json_value_new_number(crt_allocator(), value);
    AddOrReplace(m_value, key, val);
    return *this;
}

JsonValue& JsonValue::WithDouble(const Aws::String& key, double value)
{
    return WithDouble(key.c_str(), value);
}

JsonValue& JsonValue::AsDouble(double value)
{
    Destroy();
    m_value = aws_json_value_new_number(crt_allocator(), value);
    return *this;
}

JsonValue& JsonValue::WithArray(const char* key, const Array<Aws::String>& array)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue, aws_json_value_new_string_from_c_str(crt_allocator(), array[i].c_str()));
    }

    AddOrReplace(m_value, key, arrayValue);
    return *this;
}

JsonValue& JsonValue::WithArray(const Aws::String& key, const Array<Aws::String>& array)
{
    return WithArray(key.c_str(), array);
}

JsonValue& JsonValue::WithArray(const Aws::String& key, const Array<JsonValue>& array)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_value ? aws_json_value_duplicate(array[i].m_value) : aws_json_value_new_null(crt_allocator()));
    }

    AddOrReplace(m_value, key.c_str(), arrayValue);
    return *this;
}

JsonValue& JsonValue::WithArray(const Aws::String& key, Array<JsonValue>&& array)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_value ? array[i].m_value : aws_json_value_new_null(crt_allocator()));
        array[i].m_value = nullptr;
    }

    AddOrReplace(m_value, key.c_str(), arrayValue);
    return *this;
}

JsonValue& JsonValue::AsArray(const Array<JsonValue>& array)
{
    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_value ? aws_json_value_duplicate(array[i].m_value) : aws_json_value_new_null(crt_allocator()));
    }

    Destroy();
    m_value = arrayValue;
    return *this;
}

JsonValue& JsonValue::AsArray(Array<JsonValue>&& array)
{
    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_value ? array[i].m_value : aws_json_value_new_null(crt_allocator()));
        array[i].m_value = nullptr;
    }

    Destroy();
    m_value = arrayValue;
    return *this;
}

JsonValue& JsonValue::WithObject(const char* key, const JsonValue& value)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    auto copy = value.m_value ? aws_json_value_duplicate(value.m_value) : aws_json_value_new_object(crt_allocator());
    AddOrReplace(m_value, key, copy);
    return *this;
}

JsonValue& JsonValue::WithObject(const Aws::String& key, const JsonValue& value)
{
    return WithObject(key.c_str(), value);
}

JsonValue& JsonValue::WithObject(const char* key, JsonValue&& value)
{
    if (!m_value)
    {
        m_value = aws_json_value_new_object(crt_allocator());
    }

    AddOrReplace(m_value, key, value.m_value ? value.m_value : aws_json_value_new_object(crt_allocator()));
    value.m_value = nullptr;
    return *this;
}

JsonValue& JsonValue::WithObject(const Aws::String& key, JsonValue&& value)
{
    return WithObject(key.c_str(), std::move(value));
}

JsonValue& JsonValue::AsObject(const JsonValue& value)
{
    *this = value;
    return *this;
}

JsonValue& JsonValue::AsObject(JsonValue&& value)
{
    *this = std::move(value);
    return *this;
}

bool JsonValue::operator==(const JsonValue& other) const
{
    return aws_json_value_compare(m_value, other.m_value, true /*case-sensitive*/);
}

bool JsonValue::operator!=(const JsonValue& other) const
{
    return !(*this == other);
}

JsonView JsonValue::View() const
{
    return *this;
}

// -- JsonView implementation --

JsonView::JsonView() : m_value(nullptr)
{
}

JsonView::JsonView(const JsonValue& val) : m_value(val.m_value)
{
}

JsonView::JsonView(const aws_json_value* val) : m_value(val)
{
}

JsonView& JsonView::operator=(const JsonValue& v)
{
    m_value = v.m_value;
    return *this;
}

JsonView& JsonView::operator=(const aws_json_value* val)
{
    m_value = val;
    return *this;
}

Aws::String JsonView::GetString(const Aws::String& key) const
{
    assert(m_value);
    auto item = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    if (!item) return "";
    struct aws_byte_cursor cursor;
    if (aws_json_value_get_string(item, &cursor) == AWS_OP_SUCCESS)
    {
        return Aws::String(reinterpret_cast<const char*>(cursor.ptr), cursor.len);
    }
    return "";
}

Aws::String JsonView::AsString() const
{
    struct aws_byte_cursor cursor;
    if (m_value && aws_json_value_get_string(m_value, &cursor) == AWS_OP_SUCCESS)
    {
        return Aws::String(reinterpret_cast<const char*>(cursor.ptr), cursor.len);
    }
    return {};
}

bool JsonView::GetBool(const Aws::String& key) const
{
    assert(m_value);
    auto item = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    assert(item);
    bool result = false;
    aws_json_value_get_boolean(item, &result);
    return result;
}

bool JsonView::AsBool() const
{
    assert(aws_json_value_is_boolean(m_value));
    bool result = false;
    aws_json_value_get_boolean(m_value, &result);
    return result;
}

int JsonView::GetInteger(const Aws::String& key) const
{
    assert(m_value);
    auto item = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    assert(item);
    double d = 0;
    aws_json_value_get_number(item, &d);
    return static_cast<int>(d);
}

int JsonView::AsInteger() const
{
    assert(aws_json_value_is_number(m_value));
    double d = 0;
    aws_json_value_get_number(m_value, &d);
    return static_cast<int>(d);
}

int64_t JsonView::GetInt64(const Aws::String& key) const
{
    assert(m_value);
    auto item = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    assert(item);
    double d = 0;
    aws_json_value_get_number(item, &d);
    return static_cast<int64_t>(d);
}

int64_t JsonView::AsInt64() const
{
    assert(aws_json_value_is_number(m_value));
    double d = 0;
    aws_json_value_get_number(m_value, &d);
    return static_cast<int64_t>(d);
}

double JsonView::GetDouble(const Aws::String& key) const
{
    assert(m_value);
    auto item = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    assert(item);
    double d = 0;
    aws_json_value_get_number(item, &d);
    return d;
}

double JsonView::AsDouble() const
{
    assert(aws_json_value_is_number(m_value));
    double d = 0;
    aws_json_value_get_number(m_value, &d);
    return d;
}

JsonView JsonView::GetObject(const Aws::String& key) const
{
    assert(m_value);
    auto item = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    return JsonView(static_cast<const aws_json_value*>(item));
}

JsonView JsonView::AsObject() const
{
    assert(aws_json_value_is_object(m_value) || aws_json_value_is_null(m_value));
    return JsonView(m_value);
}

Array<JsonView> JsonView::GetArray(const Aws::String& key) const
{
    assert(m_value);
    auto array = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    assert(aws_json_value_is_array(array));
    size_t length = aws_json_get_array_size(array);
    Array<JsonView> returnArray(static_cast<unsigned>(length));

    for (size_t i = 0; i < length; ++i)
    {
        returnArray[static_cast<unsigned>(i)] = JsonView(static_cast<const aws_json_value*>(aws_json_get_array_element(array, i)));
    }

    return returnArray;
}

Array<JsonView> JsonView::AsArray() const
{
    assert(aws_json_value_is_array(m_value));
    size_t length = aws_json_get_array_size(m_value);
    Array<JsonView> returnArray(static_cast<unsigned>(length));

    for (size_t i = 0; i < length; ++i)
    {
        returnArray[static_cast<unsigned>(i)] = JsonView(static_cast<const aws_json_value*>(aws_json_get_array_element(m_value, i)));
    }

    return returnArray;
}

// Callback data for iterating object members
struct GetAllObjectsData {
    Aws::Map<Aws::String, JsonView>* map;
};

static int on_member_for_get_all(
    const struct aws_byte_cursor* key,
    const struct aws_json_value* value,
    bool* out_should_continue,
    void* user_data)
{
    auto* data = static_cast<GetAllObjectsData*>(user_data);
    Aws::String keyStr(reinterpret_cast<const char*>(key->ptr), key->len);
    data->map->emplace(std::make_pair(std::move(keyStr), JsonView(value)));
    *out_should_continue = true;
    return AWS_OP_SUCCESS;
}

Aws::Map<Aws::String, JsonView> JsonView::GetAllObjects() const
{
    Aws::Map<Aws::String, JsonView> valueMap;
    if (!m_value)
    {
        return valueMap;
    }

    GetAllObjectsData data{&valueMap};
    aws_json_const_iterate_object(m_value, on_member_for_get_all, &data);
    return valueMap;
}

bool JsonView::ValueExists(const Aws::String& key) const
{
    if (!aws_json_value_is_object(m_value))
    {
        return false;
    }

    auto item = aws_json_value_get_from_object_c_str(m_value, key.c_str());
    return item != nullptr && !aws_json_value_is_null(item);
}

bool JsonView::KeyExists(const Aws::String& key) const
{
    if (!aws_json_value_is_object(m_value))
    {
        return false;
    }

    return aws_json_value_has_key_c_str(m_value, key.c_str());
}

bool JsonView::IsObject() const
{
    return m_value && aws_json_value_is_object(m_value);
}

bool JsonView::IsBool() const
{
    return m_value && aws_json_value_is_boolean(m_value);
}

bool JsonView::IsString() const
{
    return m_value && aws_json_value_is_string(m_value);
}

bool JsonView::IsIntegerType() const
{
    if (!m_value || !aws_json_value_is_number(m_value))
    {
        return false;
    }
    double d = 0;
    aws_json_value_get_number(m_value, &d);
    return d == static_cast<double>(static_cast<long long>(d));
}

bool JsonView::IsFloatingPointType() const
{
    if (!m_value || !aws_json_value_is_number(m_value))
    {
        return false;
    }
    double d = 0;
    aws_json_value_get_number(m_value, &d);
    return d != static_cast<double>(static_cast<long long>(d));
}

bool JsonView::IsListType() const
{
    return m_value && aws_json_value_is_array(m_value);
}

bool JsonView::IsNull() const
{
    return !m_value || aws_json_value_is_null(m_value);
}

Aws::String JsonView::WriteCompact(bool treatAsObject) const
{
    if (!m_value)
    {
        if (treatAsObject)
        {
            return "{}";
        }
        return {};
    }

    struct aws_byte_buf buf;
    aws_byte_buf_init(&buf, crt_allocator(), 256);
    aws_byte_buf_append_json_string(m_value, &buf);
    Aws::String out(reinterpret_cast<const char*>(buf.buffer), buf.len);
    aws_byte_buf_clean_up(&buf);
    return out;
}

Aws::String JsonView::WriteReadable(bool treatAsObject) const
{
    if (!m_value)
    {
        if (treatAsObject)
        {
            return "{\n}\n";
        }
        return {};
    }

    struct aws_byte_buf buf;
    aws_byte_buf_init(&buf, crt_allocator(), 256);
    aws_byte_buf_append_json_string_formatted(m_value, &buf);
    Aws::String out(reinterpret_cast<const char*>(buf.buffer), buf.len);
    aws_byte_buf_clean_up(&buf);
    return out;
}

JsonValue JsonView::Materialize() const
{
    return JsonValue(const_cast<aws_json_value*>(m_value));
}
