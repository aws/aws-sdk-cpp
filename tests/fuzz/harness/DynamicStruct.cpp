/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <harness/DynamicStruct.h>
#include <smithy/client/schema/MapSerializer.h>

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <utility>

namespace smithy {
namespace schema {
namespace fuzz {

namespace {

Aws::Crt::Optional<FuzzValue> ReadIntegerInRange(const Schema& member, ShapeDeserializer& de, int64_t min, int64_t max) {
  const auto value = de.ReadInteger(member);
  if (!value.has_value() || value.value() < min || value.value() > max) {
    return {};
  }
  return FuzzValue::Integer(value.value());
}

// Inlining the helpers back into ReadValue/WriteValue would give each nesting level one multi-KB frame under ASan.
__attribute__((noinline)) Aws::Crt::Optional<FuzzValue> ReadScalarValue(const Schema& member, ShapeDeserializer& de) {
  switch (member.GetType()) {
    case ShapeType::Boolean: {
      const auto v = de.ReadBoolean(member);
      return v.has_value() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Boolean(v.value())) : Aws::Crt::Optional<FuzzValue>();
    }
    case ShapeType::Byte:
      return ReadIntegerInRange(member, de, INT8_MIN, INT8_MAX);
    case ShapeType::Short:
      return ReadIntegerInRange(member, de, INT16_MIN, INT16_MAX);
    case ShapeType::Integer:
    case ShapeType::IntEnum:
      return ReadIntegerInRange(member, de, INT32_MIN, INT32_MAX);
    case ShapeType::Long: {
      const auto v = de.ReadLong(member);
      return v.has_value() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Integer(v.value())) : Aws::Crt::Optional<FuzzValue>();
    }
    case ShapeType::Float: {
      const auto v = de.ReadFloat(member);
      return v.has_value() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Double(static_cast<double>(v.value())))
                           : Aws::Crt::Optional<FuzzValue>();
    }
    case ShapeType::Double: {
      const auto v = de.ReadDouble(member);
      return v.has_value() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Double(v.value())) : Aws::Crt::Optional<FuzzValue>();
    }
    case ShapeType::String:
    case ShapeType::Enum: {
      auto v = de.ReadString(member);
      return v.has_value() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::String(std::move(v.value()))) : Aws::Crt::Optional<FuzzValue>();
    }
    case ShapeType::Blob: {
      auto v = de.ReadBlob(member);
      return v.has_value() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Blob(std::move(v.value()))) : Aws::Crt::Optional<FuzzValue>();
    }
    case ShapeType::Timestamp: {
      const auto v = de.ReadTimestamp(member);
      return v.has_value() ? Aws::Crt::Optional<FuzzValue>(FuzzValue::Timestamp(v.value())) : Aws::Crt::Optional<FuzzValue>();
    }
    case ShapeType::Document: {
      auto v = de.ReadDocument(member);
      return v ? Aws::Crt::Optional<FuzzValue>(FuzzValue::FromDocument(std::move(v))) : Aws::Crt::Optional<FuzzValue>();
    }
    default:
      std::fprintf(stderr, "ReadScalarValue: unhandled shape type %d\n", static_cast<int>(member.GetType()));
      std::abort();
  }
}

__attribute__((noinline)) Aws::Crt::Optional<FuzzValue> ReadListValue(const Schema& member, ShapeDeserializer& de) {
  const auto element = member.GetMemberTarget().value()->GetMember("member").value();
  Aws::Vector<FuzzValue> items;
  de.ReadList(member, [&](ShapeDeserializer& d) {
    auto v = ReadValue(*element, d);
    if (v.has_value()) {
      items.push_back(std::move(v.value()));
    }
  });
  return FuzzValue::List(std::move(items));
}

__attribute__((noinline)) Aws::Crt::Optional<FuzzValue> ReadMapValue(const Schema& member, ShapeDeserializer& de) {
  const auto valueMember = member.GetMemberTarget().value()->GetMember("value").value();
  Aws::Map<Aws::String, FuzzValue> entries;
  de.ReadMap(member, [&](const Aws::String& key, ShapeDeserializer& d) {
    auto v = ReadValue(*valueMember, d);
    if (v.has_value()) {
      entries.erase(key);
      entries.emplace(key, std::move(v.value()));
    }
  });
  return FuzzValue::Map(std::move(entries));
}

__attribute__((noinline)) Aws::Crt::Optional<FuzzValue> ReadStructValue(const std::shared_ptr<const Schema>& target,
                                                                        ShapeDeserializer& de) {
  FuzzValue result = FuzzValue::Struct();
  de.ReadStruct(*target, [&](const Schema& m, ShapeDeserializer& d) {
    auto v = ReadValue(m, d);
    if (v.has_value()) {
      result.SetMember(m.GetMemberIndex(), std::move(v.value()));
    }
  });
  return result;
}

