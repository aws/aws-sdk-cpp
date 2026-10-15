/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/crt/BigDecimal.h>
#include <aws/crt/BigInteger.h>
#include <aws/crt/Types.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
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
  void From(const Schema& /*memberSchema*/, ShapeDeserializer& /*deserializer*/) override {}

 private:
  const Schema& m_schema;
  std::function<void(ShapeSerializer&)> m_members;
};

// Parses a decimal literal for tests; yields zero on a malformed literal so the
// comparison against the expected text fails instead of crashing.
inline Aws::Crt::BigInteger MakeBigInteger(const char* text) {
  auto parsed = Aws::Crt::BigInteger::FromString(Aws::Crt::ByteCursorFromCString(text));
  return parsed.has_value() ? parsed.value() : Aws::Crt::BigInteger();
}

inline Aws::Crt::BigDecimal MakeBigDecimal(const char* text) {
  auto parsed = Aws::Crt::BigDecimal::FromString(Aws::Crt::ByteCursorFromCString(text));
  return parsed.has_value() ? parsed.value() : Aws::Crt::BigDecimal();
}

}  // namespace schema
}  // namespace smithy
