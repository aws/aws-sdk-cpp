/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/common/json.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Types.h>
#include <harness/DynamicStruct.h>
#include <harness/FuzzSchemas.h>
#include <harness/ReferenceParity.h>
#include <harness/ScalarText.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlTraits.h>
#include <tinyxml2.h>

#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <limits>
#include <utility>

// Called directly for require_null_terminated: aws_json_value_new_from_string accepts trailing data.
extern "C" {
struct cJSON;
cJSON* cJSON_ParseWithOpts(const char* value, const char** return_parse_end, int require_null_terminated);
}

using Aws::Utils::StringUtils;

namespace smithy {
namespace schema {
namespace fuzz {

namespace {

constexpr double EXACT_INTEGER_LIMIT = 9007199254740992.0;
constexpr double INT64_LIMIT = 9223372036854775808.0;
const char CONTROL_BYTES[] =
    "\x01\x02\x03\x04\x05\x06\x07\x08\x0B\x0C\x0E\x0F\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1A\x1B\x1C\x1D\x1E\x1F";

Aws::Crt::ByteCursor CursorOf(const std::string& bytes) {
  return Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(bytes.data()), bytes.size());
}

// Both references read a NUL-terminated copy and reject blank input, which the codecs read as an empty struct.
bool ReferenceCanJudge(const std::string& bytes) {
  const size_t start = bytes.compare(0, 3, "\xEF\xBB\xBF") == 0 ? 3 : 0;
  return bytes.find('\0') == std::string::npos && bytes.find_first_not_of(" \t\r\n", start) != std::string::npos;
}

void Note(Aws::String& slot, const Aws::String& why) {
  if (slot.empty()) {
    slot = why;
  }
}

using TextTest = bool (*)(const Aws::String&);

bool AnyText(const Document& document, TextTest test) {
  if (document.GetType() == ShapeType::String) {
    const auto text = document.AsString();
    return text.has_value() && test(text.value());
  }
  if (document.GetType() == ShapeType::List) {
    const auto list = document.AsList();
    return list &&
           std::any_of(list->begin(), list->end(), [test](const std::shared_ptr<const Document>& item) { return AnyText(*item, test); });
  }
  if (document.GetType() == ShapeType::Map) {
    const auto map = document.AsMap();
    return map && std::any_of(map->begin(), map->end(), [test](const std::pair<const Aws::String, std::shared_ptr<const Document>>& entry) {
             return test(entry.first) || AnyText(*entry.second, test);
           });
  }
  return false;
}

bool AnyText(const FuzzValue& value, TextTest test) {
  switch (value.GetKind()) {
    case FuzzValue::Kind::String:
      return test(value.GetString());
    case FuzzValue::Kind::Document:
      return value.GetDocument() && AnyText(*value.GetDocument(), test);
    case FuzzValue::Kind::List:
      return std::any_of(value.GetList().begin(), value.GetList().end(), [test](const FuzzValue& item) { return AnyText(item, test); });
    case FuzzValue::Kind::Map:
      return std::any_of(value.GetMap().begin(), value.GetMap().end(), [test](const std::pair<const Aws::String, FuzzValue>& entry) {
        return test(entry.first) || AnyText(entry.second, test);
      });
    case FuzzValue::Kind::Struct:
      return std::any_of(value.GetMembers().begin(), value.GetMembers().end(),
                         [test](const std::pair<const int, FuzzValue>& entry) { return AnyText(entry.second, test); });
    default:
      return false;
  }
}

// Both references truncate a string at a NUL.
bool HasNul(const Aws::String& text) { return text.find('\0') != Aws::String::npos; }

// tinyxml2 drops whitespace-only text; the codec keeps it.
bool IsWhitespaceOnly(const Aws::String& text) { return !text.empty() && text.find_first_not_of(" \t\n\v\f\r") == Aws::String::npos; }

Aws::Crt::Optional<FuzzValue> IntegerFor(const Schema& member, int64_t value, ReferenceReading& reading) {
  if (member.GetType() == ShapeType::Long) {
    return FuzzValue::Integer(value);
  }
  if (value < INT32_MIN || value > INT32_MAX) {
    Note(reading.mustReject, "integer out of range");
    return {};
  }
  const int64_t limit = member.GetType() == ShapeType::Byte ? INT8_MAX : (member.GetType() == ShapeType::Short ? INT16_MAX : INT32_MAX);
  if (value < -limit - 1 || value > limit) {
    return {};
  }
  return FuzzValue::Integer(value);
}

Aws::Crt::Optional<FuzzValue> IntegerFromText(const Schema& member, const Aws::String& text, ReferenceReading& reading) {
  const IntegerText parsed = ParseIntegerText(text);
  if (parsed.kind == IntegerTextKind::OUT_OF_RANGE) {
    Note(reading.mustReject, "integer text out of range");
  }
  return parsed.kind == IntegerTextKind::VALUE ? IntegerFor(member, parsed.value, reading) : Aws::Crt::Optional<FuzzValue>();
}

Aws::Crt::Optional<FuzzValue> FloatingPointFor(const Schema& member, double value, ReferenceReading& reading) {
  if (member.GetType() == ShapeType::Double) {
    return FuzzValue::Double(value);
  }
  const double floatMax = static_cast<double>((std::numeric_limits<float>::max)());
  if (std::isfinite(value) && std::fabs(value) > floatMax) {
    if (std::fabs(value) >= floatMax + std::ldexp(1.0, 103)) {
      Note(reading.mustReject, "float out of range");
      return {};
    }
    return FuzzValue::Double(value < 0 ? -floatMax : floatMax);
  }
  return FuzzValue::Double(static_cast<double>(static_cast<float>(value)));
}

Aws::Crt::Optional<FuzzValue> NonFiniteFromText(const Aws::String& text) {
  if (text == "NaN") {
    return FuzzValue::Double(std::numeric_limits<double>::quiet_NaN());
  }
  if (text == "Infinity" || text == "-Infinity") {
    return FuzzValue::Double(text[0] == '-' ? -std::numeric_limits<double>::infinity() : std::numeric_limits<double>::infinity());
  }
  return {};
}

Aws::Crt::Optional<FuzzValue> EpochTimestamp(double seconds, ReferenceReading& reading) {
  const auto timestamp = EpochSecondsInClockRange(seconds);
  if (!timestamp.has_value()) {
    Note(reading.mustReject, "epoch timestamp beyond the system clock");
    return {};
  }
  return FuzzValue::Timestamp(timestamp.value());
}

Aws::Crt::Optional<FuzzValue> TextTimestamp(const Aws::String& text, TimestampFormatTrait::Format format) {
  const Aws::Utils::DateTime parsed(
      text, format == TimestampFormatTrait::Format::HTTP_DATE ? Aws::Utils::DateFormat::RFC822 : Aws::Utils::DateFormat::ISO_8601);
  return parsed.WasParseSuccessful() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Timestamp(parsed)) : Aws::Crt::Optional<FuzzValue>();
}

FuzzValue BlobFromText(const Aws::String& text) { return FuzzValue::Blob(Aws::Utils::HashingUtils::Base64Decode(text)); }

std::shared_ptr<const Schema> ListElement(const Schema& member) { return (*member.GetMemberTarget())->GetMember("member").value(); }

std::shared_ptr<const Schema> MapValue(const Schema& member) { return (*member.GetMemberTarget())->GetMember("value").value(); }

template <typename T>
Aws::String TraitValue(const Schema& member, const TraitKey<T>& key, const Aws::String& fallback) {
  const auto trait = member.GetTrait(key);
  return trait ? trait->GetValue() : fallback;
}

class CrtJson final {
 public:
  explicit CrtJson(const std::string& text) {
    const Aws::String copy(text.data(), text.size());
    m_value = reinterpret_cast<aws_json_value*>(cJSON_ParseWithOpts(copy.c_str(), nullptr, 1));
  }
  ~CrtJson() {
    if (m_value != nullptr) {
      aws_json_value_destroy(m_value);
    }
  }
  CrtJson(const CrtJson&) = delete;
  CrtJson& operator=(const CrtJson&) = delete;

