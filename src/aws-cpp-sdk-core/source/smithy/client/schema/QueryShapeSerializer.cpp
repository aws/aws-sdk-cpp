/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <cctype>
#include <cmath>

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/QueryShapeSerializer.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/XmlTraits.h>

#include "aws/core/client/AWSClient.h"
#include "aws/core/utils/Outcome.h"

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

static constexpr int MAX_DEPTH = 500;

class QueryShapeSerializer::Impl final : public ShapeSerializer {
 public:
  explicit Impl(bool ec2) : m_ec2(ec2) { m_buf.reserve(1024); }

  void WriteStruct(const Schema&, const SerializableStruct& value) override {
    if (!EnterContainer()) {
      return;
    }
    StructContext ctx(this, m_prefix);
    value.SerializeMembers(ctx);
    ExitContainer();
  }

  void WriteList(const Schema& schema, size_t, const std::function<void(ShapeSerializer&)>& consumer) override {
    if (!EnterContainer()) {
      return;
    }

    const bool flattened = m_ec2 || IsFlattened(schema);
    ListContext ctx(this, m_prefix, flattened, GetListItemName(schema));
    consumer(ctx);
    ExitContainer();
  }

  void WriteMap(const Schema& schema, size_t, const std::function<void(MapSerializer&)>& consumer) override {
    if (!EnterContainer()) {
      return;
    }
    MapContext ctx(this, m_prefix, IsFlattened(schema), GetMapEntryName(schema), GetMapKeyName(schema), GetMapValueName(schema));
    consumer(ctx);
    ExitContainer();
  }

  void WriteBoolean(const Schema&, bool value) override { EmitField(value ? "true" : "false"); }
  void WriteInteger(const Schema&, int value) override { EmitField(StringUtils::to_string(value)); }
  void WriteLong(const Schema&, int64_t value) override { EmitField(StringUtils::to_string(value)); }
  void WriteFloat(const Schema&, float value) override { EmitField(FormatFloatingPoint(value)); }
  void WriteDouble(const Schema&, double value) override { EmitField(FormatFloatingPoint(value)); }
  void WriteString(const Schema&, const Aws::String& value) override { EmitField(StringUtils::URLEncode(value.c_str())); }
  void WriteTimestamp(const Schema&, const DateTime& value) override {

    EmitField(StringUtils::URLEncode(value.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()));
  }
  void WriteBlob(const Schema&, const ByteBuffer& value) override {
    EmitField(StringUtils::URLEncode(HashingUtils::Base64Encode(value).c_str()));
  }
  void WriteEnum(const Schema& schema, int value) override { WriteInteger(schema, value); }

  void WriteNull(const Schema&) override {}

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
    StructContext(Impl* outer, Aws::String base) : m_outer(outer), m_base(std::move(base)) {}

