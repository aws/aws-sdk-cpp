/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <smithy/client/schema/InterceptingSerializer.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/SpecificShapeSerializer.h>
#include <smithy/client/schema/XmlShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

static constexpr int MAX_DEPTH = 500;

namespace {

void AppendXmlEscaped(Aws::String& buf, const Aws::String& value) {
  const char* data = value.data();
  const size_t len = value.size();
  size_t i = 0;
  while (i < len) {
    size_t start = i;
    while (i < len && data[i] != '&' && data[i] != '<' && data[i] != '>' && data[i] != '"' && data[i] != '\'') {
      i++;
    }
    if (i > start) {
      buf.append(data + start, i - start);
    }
    if (i < len) {
      switch (data[i]) {
        case '&':
          buf += "&amp;";
          break;
        case '<':
          buf += "&lt;";
          break;
        case '>':
          buf += "&gt;";
          break;
        case '"':
          buf += "&quot;";
          break;
        case '\'':
          buf += "&apos;";
          break;
      }
      i++;
    }
  }
}

}  // namespace

class XmlShapeSerializer::Impl final : public InterceptingSerializer {
 public:
  class ValueSerializer final : public ShapeSerializer {
   public:
    explicit ValueSerializer(Impl* outer) : m_outer(outer) {}
    void WriteStruct(const Schema& schema, const SerializableStruct& value) override;
    void WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) override;
    void WriteMap(const Schema& schema, size_t size, const std::function<void(MapSerializer&)>& consumer) override;
    void WriteBoolean(const Schema& schema, bool value) override;
    void WriteInteger(const Schema& schema, int value) override;
    void WriteLong(const Schema& schema, int64_t value) override;
    void WriteFloat(const Schema& schema, float value) override;
    void WriteDouble(const Schema& schema, double value) override;
    void WriteString(const Schema& schema, const Aws::String& value) override;
    void WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) override;
    void WriteBlob(const Schema& schema, const Aws::Utils::ByteBuffer& value) override;
    void WriteEnum(const Schema& schema, int value) override;
    void WriteNull(const Schema& schema) override;

   private:
    Impl* m_outer;
  };

  class StructElementSerializer final : public InterceptingSerializer {
   public:
    explicit StructElementSerializer(Impl* outer) : m_outer(outer) {}

   protected:
    ShapeSerializer& Before(const Schema& schema) override;
    void After(const Schema& schema) override;

   private:
    Impl* m_outer;
  };

  class StructAttributeSerializer final : public InterceptingSerializer {
   public:
    explicit StructAttributeSerializer(Impl* outer) : m_outer(outer) {}

   protected:
    ShapeSerializer& Before(const Schema& schema) override;

   private:
    Impl* m_outer;
  };

  class InlineAttributeSerializer final : public SpecificShapeSerializer {
   public:
    explicit InlineAttributeSerializer(Impl* outer) : m_outer(outer) {}
    void WriteBoolean(const Schema& schema, bool value) override;
    void WriteInteger(const Schema& schema, int value) override;
    void WriteLong(const Schema& schema, int64_t value) override;
    void WriteFloat(const Schema& schema, float value) override;
    void WriteDouble(const Schema& schema, double value) override;
    void WriteString(const Schema& schema, const Aws::String& value) override;
    void WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) override;
    void WriteEnum(const Schema& schema, int value) override;

   private:
    void WriteAttr(const Schema& schema, const Aws::String& value);
    Impl* m_outer;
  };

  class ListItemSerializer final : public InterceptingSerializer {
   public:
    ListItemSerializer(Impl* outer, Aws::String itemName, Aws::String itemNamespace)
        : m_outer(outer), m_itemName(std::move(itemName)), m_itemNamespace(std::move(itemNamespace)) {}

   protected:
    ShapeSerializer& Before(const Schema& schema) override;
    void After(const Schema& schema) override;

   private:
    Impl* m_outer;
    Aws::String m_itemName;
    Aws::String m_itemNamespace;
  };

  class XmlMapEntrySerializer final : public MapSerializer {
   public:
    XmlMapEntrySerializer(Impl* outer, Aws::String entryName, Aws::String keyName, Aws::String valueName)
        : m_outer(outer), m_entryName(std::move(entryName)), m_keyName(std::move(keyName)), m_valueName(std::move(valueName)) {}
    void WriteEntry(const Aws::String& key, const std::function<void(ShapeSerializer&)>& value) override;

   private:
    Impl* m_outer;
    Aws::String m_entryName;
    Aws::String m_keyName;
    Aws::String m_valueName;
  };

  Impl() : m_valueSerializer(this), m_structElementSerializer(this), m_structAttributeSerializer(this), m_inlineAttributeSerializer(this) {
    m_buf.reserve(8192);
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

  void ClosePendingTag() {
    if (m_pendingClose) {
      m_buf += '>';
      m_pendingClose = false;
    }
  }
  void WriteStartOpen(const Aws::String& name, const Aws::String& ns) {
    m_buf += '<';
    m_buf += name;
    m_buf += ns;
    m_pendingClose = true;
  }
  void WriteFullOpenTag(const Aws::String& name) {
    m_buf += '<';
    m_buf += name;
    m_buf += '>';
  }
  void WriteCloseTag(const Aws::String& name) {
    m_buf += "</";
    m_buf += name;
    m_buf += '>';
  }
  void AppendRaw(const Aws::String& text) { m_buf += text; }
  void AppendEscaped(const Aws::String& text) { AppendXmlEscaped(m_buf, text); }

  static Aws::String GetXmlName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlNameTrait::KEY());
    if (trait) {
      return trait->GetValue();
    }
    return schema.GetMemberName();
  }
  static Aws::String ResolveTopLevelName(const Schema& schema) {
    const auto trait = schema.GetTrait(XmlNameTrait::KEY());
    if (trait) {
      return trait->GetValue();
    }
    const auto member = schema.GetMemberName();
    if (!member.empty()) {
      return member;
    }
    return schema.GetId() ? Aws::String(schema.GetId()) : Aws::String();
  }
  static Aws::String ResolveNamespace(const Schema& schema) {
    const auto ns = schema.GetTrait(XmlNamespaceTrait::KEY());
    if (!ns || ns->GetUri().empty()) {
      return {};
    }
    Aws::String escapedUri;
    AppendXmlEscaped(escapedUri, ns->GetUri());
    Aws::String result;
    if (ns->GetPrefix().empty()) {
      result += " xmlns=\"";
    } else {
      result += " xmlns:";
      result += ns->GetPrefix();
      result += "=\"";
    }
    result += escapedUri;
    result += '"';
    return result;
  }
  static bool IsFlattened(const Schema& schema) { return schema.HasTrait(XmlFlattenedTrait::KEY()); }
  static bool IsAttribute(const Schema& schema) { return schema.HasTrait(XmlAttributeTrait::KEY()); }
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
  ValueSerializer& Value() { return m_valueSerializer; }
  StructElementSerializer& StructElement() { return m_structElementSerializer; }
  StructAttributeSerializer& StructAttribute() { return m_structAttributeSerializer; }
  InlineAttributeSerializer& InlineAttribute() { return m_inlineAttributeSerializer; }
  SpecificShapeSerializer& Null() { return m_nullSerializer; }

 protected:
  ShapeSerializer& Before(const Schema& schema) override {
    WriteStartOpen(ResolveTopLevelName(schema), ResolveNamespace(schema));
    return m_valueSerializer;
  }
  void After(const Schema& schema) override { WriteCloseTag(ResolveTopLevelName(schema)); }

 private:
  Aws::String m_buf;
  int m_depth = 0;
  bool m_pendingClose = false;
  bool m_finalized = false;
  Aws::String m_errorMessage;
  ValueSerializer m_valueSerializer;
  StructElementSerializer m_structElementSerializer;
  StructAttributeSerializer m_structAttributeSerializer;
  InlineAttributeSerializer m_inlineAttributeSerializer;
  SpecificShapeSerializer m_nullSerializer;
};

