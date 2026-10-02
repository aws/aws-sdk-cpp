/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

#include <cstdint>
#include <memory>

namespace smithy {
namespace schema {

class ShapeSerializer;
class Document;
class DocumentImpl;
namespace detail {
Document MakeDocument(std::shared_ptr<const DocumentImpl> impl);
}

// A protocol-agnostic open-content value (Smithy `document`). cJSON-free: the tree is held in
// Aws:: containers and (de)serialized through the schema-serde parsers, not Aws::Utils::Document.
// Copyable value handle over an immutable, reference-counted DocumentImpl body.
class SMITHY_API Document final {
 public:
  static Document Null();
  static Document FromBoolean(bool value);
  static Document FromInteger(int64_t value);
  static Document FromDouble(double value);
  static Document FromString(Aws::String value);
  static Document FromBlob(Aws::Utils::ByteBuffer value);
  static Document FromTimestamp(Aws::Utils::DateTime value);
  static Document FromList(Aws::Vector<Document> value);
  static Document FromMap(Aws::Map<Aws::String, Document> value);

  ShapeType GetType() const;
  bool IsNull() const;

  // Coercing accessors: numeric accessors coerce across the stored int64/double. AsBlob/AsTimestamp
  // are otherwise agnostic on a value built via From*: only a node already holding a Blob/Timestamp
  // coerces. A document built by the JSON deserializer additionally base64-decodes a stored String
  // for AsBlob and parses a stored String/number for AsTimestamp. Empty Optional when coercion is
  // impossible (schema-serde returns Optional rather than throwing).
  Aws::Crt::Optional<bool> AsBoolean() const;
  Aws::Crt::Optional<Aws::String> AsString() const;
  Aws::Crt::Optional<int> AsInteger() const;
  Aws::Crt::Optional<int64_t> AsLong() const;
  Aws::Crt::Optional<double> AsDouble() const;
  Aws::Crt::Optional<float> AsFloat() const;
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> AsBlob() const;
  Aws::Crt::Optional<Aws::Utils::DateTime> AsTimestamp() const;
  const Aws::Vector<Document>* AsList() const;
  const Aws::Map<Aws::String, Document>* AsMap() const;

  const Document* GetMember(const Aws::String& name) const;
  Aws::Vector<Aws::String> GetMemberNames() const;

  // Walks this value, driving `serializer`'s Write* primitives. `schema` is forwarded verbatim to
  // every call (the JSON leaf and container writers ignore it).
  void SerializeContents(ShapeSerializer& serializer, const Schema& schema) const;

  bool operator==(const Document& other) const;
  bool operator!=(const Document& other) const { return !(*this == other); }

 private:
  explicit Document(std::shared_ptr<const DocumentImpl> impl);
  friend Document detail::MakeDocument(std::shared_ptr<const DocumentImpl> impl);

  // Accessors assume a non-moved-from Document; calling them after this Document has been moved
  // from is undefined behavior by convention.
  std::shared_ptr<const DocumentImpl> m_impl;
};

}  // namespace schema
}  // namespace smithy
