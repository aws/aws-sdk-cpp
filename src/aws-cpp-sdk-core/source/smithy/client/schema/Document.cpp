/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <smithy/client/schema/AbstractDocument.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <cmath>
#include <limits>
#include <utility>

namespace smithy {
namespace schema {

namespace {
const char DOCUMENT_ALLOCATION_TAG[] = "SchemaDocument";

bool FitsInInt32(int64_t value) {
  return value >= static_cast<int64_t>((std::numeric_limits<int32_t>::min)()) &&
         value <= static_cast<int64_t>((std::numeric_limits<int32_t>::max)());
}

bool IsIntegralTag(ShapeType type) { return type == ShapeType::Integer || type == ShapeType::Long; }

// An accessor that comes back empty for the node's own tag never compares equal.
template <typename T>
bool SameValue(const Aws::Crt::Optional<T>& lhs, const Aws::Crt::Optional<T>& rhs) {
  return lhs.has_value() && rhs.has_value() && *lhs == *rhs;
}

// Protocol-agnostic coercion: only a node already holding a Blob/Timestamp yields one, with no
// string or number reinterpretation. What Document's factories build -- a caller there has no
// protocol context, so a string is just a string.
class PlainDocument final : public AbstractDocument {
 public:
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> AsBlob() const override { return StoredBlob(); }
  Aws::Crt::Optional<Aws::Utils::DateTime> AsTimestamp() const override { return StoredTimestamp(); }
};

// JSON-flavored coercion: a String node base64-decodes to a blob. For timestamps the configured
// format gates which node type coerces -- a number under EPOCH_SECONDS, a string under
// DATE_TIME/HTTP_DATE -- never both.
class JsonDocument final : public AbstractDocument {
 public:
  explicit JsonDocument(TimestampFormatTrait::Format defaultStringTimestampFormat)
      : m_defaultStringTimestampFormat(defaultStringTimestampFormat) {}

  Aws::Crt::Optional<Aws::Utils::ByteBuffer> AsBlob() const override {
    if (GetType() != ShapeType::String) {
      return StoredBlob();
    }
    const auto text = AsString();
    if (!text.has_value()) {
      return {};
    }
    if (text->empty()) {
      return Aws::Utils::ByteBuffer();  // legitimately empty
    }
    Aws::Utils::ByteBuffer decoded = Aws::Utils::HashingUtils::Base64Decode(*text);
    if (decoded.GetLength() == 0) {
      return {};  // invalid base64 (input non-empty) -> absent
    }
    return decoded;
  }

  Aws::Crt::Optional<Aws::Utils::DateTime> AsTimestamp() const override {
    const bool numericFormat = m_defaultStringTimestampFormat == TimestampFormatTrait::Format::EPOCH_SECONDS;
    switch (GetType()) {
      case ShapeType::Integer:
      case ShapeType::Long: {
        const auto value = AsLong();
        if (!numericFormat || !value.has_value()) {
          return {};
        }
        return Aws::Utils::DateTime(static_cast<double>(*value));
      }
      case ShapeType::Double: {
        const auto value = AsDouble();
        if (!numericFormat || !value.has_value()) {
          return {};
        }
        return Aws::Utils::DateTime(*value);
      }
      case ShapeType::String: {
        const auto text = AsString();
        if (numericFormat || !text.has_value()) {
          return {};
        }
        const Aws::Utils::DateFormat df = (m_defaultStringTimestampFormat == TimestampFormatTrait::Format::HTTP_DATE)
                                              ? Aws::Utils::DateFormat::RFC822
                                              : Aws::Utils::DateFormat::ISO_8601;
        Aws::Utils::DateTime parsed(*text, df);
        if (!parsed.WasParseSuccessful()) {
          return {};
        }
        return parsed;
      }
      default:
        return StoredTimestamp();
    }
  }