  const aws_json_value* Get() const { return m_value; }

 private:
  aws_json_value* m_value = nullptr;
};

using JsonMembers = Aws::Vector<std::pair<Aws::String, const aws_json_value*>>;

int CollectMember(const aws_byte_cursor* key, const aws_json_value* value, bool*, void* members) {
  static_cast<JsonMembers*>(members)->emplace_back(Aws::String(reinterpret_cast<const char*>(key->ptr), key->len), value);
  return AWS_OP_SUCCESS;
}

int CollectItem(size_t, const aws_json_value* value, bool*, void* items) {
  static_cast<Aws::Vector<const aws_json_value*>*>(items)->push_back(value);
  return AWS_OP_SUCCESS;
}

JsonMembers ObjectMembers(const aws_json_value* object) {
  JsonMembers members;
  aws_json_const_iterate_object(object, &CollectMember, &members);
  return members;
}

Aws::Vector<const aws_json_value*> ArrayItems(const aws_json_value* array) {
  Aws::Vector<const aws_json_value*> items;
  aws_json_const_iterate_array(array, &CollectItem, &items);
  return items;
}

Aws::String JsonText(const aws_json_value* node) {
  aws_byte_cursor text;
  aws_json_value_get_string(node, &text);
  return Aws::String(reinterpret_cast<const char*>(text.ptr), text.len);
}

double JsonNumber(const aws_json_value* node) {
  double number = 0.0;
  aws_json_value_get_number(node, &number);
  return number;
}

// The codecs count skipped values against MAX_NESTING_DEPTH too.
size_t JsonDepth(const aws_json_value* node) {
  size_t deepest = 0;
  if (aws_json_value_is_object(node)) {
    for (const auto& member : ObjectMembers(node)) {
      deepest = (std::max)(deepest, JsonDepth(member.second));
    }
  } else if (aws_json_value_is_array(node)) {
    for (const auto* item : ArrayItems(node)) {
      deepest = (std::max)(deepest, JsonDepth(item));
    }
  } else {
    return 0;
  }
  return deepest + 1;
}

class JsonReference final {
 public:
  explicit JsonReference(ReferenceReading& reading) : m_reading(reading) {}

