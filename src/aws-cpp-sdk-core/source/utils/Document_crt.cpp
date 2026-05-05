/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Document.h>

#include <iterator>
#include <algorithm>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <aws/common/json.h>
#include <aws/common/byte_buf.h>

using namespace Aws::Utils;

static struct aws_allocator* crt_allocator()
{
    return aws_default_allocator();
}

static void AddOrReplace(aws_json_value* root, const char* key, aws_json_value* value)
{
    if (aws_json_value_has_key_c_str(root, key))
    {
        aws_json_value_remove_from_object_c_str(root, key);
    }
    aws_json_value_add_to_object_c_str(root, key, value);
}

Document::Document() : m_json(nullptr), m_wasParseSuccessful(true)
{
}

Document::Document(aws_json_value* value) :
    m_json(value ? aws_json_value_duplicate(value) : nullptr),
    m_wasParseSuccessful(true)
{
}

Document::Document(const Aws::String& value) : m_json(nullptr), m_wasParseSuccessful(true)
{
    struct aws_byte_cursor input = aws_byte_cursor_from_array(value.c_str(), value.length());
    m_json = aws_json_value_new_from_string(crt_allocator(), input);

    if (!m_json)
    {
        m_wasParseSuccessful = false;
        m_errorMessage = "Failed to parse JSON.";
    }
}

Document::Document(Aws::IStream& istream) : m_json(nullptr), m_wasParseSuccessful(true)
{
    Aws::StringStream memoryStream;
    std::copy(std::istreambuf_iterator<char>(istream), std::istreambuf_iterator<char>(), std::ostreambuf_iterator<char>(memoryStream));
    const auto input = memoryStream.str();
    struct aws_byte_cursor cursor = aws_byte_cursor_from_array(input.c_str(), input.length());
    m_json = aws_json_value_new_from_string(crt_allocator(), cursor);

    if (!m_json)
    {
        m_wasParseSuccessful = false;
        m_errorMessage = "Failed to parse JSON. Invalid input.";
    }
}

Document::Document(const Document& value) :
    m_json(value.m_json ? aws_json_value_duplicate(value.m_json) : nullptr),
    m_wasParseSuccessful(value.m_wasParseSuccessful),
    m_errorMessage(value.m_errorMessage)
{
}

Document::Document(Document&& value) :
    m_json(value.m_json),
    m_wasParseSuccessful(value.m_wasParseSuccessful),
    m_errorMessage(std::move(value.m_errorMessage))
{
    value.m_json = nullptr;
}

Document::Document(const Json::JsonView& view) :
    m_json(view.m_value ? aws_json_value_duplicate(const_cast<aws_json_value*>(view.m_value)) : nullptr),
    m_wasParseSuccessful(true),
    m_errorMessage({})
{
}

void Document::Destroy()
{
    if (m_json)
    {
        aws_json_value_destroy(m_json);
        m_json = nullptr;
    }
}

Document::~Document()
{
    Destroy();
}

Document& Document::operator=(const Document& other)
{
    if (this == &other)
    {
        return *this;
    }

    Destroy();
    m_json = other.m_json ? aws_json_value_duplicate(other.m_json) : nullptr;
    m_wasParseSuccessful = other.m_wasParseSuccessful;
    m_errorMessage = other.m_errorMessage;
    return *this;
}

Document& Document::operator=(Document&& other)
{
    if (this == &other)
    {
        return *this;
    }

    using std::swap;
    swap(m_json, other.m_json);
    swap(m_errorMessage, other.m_errorMessage);
    m_wasParseSuccessful = other.m_wasParseSuccessful;
    return *this;
}

Document& Document::operator=(const Json::JsonView& other)
{
    Destroy();
    m_json = other.m_value ? aws_json_value_duplicate(const_cast<aws_json_value*>(other.m_value)) : nullptr;
    m_wasParseSuccessful = true;
    m_errorMessage = {};
    return *this;
}

bool Document::operator==(const Document& other) const
{
    return aws_json_value_compare(m_json, other.m_json, true /*case-sensitive*/);
}

bool Document::operator!=(const Document& other) const
{
    return !(*this == other);
}

Document& Document::WithString(const char* key, const Aws::String& value)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    auto val = aws_json_value_new_string_from_c_str(crt_allocator(), value.c_str());
    AddOrReplace(m_json, key, val);
    return *this;
}

