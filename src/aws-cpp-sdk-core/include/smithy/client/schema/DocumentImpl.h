/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <cstdint>
#include <memory>

namespace smithy {
namespace schema {

class ShapeSerializer;

// Immutable, reference-counted body backing the Document value handle. Internal to aws-cpp-sdk-core;
// holds the tagged-union storage plus the coercion/serialization/equality logic.
class AWS_CORE_LOCAL DocumentImpl {
 public:
  virtual ~DocumentImpl() = default;

  ShapeType GetType() const { return m_type; }
  bool IsNull() const { return m_type == ShapeType::Null; }
  Aws::Crt::Optional<bool> AsBoolean() const;
  Aws::Crt::Optional<Aws::String> AsString() const;
  Aws::Crt::Optional<int64_t> AsLong() const;
  Aws::Crt::Optional<double> AsDouble() const;
  const Aws::Vector<Document>* AsList() const;
  const Aws::Map<Aws::String, Document>* AsMap() const;
  const Document* GetMember(const Aws::String& name) const;
  Aws::Vector<Aws::String> GetMemberNames() const;

  // Coercion seam: virtual so a protocol-specific subclass (e.g. JsonDocumentImpl) can override the
  // string/number interpretation. The base is agnostic: only a node already holding the target type
  // coerces.
  virtual Aws::Crt::Optional<Aws::Utils::ByteBuffer> CoerceBlob() const;
  virtual Aws::Crt::Optional<Aws::Utils::DateTime> CoerceTimestamp() const;

  void SerializeContents(ShapeSerializer& serializer, const Schema& schema) const;
  bool Equals(const DocumentImpl& other) const;

  // Storage mutators — set m_type + the matching field (std::move for String/Blob/Timestamp/List/Map).
  // Used only during construction (the Make* factories and the JSON deserializer); nodes are held
  // const by Document afterward. Public surface is acceptable on an internal AWS_CORE_LOCAL type.
  void SetBoolean(bool value);
  void SetInteger(int64_t value);
  void SetDouble(double value);
  void SetString(Aws::String value);
  void SetBlob(Aws::Utils::ByteBuffer value);
  void SetTimestamp(Aws::Utils::DateTime value);
  void SetList(Aws::Vector<Document> value);
  void SetMap(Aws::Map<Aws::String, Document> value);

  static std::shared_ptr<DocumentImpl> MakeNull();
  static std::shared_ptr<DocumentImpl> MakeBoolean(bool value);
  static std::shared_ptr<DocumentImpl> MakeInteger(int64_t value);
  static std::shared_ptr<DocumentImpl> MakeDouble(double value);
  static std::shared_ptr<DocumentImpl> MakeString(Aws::String value);
  static std::shared_ptr<DocumentImpl> MakeBlob(Aws::Utils::ByteBuffer value);
  static std::shared_ptr<DocumentImpl> MakeTimestamp(Aws::Utils::DateTime value);
  static std::shared_ptr<DocumentImpl> MakeList(Aws::Vector<Document> value);
  static std::shared_ptr<DocumentImpl> MakeMap(Aws::Map<Aws::String, Document> value);

 protected:
  ShapeType m_type = ShapeType::Null;
  bool m_bool = false;
  int64_t m_int = 0;
  double m_double = 0.0;
  Aws::String m_string;
  Aws::Utils::ByteBuffer m_blob;
  Aws::Utils::DateTime m_time;
  Aws::Vector<Document> m_list;
  Aws::Map<Aws::String, Document> m_map;
};

// JSON-flavored coercion: a String node base64-decodes to a blob, and a String/number node parses
// as a timestamp (epoch seconds, or ISO-8601/HTTP-date per the format). Built by the JSON deserializer.
class AWS_CORE_LOCAL JsonDocumentImpl final : public DocumentImpl {
 public:
  explicit JsonDocumentImpl(TimestampFormatTrait::Format defaultStringTimestampFormat)
      : m_defaultStringTimestampFormat(defaultStringTimestampFormat) {}
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> CoerceBlob() const override;
  Aws::Crt::Optional<Aws::Utils::DateTime> CoerceTimestamp() const override;

 private:
  TimestampFormatTrait::Format m_defaultStringTimestampFormat;
};

}  // namespace schema
}  // namespace smithy