  __attribute__((noinline)) FuzzValue Struct(const Schema& structSchema, const aws_json_value* node) {
    FuzzValue result = FuzzValue::Struct();
    if (!aws_json_value_is_object(node)) {
      return result;
    }
    bool delivered = false;
    for (const auto& entry : ObjectMembers(node)) {
      const auto member = Member(structSchema, entry.first);
      const bool modeled = member && !aws_json_value_is_null(entry.second);
      if (modeled && delivered && structSchema.GetType() == ShapeType::Union) {
        Note(m_reading.mustReject, "union has more than one member set");
      }
      delivered = delivered || modeled;
      auto value = modeled ? Value(*member, entry.second) : Aws::Crt::Optional<FuzzValue>();
      if (value.has_value()) {
        result.SetMember(member->GetMemberIndex(), std::move(value.value()));
      }
    }
    return result;
  }

 private:
  static std::shared_ptr<const Schema> Member(const Schema& structSchema, const Aws::String& name) {
    for (uint16_t i = 0; i < structSchema.GetMemberCount(); ++i) {
      const auto member = structSchema.GetMember(static_cast<int>(i)).value();
      if (TraitValue(*member, JsonNameTrait::KEY(), member->GetMemberName()) == name) {
        return member;
      }
    }
    return nullptr;
  }

  Aws::Crt::Optional<FuzzValue> Value(const Schema& member, const aws_json_value* node) {
    switch (member.GetType()) {
      case ShapeType::List:
        return List(member, node);
      case ShapeType::Map:
        return Map(member, node);
      case ShapeType::Structure:
      case ShapeType::Union:
        return Struct(**member.GetMemberTarget(), node);
      default:
        return Scalar(member, node);
    }
  }

  __attribute__((noinline)) FuzzValue List(const Schema& member, const aws_json_value* node) {
    Aws::Vector<FuzzValue> items;
    if (aws_json_value_is_array(node)) {
      const auto element = ListElement(member);
      for (const auto* item : ArrayItems(node)) {
        auto value = aws_json_value_is_null(item) ? Aws::Crt::Optional<FuzzValue>() : Value(*element, item);
        if (value.has_value()) {
          items.push_back(std::move(value.value()));
        }
      }
    }
    return FuzzValue::List(std::move(items));
  }

  __attribute__((noinline)) FuzzValue Map(const Schema& member, const aws_json_value* node) {
    Aws::Map<Aws::String, FuzzValue> entries;
    if (aws_json_value_is_object(node)) {
      const auto valueMember = MapValue(member);
      for (const auto& entry : ObjectMembers(node)) {
        auto value = aws_json_value_is_null(entry.second) ? Aws::Crt::Optional<FuzzValue>() : Value(*valueMember, entry.second);
        if (value.has_value()) {
          entries.erase(entry.first);
          entries.emplace(entry.first, std::move(value.value()));
        }
      }
    }
    return FuzzValue::Map(std::move(entries));
  }

  __attribute__((noinline)) Aws::Crt::Optional<FuzzValue> Scalar(const Schema& member, const aws_json_value* node) {
    const bool number = aws_json_value_is_number(node);
    const bool text = aws_json_value_is_string(node);
    switch (member.GetType()) {
      case ShapeType::Boolean: {
        bool flag = false;
        return aws_json_value_is_boolean(node) && aws_json_value_get_boolean(node, &flag) == AWS_OP_SUCCESS
                   ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Boolean(flag))
                   : Aws::Crt::Optional<FuzzValue>();
      }
      case ShapeType::Byte:
      case ShapeType::Short:
      case ShapeType::Integer:
      case ShapeType::IntEnum:
      case ShapeType::Long:
        return number ? Integral(member, JsonNumber(node)) : Aws::Crt::Optional<FuzzValue>();
      case ShapeType::Float:
      case ShapeType::Double:
        if (number && !std::isfinite(JsonNumber(node))) {
          Note(m_reading.mustReject, "non-finite number");
          return {};
        }
        return number ? FloatingPointFor(member, JsonNumber(node), m_reading)
                      : (text ? NonFiniteFromText(JsonText(node)) : Aws::Crt::Optional<FuzzValue>());
      case ShapeType::String:
      case ShapeType::Enum:
        return text ? Aws::Crt::Optional<FuzzValue>(FuzzValue::String(JsonText(node))) : Aws::Crt::Optional<FuzzValue>();
      case ShapeType::Blob:
        return text ? Aws::Crt::Optional<FuzzValue>(BlobFromText(JsonText(node))) : Aws::Crt::Optional<FuzzValue>();
      case ShapeType::Timestamp:
        if (number) {
          return EpochTimestamp(JsonNumber(node), m_reading);
        }
        return text ? TextTimestamp(JsonText(node), ResolveTimestampFormat(member, TimestampFormatTrait::Format::EPOCH_SECONDS))
                    : Aws::Crt::Optional<FuzzValue>();
      case ShapeType::Document:
        return FuzzValue::FromDocument(ToDocument(node));
      default:
        return {};
    }
  }