void XmlShapeSerializer::Impl::ValueSerializer::WriteStruct(const Schema&, const SerializableStruct& value) {
  if (!m_outer->EnterContainer()) {
    return;
  }
  value.SerializeMembers(m_outer->StructAttribute());
  m_outer->ClosePendingTag();
  value.SerializeMembers(m_outer->StructElement());
  m_outer->ExitContainer();
}

void XmlShapeSerializer::Impl::ValueSerializer::WriteList(const Schema& schema, size_t,
                                                          const std::function<void(ShapeSerializer&)>& consumer) {
  if (!m_outer->EnterContainer()) {
    return;
  }
  m_outer->ClosePendingTag();
  const Aws::String itemName = Impl::IsFlattened(schema) ? Impl::GetXmlName(schema) : Impl::GetListItemName(schema);
  ListItemSerializer itemSerializer(m_outer, itemName, Aws::String());
  consumer(itemSerializer);
  m_outer->ExitContainer();
}

void XmlShapeSerializer::Impl::ValueSerializer::WriteMap(const Schema& schema, size_t,
                                                         const std::function<void(MapSerializer&)>& consumer) {
  if (!m_outer->EnterContainer()) {
    return;
  }
  m_outer->ClosePendingTag();
  const Aws::String entryName = Impl::IsFlattened(schema) ? Impl::GetXmlName(schema) : Impl::GetMapEntryName(schema);
  XmlMapEntrySerializer entrySerializer(m_outer, entryName, Impl::GetMapKeyName(schema), Impl::GetMapValueName(schema));
  consumer(entrySerializer);
  m_outer->ExitContainer();
}

