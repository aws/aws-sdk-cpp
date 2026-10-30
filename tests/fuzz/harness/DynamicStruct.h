/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/crt/Optional.h>
#include <harness/FuzzValue.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <memory>

namespace smithy {
namespace schema {
namespace fuzz {

class DynamicStruct final : public SerializableStruct {
 public:
  explicit DynamicStruct(std::shared_ptr<const Schema> schema);
  DynamicStruct(std::shared_ptr<const Schema> schema, FuzzValue value);

  const Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(ShapeSerializer& serializer) const override;
  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override;

  const FuzzValue& GetValue() const { return m_value; }

 private:
  std::shared_ptr<const Schema> m_schema;
  FuzzValue m_value;
};

// Narrows Byte and Short itself, since ShapeDeserializer has no ReadByte/ReadShort.
Aws::Crt::Optional<FuzzValue> ReadValue(const Schema& member, ShapeDeserializer& deserializer);

void WriteValue(const Schema& member, const FuzzValue& value, ShapeSerializer& serializer);

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