  // cJSON reads numbers as doubles, exact only below 2^53.
  Aws::Crt::Optional<FuzzValue> Integral(const Schema& member, double number) {
    if (std::fabs(number) < EXACT_INTEGER_LIMIT) {
      if (std::trunc(number) != number) {
        Note(m_reading.mustReject, "non-integral number for an integer member");
        return {};
      }
      return IntegerFor(member, static_cast<int64_t>(number), m_reading);
    }
    if (member.GetType() != ShapeType::Long || !(std::fabs(number) <= INT64_LIMIT)) {
      Note(m_reading.mustReject, "integer out of range");
      return {};
    }
    if (std::fabs(number) == INT64_LIMIT) {
      Note(m_reading.acceptanceUnjudged, "a long the reference reads as 2^63 may or may not fit");
    }
    return FuzzValue::Double(number);
  }

  // A repeated object key keeps its first value, as the codec's document reader does.
  __attribute__((noinline)) std::shared_ptr<const Document> ToDocument(const aws_json_value* node) {
    if (aws_json_value_is_object(node)) {
      Aws::Map<Aws::String, std::shared_ptr<const Document>> fields;
      for (const auto& entry : ObjectMembers(node)) {
        auto value = ToDocument(entry.second);
        fields.emplace(entry.first, std::move(value));
      }
      return Document::FromMap(std::move(fields));
    }
    if (aws_json_value_is_array(node)) {
      Aws::Vector<std::shared_ptr<const Document>> items;
      for (const auto* item : ArrayItems(node)) {
        items.push_back(ToDocument(item));
      }
      return Document::FromList(std::move(items));
    }
    bool flag = false;
    if (aws_json_value_is_boolean(node) && aws_json_value_get_boolean(node, &flag) == AWS_OP_SUCCESS) {
      return Document::FromBoolean(flag);
    }
    if (aws_json_value_is_string(node)) {
      return Document::FromString(JsonText(node));
    }
    if (aws_json_value_is_number(node)) {
      if (!std::isfinite(JsonNumber(node))) {
        Note(m_reading.mustReject, "non-finite document number");
      }
      return Document::FromDouble(JsonNumber(node));
    }
    return Document::Null();
  }

  ReferenceReading& m_reading;
};

// cJSON reads \u without four hex digits as U+0000; the codec rejects it.
bool HasBadUnicodeEscape(const std::string& bytes) {
  for (size_t at = bytes.find("\\u"); at != std::string::npos; at = bytes.find("\\u", at + 2)) {
    const bool hex = at + 6 <= bytes.size() && std::all_of(bytes.begin() + at + 2, bytes.begin() + at + 6,
                                                           [](char c) { return std::isxdigit(static_cast<unsigned char>(c)) != 0; });
    if (!hex) {
      return true;
    }
  }
  return false;
}

ReferenceReading ReadJson(const Schema& root, const aws_json_value* document) {
  ReferenceReading reading;
  if (JsonDepth(document) > static_cast<size_t>(MAX_NESTING_DEPTH)) {
    Note(reading.mustReject, "nested deeper than MAX_NESTING_DEPTH");
  }
  if (!aws_json_value_is_object(document) && !aws_json_value_is_null(document)) {
    Note(reading.mustReject, "root is not an object");
  }
  JsonReference reader(reading);
  reading.value = reader.Struct(root, document);
  return reading;
}

// tinyxml2 truncates at a reference to U+0000 and leaves a stale byte after an unrecognised entity. Its decoded text is a C
// string, so the NUL itself never shows; the reference is found in the raw text.
bool ReferenceDecodesFaithfully(const Aws::String& raw) {
  for (size_t amp = raw.find('&'); amp != Aws::String::npos; amp = raw.find('&', amp + 1)) {
    const size_t semicolon = raw.find(';', amp);
    const Aws::String body = semicolon == Aws::String::npos ? Aws::String() : raw.substr(amp + 1, semicolon - amp - 1);
    const bool named = body == "lt" || body == "gt" || body == "amp" || body == "quot" || body == "apos";
    const bool hex = body.size() > 2 && body.size() <= 8 && body.compare(0, 2, "#x") == 0 &&
                     body.find_first_not_of("0123456789abcdefABCDEF", 2) == Aws::String::npos;
    const bool decimal = body.size() > 1 && body.size() <= 8 && body[0] == '#' && body.find_first_not_of("0123456789", 1) == Aws::String::npos;
    if (!named && !hex && !decimal) {
      return false;
    }
    if ((hex || decimal) && body.find_first_not_of(hex ? "#x0" : "#0") == Aws::String::npos) {
      return false;
    }
  }
  return true;
}

Aws::String FindTinyXmlLeniency(const std::string& bytes) {
  const char* whitespace = " \t\r\n";
  if (bytes.find_first_of("\v\f") != std::string::npos) {
    return "a \\v or \\f, which tinyxml2 skips as whitespace";
  }
  const size_t start = bytes.find_first_not_of(whitespace);
  if (start != 0 && start != std::string::npos && bytes.compare(start, 3, "\xEF\xBB\xBF") == 0) {
    return "a byte-order mark after leading whitespace";
  }
  for (size_t lt = bytes.find('<'); lt != std::string::npos; lt = bytes.find('<', lt + 1)) {
    if (lt + 1 < bytes.size() && Aws::String(whitespace).find(bytes[lt + 1]) != Aws::String::npos) {
      return "whitespace before an element name";
    }
    if (lt + 1 < bytes.size() && bytes[lt + 1] == '/') {
      const size_t nameEnd = bytes.find_first_of(" \t\r\n<>", lt + 2);
      const size_t afterName = nameEnd == std::string::npos ? nameEnd : bytes.find_first_not_of(whitespace, nameEnd);
      if (afterName != std::string::npos && bytes[afterName] != '>') {
        return "junk in a closing tag";
      }
    }
  }
  return {};
}

struct XmlNode {
  const tinyxml2::XMLElement* decoded;
  const tinyxml2::XMLElement* raw;
};

Aws::Vector<XmlNode> Children(const XmlNode& parent, const Aws::String& name) {
  Aws::Vector<XmlNode> children;
  const tinyxml2::XMLElement* raw = parent.raw->FirstChildElement(name.c_str());
  for (const tinyxml2::XMLElement* child = parent.decoded->FirstChildElement(name.c_str()); child != nullptr && raw != nullptr;
       child = child->NextSiblingElement(name.c_str()), raw = raw->NextSiblingElement(name.c_str())) {
    children.push_back(XmlNode{child, raw});
  }
  return children;
}

// Empty beside an element, comment or processing instruction, where tinyxml2 drops whitespace.
Aws::Crt::Optional<Aws::String> ElementText(const tinyxml2::XMLElement& element) {
  Aws::String text;
  for (const tinyxml2::XMLNode* child = element.FirstChild(); child != nullptr; child = child->NextSibling()) {
    if (child->ToText() == nullptr) {
      return {};
    }
    text += child->Value();
  }
  return text;
}

class XmlReference final {
 public:
  explicit XmlReference(ReferenceReading& reading) : m_reading(reading) {}