    void WriteStruct(const Schema& s, const SerializableStruct& v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteStruct(s, v);
    }
    void WriteList(const Schema& s, size_t n, const std::function<void(ShapeSerializer&)>& c) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteList(s, n, c);
    }
    void WriteMap(const Schema& s, size_t n, const std::function<void(MapSerializer&)>& c) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteMap(s, n, c);
    }
    void WriteBoolean(const Schema& s, bool v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteBoolean(s, v);
    }
    void WriteInteger(const Schema& s, int v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteInteger(s, v);
    }
    void WriteLong(const Schema& s, int64_t v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteLong(s, v);
    }
    void WriteFloat(const Schema& s, float v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteFloat(s, v);
    }
    void WriteDouble(const Schema& s, double v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteDouble(s, v);
    }
    void WriteString(const Schema& s, const Aws::String& v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteString(s, v);
    }
    void WriteTimestamp(const Schema& s, const DateTime& v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteTimestamp(s, v);
    }
    void WriteBlob(const Schema& s, const ByteBuffer& v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteBlob(s, v);
    }
    void WriteEnum(const Schema& s, int v) override {
      m_outer->m_prefix = ChildKey(s);
      m_outer->WriteEnum(s, v);
    }
    void WriteNull(const Schema&) override {}

   private:
    Aws::String ChildKey(const Schema& s) const { return Impl::JoinKey(m_base, Impl::ResolveName(s, m_outer->m_ec2)); }

    Impl* m_outer;
    Aws::String m_base;
  };

  class ListContext final : public ShapeSerializer {
   public:
    ListContext(Impl* outer, Aws::String base, bool flattened, Aws::String itemName)
        : m_outer(outer), m_base(std::move(base)), m_flattened(flattened), m_itemName(std::move(itemName)) {}

    void WriteStruct(const Schema& s, const SerializableStruct& v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteStruct(s, v);
    }
    void WriteList(const Schema& s, size_t n, const std::function<void(ShapeSerializer&)>& c) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteList(s, n, c);
    }
    void WriteMap(const Schema& s, size_t n, const std::function<void(MapSerializer&)>& c) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteMap(s, n, c);
    }
    void WriteBoolean(const Schema& s, bool v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteBoolean(s, v);
    }
    void WriteInteger(const Schema& s, int v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteInteger(s, v);
    }
    void WriteLong(const Schema& s, int64_t v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteLong(s, v);
    }
    void WriteFloat(const Schema& s, float v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteFloat(s, v);
    }
    void WriteDouble(const Schema& s, double v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteDouble(s, v);
    }
    void WriteString(const Schema& s, const Aws::String& v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteString(s, v);
    }
    void WriteTimestamp(const Schema& s, const DateTime& v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteTimestamp(s, v);
    }
    void WriteBlob(const Schema& s, const ByteBuffer& v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteBlob(s, v);
    }
    void WriteEnum(const Schema& s, int v) override {
      m_outer->m_prefix = ItemKey();
      m_outer->WriteEnum(s, v);
    }

    void WriteNull(const Schema&) override { ++m_index; }

   private:
    Aws::String ItemKey() {
      Aws::String key = m_base;
      if (!m_flattened) {
        key += '.';
        key += m_itemName;
      }
      key += '.';
      key += StringUtils::to_string(++m_index);
      return key;
    }

    Impl* m_outer;
    Aws::String m_base;
    bool m_flattened;
    Aws::String m_itemName;
    int m_index = 0;
  };

  class MapContext final : public MapSerializer {
   public:
    MapContext(Impl* outer, Aws::String base, bool flattened, Aws::String entryName, Aws::String keyName, Aws::String valueName)
        : m_outer(outer),
          m_base(std::move(base)),
          m_flattened(flattened),
          m_entryName(std::move(entryName)),
          m_keyName(std::move(keyName)),
          m_valueName(std::move(valueName)) {}

    void WriteEntry(const Aws::String& key, const std::function<void(ShapeSerializer&)>& value) override {
      Aws::String entryKey = m_base;
      if (!m_flattened) {
        entryKey += '.';
        entryKey += m_entryName;
      }
      entryKey += '.';
      entryKey += StringUtils::to_string(++m_index);

      m_outer->m_prefix = entryKey + '.' + m_keyName;
      m_outer->EmitField(StringUtils::URLEncode(key.c_str()));

      m_outer->m_prefix = entryKey + '.' + m_valueName;
      value(*m_outer);
    }

   private:
    Impl* m_outer;
    Aws::String m_base;
    bool m_flattened;
    Aws::String m_entryName;
    Aws::String m_keyName;
    Aws::String m_valueName;
    int m_index = 0;
  };

  void EmitField(const Aws::String& value) {
    if (m_hasContent) {
      m_buf += '&';
    } else {
      m_hasContent = true;
    }
    m_buf += m_prefix;
    m_buf += '=';
    m_buf += value;
  }

  bool EnterContainer() {
    if (!m_errorMessage.empty()) {
      return false;
    }
    if (m_depth + 1 > MAX_DEPTH) {
      m_errorMessage = "Maximum serialization depth exceeded";
      return false;
    }
    ++m_depth;
    return true;
  }
  void ExitContainer() { --m_depth; }

  static Aws::String JoinKey(const Aws::String& prefix, const Aws::String& name) {
    if (prefix.empty()) {
      return name;
    }
    Aws::String key = prefix;
    key += '.';
    key += name;
    return key;
  }

  static Aws::String FormatFloatingPoint(double value) {
    if (std::isfinite(value)) {
      return StringUtils::to_string(value);
    }
    if (std::isnan(value)) {
      return "NaN";
    }
    return value > 0 ? "Infinity" : "-Infinity";
  }

  static Aws::String ResolveName(const Schema& schema, bool ec2) {
    if (ec2) {
      const auto ec2Name = schema.GetTrait(Ec2QueryNameTrait::KEY());
      if (ec2Name) {
        return ec2Name->GetValue();
      }
    }
    const auto xmlName = schema.GetTrait(XmlNameTrait::KEY());
    Aws::String name = xmlName ? xmlName->GetValue() : schema.GetMemberName();
    if (ec2 && !name.empty()) {
      name[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(name[0])));
    }
    return name;
  }
  static bool IsFlattened(const Schema& schema) { return schema.HasTrait(XmlFlattenedTrait::KEY()); }
  static Aws::String GetListItemName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlListItemNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("member");
  }
  static Aws::String GetMapEntryName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapEntryNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("entry");
  }
  static Aws::String GetMapKeyName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapKeyNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("key");
  }
  static Aws::String GetMapValueName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlMapValueNameTrait::KEY());
    return trait ? trait->GetValue() : Aws::String("value");
  }

  Aws::String m_buf;
  Aws::String m_prefix;
  int m_depth = 0;
  bool m_ec2 = false;
  bool m_hasContent = false;
  bool m_finalized = false;
  Aws::String m_errorMessage;
};