void SerializeStructMembers(const Schema& schema, const FuzzValue& value, ShapeSerializer& serializer) {
  for (const auto& entry : value.GetMembers()) {
    const auto member = schema.GetMember(entry.first);
    if (member.has_value() && *member) {
      WriteValue(**member, entry.second, serializer);
    }
  }
}

// Avoids copying the subtree at every nesting level.
class StructWriteView final : public SerializableStruct {
 public:
  StructWriteView(const Schema& schema, const FuzzValue& value) : m_schema(schema), m_value(value) {}

  const Schema& GetSchema() const override { return m_schema; }
  void SerializeMembers(ShapeSerializer& serializer) const override { SerializeStructMembers(m_schema, m_value, serializer); }
  void From(const Schema&, ShapeDeserializer&) override {}

 private:
  const Schema& m_schema;
  const FuzzValue& m_value;
};

__attribute__((noinline)) void WriteScalarValue(const Schema& member, const FuzzValue& value, ShapeSerializer& ser) {
  switch (member.GetType()) {
    case ShapeType::Boolean:
      ser.WriteBoolean(member, value.GetBoolean());
      return;
    case ShapeType::Byte:
    case ShapeType::Short:
    case ShapeType::Integer:
    case ShapeType::IntEnum:
      ser.WriteInteger(member, static_cast<int>(value.GetInteger()));
      return;
    case ShapeType::Long:
      ser.WriteLong(member, value.GetInteger());
      return;
    case ShapeType::Float:
      ser.WriteFloat(member, static_cast<float>(value.GetDouble()));
      return;
    case ShapeType::Double:
      ser.WriteDouble(member, value.GetDouble());
      return;
    case ShapeType::String:
    case ShapeType::Enum:
      ser.WriteString(member, value.GetString());
      return;
    case ShapeType::Blob:
      ser.WriteBlob(member, value.GetBlob());
      return;
    case ShapeType::Timestamp:
      ser.WriteTimestamp(member, value.GetTimestamp());
      return;
    case ShapeType::Document:
      ser.WriteDocument(member, *value.GetDocument());
      return;
    default:
      std::fprintf(stderr, "WriteScalarValue: unhandled shape type %d\n", static_cast<int>(member.GetType()));
      std::abort();
  }
}

__attribute__((noinline)) void WriteListValue(const Schema& member, const FuzzValue& value, ShapeSerializer& ser) {
  const auto element = member.GetMemberTarget().value()->GetMember("member").value();
  ser.WriteList(member, value.GetList().size(), [&](ShapeSerializer& s) {
    for (const auto& item : value.GetList()) {
      WriteValue(*element, item, s);
    }
  });
}

__attribute__((noinline)) void WriteMapValue(const Schema& member, const FuzzValue& value, ShapeSerializer& ser) {
  const auto valueMember = member.GetMemberTarget().value()->GetMember("value").value();
  ser.WriteMap(member, value.GetMap().size(), [&](MapSerializer& m) {
    for (const auto& entry : value.GetMap()) {
      m.WriteEntry(entry.first, [&](ShapeSerializer& s) { WriteValue(*valueMember, entry.second, s); });
    }
  });
}

__attribute__((noinline)) void WriteStructValue(const Schema& member, const FuzzValue& value, ShapeSerializer& ser) {
  StructWriteView nested(**member.GetMemberTarget(), value);
  ser.WriteStruct(member, nested);
}

}  // namespace

DynamicStruct::DynamicStruct(std::shared_ptr<const Schema> schema) : m_schema(std::move(schema)), m_value(FuzzValue::Struct()) {}

DynamicStruct::DynamicStruct(std::shared_ptr<const Schema> schema, FuzzValue value)
    : m_schema(std::move(schema)), m_value(std::move(value)) {}

void DynamicStruct::SerializeMembers(ShapeSerializer& serializer) const { SerializeStructMembers(*m_schema, m_value, serializer); }

void DynamicStruct::From(const Schema& memberSchema, ShapeDeserializer& deserializer) {
  auto value = ReadValue(memberSchema, deserializer);
  if (value.has_value()) {
    m_value.SetMember(memberSchema.GetMemberIndex(), std::move(value.value()));
  }
}

Aws::Crt::Optional<FuzzValue> ReadValue(const Schema& member, ShapeDeserializer& de) {
  switch (member.GetType()) {
    case ShapeType::List:
      return ReadListValue(member, de);
    case ShapeType::Map:
      return ReadMapValue(member, de);
    case ShapeType::Structure:
    case ShapeType::Union:
      return ReadStructValue(member.GetMemberTarget().value(), de);
    default:
      return ReadScalarValue(member, de);
  }
}

void WriteValue(const Schema& member, const FuzzValue& value, ShapeSerializer& ser) {
  switch (member.GetType()) {
    case ShapeType::List:
      WriteListValue(member, value, ser);
      return;
    case ShapeType::Map:
      WriteMapValue(member, value, ser);
      return;
    case ShapeType::Structure:
    case ShapeType::Union:
      WriteStructValue(member, value, ser);
      return;
    default:
      WriteScalarValue(member, value, ser);
      return;
  }
}

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
