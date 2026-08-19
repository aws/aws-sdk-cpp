/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/JsonWriteUtils.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/SerializableStruct.h>

#include "aws/core/client/AWSClient.h"
#include "aws/core/utils/Outcome.h"
#include "aws/core/utils/memory/stl/AWSArray.h"

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

static constexpr int MAX_DEPTH = 64;

class JsonShapeSerializer::Impl final : public ShapeSerializer {
 public:
  Impl() { m_buf.reserve(8192); }

  void WriteStruct(const Schema&, const SerializableStruct& value) override {
    if (!OpenContainer('{')) {
      return;
    }
    StructContext ctx(this);
    value.SerializeMembers(ctx);
    CloseContainer('}');
  }

  void WriteList(const Schema&, size_t, const std::function<void(ShapeSerializer&)>& consumer) override {
    if (!OpenContainer('[')) {
      return;
    }
    ListContext ctx(this);
    consumer(ctx);
    CloseContainer(']');
  }

  void WriteMap(const Schema&, size_t, const std::function<void(MapSerializer&)>& consumer) override {
    if (!OpenContainer('{')) {
      return;
    }
    MapContext ctx(this);
    consumer(ctx);
    CloseContainer('}');
  }

  void WriteBoolean(const Schema&, bool value) override { m_buf += value ? "true" : "false"; }
  void WriteInteger(const Schema&, int value) override { m_buf += StringUtils::to_string(value); }
  void WriteLong(const Schema&, int64_t value) override { m_buf += StringUtils::to_string(value); }
  void WriteFloat(const Schema&, float value) override { m_buf += StringUtils::to_string(value); }
  void WriteDouble(const Schema&, double value) override { m_buf += StringUtils::to_string(value); }
  void WriteString(const Schema&, const Aws::String& value) override { Aws::Schema::WriteQuotedJsonString(m_buf, value); }
  void WriteTimestamp(const Schema&, const DateTime& value) override { m_buf += StringUtils::to_string(value.SecondsWithMSPrecision()); }
  void WriteBlob(const Schema&, const ByteBuffer& value) override {
    m_buf += '"';
    m_buf += HashingUtils::Base64Encode(value);
    m_buf += '"';
  }
  void WriteEnum(const Schema& schema, int value) override { WriteInteger(schema, value); }
  void WriteNull(const Schema&) override { m_buf += "null"; }

  void WriteCommaIfNeeded() {
    if (m_needsComma[m_depth]) {
      m_buf += ',';
    } else {
      m_needsComma[m_depth] = true;
    }
  }

  void WriteKey(const Aws::String& key) {
    Aws::Schema::WriteQuotedJsonString(m_buf, key);
    m_buf += ':';
  }

  void WriteFieldName(const Schema& schema) {
    WriteCommaIfNeeded();
    const auto jsonName = schema.GetTrait(JsonNameTrait::KEY());
    WriteKey(jsonName ? jsonName->GetValue() : schema.GetMemberName());
  }

  SerializerOutcome GetPayload() {
    if (m_finalized || !m_errorMessage.empty()) {
      return Aws::Client::AWSError<Aws::Client::CoreErrors>(
          Aws::Client::CoreErrors::INTERNAL_FAILURE, "SerializationException",
          !m_errorMessage.empty() ? m_errorMessage : "Serializer has already been finalized", false);
    }
    m_finalized = true;
    return std::move(m_buf);
  }

 private:
  class StructContext final : public ShapeSerializer {
   public:
    explicit StructContext(Impl* outer) : m_outer(outer) {}

