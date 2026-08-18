/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <functional>
#include <utility>

namespace smithy {
namespace schema {

// Test-only SerializableStruct that writes its members from a lambda, so a test
// can express a struct body inline instead of defining a generated shape type:
//   LambdaStruct s(*schema, [&](ShapeSerializer& ser){ ser.WriteString(*member, "v"); });
//   serializer.WriteStruct(*schema, s);
class LambdaStruct final : public SerializableStruct {
 public:
  LambdaStruct(const Schema& schema, std::function<void(ShapeSerializer&)> members) : m_schema(schema), m_members(std::move(members)) {}

  const Schema& GetSchema() const override { return m_schema; }
  void SerializeMembers(ShapeSerializer& serializer) const override {
    if (m_members) {
      m_members(serializer);
    }
  }

 private:
  const Schema& m_schema;
  std::function<void(ShapeSerializer&)> m_members;
};

}  // namespace schema
}  // namespace smithy
