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
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <cstdint>
#include <memory>

namespace smithy {
namespace schema {

// Internal to aws-cpp-sdk-core: the tagged storage and the protocol-independent behavior every
// Document implementation shares. AsBlob and AsTimestamp are deliberately left pure -- how a String
// or number node is reinterpreted depends on the protocol that built it, so the base stays abstract
// and each leaf must answer. StoredBlob/StoredTimestamp give leaves the identity rule to build on.
class AWS_CORE_LOCAL AbstractDocument : public Document {
 public:
  ShapeType GetType() const override { return m_type; }
  bool IsNull() const override { return m_type == ShapeType::Null; }

  Aws::Crt::Optional<bool> AsBoolean() const override;
  Aws::Crt::Optional<Aws::String> AsString() const override;
  Aws::Crt::Optional<int> AsInteger() const override;
  Aws::Crt::Optional<int64_t> AsLong() const override;
  Aws::Crt::Optional<double> AsDouble() const override;
  Aws::Crt::Optional<float> AsFloat() const override;

  std::shared_ptr<const Aws::Vector<std::shared_ptr<const Document>>> AsList() const override;
  std::shared_ptr<const Aws::Map<Aws::String, std::shared_ptr<const Document>>> AsMap() const override;
  std::shared_ptr<const Document> GetMember(const Aws::String& name) const override;
  Aws::Vector<Aws::String> GetMemberNames() const override;

  void Serialize(ShapeSerializer& serializer, const Schema& schema) const override;

  // Storage mutators -- set m_type plus the matching field. Used only while a factory builds the
  // node; it is held const afterward. Public surface is acceptable on an internal type.
  void SetBoolean(bool value);
  void SetInteger(int64_t value);
  void SetDouble(double value);
  void SetString(Aws::String value);
  void SetBlob(Aws::Utils::ByteBuffer value);
  void SetTimestamp(Aws::Utils::DateTime value);
  // Null entries are replaced with Document::Null() so the tree has no dangling children.
  void SetList(Aws::Vector<std::shared_ptr<const Document>> value);
  void SetMap(Aws::Map<Aws::String, std::shared_ptr<const Document>> value);

 protected:
  // Identity coercion shared by every leaf: a node already holding the target type.
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> StoredBlob() const;
  Aws::Crt::Optional<Aws::Utils::DateTime> StoredTimestamp() const;

  ShapeType m_type = ShapeType::Null;
  bool m_bool = false;
  int64_t m_int = 0;
  double m_double = 0.0;
  Aws::String m_string;
  Aws::Utils::ByteBuffer m_blob;
  Aws::Utils::DateTime m_time;
  // Null unless m_type is List/Map; shared with every AsList/AsMap caller.
  std::shared_ptr<const Aws::Vector<std::shared_ptr<const Document>>> m_list;
  std::shared_ptr<const Aws::Map<Aws::String, std::shared_ptr<const Document>>> m_map;
};

// Builds an empty JSON-flavored node for the JSON deserializer to fill through the storage setters.
// The concrete type lives in Document.cpp alongside the protocol-agnostic one, so JSON's coercion
// rules are visible next to the rules they differ from and neither type is nameable elsewhere.
AWS_CORE_LOCAL std::shared_ptr<AbstractDocument> NewJsonDocument(TimestampFormatTrait::Format defaultStringTimestampFormat);

}  // namespace schema
}  // namespace smithy
