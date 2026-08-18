/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Outcome.h>
#include <aws/crt/cbor/Cbor.h>
#include <smithy/client/schema/CborShapeSerializer.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/SerializableStruct.h>

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

class CborShapeSerializer::Impl final : public ShapeSerializer {
 public:
  void WriteStruct(const Schema&, const SerializableStruct& value) override {
    m_encoder.WriteIndefMapStart();
    StructContext ctx(this);
    value.SerializeMembers(ctx);
    m_encoder.WriteBreak();
  }

  void WriteList(const Schema&, size_t size, const std::function<void(ShapeSerializer&)>& consumer) override {
    m_encoder.WriteArrayStart(size);
    ListContext ctx(this);
    consumer(ctx);
  }

  void WriteMap(const Schema&, size_t size, const std::function<void(MapSerializer&)>& consumer) override {
    m_encoder.WriteMapStart(size);
    MapContext ctx(this);
    consumer(ctx);
  }

  void WriteBoolean(const Schema&, bool value) override { m_encoder.WriteBool(value); }
  void WriteInteger(const Schema&, int value) override { WriteIntValue(value); }
  void WriteLong(const Schema&, int64_t value) override { WriteIntValue(value); }
  void WriteFloat(const Schema&, float value) override { m_encoder.WriteFloat(value); }
  void WriteDouble(const Schema&, double value) override { m_encoder.WriteFloat(value); }
  void WriteString(const Schema&, const Aws::String& value) override { WriteText(value); }
  void WriteTimestamp(const Schema&, const DateTime& value) override {
    m_encoder.WriteTag(1);
    WriteIntValue(value.Seconds());
  }
  void WriteBlob(const Schema&, const ByteBuffer& value) override {
    m_encoder.WriteBytes(Aws::Crt::ByteCursorFromArray(value.GetUnderlyingData(), value.GetLength()));
  }
  void WriteEnum(const Schema& schema, int value) override { WriteInteger(schema, value); }
  void WriteNull(const Schema&) override { m_encoder.WriteNull(); }