QueryShapeSerializer::QueryShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("QueryShapeSerializer", false)) {}
QueryShapeSerializer::QueryShapeSerializer(Flavor flavor)
    : m_impl(Aws::MakeUnique<Impl>("QueryShapeSerializer", flavor == Flavor::Ec2Query)) {}
QueryShapeSerializer::~QueryShapeSerializer() = default;

void QueryShapeSerializer::WriteStruct(const Schema& schema, const SerializableStruct& value) { m_impl->WriteStruct(schema, value); }
void QueryShapeSerializer::WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) {
  m_impl->WriteList(schema, size, consumer);
}
void QueryShapeSerializer::WriteMap(const Schema& schema, size_t size, const std::function<void(MapSerializer&)>& consumer) {
  m_impl->WriteMap(schema, size, consumer);
}
void QueryShapeSerializer::WriteBoolean(const Schema& schema, bool value) { m_impl->WriteBoolean(schema, value); }
void QueryShapeSerializer::WriteInteger(const Schema& schema, int value) { m_impl->WriteInteger(schema, value); }
void QueryShapeSerializer::WriteLong(const Schema& schema, int64_t value) { m_impl->WriteLong(schema, value); }
void QueryShapeSerializer::WriteFloat(const Schema& schema, float value) { m_impl->WriteFloat(schema, value); }
void QueryShapeSerializer::WriteDouble(const Schema& schema, double value) { m_impl->WriteDouble(schema, value); }
void QueryShapeSerializer::WriteString(const Schema& schema, const Aws::String& value) { m_impl->WriteString(schema, value); }
void QueryShapeSerializer::WriteTimestamp(const Schema& schema, const DateTime& value) { m_impl->WriteTimestamp(schema, value); }
void QueryShapeSerializer::WriteBlob(const Schema& schema, const ByteBuffer& value) { m_impl->WriteBlob(schema, value); }
void QueryShapeSerializer::WriteEnum(const Schema& schema, int value) { m_impl->WriteEnum(schema, value); }
void QueryShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }

QueryShapeSerializer::SerializerOutcome QueryShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