Document& Document::WithString(const Aws::String& key, const Aws::String& value)
{
    return WithString(key.c_str(), value);
}

Document& Document::AsString(const Aws::String& value)
{
    Destroy();
    m_json = aws_json_value_new_string_from_c_str(crt_allocator(), value.c_str());
    return *this;
}

Document& Document::WithBool(const char* key, bool value)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    auto val = aws_json_value_new_boolean(crt_allocator(), value);
    AddOrReplace(m_json, key, val);
    return *this;
}

Document& Document::WithBool(const Aws::String& key, bool value)
{
    return WithBool(key.c_str(), value);
}

Document& Document::AsBool(bool value)
{
    Destroy();
    m_json = aws_json_value_new_boolean(crt_allocator(), value);
    return *this;
}

Document& Document::WithInteger(const char* key, int value)
{
    return WithDouble(key, static_cast<double>(value));
}

Document& Document::WithInteger(const Aws::String& key, int value)
{
    return WithDouble(key.c_str(), static_cast<double>(value));
}

Document& Document::AsInteger(int value)
{
    Destroy();
    m_json = aws_json_value_new_number(crt_allocator(), static_cast<double>(value));
    return *this;
}

Document& Document::WithInt64(const char* key, long long value)
{
    return WithDouble(key, static_cast<double>(value));
}

Document& Document::WithInt64(const Aws::String& key, long long value)
{
    return WithInt64(key.c_str(), value);
}

Document& Document::AsInt64(long long value)
{
    Destroy();
    m_json = aws_json_value_new_number(crt_allocator(), static_cast<double>(value));
    return *this;
}

Document& Document::WithDouble(const char* key, double value)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    auto val = aws_json_value_new_number(crt_allocator(), value);
    AddOrReplace(m_json, key, val);
    return *this;
}

Document& Document::WithDouble(const Aws::String& key, double value)
{
    return WithDouble(key.c_str(), value);
}

Document& Document::AsDouble(double value)
{
    Destroy();
    m_json = aws_json_value_new_number(crt_allocator(), value);
    return *this;
}

Document& Document::WithArray(const char* key, const Array<Aws::String>& array)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue, aws_json_value_new_string_from_c_str(crt_allocator(), array[i].c_str()));
    }

    AddOrReplace(m_json, key, arrayValue);
    return *this;
}

Document& Document::WithArray(const Aws::String& key, const Array<Aws::String>& array)
{
    return WithArray(key.c_str(), array);
}

Document& Document::WithArray(const Aws::String& key, const Array<Document>& array)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_json ? aws_json_value_duplicate(array[i].m_json) : aws_json_value_new_null(crt_allocator()));
    }

    AddOrReplace(m_json, key.c_str(), arrayValue);
    return *this;
}

Document& Document::WithArray(const Aws::String& key, Array<Document>&& array)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_json ? array[i].m_json : aws_json_value_new_null(crt_allocator()));
        array[i].m_json = nullptr;
    }

    AddOrReplace(m_json, key.c_str(), arrayValue);
    return *this;
}

Document& Document::AsArray(const Array<Document>& array)
{
    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_json ? aws_json_value_duplicate(array[i].m_json) : aws_json_value_new_null(crt_allocator()));
    }

    Destroy();
    m_json = arrayValue;
    return *this;
}

Document& Document::AsArray(Array<Document>&& array)
{
    auto arrayValue = aws_json_value_new_array(crt_allocator());
    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        aws_json_value_add_array_element(arrayValue,
            array[i].m_json ? array[i].m_json : aws_json_value_new_null(crt_allocator()));
        array[i].m_json = nullptr;
    }

    Destroy();
    m_json = arrayValue;
    return *this;
}

Document& Document::WithObject(const char* key, const Document& value)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    auto copy = value.m_json ? aws_json_value_duplicate(value.m_json) : aws_json_value_new_object(crt_allocator());
    AddOrReplace(m_json, key, copy);
    return *this;
}

Document& Document::WithObject(const Aws::String& key, const Document& value)
{
    return WithObject(key.c_str(), value);
}