  __attribute__((noinline)) FuzzValue Struct(const Schema& structSchema, const XmlNode& node) {
    FuzzValue result = FuzzValue::Struct();
    bool delivered = false;
    for (uint16_t i = 0; i < structSchema.GetMemberCount(); ++i) {
      const auto member = structSchema.GetMember(static_cast<int>(i)).value();
      const Aws::String name = TraitValue(*member, XmlNameTrait::KEY(), member->GetMemberName());
      const bool container = member->GetType() == ShapeType::List || member->GetType() == ShapeType::Map;
      bool present = false;
      Aws::Crt::Optional<FuzzValue> value;
      if (member->HasTrait(XmlAttributeTrait::KEY())) {
        const char* decoded = node.decoded->Attribute(name.c_str());
        const char* raw = node.raw->Attribute(name.c_str());
        present = decoded != nullptr;
        value = present ? Scalar(*member, AttributeText(decoded, raw)) : value;
      } else if (container && member->HasTrait(XmlFlattenedTrait::KEY())) {
        const auto siblings = Children(node, name);
        present = !siblings.empty();
        value = present ? Container(*member, siblings) : value;
      } else {
        const auto children = Children(node, name);
        present = !children.empty();
        value = present ? Value(*member, children.front()) : value;
      }
      if (present && delivered && structSchema.GetType() == ShapeType::Union) {
        Note(m_reading.mustReject, "union has more than one member set");
      }
      delivered = delivered || present;
      if (value.has_value()) {
        result.SetMember(member->GetMemberIndex(), std::move(value.value()));
      }
    }
    return result;
  }

 private:
  Aws::Crt::Optional<FuzzValue> Value(const Schema& member, const XmlNode& node) {
    switch (member.GetType()) {
      case ShapeType::List:
        return Container(member, Children(node, TraitValue(member, XmlListItemNameTrait::KEY(), "member")));
      case ShapeType::Map:
        return Container(member, Children(node, TraitValue(member, XmlMapEntryNameTrait::KEY(), "entry")));
      case ShapeType::Structure:
      case ShapeType::Union:
        return Struct(**member.GetMemberTarget(), node);
      case ShapeType::Document:
        return {};
      default:
        return Scalar(member, Text(node));
    }
  }

