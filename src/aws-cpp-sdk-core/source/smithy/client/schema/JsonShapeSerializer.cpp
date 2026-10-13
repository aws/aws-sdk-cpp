/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/JsonWriteUtils.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>

#include <cmath>
#include <cstdlib>
#include <iomanip>

#include "aws/core/client/AWSClient.h"
#include "aws/core/utils/Outcome.h"
#include "aws/core/utils/memory/stl/AWSArray.h"

using namespace smithy::schema;
using namespace Aws::Utils;
using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

static constexpr int MAX_DEPTH = 500;

class JsonShapeSerializer::Impl final : public ShapeSerializer {
 public:
  explicit Impl(CodecSettings settings) : m_settings(settings) { m_buf.reserve(8192); }

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
  void WriteFloat(const Schema&, float value) override {
    // Format at float precision; a float widened to double and printed at double precision emits the
    // double expansion of the float's imprecision (e.g. "3.1400001049041748" for 3.14f).
    if (std::isfinite(value)) {
      m_buf += FormatFloat(value);
    } else {
      WriteFloatingPoint(static_cast<double>(value));  // NaN/Infinity widen exactly; reuse the shared path
    }
  }
  void WriteDouble(const Schema&, double value) override { WriteFloatingPoint(value); }
  void WriteString(const Schema&, const Aws::String& value) override { Aws::Schema::WriteQuotedJsonString(m_buf, value); }
  void WriteTimestamp(const Schema& schema, const DateTime& value) override {
    const auto format = ResolveTimestampFormat(schema, m_settings.GetDefaultTimestampFormat());
    if (format == TimestampFormatTrait::Format::EPOCH_SECONDS) {
      m_buf += FormatTimestampText(value, format);
    } else {
      Aws::Schema::WriteQuotedJsonString(m_buf, FormatTimestampText(value, format));
    }
  }
  void WriteBlob(const Schema&, const ByteBuffer& value) override {
    m_buf += '"';
    m_buf += HashingUtils::Base64Encode(value);
    m_buf += '"';
  }
  void WriteNull(const Schema&) override { m_buf += "null"; }
  void WriteDocument(const Schema& schema, const Document& value) override { value.Serialize(*this, schema); }

  // Shortest decimal that round-trips (matches the SDK cJSON writer): 15 significant digits,
  // falling back to 17 (max_digits10, always round-trips) when 15 does not reparse equal.
  static Aws::String RoundTripDouble(double value) {
    Aws::OStringStream s15;
    s15 << std::setprecision(15) << value;
    Aws::String t15 = s15.str();
    if (StringUtils::ConvertToDouble(t15.c_str()) == value) {
      return t15;
    }
    Aws::OStringStream s17;
    s17 << std::setprecision(17) << value;
    return s17.str();
  }

  // Preserve the double type through a JSON round-trip: an integral-valued double formats as "2",
  // which the document deserializer reclassifies as Long. Append a ".0" marker when absent.
  static Aws::String FormatDouble(double value) {
    Aws::String text = RoundTripDouble(value);
    if (text.find_first_of(".eE") == Aws::String::npos) {
      text += ".0";
    }
    return text;
  }

  // Float counterpart of FormatDouble: reparse at float precision (strtof) so a float emits the
  // shortest decimal that round-trips the float ("3.14"), not the double expansion of its imprecision
  // ("3.1400001049041748"). 6 significant digits, falling back to 9 (max_digits10 for float).
  static Aws::String FormatFloat(float value) {
    Aws::OStringStream s6;
    s6 << std::setprecision(6) << value;
    Aws::String text = s6.str();
    if (std::strtof(text.c_str(), nullptr) != value) {
      Aws::OStringStream s9;
      s9 << std::setprecision(9) << value;
      text = s9.str();
    }
    if (text.find_first_of(".eE") == Aws::String::npos) {
      text += ".0";
    }
    return text;
  }

  // Non-finite floats have no JSON number form; Smithy encodes them as quoted strings.
  void WriteFloatingPoint(double value) {
    if (std::isfinite(value)) {
      m_buf += FormatDouble(value);
    } else if (std::isnan(value)) {
      m_buf += "\"NaN\"";
    } else {
      m_buf += (value > 0 ? "\"Infinity\"" : "\"-Infinity\"");
    }
  }

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
    void WriteNull(const Schema& s) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteNull(s);
    }
    void WriteDocument(const Schema& s, const Document& v) override {
      m_outer->WriteFieldName(s);
      m_outer->WriteDocument(s, v);
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
    void WriteNull(const Schema& s) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteNull(s);
    }
    void WriteDocument(const Schema& s, const Document& v) override {
      m_outer->WriteCommaIfNeeded();
      m_outer->WriteDocument(s, v);
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
  CodecSettings m_settings;
};

JsonShapeSerializer::JsonShapeSerializer(CodecSettings settings)
    : m_impl(Aws::MakeUnique<Impl>("JsonShapeSerializer", settings)) {}
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
void JsonShapeSerializer::WriteNull(const Schema& schema) { m_impl->WriteNull(schema); }
void JsonShapeSerializer::WriteDocument(const Schema& schema, const Document& value) { m_impl->WriteDocument(schema, value); }

JsonShapeSerializer::SerializerOutcome JsonShapeSerializer::GetPayload() { return m_impl->GetPayload(); }