 private:
  TimestampFormatTrait::Format m_defaultStringTimestampFormat;
};

std::shared_ptr<PlainDocument> NewPlainDocument() {
  return Aws::MakeShared<PlainDocument>(DOCUMENT_ALLOCATION_TAG);
}
}  // namespace

std::shared_ptr<AbstractDocument> NewJsonDocument(TimestampFormatTrait::Format defaultStringTimestampFormat) {
  return Aws::MakeShared<JsonDocument>(DOCUMENT_ALLOCATION_TAG, defaultStringTimestampFormat);
}

std::shared_ptr<const Document> Document::Null() { return NewPlainDocument(); }

std::shared_ptr<const Document> Document::FromBoolean(bool value) {
  auto node = NewPlainDocument();
  node->SetBoolean(value);
  return node;
}

std::shared_ptr<const Document> Document::FromInteger(int64_t value) {
  auto node = NewPlainDocument();
  node->SetInteger(value);
  return node;
}

std::shared_ptr<const Document> Document::FromDouble(double value) {
  auto node = NewPlainDocument();
  node->SetDouble(value);
  return node;
}

std::shared_ptr<const Document> Document::FromString(Aws::String value) {
  auto node = NewPlainDocument();
  node->SetString(std::move(value));
  return node;
}

std::shared_ptr<const Document> Document::FromBlob(Aws::Utils::ByteBuffer value) {
  auto node = NewPlainDocument();
  node->SetBlob(std::move(value));
  return node;
}

std::shared_ptr<const Document> Document::FromTimestamp(Aws::Utils::DateTime value) {
  auto node = NewPlainDocument();
  node->SetTimestamp(std::move(value));
  return node;
}

std::shared_ptr<const Document> Document::FromList(Aws::Vector<std::shared_ptr<const Document>> value) {
  auto node = NewPlainDocument();
  node->SetList(std::move(value));
  return node;
}

std::shared_ptr<const Document> Document::FromMap(Aws::Map<Aws::String, std::shared_ptr<const Document>> value) {
  auto node = NewPlainDocument();
  node->SetMap(std::move(value));
  return node;
}

// Both sides are read through the public accessors, so the result is symmetric for any pair of
// implementations, whatever coercion rules each applies.
bool operator==(const Document& lhs, const Document& rhs) {
  if (lhs.GetType() != rhs.GetType()) {
    return false;
  }
  switch (lhs.GetType()) {
    case ShapeType::Null:
      return true;
    case ShapeType::Boolean:
      return SameValue(lhs.AsBoolean(), rhs.AsBoolean());
    case ShapeType::Integer:
    case ShapeType::Long:
      return SameValue(lhs.AsLong(), rhs.AsLong());
    case ShapeType::Double:
      return SameValue(lhs.AsDouble(), rhs.AsDouble());
    case ShapeType::String:
      return SameValue(lhs.AsString(), rhs.AsString());
    case ShapeType::Blob:
      return SameValue(lhs.AsBlob(), rhs.AsBlob());
    case ShapeType::Timestamp:
      return SameValue(lhs.AsTimestamp(), rhs.AsTimestamp());
    case ShapeType::List: {
      const auto left = lhs.AsList();
      const auto right = rhs.AsList();
      if (!left || !right || left->size() != right->size()) {
        return false;
      }
      for (size_t i = 0; i < left->size(); ++i) {
        if (*(*left)[i] != *(*right)[i]) {
          return false;
        }
      }
      return true;
    }
    case ShapeType::Map: {
      const auto left = lhs.AsMap();
      const auto right = rhs.AsMap();
      if (!left || !right || left->size() != right->size()) {
        return false;
      }
      for (const auto& entry : *left) {
        const auto it = right->find(entry.first);
        if (it == right->end() || *entry.second != *it->second) {
          return false;
        }
      }
      return true;
    }
    default:
      return false;
  }
}

bool operator!=(const Document& lhs, const Document& rhs) { return !(lhs == rhs); }

void AbstractDocument::SetBoolean(bool value) {
  m_type = ShapeType::Boolean;
  m_bool = value;
}

void AbstractDocument::SetInteger(int64_t value) {
  m_type = FitsInInt32(value) ? ShapeType::Integer : ShapeType::Long;
  m_int = value;
}

void AbstractDocument::SetDouble(double value) {
  m_type = ShapeType::Double;
  m_double = value;
}

void AbstractDocument::SetString(Aws::String value) {
  m_type = ShapeType::String;
  m_string = std::move(value);
}

void AbstractDocument::SetBlob(Aws::Utils::ByteBuffer value) {
  m_type = ShapeType::Blob;
  m_blob = std::move(value);
}

void AbstractDocument::SetTimestamp(Aws::Utils::DateTime value) {
  m_type = ShapeType::Timestamp;
  m_time = std::move(value);
}

void AbstractDocument::SetList(Aws::Vector<std::shared_ptr<const Document>> value) {
  m_type = ShapeType::List;
  for (auto& child : value) {
    if (!child) {
      child = Document::Null();
    }
  }
  m_list = Aws::MakeShared<Aws::Vector<std::shared_ptr<const Document>>>(DOCUMENT_ALLOCATION_TAG, std::move(value));
}

void AbstractDocument::SetMap(Aws::Map<Aws::String, std::shared_ptr<const Document>> value) {
  m_type = ShapeType::Map;
  for (auto& entry : value) {
    if (!entry.second) {
      entry.second = Document::Null();
    }
  }
  m_map = Aws::MakeShared<Aws::Map<Aws::String, std::shared_ptr<const Document>>>(DOCUMENT_ALLOCATION_TAG, std::move(value));
}

Aws::Crt::Optional<bool> AbstractDocument::AsBoolean() const {
  if (m_type != ShapeType::Boolean) {
    return {};
  }
  return m_bool;
}

Aws::Crt::Optional<Aws::String> AbstractDocument::AsString() const {
  if (m_type != ShapeType::String) {
    return {};
  }
  return m_string;
}

Aws::Crt::Optional<int> AbstractDocument::AsInteger() const {
  auto value = AsLong();
  if (!value.has_value() || !FitsInInt32(*value)) {
    return {};
  }
  return static_cast<int>(*value);
}

Aws::Crt::Optional<int64_t> AbstractDocument::AsLong() const {
  if (IsIntegralTag(m_type)) {
    return m_int;
  }
  if (m_type == ShapeType::Double) {
    // static_cast<int64_t> of a non-finite or out-of-range double is undefined behavior.
    if (!std::isfinite(m_double) || m_double < static_cast<double>((std::numeric_limits<int64_t>::min)()) ||
        m_double >= static_cast<double>((std::numeric_limits<int64_t>::max)())) {
      return {};
    }
    return static_cast<int64_t>(m_double);
  }
  return {};
}

Aws::Crt::Optional<double> AbstractDocument::AsDouble() const {
  if (m_type == ShapeType::Double) {
    return m_double;
  }
  if (IsIntegralTag(m_type)) {
    return static_cast<double>(m_int);
  }
  return {};
}

Aws::Crt::Optional<float> AbstractDocument::AsFloat() const {
  auto value = AsDouble();
  if (!value.has_value()) {
    return {};
  }
  // Casting a finite double whose magnitude exceeds float range is undefined behavior; reject it,
  // mirroring the out-of-range guard in AsLong. Non-finite doubles (+/-inf, NaN) convert safely.
  const double d = *value;
  if (std::isfinite(d) && std::fabs(d) > static_cast<double>((std::numeric_limits<float>::max)())) {
    return {};
  }
  return static_cast<float>(d);
}

Aws::Crt::Optional<Aws::Utils::ByteBuffer> AbstractDocument::StoredBlob() const {
  if (m_type == ShapeType::Blob) {
    return m_blob;
  }
  return {};
}

Aws::Crt::Optional<Aws::Utils::DateTime> AbstractDocument::StoredTimestamp() const {
  if (m_type == ShapeType::Timestamp) {
    return m_time;
  }
  return {};
}

std::shared_ptr<const Aws::Vector<std::shared_ptr<const Document>>> AbstractDocument::AsList() const {
  if (m_type != ShapeType::List) {
    return nullptr;
  }
  return m_list;
}

std::shared_ptr<const Aws::Map<Aws::String, std::shared_ptr<const Document>>> AbstractDocument::AsMap() const {
  if (m_type != ShapeType::Map) {
    return nullptr;
  }
  return m_map;
}

std::shared_ptr<const Document> AbstractDocument::GetMember(const Aws::String& name) const {
  if (m_type != ShapeType::Map) {
    return nullptr;
  }
  const auto it = m_map->find(name);
  return it == m_map->end() ? nullptr : it->second;
}

Aws::Vector<Aws::String> AbstractDocument::GetMemberNames() const {
  Aws::Vector<Aws::String> names;
  if (m_type != ShapeType::Map) {
    return names;
  }
  names.reserve(m_map->size());
  for (const auto& entry : *m_map) {
    names.push_back(entry.first);
  }
  return names;
}

void AbstractDocument::Serialize(ShapeSerializer& serializer, const Schema& schema) const {
  switch (m_type) {
    case ShapeType::Null:
      serializer.WriteNull(schema);
      break;
    case ShapeType::Boolean:
      serializer.WriteBoolean(schema, m_bool);
      break;
    case ShapeType::Integer:
    case ShapeType::Long:
      serializer.WriteLong(schema, m_int);
      break;
    case ShapeType::Double:
      serializer.WriteDouble(schema, m_double);
      break;
    case ShapeType::String:
      serializer.WriteString(schema, m_string);
      break;
    case ShapeType::Blob:
      serializer.WriteBlob(schema, m_blob);
      break;
    case ShapeType::Timestamp:
      serializer.WriteTimestamp(schema, m_time);
      break;
    case ShapeType::List:
      serializer.WriteList(schema, m_list->size(), [this, &schema](ShapeSerializer& elementSerializer) {
        for (const auto& child : *m_list) {
          child->Serialize(elementSerializer, schema);
        }
      });
      break;
    case ShapeType::Map:
      serializer.WriteMap(schema, m_map->size(), [this, &schema](MapSerializer& mapSerializer) {
        for (const auto& entry : *m_map) {
          mapSerializer.WriteEntry(entry.first, [&entry, &schema](ShapeSerializer& valueSerializer) {
            entry.second->Serialize(valueSerializer, schema);
          });
        }
      });
      break;
    default:
      serializer.WriteNull(schema);
      break;
  }
}

}  // namespace schema
}  // namespace smithy
