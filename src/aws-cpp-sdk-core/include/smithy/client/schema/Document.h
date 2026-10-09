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

// A protocol-agnostic open-content value (Smithy `document`).
//
// Documents are immutable and shared. Each implementation supplies its own coercion rules, so where
// a document came from decides how a stored String or number is reinterpreted: the From* factories
// build protocol-agnostic nodes, while a codec's deserializer builds nodes carrying that protocol's
// rules. Two documents can therefore compare equal and still disagree on AsBlob.
class SMITHY_API Document {
 public:
  virtual ~Document() = default;

  virtual ShapeType GetType() const = 0;
  virtual bool IsNull() const = 0;

  // Empty Optional when the value cannot be produced; schema-serde reports absence rather than
  // throwing. The numeric accessors coerce across the stored int64/double.
  virtual Aws::Crt::Optional<bool> AsBoolean() const = 0;
  virtual Aws::Crt::Optional<Aws::String> AsString() const = 0;
  virtual Aws::Crt::Optional<int> AsInteger() const = 0;
  virtual Aws::Crt::Optional<int64_t> AsLong() const = 0;
  virtual Aws::Crt::Optional<double> AsDouble() const = 0;
  virtual Aws::Crt::Optional<float> AsFloat() const = 0;
  virtual Aws::Crt::Optional<Aws::Utils::ByteBuffer> AsBlob() const = 0;
  virtual Aws::Crt::Optional<Aws::Utils::DateTime> AsTimestamp() const = 0;

  // Null when this is not a list/map. The returned handle shares the document's immutable storage, so
  // no container is copied. Elements of AsList and values of AsMap are never null.
  virtual std::shared_ptr<const Aws::Vector<std::shared_ptr<const Document>>> AsList() const = 0;
  virtual std::shared_ptr<const Aws::Map<Aws::String, std::shared_ptr<const Document>>> AsMap() const = 0;

  // Null when this is not a map, or has no member under that name.
  virtual std::shared_ptr<const Document> GetMember(const Aws::String& name) const = 0;
  virtual Aws::Vector<Aws::String> GetMemberNames() const = 0;

  // Walks this value, driving `serializer`'s Write* primitives. `schema` is forwarded verbatim to
  // every call (the JSON leaf and container writers ignore it).
  virtual void Serialize(ShapeSerializer& serializer, const Schema& schema) const = 0;

  static std::shared_ptr<const Document> Null();
  static std::shared_ptr<const Document> FromBoolean(bool value);
  static std::shared_ptr<const Document> FromInteger(int64_t value);
  static std::shared_ptr<const Document> FromDouble(double value);
  static std::shared_ptr<const Document> FromString(Aws::String value);
  static std::shared_ptr<const Document> FromBlob(Aws::Utils::ByteBuffer value);
  static std::shared_ptr<const Document> FromTimestamp(Aws::Utils::DateTime value);
  static std::shared_ptr<const Document> FromList(Aws::Vector<std::shared_ptr<const Document>> value);
  static std::shared_ptr<const Document> FromMap(Aws::Map<Aws::String, std::shared_ptr<const Document>> value);
};

// Content comparison: type, then the value each side reports through its accessors for that type,
// recursing into children. Note these take references: comparing two shared_ptr<const Document>
// directly compares addresses, so dereference both sides.
SMITHY_API bool operator==(const Document& lhs, const Document& rhs);
SMITHY_API bool operator!=(const Document& lhs, const Document& rhs);

}  // namespace schema
}  // namespace smithy