    void WriteStruct(const Schema& s, const SerializableStruct& v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteStruct(s, v);
    }
    void WriteList(const Schema& s, size_t n, const std::function<void(ShapeSerializer&)>& c) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteList(s, n, c);
    }
    void WriteMap(const Schema& s, size_t n, const std::function<void(MapSerializer&)>& c) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteMap(s, n, c);
    }
    void WriteBoolean(const Schema& s, bool v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteBoolean(s, v);
    }
    void WriteInteger(const Schema& s, int v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteInteger(s, v);
    }
    void WriteLong(const Schema& s, int64_t v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteLong(s, v);
    }
    void WriteFloat(const Schema& s, float v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteFloat(s, v);
    }
    void WriteDouble(const Schema& s, double v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteDouble(s, v);
    }
    void WriteString(const Schema& s, const Aws::String& v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteString(s, v);
    }
    void WriteTimestamp(const Schema& s, const DateTime& v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteTimestamp(s, v);
    }
    void WriteBlob(const Schema& s, const ByteBuffer& v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteBlob(s, v);
    }
    void WriteEnum(const Schema& s, int v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteEnum(s, v);
    }
    void WriteNull(const Schema& s) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteNull(s);
    }

   private:
    Impl* m_outer;
  };

  class ListContext final : public ShapeSerializer {
   public:
    explicit ListContext(Impl* outer) : m_outer(outer) {}

    void WriteStruct(const Schema& s, const SerializableStruct& v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteStruct(s, v);
    }
    void WriteList(const Schema& s, size_t n, const std::function<void(ShapeSerializer&)>& c) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteList(s, n, c);
    }
    void WriteMap(const Schema& s, size_t n, const std::function<void(MapSerializer&)>& c) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteMap(s, n, c);
    }
    void WriteBoolean(const Schema& s, bool v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteBoolean(s, v);
    }
    void WriteInteger(const Schema& s, int v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteInteger(s, v);
    }
    void WriteLong(const Schema& s, int64_t v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteLong(s, v);
    }
    void WriteFloat(const Schema& s, float v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteFloat(s, v);
    }
    void WriteDouble(const Schema& s, double v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteDouble(s, v);
    }
    void WriteString(const Schema& s, const Aws::String& v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteString(s, v);
    }
    void WriteTimestamp(const Schema& s, const DateTime& v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteTimestamp(s, v);
    }
    void WriteBlob(const Schema& s, const ByteBuffer& v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteBlob(s, v);
    }
    void WriteEnum(const Schema& s, int v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteEnum(s, v);
    }
    void WriteNull(const Schema& s) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteNull(s);
    }

   private:
    Impl* m_outer;
  };

  class MapContext final : public MapSerializer {
   public:
    explicit MapContext(Impl* outer) : m_outer(outer) {}

    void WriteEntry(const Aws::String& key, const std::function<void(ShapeSerializer&)>& value) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteKey(key);
      value(*m_outer);
    }

   private:
    Impl* m_outer;
  };

  bool OpenContainer(char open) {
    if (!m_errorMessage.empty()) {
      return false;
    }
    if (m_depth + 1 >= MAX_DEPTH) {
      m_errorMessage = "Maximum nesting depth exceeded";
      return false;
    }
    m_buf += open;
    ++m_depth;
    m_needsComma[m_depth] = false;
    return true;
  }

  void CloseContainer(char close) {
    --m_depth;
    m_buf += close;
  }

  Aws::String m_buf;
  int m_depth = 0;
  Aws::Array<bool, MAX_DEPTH> m_needsComma{};
  bool m_finalized = false;
  Aws::String m_errorMessage;
};

JsonShapeSerializer::JsonShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("JsonShapeSerializer")) {}
JsonShapeSerializer::~JsonShapeSerializer() = default;

void JsonShapeSerializer::WriteStruct(const Schema& schema, const SerializableStruct& value) { m_impl->WriteStruct(schema, value); }
void JsonShapeSerializer::WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) {
  m_impl->WriteList(schema, size, consumer);
}
void JsonShapeSerializer::WriteMap(const Schema& schema, size_t size, const std::function<void(MapSerializer&)>& consumer) {
  m_impl->WriteMap(schema, size, consumer);
}
void JsonShapeSerializer::WriteBoolean(const Schema& schema, bool value) { m_impl->WriteBoolean(schema, value); }
void JsonShapeSerializer::WriteInteger(const Schema& schema, int value) { m_impl->WriteInteger(schema, value); }
void JsonShapeSerializer::WriteLong(const Schema& schema, int64_t value) { m_impl->WriteLong(schema, value); }
void JsonShapeSerializer::WriteFloat(const Schema& schema, float value) { m_impl->WriteFloat(schema, value); }
void JsonShapeSerializer::WriteDouble(const Schema& schema, double value) { m_impl->WriteDouble(schema, value); }
void JsonShapeSerializer::WriteString(const Schema& schema, const Aws::String& value) { m_impl->WriteString(schema, value); }
void JsonShapeSerializer::WriteTimestamp(const Schema& schema, const DateTime& value) { m_impl->WriteTimestamp(schema, value); }
void JsonShapeSerializer::WriteBlob(const Schema& schema, const ByteBuffer& value) { m_impl->WriteBlob(schema, value); }
void JsonShapeSerializer::WriteEnum(const Schema& schema, int value) { m_impl->WriteEnum(schema, value); }
void JsonShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }

JsonShapeSerializer::SerializerOutcome JsonShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