  __attribute__((noinline)) FuzzValue Container(const Schema& member, const Aws::Vector<XmlNode>& nodes) {
    if (member.GetType() == ShapeType::List) {
      const auto element = ListElement(member);
      Aws::Vector<FuzzValue> items;
      for (const auto& item : nodes) {
        auto value = Value(*element, item);
        if (value.has_value()) {
          items.push_back(std::move(value.value()));
        }
      }
      return FuzzValue::List(std::move(items));
    }
    const auto valueMember = MapValue(member);
    const Aws::String keyName = TraitValue(member, XmlMapKeyNameTrait::KEY(), "key");
    const Aws::String valueName = TraitValue(member, XmlMapValueNameTrait::KEY(), "value");
    Aws::Map<Aws::String, FuzzValue> entries;
    for (const auto& entry : nodes) {
      const auto values = Children(entry, valueName);
      const auto keys = Children(entry, keyName);
      const auto key = keys.empty() ? Aws::Crt::Optional<Aws::String>(Aws::String()) : Text(keys.front());
      auto value = values.empty() ? Aws::Crt::Optional<FuzzValue>() : Value(*valueMember, values.front());
      if (value.has_value() && key.has_value()) {
        entries.erase(key.value());
        entries.emplace(key.value(), std::move(value.value()));
      }
    }
    return FuzzValue::Map(std::move(entries));
  }

  Aws::Crt::Optional<Aws::String> Text(const XmlNode& node) {
    const auto decoded = ElementText(*node.decoded);
    const auto raw = ElementText(*node.raw);
    if (!decoded.has_value() || !raw.has_value()) {
      Note(m_reading.valueUnjudged, "text beside other markup");
      return {};
    }
    if (!ReferenceDecodesFaithfully(raw.value())) {
      Note(m_reading.valueUnjudged, "a reference tinyxml2 decodes unfaithfully");
      return {};
    }
    return decoded;
  }

  Aws::Crt::Optional<Aws::String> AttributeText(const char* decoded, const char* raw) {
    if (raw == nullptr || !ReferenceDecodesFaithfully(raw)) {
      Note(m_reading.valueUnjudged, "a reference tinyxml2 decodes unfaithfully");
      return {};
    }
    return Aws::String(decoded);
  }

  __attribute__((noinline)) Aws::Crt::Optional<FuzzValue> Scalar(const Schema& member, const Aws::Crt::Optional<Aws::String>& text) {
    if (!text.has_value()) {
      return {};
    }
    // Legacy clients trim number, boolean and timestamp text; strings and blobs are read as written.
    const Aws::String trimmed = StringUtils::Trim(text.value().c_str());
    switch (member.GetType()) {
      case ShapeType::Boolean: {
        const Aws::String lower = StringUtils::ToLower(trimmed.c_str());
        return lower == "true" || lower == "false" ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Boolean(lower == "true"))
                                                   : Aws::Crt::Optional<FuzzValue>();
      }
      case ShapeType::Byte:
      case ShapeType::Short:
      case ShapeType::Integer:
      case ShapeType::IntEnum:
      case ShapeType::Long:
        return IntegerFromText(member, trimmed, m_reading);
      case ShapeType::Float:
      case ShapeType::Double: {
        const auto nonFinite = NonFiniteFromText(trimmed);
        if (nonFinite.has_value()) {
          return FloatingPointFor(member, nonFinite->GetDouble(), m_reading);
        }
        const auto number = ParseDoubleText(trimmed);
        if (number.has_value() && !std::isfinite(number.value())) {
          Note(m_reading.mustReject, "non-finite number");
          return {};
        }
        return number.has_value() ? FloatingPointFor(member, number.value(), m_reading) : Aws::Crt::Optional<FuzzValue>();
      }
      case ShapeType::String:
      case ShapeType::Enum:
        return FuzzValue::String(text.value());
      case ShapeType::Blob:
        return BlobFromText(text.value());
      case ShapeType::Timestamp: {
        const auto format = ResolveTimestampFormat(member, TimestampFormatTrait::Format::DATE_TIME);
        if (format != TimestampFormatTrait::Format::EPOCH_SECONDS) {
          return TextTimestamp(trimmed, format);
        }
        const auto seconds = ParseDoubleText(trimmed);
        return seconds.has_value() ? EpochTimestamp(seconds.value(), m_reading) : Aws::Crt::Optional<FuzzValue>();
      }
      default:
        return {};
    }
  }

  ReferenceReading& m_reading;
};

size_t ClosingMarks(const char* text) {
  size_t marks = 0;
  for (const char* at = text != nullptr ? std::strstr(text, "</") : nullptr; at != nullptr; at = std::strstr(at + 2, "</")) {
    ++marks;
  }
  return marks;
}

size_t ClosingMarksInTree(const tinyxml2::XMLNode& node) {
  size_t marks = 0;
  for (const tinyxml2::XMLNode* child = node.FirstChild(); child != nullptr; child = child->NextSibling()) {
    const tinyxml2::XMLElement* element = child->ToElement();
    if (element != nullptr) {
      marks += element->ClosingType() == tinyxml2::XMLElement::OPEN ? 1 : 0;
      for (const tinyxml2::XMLAttribute* attribute = element->FirstAttribute(); attribute != nullptr; attribute = attribute->Next()) {
        marks += ClosingMarks(attribute->Value());
      }
      marks += ClosingMarksInTree(*child);
    } else {
      marks += ClosingMarks(child->Value());
    }
  }
  return marks;
}

