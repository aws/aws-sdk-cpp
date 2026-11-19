/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <algorithm>
#include <functional>
#include <memory>
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

class RecursiveNodeSchema {
 public:
  RecursiveNodeSchema() : m_builder(smithy::schema::Schema::StructureBuilder("Node")) {
    m_builder.PutMember("child", m_builder);
    m_schema = m_builder.Build();
  }
  const smithy::schema::Schema& Get() const { return *m_schema; }

 private:
  smithy::schema::SchemaBuilder m_builder;
  std::shared_ptr<const smithy::schema::Schema> m_schema;
};

inline int64_t LegacyEpochMillis(const Aws::String& text) {
  return Aws::Utils::DateTime(Aws::Utils::StringUtils::ParseDouble(text).value()).Millis();
}

inline int DescendRecursiveNode(smithy::schema::ShapeDeserializer& de, const smithy::schema::Schema& schema) {
  int deepest = 1;
  de.ReadStruct(schema, [&](const smithy::schema::Schema& member, smithy::schema::ShapeDeserializer& d) {
    deepest = (std::max)(deepest, DescendRecursiveNode(d, *member.GetMemberTarget().value()) + 1);
  });
  return deepest;
}

inline Aws::String NestedJsonNodes(int depth) {
  Aws::String json;
  for (int i = 1; i < depth; ++i) {
    json += "{\"child\":";
  }
  json += "{}";
  json.append(depth - 1, '}');
  return json;
}

inline Aws::String NestedCborNodes(int depth) {
  Aws::String cbor;
  for (int i = 1; i < depth; ++i) {
    cbor += '\xA1';
    cbor +=
        "\x65"
        "child";
  }
  cbor += '\xA0';
  return cbor;
}

inline Aws::String NestedXmlNodes(int depth) {
  Aws::String xml = "<Node>";
  for (int i = 1; i < depth; ++i) {
    xml += "<child>";
  }
  for (int i = 1; i < depth; ++i) {
    xml += "</child>";
  }
  xml += "</Node>";
  return xml;
}

inline void WriteNestedStructs(smithy::schema::ShapeSerializer& ser, const smithy::schema::Schema& root, int depth) {
  auto nested = smithy::schema::Schema::CreateMember("n", smithy::schema::ShapeType::Structure);
  std::function<void(smithy::schema::ShapeSerializer&, int)> nest = [&](smithy::schema::ShapeSerializer& s, int remaining) {
    if (remaining > 0) {
      s.WriteStruct(*nested, LambdaStruct(*nested, [&, remaining](smithy::schema::ShapeSerializer& inner) { nest(inner, remaining - 1); }));
    }
  };
  ser.WriteStruct(root, LambdaStruct(root, [&](smithy::schema::ShapeSerializer& s) { nest(s, depth - 1); }));
}

}  // namespace schema
}  // namespace smithy