Document& Document::WithObject(const char* key, Document&& value)
{
    if (!m_json)
    {
        m_json = aws_json_value_new_object(crt_allocator());
    }

    AddOrReplace(m_json, key, value.m_json ? value.m_json : aws_json_value_new_object(crt_allocator()));
    value.m_json = nullptr;
    return *this;
}

Document& Document::WithObject(const Aws::String& key, Document&& value)
{
    return WithObject(key.c_str(), std::move(value));
}

Document& Document::AsObject(const Document& value)
{
    *this = value;
    return *this;
}

Document& Document::AsObject(Document&& value)
{
    *this = std::move(value);
    return *this;
}

DocumentView Document::View() const
{
    return *this;
}

Json::JsonValue Document::Jsonize() const
{
    return Json::JsonValue(View());
}

// -- DocumentView implementation --

DocumentView::DocumentView() : m_json(nullptr)
{
}

DocumentView::DocumentView(const Document& value) : m_json(value.m_json)
{
}

DocumentView::DocumentView(const aws_json_value* v) : m_json(v)
{
}

DocumentView& DocumentView::operator=(const Document& value)
{
    m_json = value.m_json;
    return *this;
}

DocumentView& DocumentView::operator=(const aws_json_value* value)
{
    m_json = value;
    return *this;
}

Aws::String DocumentView::GetString(const Aws::String& key) const
{
    assert(m_json);
    auto item = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    if (!item) return "";
    struct aws_byte_cursor cursor;
    if (aws_json_value_get_string(item, &cursor) == AWS_OP_SUCCESS)
    {
        return Aws::String(reinterpret_cast<const char*>(cursor.ptr), cursor.len);
    }
    return "";
}

Aws::String DocumentView::AsString() const
{
    struct aws_byte_cursor cursor;
    if (m_json && aws_json_value_get_string(m_json, &cursor) == AWS_OP_SUCCESS)
    {
        return Aws::String(reinterpret_cast<const char*>(cursor.ptr), cursor.len);
    }
    return {};
}

bool DocumentView::IsString() const
{
    return m_json && aws_json_value_is_string(m_json);
}

bool DocumentView::GetBool(const Aws::String& key) const
{
    assert(m_json);
    auto item = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    assert(item);
    bool result = false;
    aws_json_value_get_boolean(item, &result);
    return result;
}

bool DocumentView::AsBool() const
{
    assert(aws_json_value_is_boolean(m_json));
    bool result = false;
    aws_json_value_get_boolean(m_json, &result);
    return result;
}

bool DocumentView::IsBool() const
{
    return m_json && aws_json_value_is_boolean(m_json);
}

int DocumentView::GetInteger(const Aws::String& key) const
{
    assert(m_json);
    auto item = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    assert(item);
    double d = 0;
    aws_json_value_get_number(item, &d);
    return static_cast<int>(d);
}

int DocumentView::AsInteger() const
{
    assert(aws_json_value_is_number(m_json));
    double d = 0;
    aws_json_value_get_number(m_json, &d);
    return static_cast<int>(d);
}

bool DocumentView::IsIntegerType() const
{
    if (!m_json || !aws_json_value_is_number(m_json))
    {
        return false;
    }
    double d = 0;
    aws_json_value_get_number(m_json, &d);
    return d == static_cast<double>(static_cast<long long>(d));
}

int64_t DocumentView::GetInt64(const Aws::String& key) const
{
    assert(m_json);
    auto item = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    assert(item);
    double d = 0;
    aws_json_value_get_number(item, &d);
    return static_cast<int64_t>(d);
}

int64_t DocumentView::AsInt64() const
{
    assert(aws_json_value_is_number(m_json));
    double d = 0;
    aws_json_value_get_number(m_json, &d);
    return static_cast<int64_t>(d);
}

double DocumentView::GetDouble(const Aws::String& key) const
{
    assert(m_json);
    auto item = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    assert(item);
    double d = 0;
    aws_json_value_get_number(item, &d);
    return d;
}

double DocumentView::AsDouble() const
{
    assert(aws_json_value_is_number(m_json));
    double d = 0;
    aws_json_value_get_number(m_json, &d);
    return d;
}

bool DocumentView::IsFloatingPointType() const
{
    if (!m_json || !aws_json_value_is_number(m_json))
    {
        return false;
    }
    double d = 0;
    aws_json_value_get_number(m_json, &d);
    return d != static_cast<double>(static_cast<long long>(d));
}