class XmlReferenceDocuments final {
 public:
  explicit XmlReferenceDocuments(const std::string& bytes)
      : m_decoded(true, tinyxml2::PRESERVE_WHITESPACE), m_raw(false, tinyxml2::PRESERVE_WHITESPACE) {
    m_status = m_decoded.Parse(bytes.data(), bytes.size());
    m_parsed = m_status == tinyxml2::XML_SUCCESS && m_decoded.RootElement() != nullptr &&
               m_raw.Parse(bytes.data(), bytes.size()) == tinyxml2::XML_SUCCESS && m_raw.RootElement() != nullptr;
    const Aws::String copy(bytes.data(), bytes.size());
    // tinyxml2 drops a closing tag outside the root without an error.
    m_strayClosingTag = m_parsed && ClosingMarks(copy.c_str()) > ClosingMarksInTree(m_raw);
  }

  // tinyxml2 stops at 500 nested elements, below MAX_NESTING_DEPTH.
  bool TooDeep() const { return m_status == tinyxml2::XML_ELEMENT_DEPTH_EXCEEDED; }
  bool Parsed() const { return m_parsed; }
  const char* Error() const { return m_decoded.ErrorStr(); }

  ReferenceReading Read(const Schema& root, const Aws::String& resultWrapper) const {
    ReferenceReading reading;
    int elements = 0;
    for (const tinyxml2::XMLNode* node = m_decoded.FirstChild(); node != nullptr; node = node->NextSibling()) {
      elements += node->ToElement() != nullptr ? 1 : 0;
      const Aws::String text = node->ToText() != nullptr ? node->Value() : "";
      if (text.find_first_not_of(" \t\r\n") != Aws::String::npos) {
        Note(reading.mustReject, "text outside the root element");
      }
    }
    if (elements > 1) {
      Note(reading.mustReject, "more than one root element");
    }
    if (m_strayClosingTag) {
      Note(reading.mustReject, "a closing tag that closes no element");
    }
    XmlNode node{m_decoded.RootElement(), m_raw.RootElement()};
    const tinyxml2::XMLElement* wrapper = resultWrapper.empty() ? nullptr : node.decoded->FirstChildElement(resultWrapper.c_str());
    if (wrapper != nullptr) {
      node = XmlNode{wrapper, node.raw->FirstChildElement(resultWrapper.c_str())};
    }
    XmlReference reader(reading);
    reading.value = reader.Struct(root, node);
    return reading;
  }

 private:
  tinyxml2::XMLDocument m_decoded;
  tinyxml2::XMLDocument m_raw;
  tinyxml2::XMLError m_status = tinyxml2::XML_SUCCESS;
  bool m_parsed = false;
  bool m_strayClosingTag = false;
};

template <typename ReadCodec, typename ReadReference>
Aws::String ReadMismatch(bool parsed, const char* referenceError, ReadCodec readCodec, ReadReference readReference,
                         const CodecTolerance& tolerance, TextTest unjudged) {
  for (const auto& schema : FuzzSchemas()) {
    DynamicStruct shape(schema);
    const auto error = readCodec(*schema, shape);
    const bool accepted = !error.has_value();
    Aws::String mismatch;
    if (!parsed) {
      mismatch = accepted ? Aws::String("accepted, the reference rejects: ") + referenceError : Aws::String();
    } else {
      const ReferenceReading reading = readReference(*schema);
      if (reading.acceptanceUnjudged.empty() && accepted != reading.mustReject.empty()) {
        mismatch = accepted ? "accepted, but the reference reading must fail: " + reading.mustReject
                            : "rejected what the reference reads: " + error->GetMessage();
      } else if (accepted && reading.mustReject.empty() && reading.valueUnjudged.empty() &&
                 (unjudged == nullptr || !AnyText(shape.GetValue(), unjudged))) {
        mismatch = FindMismatch(reading.value, shape.GetValue(), *schema, tolerance);
      }
    }
    if (!mismatch.empty()) {
      return Aws::String(schema->GetId()) + ": " + mismatch;
    }
  }
  return {};
}

Aws::String XmlReadMismatch(const std::string& bytes, const Aws::String& resultWrapper,
                            const std::function<Aws::Crt::Optional<DeserializerError>(const Schema&, DynamicStruct&)>& readCodec) {
  if (!ReferenceCanJudge(bytes)) {
    return {};
  }
  const XmlReferenceDocuments reference(bytes);
  if (reference.TooDeep()) {
    return {};
  }
  const Aws::String leniency = FindTinyXmlLeniency(bytes);
  return ReadMismatch(
      reference.Parsed(), reference.Error(), readCodec,
      [&](const Schema& schema) {
        ReferenceReading reading = reference.Read(schema, resultWrapper);
        if (!leniency.empty()) {
          Note(reading.acceptanceUnjudged, leniency);
        }
        return reading;
      },
      CodecTolerance::Exact(), &IsWhitespaceOnly);
}

}  // namespace

Aws::Crt::Optional<ReferenceReading> ReadJsonReference(const Schema& root, const std::string& bytes) {
  const CrtJson reference(bytes);
  return reference.Get() == nullptr ? Aws::Crt::Optional<ReferenceReading>() : ReadJson(root, reference.Get());
}