  void WriteMemberKey(const Schema& schema) { WriteText(schema.GetMemberName()); }
  void WriteText(const Aws::String& str) {
    m_encoder.WriteText(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(str.data()), str.size()));
  }

  SerializerOutcome GetPayload() {
    if (m_finalized) {
      return Aws::Client::AWSError<Aws::Client::CoreErrors>(
          Aws::Client::CoreErrors::INTERNAL_FAILURE, "SerializationException",
          "Serializer has already been finalized", false);
    }
    m_finalized = true;
    auto encoded = m_encoder.GetEncodedData();
    return Aws::String(reinterpret_cast<const char*>(encoded.ptr), encoded.len);
  }

 private:
  class StructContext final : public ShapeSerializer {
   public:
    explicit StructContext(Impl* outer) : m_outer(outer) {}

    void WriteStruct(const Schema& s, const SerializableStruct& v) override { m_outer->WriteMemberKey(s); m_outer->WriteStruct(s, v); }
    void WriteList(const Schema& s, size_t n, const std::function<void(ShapeSerializer&)>& c) override { m_outer->WriteMemberKey(s); m_outer->WriteList(s, n, c); }
    void WriteMap(const Schema& s, size_t n, const std::function<void(MapSerializer&)>& c) override { m_outer->WriteMemberKey(s); m_outer->WriteMap(s, n, c); }
    void WriteBoolean(const Schema& s, bool v) override { m_outer->WriteMemberKey(s); m_outer->WriteBoolean(s, v); }
    void WriteInteger(const Schema& s, int v) override { m_outer->WriteMemberKey(s); m_outer->WriteInteger(s, v); }
    void WriteLong(const Schema& s, int64_t v) override { m_outer->WriteMemberKey(s); m_outer->WriteLong(s, v); }
    void WriteFloat(const Schema& s, float v) override { m_outer->WriteMemberKey(s); m_outer->WriteFloat(s, v); }
    void WriteDouble(const Schema& s, double v) override { m_outer->WriteMemberKey(s); m_outer->WriteDouble(s, v); }
    void WriteString(const Schema& s, const Aws::String& v) override { m_outer->WriteMemberKey(s); m_outer->WriteString(s, v); }
    void WriteTimestamp(const Schema& s, const DateTime& v) override { m_outer->WriteMemberKey(s); m_outer->WriteTimestamp(s, v); }
    void WriteBlob(const Schema& s, const ByteBuffer& v) override { m_outer->WriteMemberKey(s); m_outer->WriteBlob(s, v); }
    void WriteEnum(const Schema& s, int v) override { m_outer->WriteMemberKey(s); m_outer->WriteEnum(s, v); }
    void WriteNull(const Schema& s) override { m_outer->WriteMemberKey(s); m_outer->WriteNull(s); }

   private:
    Impl* m_outer;
  };

  class ListContext final : public ShapeSerializer {
   public:
    explicit ListContext(Impl* outer) : m_outer(outer) {}

    void WriteStruct(const Schema& s, const SerializableStruct& v) override { m_outer->WriteStruct(s, v); }
    void WriteList(const Schema& s, size_t n, const std::function<void(ShapeSerializer&)>& c) override { m_outer->WriteList(s, n, c); }
    void WriteMap(const Schema& s, size_t n, const std::function<void(MapSerializer&)>& c) override { m_outer->WriteMap(s, n, c); }
    void WriteBoolean(const Schema& s, bool v) override { m_outer->WriteBoolean(s, v); }
    void WriteInteger(const Schema& s, int v) override { m_outer->WriteInteger(s, v); }
    void WriteLong(const Schema& s, int64_t v) override { m_outer->WriteLong(s, v); }
    void WriteFloat(const Schema& s, float v) override { m_outer->WriteFloat(s, v); }
    void WriteDouble(const Schema& s, double v) override { m_outer->WriteDouble(s, v); }
    void WriteString(const Schema& s, const Aws::String& v) override { m_outer->WriteString(s, v); }
    void WriteTimestamp(const Schema& s, const DateTime& v) override { m_outer->WriteTimestamp(s, v); }
    void WriteBlob(const Schema& s, const ByteBuffer& v) override { m_outer->WriteBlob(s, v); }
    void WriteEnum(const Schema& s, int v) override { m_outer->WriteEnum(s, v); }
    void WriteNull(const Schema& s) override { m_outer->WriteNull(s); }

   private:
    Impl* m_outer;
  };

  class MapContext final : public MapSerializer {
   public:
    explicit MapContext(Impl* outer) : m_outer(outer) {}

    void WriteEntry(const Aws::String& key, const std::function<void(ShapeSerializer&)>& value) override {
      m_outer->WriteText(key);
      value(*m_outer);
    }

   private:
    Impl* m_outer;
  };

  void WriteIntValue(int64_t value) {
    if (value >= 0) {
      m_encoder.WriteUInt(static_cast<uint64_t>(value));
    } else {
      m_encoder.WriteNegInt(static_cast<uint64_t>(-(value + 1)));
    }
  }

  Aws::Crt::Cbor::CborEncoder m_encoder;
  bool m_finalized = false;
};

CborShapeSerializer::CborShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("CborShapeSerializer")) {}
CborShapeSerializer::~CborShapeSerializer() = default;

void CborShapeSerializer::WriteStruct(const Schema& schema, const SerializableStruct& value) {
  m_impl->WriteStruct(schema, value);
}
void CborShapeSerializer::WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) {
  m_impl->WriteList(schema, size, consumer);
}
void CborShapeSerializer::WriteMap(const Schema& schema, size_t size, const std::function<void(MapSerializer&)>& consumer) {
  m_impl->WriteMap(schema, size, consumer);
}
void CborShapeSerializer::WriteBoolean(const Schema& schema, bool value) { m_impl->WriteBoolean(schema, value); }
void CborShapeSerializer::WriteInteger(const Schema& schema, int value) { m_impl->WriteInteger(schema, value); }
void CborShapeSerializer::WriteLong(const Schema& schema, int64_t value) { m_impl->WriteLong(schema, value); }
void CborShapeSerializer::WriteFloat(const Schema& schema, float value) { m_impl->WriteFloat(schema, value); }
void CborShapeSerializer::WriteDouble(const Schema& schema, double value) { m_impl->WriteDouble(schema, value); }
void CborShapeSerializer::WriteString(const Schema& schema, const Aws::String& value) { m_impl->WriteString(schema, value); }
void CborShapeSerializer::WriteTimestamp(const Schema& schema, const DateTime& value) { m_impl->WriteTimestamp(schema, value); }
void CborShapeSerializer::WriteBlob(const Schema& schema, const ByteBuffer& value) { m_impl->WriteBlob(schema, value); }
void CborShapeSerializer::WriteEnum(const Schema& schema, int value) { m_impl->WriteEnum(schema, value); }
void CborShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }

CborShapeSerializer::SerializerOutcome CborShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