void XmlShapeSerializer::Impl::ValueSerializer::WriteBoolean(const Schema&, bool value) {
  m_outer->ClosePendingTag();
  m_outer->AppendRaw(value ? "true" : "false");
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteInteger(const Schema&, int value) {
  m_outer->ClosePendingTag();
  m_outer->AppendRaw(StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteLong(const Schema&, int64_t value) {
  m_outer->ClosePendingTag();
  m_outer->AppendRaw(StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteFloat(const Schema&, float value) {
  m_outer->ClosePendingTag();
  m_outer->AppendRaw(StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteDouble(const Schema&, double value) {
  m_outer->ClosePendingTag();
  m_outer->AppendRaw(StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteString(const Schema&, const Aws::String& value) {
  m_outer->ClosePendingTag();
  m_outer->AppendEscaped(value);
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteTimestamp(const Schema&, const Aws::Utils::DateTime& value) {
  m_outer->ClosePendingTag();
  m_outer->AppendRaw(value.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteBlob(const Schema&, const Aws::Utils::ByteBuffer& value) {
  m_outer->ClosePendingTag();
  m_outer->AppendRaw(HashingUtils::Base64Encode(value));
}
void XmlShapeSerializer::Impl::ValueSerializer::WriteEnum(const Schema& schema, int value) { WriteInteger(schema, value); }
void XmlShapeSerializer::Impl::ValueSerializer::WriteNull(const Schema&) { m_outer->ClosePendingTag(); }

ShapeSerializer& XmlShapeSerializer::Impl::StructElementSerializer::Before(const Schema& schema) {
  if (Impl::IsAttribute(schema)) {
    return m_outer->Null();
  }
  if (Impl::IsFlattened(schema)) {
    return m_outer->Value();
  }
  m_outer->WriteStartOpen(Impl::GetXmlName(schema), Impl::ResolveNamespace(schema));
  return m_outer->Value();
}

void XmlShapeSerializer::Impl::StructElementSerializer::After(const Schema& schema) {
  if (Impl::IsAttribute(schema) || Impl::IsFlattened(schema)) {
    return;
  }
  m_outer->WriteCloseTag(Impl::GetXmlName(schema));
}

ShapeSerializer& XmlShapeSerializer::Impl::StructAttributeSerializer::Before(const Schema& schema) {
  if (Impl::IsAttribute(schema)) {
    return m_outer->InlineAttribute();
  }
  return m_outer->Null();
}

void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteAttr(const Schema& schema, const Aws::String& value) {
  m_outer->AppendRaw(" ");
  m_outer->AppendRaw(Impl::GetXmlName(schema));
  m_outer->AppendRaw("=\"");
  m_outer->AppendEscaped(value);
  m_outer->AppendRaw("\"");
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteBoolean(const Schema& schema, bool value) {
  WriteAttr(schema, value ? "true" : "false");
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteInteger(const Schema& schema, int value) {
  WriteAttr(schema, StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteLong(const Schema& schema, int64_t value) {
  WriteAttr(schema, StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteFloat(const Schema& schema, float value) {
  WriteAttr(schema, StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteDouble(const Schema& schema, double value) {
  WriteAttr(schema, StringUtils::to_string(value));
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteString(const Schema& schema, const Aws::String& value) {
  WriteAttr(schema, value);
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) {
  WriteAttr(schema, value.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
}
void XmlShapeSerializer::Impl::InlineAttributeSerializer::WriteEnum(const Schema& schema, int value) {
  WriteAttr(schema, StringUtils::to_string(value));
}

ShapeSerializer& XmlShapeSerializer::Impl::ListItemSerializer::Before(const Schema&) {
  m_outer->WriteStartOpen(m_itemName, m_itemNamespace);
  return m_outer->Value();
}
void XmlShapeSerializer::Impl::ListItemSerializer::After(const Schema&) { m_outer->WriteCloseTag(m_itemName); }

void XmlShapeSerializer::Impl::XmlMapEntrySerializer::WriteEntry(const Aws::String& key,
                                                                 const std::function<void(ShapeSerializer&)>& value) {
  m_outer->WriteFullOpenTag(m_entryName);
  m_outer->WriteFullOpenTag(m_keyName);
  m_outer->AppendEscaped(key);
  m_outer->WriteCloseTag(m_keyName);
  m_outer->WriteStartOpen(m_valueName, Aws::String());
  value(m_outer->Value());
  m_outer->WriteCloseTag(m_valueName);
  m_outer->WriteCloseTag(m_entryName);
}

XmlShapeSerializer::XmlShapeSerializer() : m_impl(Aws::MakeUnique<Impl>("XmlShapeSerializer")) {}
XmlShapeSerializer::~XmlShapeSerializer() = default;

void XmlShapeSerializer::WriteStruct(const Schema& schema, const SerializableStruct& value) { m_impl->WriteStruct(schema, value); }
void XmlShapeSerializer::WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) {
  m_impl->WriteList(schema, size, consumer);
}
void XmlShapeSerializer::WriteMap(const Schema& schema, size_t size, const std::function<void(MapSerializer&)>& consumer) {
  m_impl->WriteMap(schema, size, consumer);
}
void XmlShapeSerializer::WriteBoolean(const Schema& schema, bool value) { m_impl->WriteBoolean(schema, value); }
void XmlShapeSerializer::WriteInteger(const Schema& schema, int value) { m_impl->WriteInteger(schema, value); }
void XmlShapeSerializer::WriteLong(const Schema& schema, int64_t value) { m_impl->WriteLong(schema, value); }
void XmlShapeSerializer::WriteFloat(const Schema& schema, float value) { m_impl->WriteFloat(schema, value); }
void XmlShapeSerializer::WriteDouble(const Schema& schema, double value) { m_impl->WriteDouble(schema, value); }
void XmlShapeSerializer::WriteString(const Schema& schema, const Aws::String& value) { m_impl->WriteString(schema, value); }
void XmlShapeSerializer::WriteTimestamp(const Schema& schema, const DateTime& value) { m_impl->WriteTimestamp(schema, value); }
void XmlShapeSerializer::WriteBlob(const Schema& schema, const ByteBuffer& value) { m_impl->WriteBlob(schema, value); }
void XmlShapeSerializer::WriteEnum(const Schema& schema, int value) { m_impl->WriteEnum(schema, value); }
void XmlShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }

XmlShapeSerializer::SerializerOutcome XmlShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