Aws::Crt::Optional<ReferenceReading> ReadXmlReference(const Schema& root, const std::string& bytes, const Aws::String& resultWrapper) {
  const XmlReferenceDocuments reference(bytes);
  return reference.Parsed() ? reference.Read(root, resultWrapper) : Aws::Crt::Optional<ReferenceReading>();
}

Aws::String JsonReferenceMismatch(const std::string& bytes) {
  if (!ReferenceCanJudge(bytes)) {
    return {};
  }
  const CrtJson reference(bytes);
  // The reference stops a string at an escaped NUL, which can also turn an unmodeled key into a modeled one.
  const bool escapedNul = bytes.find("\\u0000") != std::string::npos;
  // cJSON skips every control byte as whitespace; JSON allows only tab, LF and CR.
  const bool controlBytes = bytes.find_first_of(CONTROL_BYTES) != std::string::npos;
  const bool badUnicodeEscape = HasBadUnicodeEscape(bytes);
  return ReadMismatch(
      reference.Get() != nullptr, "invalid JSON",
      [&](const Schema&, DynamicStruct& shape) { return JsonCodec().DeserializeShape(CursorOf(bytes), shape); },
      [&](const Schema& schema) {
        ReferenceReading reading = ReadJson(schema, reference.Get());
        if (escapedNul) {
          Note(reading.acceptanceUnjudged, "escaped NUL");
          Note(reading.valueUnjudged, "escaped NUL");
        }
        if (controlBytes) {
          Note(reading.acceptanceUnjudged, "a control byte cJSON skips as whitespace");
        }
        if (badUnicodeEscape) {
          Note(reading.acceptanceUnjudged, "a \\u escape cJSON reads as U+0000");
        }
        return reading;
      },
      CodecTolerance::Exact().ReadByCrtJson(), nullptr);
}

Aws::String XmlReferenceMismatch(const std::string& bytes) {
  return XmlReadMismatch(bytes, "",
                         [&](const Schema&, DynamicStruct& shape) { return XmlCodec().DeserializeShape(CursorOf(bytes), shape); });
}

Aws::String AwsQueryResponseReferenceMismatch(const std::string& bytes) {
  const OperationRequestContext context{"FuzzOperation", "2026-10-06"};
  return XmlReadMismatch(bytes, "FuzzOperationResult", [&](const Schema&, DynamicStruct& shape) {
    return AwsQueryProtocol().DeserializeResponse(context, CursorOf(bytes), shape);
  });
}

Aws::String JsonOutputReferenceMismatch(const std::shared_ptr<const Schema>& schema, const FuzzValue& value) {
  const auto payload = JsonCodec().Serialize(*schema, DynamicStruct(schema, value));
  if (!payload.IsSuccess()) {
    return "could not serialize: " + payload.GetError().GetMessage();
  }
  const std::string output(payload.GetResult().data(), payload.GetResult().size());
  const CrtJson reference(output);
  if (reference.Get() == nullptr) {
    return "the reference rejects the output " + payload.GetResult();
  }
  const ReferenceReading reading = ReadJson(*schema, reference.Get());
  if (!reading.mustReject.empty()) {
    return "the output must fail to read (" + reading.mustReject + "): " + payload.GetResult();
  }
  const Aws::String mismatch =
      AnyText(value, &HasNul) ? Aws::String() : FindMismatch(value, reading.value, *schema, CodecTolerance::Json().ReadByCrtJson());
  return mismatch.empty() ? mismatch : mismatch + " output=" + payload.GetResult();
}

Aws::String XmlOutputReferenceMismatch(const std::shared_ptr<const Schema>& schema, const FuzzValue& value) {
  // XML 1.0 cannot carry U+0000, and the XML codec writes no documents.
  if (AnyText(value, &HasNul) || ContainsDocument(value)) {
    return {};
  }
  const auto payload = XmlCodec().Serialize(*schema, DynamicStruct(schema, value));
  if (!payload.IsSuccess()) {
    return "could not serialize: " + payload.GetError().GetMessage();
  }
  const std::string output(payload.GetResult().data(), payload.GetResult().size());
  const XmlReferenceDocuments reference(output);
  if (!reference.Parsed()) {
    return Aws::String("the reference rejects the output (") + reference.Error() + "): " + payload.GetResult();
  }
  const ReferenceReading reading = reference.Read(*schema, "");
  if (!reading.mustReject.empty()) {
    return "the output must fail to read (" + reading.mustReject + "): " + payload.GetResult();
  }
  // tinyxml2 drops whitespace-only character data, so such values are checked for acceptance only.
  const bool judged = reading.valueUnjudged.empty() && !AnyText(value, &IsWhitespaceOnly);
  const Aws::String mismatch = judged ? FindMismatch(value, reading.value, *schema, CodecTolerance::Xml()) : Aws::String();
  return mismatch.empty() ? mismatch : mismatch + " output=" + payload.GetResult();
}

Aws::String TinyXmlLeniency(const std::string& bytes) { return FindTinyXmlLeniency(bytes); }

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
