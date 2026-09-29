/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/DocumentImpl.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <cmath>
#include <limits>
#include <utility>

namespace smithy {
namespace schema {

namespace {
const char DOCUMENT_IMPL_ALLOCATION_TAG[] = "DocumentImpl";
}  // namespace

Document::Document(std::shared_ptr<const DocumentImpl> impl) : m_impl(std::move(impl)) {}

namespace detail {
Document MakeDocument(std::shared_ptr<const DocumentImpl> impl) { return Document(std::move(impl)); }
}  // namespace detail

// --- factories: build a base impl and wrap it in the handle ---
Document Document::Null() { return detail::MakeDocument(DocumentImpl::MakeNull()); }

Document Document::FromBoolean(bool value) { return detail::MakeDocument(DocumentImpl::MakeBoolean(value)); }

Document Document::FromInteger(int64_t value) { return detail::MakeDocument(DocumentImpl::MakeInteger(value)); }

Document Document::FromDouble(double value) { return detail::MakeDocument(DocumentImpl::MakeDouble(value)); }

Document Document::FromString(Aws::String value) { return detail::MakeDocument(DocumentImpl::MakeString(std::move(value))); }

Document Document::FromBlob(Aws::Utils::ByteBuffer value) { return detail::MakeDocument(DocumentImpl::MakeBlob(std::move(value))); }

Document Document::FromTimestamp(Aws::Utils::DateTime value) {
  return detail::MakeDocument(DocumentImpl::MakeTimestamp(std::move(value)));
}

Document Document::FromList(Aws::Vector<Document> value) { return detail::MakeDocument(DocumentImpl::MakeList(std::move(value))); }

Document Document::FromMap(Aws::Map<Aws::String, Document> value) { return detail::MakeDocument(DocumentImpl::MakeMap(std::move(value))); }

// --- handle delegations ---
ShapeType Document::GetType() const { return m_impl->GetType(); }

bool Document::IsNull() const { return m_impl->IsNull(); }

Aws::Crt::Optional<bool> Document::AsBoolean() const { return m_impl->AsBoolean(); }

Aws::Crt::Optional<Aws::String> Document::AsString() const { return m_impl->AsString(); }

Aws::Crt::Optional<int> Document::AsInteger() const {
  auto value = m_impl->AsLong();
  if (!value.has_value()) {
    return {};
  }
  return static_cast<int>(*value);
}

Aws::Crt::Optional<int64_t> Document::AsLong() const { return m_impl->AsLong(); }

Aws::Crt::Optional<double> Document::AsDouble() const { return m_impl->AsDouble(); }

Aws::Crt::Optional<float> Document::AsFloat() const {
  auto value = m_impl->AsDouble();
  if (!value.has_value()) {
    return {};
  }
  // Casting a finite double whose magnitude exceeds float range is undefined behavior; reject it,
  // mirroring the out-of-range guard in DocumentImpl::AsLong. Non-finite doubles (+/-inf, NaN)
  // convert to float safely and pass through.
  const double d = *value;
  if (std::isfinite(d) && std::fabs(d) > static_cast<double>((std::numeric_limits<float>::max)())) {
    return {};
  }
  return static_cast<float>(d);
}

Aws::Crt::Optional<Aws::Utils::ByteBuffer> Document::AsBlob() const { return m_impl->CoerceBlob(); }

Aws::Crt::Optional<Aws::Utils::DateTime> Document::AsTimestamp() const { return m_impl->CoerceTimestamp(); }

const Aws::Vector<Document>* Document::AsList() const { return m_impl->AsList(); }

const Aws::Map<Aws::String, Document>* Document::AsMap() const { return m_impl->AsMap(); }

const Document* Document::GetMember(const Aws::String& name) const { return m_impl->GetMember(name); }

Aws::Vector<Aws::String> Document::GetMemberNames() const { return m_impl->GetMemberNames(); }

void Document::SerializeContents(ShapeSerializer& serializer, const Schema& schema) const {
  m_impl->SerializeContents(serializer, schema);
}

bool Document::operator==(const Document& other) const { return m_impl->Equals(*other.m_impl); }

// --- DocumentImpl storage mutators ---
void DocumentImpl::SetBoolean(bool value) {
  m_type = ShapeType::Boolean;
  m_bool = value;
}

void DocumentImpl::SetInteger(int64_t value) {
  m_type = ShapeType::Long;
  m_int = value;
}

void DocumentImpl::SetDouble(double value) {
  m_type = ShapeType::Double;
  m_double = value;
}

void DocumentImpl::SetString(Aws::String value) {
  m_type = ShapeType::String;
  m_string = std::move(value);
}

void DocumentImpl::SetBlob(Aws::Utils::ByteBuffer value) {
  m_type = ShapeType::Blob;
  m_blob = std::move(value);
}

void DocumentImpl::SetTimestamp(Aws::Utils::DateTime value) {
  m_type = ShapeType::Timestamp;
  m_time = std::move(value);
}

void DocumentImpl::SetList(Aws::Vector<Document> value) {
  m_type = ShapeType::List;
  m_list = std::move(value);
}

void DocumentImpl::SetMap(Aws::Map<Aws::String, Document> value) {
  m_type = ShapeType::Map;
  m_map = std::move(value);
}

// --- DocumentImpl builders ---
std::shared_ptr<DocumentImpl> DocumentImpl::MakeNull() { return Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG); }

std::shared_ptr<DocumentImpl> DocumentImpl::MakeBoolean(bool value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetBoolean(value);
  return impl;
}

std::shared_ptr<DocumentImpl> DocumentImpl::MakeInteger(int64_t value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetInteger(value);
  return impl;
}

std::shared_ptr<DocumentImpl> DocumentImpl::MakeDouble(double value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetDouble(value);
  return impl;
}

std::shared_ptr<DocumentImpl> DocumentImpl::MakeString(Aws::String value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetString(std::move(value));
  return impl;
}

std::shared_ptr<DocumentImpl> DocumentImpl::MakeBlob(Aws::Utils::ByteBuffer value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetBlob(std::move(value));
  return impl;
}

std::shared_ptr<DocumentImpl> DocumentImpl::MakeTimestamp(Aws::Utils::DateTime value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetTimestamp(std::move(value));
  return impl;
}

std::shared_ptr<DocumentImpl> DocumentImpl::MakeList(Aws::Vector<Document> value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetList(std::move(value));
  return impl;
}

std::shared_ptr<DocumentImpl> DocumentImpl::MakeMap(Aws::Map<Aws::String, Document> value) {
  auto impl = Aws::MakeShared<DocumentImpl>(DOCUMENT_IMPL_ALLOCATION_TAG);
  impl->SetMap(std::move(value));
  return impl;
}

// --- DocumentImpl accessors (relocated verbatim; fields are now DocumentImpl members) ---
Aws::Crt::Optional<bool> DocumentImpl::AsBoolean() const {
  if (m_type != ShapeType::Boolean) {
    return {};
  }
  return m_bool;
}

Aws::Crt::Optional<Aws::String> DocumentImpl::AsString() const {
  if (m_type != ShapeType::String) {
    return {};
  }
  return m_string;
}

Aws::Crt::Optional<int64_t> DocumentImpl::AsLong() const {
  if (m_type == ShapeType::Long) {
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

Aws::Crt::Optional<double> DocumentImpl::AsDouble() const {
  if (m_type == ShapeType::Double) {
    return m_double;
  }
  if (m_type == ShapeType::Long) {
    return static_cast<double>(m_int);
  }
  return {};
}

// Base = agnostic: only a real typed node coerces; no string/number interpretation.
Aws::Crt::Optional<Aws::Utils::ByteBuffer> DocumentImpl::CoerceBlob() const {
  if (m_type == ShapeType::Blob) {
    return m_blob;
  }
  return {};
}

Aws::Crt::Optional<Aws::Utils::DateTime> DocumentImpl::CoerceTimestamp() const {
  if (m_type == ShapeType::Timestamp) {
    return m_time;
  }
  return {};
}

Aws::Crt::Optional<Aws::Utils::ByteBuffer> JsonDocumentImpl::CoerceBlob() const {
  if (m_type != ShapeType::String) {
    return DocumentImpl::CoerceBlob();
  }
  if (m_string.empty()) {
    return Aws::Utils::ByteBuffer();  // legitimately empty
  }
  Aws::Utils::ByteBuffer decoded = Aws::Utils::HashingUtils::Base64Decode(m_string);
  if (decoded.GetLength() == 0) {
    return {};  // invalid base64 (input non-empty) -> absent
  }
  return decoded;
}

Aws::Crt::Optional<Aws::Utils::DateTime> JsonDocumentImpl::CoerceTimestamp() const {
  switch (m_type) {
    case ShapeType::Long:
      return Aws::Utils::DateTime(static_cast<double>(m_int));
    case ShapeType::Double:
      return Aws::Utils::DateTime(m_double);
    case ShapeType::String: {
      const Aws::Utils::DateFormat df = (m_defaultStringTimestampFormat == TimestampFormatTrait::Format::HTTP_DATE)
                                             ? Aws::Utils::DateFormat::RFC822
                                             : Aws::Utils::DateFormat::ISO_8601;
      Aws::Utils::DateTime parsed(m_string, df);
      if (!parsed.WasParseSuccessful()) {
        return {};
      }
      return parsed;
    }
    default:
      return DocumentImpl::CoerceTimestamp();
  }
}

const Aws::Vector<Document>* DocumentImpl::AsList() const { return m_type == ShapeType::List ? &m_list : nullptr; }

const Aws::Map<Aws::String, Document>* DocumentImpl::AsMap() const { return m_type == ShapeType::Map ? &m_map : nullptr; }

const Document* DocumentImpl::GetMember(const Aws::String& name) const {
  if (m_type != ShapeType::Map) {
    return nullptr;
  }
  const auto it = m_map.find(name);
  return it == m_map.end() ? nullptr : &it->second;
}

Aws::Vector<Aws::String> DocumentImpl::GetMemberNames() const {
  Aws::Vector<Aws::String> names;
  if (m_type != ShapeType::Map) {
    return names;
  }
  names.reserve(m_map.size());
  for (const auto& entry : m_map) {
    names.push_back(entry.first);
  }
  return names;
}

void DocumentImpl::SerializeContents(ShapeSerializer& serializer, const Schema& schema) const {
  switch (m_type) {
    case ShapeType::Null:
      serializer.WriteNull(schema);
      break;
    case ShapeType::Boolean:
      serializer.WriteBoolean(schema, m_bool);
      break;
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
      serializer.WriteList(schema, m_list.size(), [this, &schema](ShapeSerializer& elementSerializer) {
        for (const auto& child : m_list) {
          child.SerializeContents(elementSerializer, schema);
        }
      });
      break;
    case ShapeType::Map:
      serializer.WriteMap(schema, m_map.size(), [this, &schema](MapSerializer& mapSerializer) {
        for (const auto& entry : m_map) {
          mapSerializer.WriteEntry(entry.first, [&entry, &schema](ShapeSerializer& valueSerializer) {
            entry.second.SerializeContents(valueSerializer, schema);
          });
        }
      });
      break;
    default:
      serializer.WriteNull(schema);
      break;
  }
}

bool DocumentImpl::Equals(const DocumentImpl& other) const {
  if (m_type != other.m_type) {
    return false;
  }
  switch (m_type) {
    case ShapeType::Null:
      return true;
    case ShapeType::Boolean:
      return m_bool == other.m_bool;
    case ShapeType::Long:
      return m_int == other.m_int;
    case ShapeType::Double:
      return m_double == other.m_double;
    case ShapeType::String:
      return m_string == other.m_string;
    case ShapeType::Blob:
      return m_blob == other.m_blob;
    case ShapeType::Timestamp:
      return m_time == other.m_time;
    case ShapeType::List:
      return m_list == other.m_list;
    case ShapeType::Map:
      return m_map == other.m_map;
    default:
      return false;
  }
}

}  // namespace schema
}  // namespace smithy