Array<DocumentView> DocumentView::GetArray(const Aws::String& key) const
{
    assert(m_json);
    auto array = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    assert(aws_json_value_is_array(array));
    size_t length = aws_json_get_array_size(array);
    Array<DocumentView> returnArray(static_cast<unsigned>(length));

    for (size_t i = 0; i < length; ++i)
    {
        returnArray[static_cast<unsigned>(i)] = DocumentView(static_cast<const aws_json_value*>(aws_json_get_array_element(array, i)));
    }

    return returnArray;
}

Array<DocumentView> DocumentView::AsArray() const
{
    assert(aws_json_value_is_array(m_json));
    size_t length = aws_json_get_array_size(m_json);
    Array<DocumentView> returnArray(static_cast<unsigned>(length));

    for (size_t i = 0; i < length; ++i)
    {
        returnArray[static_cast<unsigned>(i)] = DocumentView(static_cast<const aws_json_value*>(aws_json_get_array_element(m_json, i)));
    }

    return returnArray;
}

bool DocumentView::IsListType() const
{
    return m_json && aws_json_value_is_array(m_json);
}

DocumentView DocumentView::GetObject(const Aws::String& key) const
{
    assert(m_json);
    auto item = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    return DocumentView(static_cast<const aws_json_value*>(item));
}

DocumentView DocumentView::AsObject() const
{
    assert(aws_json_value_is_object(m_json) || aws_json_value_is_null(m_json));
    return DocumentView(m_json);
}

bool DocumentView::IsObject() const
{
    return m_json && aws_json_value_is_object(m_json);
}

bool DocumentView::IsNull() const
{
    return !m_json || aws_json_value_is_null(m_json);
}

struct GetAllObjectsDocData {
    Aws::Map<Aws::String, DocumentView>* map;
};

static int on_member_for_doc_get_all(
    const struct aws_byte_cursor* key,
    const struct aws_json_value* value,
    bool* out_should_continue,
    void* user_data)
{
    auto* data = static_cast<GetAllObjectsDocData*>(user_data);
    Aws::String keyStr(reinterpret_cast<const char*>(key->ptr), key->len);
    data->map->emplace(std::make_pair(std::move(keyStr), DocumentView(value)));
    *out_should_continue = true;
    return AWS_OP_SUCCESS;
}

Aws::Map<Aws::String, DocumentView> DocumentView::GetAllObjects() const
{
    Aws::Map<Aws::String, DocumentView> valueMap;
    if (!m_json)
    {
        return valueMap;
    }

    GetAllObjectsDocData data{&valueMap};
    aws_json_const_iterate_object(m_json, on_member_for_doc_get_all, &data);
    return valueMap;
}

bool DocumentView::ValueExists(const Aws::String& key) const
{
    if (!aws_json_value_is_object(m_json))
    {
        return false;
    }

    auto item = aws_json_value_get_from_object_c_str(m_json, key.c_str());
    return item != nullptr && !aws_json_value_is_null(item);
}

bool DocumentView::KeyExists(const Aws::String& key) const
{
    if (!aws_json_value_is_object(m_json))
    {
        return false;
    }

    return aws_json_value_has_key_c_str(m_json, key.c_str());
}

Aws::String DocumentView::WriteCompact() const
{
    if (!m_json)
    {
        return "null";
    }

    struct aws_byte_buf buf;
    aws_byte_buf_init(&buf, crt_allocator(), 256);
    aws_byte_buf_append_json_string(m_json, &buf);
    Aws::String out(reinterpret_cast<const char*>(buf.buffer), buf.len);
    aws_byte_buf_clean_up(&buf);
    return out;
}

Aws::String DocumentView::WriteReadable() const
{
    if (!m_json)
    {
        return "null";
    }

    struct aws_byte_buf buf;
    aws_byte_buf_init(&buf, crt_allocator(), 256);
    aws_byte_buf_append_json_string_formatted(m_json, &buf);
    Aws::String out(reinterpret_cast<const char*>(buf.buffer), buf.len);
    aws_byte_buf_clean_up(&buf);
    return out;
}

Document DocumentView::Materialize() const
{
    return Document(const_cast<aws_json_value*>(m_json));
}
