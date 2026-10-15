/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/Document.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpBinding.h>
#include <smithy/client/schema/HttpBindingValues.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/InterceptingSerializer.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/SpecificShapeSerializer.h>

#include <utility>

using Aws::Utils::ByteBuffer;
using Aws::Utils::DateTime;
using Aws::Utils::HashingUtils;
using Aws::Utils::StringUtils;

namespace smithy {
namespace schema {

namespace hbv = HttpBindingValues;

namespace {

using Format = TimestampFormatTrait::Format;
using Error = Aws::Client::AWSError<Aws::Client::CoreErrors>;

Aws::String Lower(const Aws::String& value) { return StringUtils::ToLower(value.c_str()); }

Error SerializationError(const Aws::String& message) {
  return Error(Aws::Client::CoreErrors::INVALID_PARAMETER_VALUE, "SerializationException", message, false);
}

Aws::String Base64(const Aws::String& text) {
  return HashingUtils::Base64Encode(ByteBuffer(reinterpret_cast<const unsigned char*>(text.data()), text.size()));
}

Aws::String FromBase64(const Aws::String& text) {
  const ByteBuffer bytes = HashingUtils::Base64Decode(text);
  return Aws::String(reinterpret_cast<const char*>(bytes.GetUnderlyingData()), bytes.GetLength());
}

/** The format a timestamp written under {@code schema} uses: its own trait, else the enclosing member's, else the location default. */
Format ResolveFormat(const Schema& schema, const Schema* enclosing, Format locationDefault) {
  if (schema.HasTrait(TimestampFormatTrait::KEY())) {
    return schema.GetTrait(TimestampFormatTrait::KEY())->GetFormat();
  }
  return enclosing ? ResolveTimestampFormat(*enclosing, locationDefault) : locationDefault;
}

Format LocationDefault(HttpBinding binding) { return binding == HttpBinding::Header || binding == HttpBinding::PrefixHeaders ? Format::HTTP_DATE : Format::DATE_TIME; }

/** True when a list member's items are timestamps rendered as HTTP dates (whose commas are part of the value). */
bool HasHttpDateItems(const Schema& listMember, Format locationDefault) {
  const auto target = listMember.GetMemberTarget();
  if (!target) {
    return false;
  }
  const auto item = (*target)->GetMember("member");
  return item && (*item)->GetType() == ShapeType::Timestamp && ResolveFormat(**item, &listMember, locationDefault) == Format::HTTP_DATE;
}

// --- request side -------------------------------------------------------------------------------

/** Collects the text form of the scalar (or list-element) writes for one header / query / label member. */
class TextCollector final : public SpecificShapeSerializer {
 public:
  TextCollector(Format locationDefault, const Schema* enclosing) : m_default(locationDefault), m_enclosing(enclosing) {}

  void WriteList(const Schema&, size_t, const std::function<void(ShapeSerializer&)>& consumer) override { consumer(*this); }
  void WriteBoolean(const Schema&, bool value) override { m_values.push_back(hbv::FormatBoolean(value)); }
  void WriteInteger(const Schema&, int value) override { m_values.push_back(StringUtils::to_string(value)); }
  void WriteLong(const Schema&, int64_t value) override { m_values.push_back(StringUtils::to_string(value)); }
  void WriteFloat(const Schema&, float value) override { m_values.push_back(hbv::FormatDouble(value)); }
  void WriteDouble(const Schema&, double value) override { m_values.push_back(hbv::FormatDouble(value)); }
  void WriteString(const Schema& schema, const Aws::String& value) override {
    const bool mediaType = schema.HasTrait(MediaTypeTrait::KEY()) || (m_enclosing && m_enclosing->HasTrait(MediaTypeTrait::KEY()));
    m_values.push_back(mediaType ? Base64(value) : value);
  }
  void WriteTimestamp(const Schema& schema, const DateTime& value) override {
    m_values.push_back(FormatTimestampText(value, ResolveFormat(schema, m_enclosing, m_default)));
  }
  void WriteBlob(const Schema&, const ByteBuffer& value) override { m_values.push_back(HashingUtils::Base64Encode(value)); }

  const Aws::Vector<Aws::String>& Values() const { return m_values; }

 private:
  Format m_default;
  const Schema* m_enclosing;
  Aws::Vector<Aws::String> m_values;
};

/** Collects the entries of an {@code @httpPrefixHeaders} / {@code @httpQueryParams} map (a value may be a list). */
class MapCollector final : public MapSerializer {
 public:
  MapCollector(Format locationDefault, const Schema& enclosing) : m_default(locationDefault), m_enclosing(enclosing) {}

  void WriteEntry(const Aws::String& key, const std::function<void(ShapeSerializer&)>& value) override {
    TextCollector values(m_default, &m_enclosing);
    value(values);
    m_entries.emplace_back(key, values.Values());
  }

  const Aws::Vector<std::pair<Aws::String, Aws::Vector<Aws::String>>>& Entries() const { return m_entries; }

 private:
  Format m_default;
  const Schema& m_enclosing;
  Aws::Vector<std::pair<Aws::String, Aws::Vector<Aws::String>>> m_entries;
};

/** Writes nothing but the input's body members to the codec serializer. */
class BodyFilter final : public InterceptingSerializer {
 public:
  explicit BodyFilter(ShapeSerializer& body) : m_body(body) {}

 protected:
  ShapeSerializer& Before(const Schema& schema) override {
    return ClassifyHttpMember(schema, HttpBindingDirection::Request) == HttpBinding::Body ? m_body : m_discard;
  }

 private:
  ShapeSerializer& m_body;
  SpecificShapeSerializer m_discard;
};

/** The input viewed as its body members only, for the body codec. */
class BodyOnly final : public SerializableStruct {
 public:
  explicit BodyOnly(const SerializableStruct& input) : m_input(input) {}
  const Schema& GetSchema() const override { return m_input.GetSchema(); }
  void SerializeMembers(ShapeSerializer& serializer) const override {
    BodyFilter filter(serializer);
    m_input.SerializeMembers(filter);
  }
  void From(const Schema&, ShapeDeserializer&) override {}

 private:
  const SerializableStruct& m_input;
};

/** A member-less struct under the payload member's schema, for an unset structure payload's empty body. */
class EmptyStruct final : public SerializableStruct {
 public:
  explicit EmptyStruct(const Schema& schema) : m_schema(schema) {}
  const Schema& GetSchema() const override { return m_schema; }
  void SerializeMembers(ShapeSerializer&) const override {}
  void From(const Schema&, ShapeDeserializer&) override {}

 private:
  const Schema& m_schema;
};

/** Receives the input's top-level member writes and routes each to its HTTP location. Body members are skipped. */
class RequestRouter final : public SpecificShapeSerializer {
 public:
  explicit RequestRouter(const ClientProtocol& protocol) : m_protocol(protocol) {}

  void WriteStruct(const Schema& schema, const SerializableStruct& value) override {
    if (Classify(schema) == HttpBinding::Payload) {
      SetPayload(m_protocol.SerializeInput(schema, value), m_protocol.GetContentType());
    }
  }
  void WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) override {
    const HttpBinding binding = Classify(schema);
    if (binding != HttpBinding::Header && binding != HttpBinding::Query) {
      return;
    }
    const Format format = LocationDefault(binding);
    TextCollector values(format, &schema);
    values.WriteList(schema, size, consumer);
    if (binding == HttpBinding::Query) {
      for (const auto& value : values.Values()) {
        m_query.emplace_back(QueryName(schema), value);
      }
    } else {
      // A set-but-empty list still sends the header, with an empty value.
      m_headers[HeaderName(schema)] = hbv::JoinHeaderList(values.Values(), !HasHttpDateItems(schema, format));
    }
  }
  void WriteMap(const Schema& schema, size_t, const std::function<void(MapSerializer&)>& consumer) override {
    const HttpBinding binding = Classify(schema);
    if (binding != HttpBinding::PrefixHeaders && binding != HttpBinding::QueryParams) {
      return;
    }
    MapCollector entries(LocationDefault(binding), schema);
    consumer(entries);
    if (binding == HttpBinding::QueryParams) {
      m_queryParams.insert(m_queryParams.end(), entries.Entries().begin(), entries.Entries().end());
      return;
    }
    const Aws::String& prefix = schema.GetTrait(HttpPrefixHeadersTrait::KEY())->GetPrefix();
    for (const auto& entry : entries.Entries()) {
      if (!entry.second.empty()) {
        m_prefixHeaders.emplace_back(prefix + entry.first, entry.second.front());
      }
    }
  }
  void WriteBoolean(const Schema& schema, bool value) override {
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteBoolean(schema, value); });
  }
  void WriteInteger(const Schema& schema, int value) override {
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteInteger(schema, value); });
  }
  void WriteLong(const Schema& schema, int64_t value) override {
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteLong(schema, value); });
  }
  void WriteFloat(const Schema& schema, float value) override {
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteFloat(schema, value); });
  }
  void WriteDouble(const Schema& schema, double value) override {
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteDouble(schema, value); });
  }
  void WriteTimestamp(const Schema& schema, const DateTime& value) override {
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteTimestamp(schema, value); });
  }
  void WriteString(const Schema& schema, const Aws::String& value) override {
    if (schema.HasTrait(HostLabelTrait::KEY())) {
      m_hostLabels[schema.GetMemberName()] = value;
    }
    if (Classify(schema) == HttpBinding::Payload) {
      SetPayload(value, MediaTypeOr(schema, "text/plain"));
      return;
    }
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteString(schema, value); });
  }
  void WriteBlob(const Schema& schema, const ByteBuffer& value) override {
    if (Classify(schema) == HttpBinding::Payload) {
      SetPayload(Aws::String(reinterpret_cast<const char*>(value.GetUnderlyingData()), value.GetLength()),
                 MediaTypeOr(schema, "application/octet-stream"));
      return;
    }
    Scalar(schema, [&](ShapeSerializer& s) { s.WriteBlob(schema, value); });
  }
  void WriteDocument(const Schema& schema, const Document& value) override {
    if (Classify(schema) == HttpBinding::Payload) {
      // Aws::Utils::Document is JSON; document payloads only exist on JSON protocols.
      SetPayload(ToUtilsDocument(value).View().WriteCompact(), m_protocol.GetContentType());
    }
  }

  const Aws::Http::HeaderValueCollection& Headers() const { return m_headers; }
  const Aws::Vector<std::pair<Aws::String, Aws::String>>& PrefixHeaders() const { return m_prefixHeaders; }
  const Aws::Vector<std::pair<Aws::String, Aws::String>>& Query() const { return m_query; }
  const Aws::Vector<std::pair<Aws::String, Aws::Vector<Aws::String>>>& QueryParams() const { return m_queryParams; }
  const Aws::Map<Aws::String, Aws::String>& Labels() const { return m_labels; }
  const Aws::Map<Aws::String, Aws::String>& HostLabels() const { return m_hostLabels; }
  bool HasPayload() const { return m_payloadSet; }
  const Aws::Crt::Optional<Error>& PayloadError() const { return m_payloadError; }
  Aws::String& Payload() { return m_payload; }
  const Aws::String& PayloadContentType() const { return m_payloadContentType; }

 private:
  static HttpBinding Classify(const Schema& schema) { return ClassifyHttpMember(schema, HttpBindingDirection::Request); }
  static const Aws::String& HeaderName(const Schema& schema) { return schema.GetTrait(HttpHeaderTrait::KEY())->GetName(); }
  static const Aws::String& QueryName(const Schema& schema) { return schema.GetTrait(HttpQueryTrait::KEY())->GetName(); }
  static Aws::String MediaTypeOr(const Schema& schema, const char* fallback) {
    return schema.HasTrait(MediaTypeTrait::KEY()) ? schema.GetTrait(MediaTypeTrait::KEY())->GetValue() : Aws::String(fallback);
  }

  void Scalar(const Schema& schema, const std::function<void(ShapeSerializer&)>& write) {
    const HttpBinding binding = Classify(schema);
    if (binding != HttpBinding::Header && binding != HttpBinding::Query && binding != HttpBinding::Label) {
      return;
    }
    TextCollector text(LocationDefault(binding), &schema);
    write(text);
    if (text.Values().empty()) {
      return;
    }
    const Aws::String& value = text.Values().front();
    if (binding == HttpBinding::Header) {
      m_headers[HeaderName(schema)] = value;
    } else if (binding == HttpBinding::Query) {
      m_query.emplace_back(QueryName(schema), value);
    } else {
      m_labels[schema.GetMemberName()] = value;
    }
  }

  void SetPayload(const ClientProtocol::SerializerOutcome& outcome, const Aws::String& contentType) {
    if (!outcome.IsSuccess()) {
      m_payloadError = outcome.GetError();
      return;
    }
    SetPayload(outcome.GetResult(), contentType);
  }
  void SetPayload(const Aws::String& bytes, const Aws::String& contentType) {
    m_payload = bytes;
    m_payloadContentType = contentType;
    m_payloadSet = true;
  }

  const ClientProtocol& m_protocol;
  Aws::Http::HeaderValueCollection m_headers;
  Aws::Vector<std::pair<Aws::String, Aws::String>> m_prefixHeaders;
  Aws::Vector<std::pair<Aws::String, Aws::String>> m_query;
  Aws::Vector<std::pair<Aws::String, Aws::Vector<Aws::String>>> m_queryParams;
  Aws::Map<Aws::String, Aws::String> m_labels;
  Aws::Map<Aws::String, Aws::String> m_hostLabels;
  bool m_payloadSet = false;
  Aws::Crt::Optional<Error> m_payloadError;
  Aws::String m_payload;
  Aws::String m_payloadContentType;
};

/** Substitutes {@code {label}} / {@code {label+}} in {@code pattern}; labels are encoded unless {@code encode} is false. */
bool ExpandLabels(const Aws::String& pattern, const Aws::Map<Aws::String, Aws::String>& labels, bool encode, Aws::String& out,
                  Aws::String& missing) {
  for (size_t i = 0; i < pattern.size(); ++i) {
    if (pattern[i] != '{') {
      out += pattern[i];
      continue;
    }
    const size_t close = pattern.find('}', i);
    if (close == Aws::String::npos) {
      out += pattern.substr(i);
      return true;
    }
    Aws::String name = pattern.substr(i + 1, close - i - 1);
    const bool greedy = !name.empty() && name.back() == '+';
    if (greedy) {
      name.pop_back();
    }
    const auto label = labels.find(name);
    if (label == labels.end() || label->second.empty()) {
      missing = name;
      return false;
    }
    out += encode ? hbv::EncodeUnreserved(label->second, greedy) : label->second;
    i = close;
  }
  return true;
}

// --- response side ------------------------------------------------------------------------------

/** A deserializer that reads nothing; subclasses override what their source can produce. */
class NothingDeserializer : public ShapeDeserializer {
 public:
  void ReadStruct(const Schema&, const StructMemberConsumer&) override {}
  void ReadList(const Schema&, const ListElementConsumer&) override {}
  void ReadMap(const Schema&, const MapEntryConsumer&) override {}
  Aws::Crt::Optional<bool> ReadBoolean(const Schema&) override { return {}; }
  Aws::Crt::Optional<int> ReadInteger(const Schema&) override { return {}; }
  Aws::Crt::Optional<int64_t> ReadLong(const Schema&) override { return {}; }
  Aws::Crt::Optional<float> ReadFloat(const Schema&) override { return {}; }
  Aws::Crt::Optional<double> ReadDouble(const Schema&) override { return {}; }
  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override { return {}; }
  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema&) override { return {}; }
  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override { return {}; }
  std::shared_ptr<const Document> ReadDocument(const Schema&) override { return nullptr; }
  bool IsNull() override { return false; }
};

/** Reads a member from header text: a scalar, or a list split per the Smithy header-list rules. */
class HeaderTextDeserializer final : public NothingDeserializer {
 public:
  HeaderTextDeserializer(Aws::String text, const Schema* enclosing) : m_text(std::move(text)), m_enclosing(enclosing) {}

  void ReadList(const Schema& schema, const ListElementConsumer& consumer) override {
    const auto items = HasHttpDateItems(schema, Format::HTTP_DATE) ? hbv::SplitHttpDateList(m_text) : hbv::SplitHeaderList(m_text);
    for (const auto& item : items) {
      HeaderTextDeserializer element(item, &schema);
      consumer(element);
    }
  }
  Aws::Crt::Optional<bool> ReadBoolean(const Schema&) override { return hbv::ParseBoolean(m_text); }
  Aws::Crt::Optional<int> ReadInteger(const Schema&) override {
    const auto value = hbv::ParseInteger(m_text);
    return value ? Aws::Crt::Optional<int>(static_cast<int>(*value)) : Aws::Crt::Optional<int>();
  }
  Aws::Crt::Optional<int64_t> ReadLong(const Schema&) override { return hbv::ParseInteger(m_text); }
  Aws::Crt::Optional<float> ReadFloat(const Schema&) override {
    const auto value = hbv::ParseDouble(m_text);
    return value ? Aws::Crt::Optional<float>(static_cast<float>(*value)) : Aws::Crt::Optional<float>();
  }
  Aws::Crt::Optional<double> ReadDouble(const Schema&) override { return hbv::ParseDouble(m_text); }
  Aws::Crt::Optional<Aws::String> ReadString(const Schema& schema) override {
    const bool mediaType = schema.HasTrait(MediaTypeTrait::KEY()) || (m_enclosing && m_enclosing->HasTrait(MediaTypeTrait::KEY()));
    return mediaType ? FromBase64(m_text) : m_text;
  }
  Aws::Crt::Optional<DateTime> ReadTimestamp(const Schema& schema) override {
    return hbv::ParseTimestamp(m_text, ResolveFormat(schema, m_enclosing, Format::HTTP_DATE));
  }
  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override { return HashingUtils::Base64Decode(m_text); }

 private:
  Aws::String m_text;
  const Schema* m_enclosing;
};

/** Reads an {@code @httpPrefixHeaders} map: every non-transport header starting with the prefix, keyed by the remainder. */
class PrefixHeadersDeserializer final : public NothingDeserializer {
 public:
  PrefixHeadersDeserializer(const Aws::Vector<std::pair<Aws::String, Aws::String>>& matches, const Schema& member)
      : m_matches(matches), m_member(member) {}

  void ReadMap(const Schema&, const MapEntryConsumer& consumer) override {
    for (const auto& match : m_matches) {
      HeaderTextDeserializer value(match.second, &m_member);
      consumer(match.first, value);
    }
  }

 private:
  const Aws::Vector<std::pair<Aws::String, Aws::String>>& m_matches;
  const Schema& m_member;
};

/** Reads the HTTP status code. */
class StatusDeserializer final : public NothingDeserializer {
 public:
  explicit StatusDeserializer(int status) : m_status(status) {}
  Aws::Crt::Optional<int> ReadInteger(const Schema&) override { return m_status; }
  Aws::Crt::Optional<int64_t> ReadLong(const Schema&) override { return static_cast<int64_t>(m_status); }

 private:
  int m_status;
};

/** Reads a blob / string {@code @httpPayload} member from the raw body bytes. */
class RawBodyDeserializer final : public NothingDeserializer {
 public:
  explicit RawBodyDeserializer(Aws::Crt::ByteCursor body) : m_body(body) {}
  Aws::Crt::Optional<Aws::String> ReadString(const Schema&) override {
    return Aws::String(reinterpret_cast<const char*>(m_body.ptr), m_body.len);
  }
  Aws::Crt::Optional<ByteBuffer> ReadBlob(const Schema&) override { return ByteBuffer(m_body.ptr, m_body.len); }

 private:
  Aws::Crt::ByteCursor m_body;
};

}  // namespace

HttpBinding ClassifyHttpMember(const Schema& member, HttpBindingDirection direction) {
  const bool request = direction == HttpBindingDirection::Request;
  if (member.HasTrait(HttpHeaderTrait::KEY())) {
    return HttpBinding::Header;
  }
  if (member.HasTrait(HttpQueryTrait::KEY())) {
    return request ? HttpBinding::Query : HttpBinding::Body;
  }
  if (member.HasTrait(HttpPrefixHeadersTrait::KEY())) {
    return HttpBinding::PrefixHeaders;
  }
  if (member.HasTrait(HttpLabelTrait::KEY())) {
    return request ? HttpBinding::Label : HttpBinding::Body;
  }
  if (member.HasTrait(HttpQueryParamsTrait::KEY())) {
    return request ? HttpBinding::QueryParams : HttpBinding::Body;
  }
  if (member.HasTrait(HttpPayloadTrait::KEY())) {
    return HttpBinding::Payload;
  }
  if (member.HasTrait(HttpResponseCodeTrait::KEY())) {
    return request ? HttpBinding::Body : HttpBinding::Status;
  }
  return HttpBinding::Body;
}

HttpRequestOutcome SerializeHttpBindings(const OperationRequestContext& operation, const SerializableStruct& input,
                                         const ClientProtocol& bodyProtocol, bool allowEmptyStructPayload) {
  const Schema& schema = input.GetSchema();
  RequestRouter router(bodyProtocol);
  input.SerializeMembers(router);
  if (router.PayloadError()) {
    return *router.PayloadError();
  }

  HttpRequestParts parts;

  // Path + URI query literals from the operation's URI pattern.
  const size_t queryStart = operation.uriPattern.find('?');
  Aws::String missing;
  if (!ExpandLabels(operation.uriPattern.substr(0, queryStart), router.Labels(), true, parts.path, missing)) {
    return SerializationError("Missing or empty value for URI label '" + missing + "'");
  }
  if (!operation.hostPrefix.empty() && !ExpandLabels(operation.hostPrefix, router.HostLabels(), false, parts.hostPrefix, missing)) {
    return SerializationError("Missing or empty value for host label '" + missing + "'");
  }

  Aws::Vector<Aws::String> query;
  Aws::Set<Aws::String> reservedKeys;
  if (queryStart != Aws::String::npos) {
    for (const auto& literal : StringUtils::Split(operation.uriPattern.substr(queryStart + 1), '&')) {
      query.push_back(literal);
      reservedKeys.insert(literal.substr(0, literal.find('=')));
    }
  }
  for (const auto& param : router.Query()) {
    query.push_back(hbv::EncodeUnreserved(param.first, false) + "=" + hbv::EncodeUnreserved(param.second, false));
    reservedKeys.insert(param.first);
  }
  // @httpQuery members (and URI literals) win over @httpQueryParams regardless of member order.
  for (const auto& param : router.QueryParams()) {
    if (reservedKeys.count(param.first) > 0) {
      continue;
    }
    for (const auto& value : param.second) {
      query.push_back(hbv::EncodeUnreserved(param.first, false) + "=" + hbv::EncodeUnreserved(value, false));
    }
  }
  for (size_t i = 0; i < query.size(); ++i) {
    parts.query += (i > 0 ? "&" : "") + query[i];
  }

  // Headers: an explicit @httpHeader wins over a prefix-header entry of the same name.
  parts.headers = router.Headers();
  Aws::Set<Aws::String> headerNames;
  for (const auto& header : parts.headers) {
    headerNames.insert(Lower(header.first));
  }
  for (const auto& header : router.PrefixHeaders()) {
    if (headerNames.insert(Lower(header.first)).second) {
      parts.headers[header.first] = header.second;
    }
  }

  // Body: the payload member, else the body members, else none.
  const Schema* payloadMember = nullptr;
  bool hasBodyMembers = false;
  for (uint16_t i = 0; i < schema.GetMemberCount(); ++i) {
    const auto member = schema.GetMember(static_cast<int>(i));
    if (!member) {
      continue;
    }
    const HttpBinding binding = ClassifyHttpMember(**member, HttpBindingDirection::Request);
    if (binding == HttpBinding::Payload) {
      payloadMember = member->get();
    } else if (binding == HttpBinding::Body) {
      hasBodyMembers = true;
    }
  }
  Aws::String contentType;
  if (router.HasPayload()) {
    parts.body = std::move(router.Payload());
    contentType = router.PayloadContentType();
  } else if (payloadMember && allowEmptyStructPayload &&
             (payloadMember->GetType() == ShapeType::Structure || payloadMember->GetType() == ShapeType::Union)) {
    const auto empty = bodyProtocol.SerializeInput(*payloadMember, EmptyStruct(*payloadMember));
    if (!empty.IsSuccess()) {
      return empty.GetError();
    }
    parts.body = empty.GetResult();
    contentType = bodyProtocol.GetContentType();
  } else if (hasBodyMembers) {
    const auto body = bodyProtocol.SerializeInput(schema, BodyOnly(input));
    if (!body.IsSuccess()) {
      return body.GetError();
    }
    parts.body = body.GetResult();
    contentType = bodyProtocol.GetContentType();
  }
  if (parts.body && headerNames.count("content-type") == 0) {
    parts.contentType = contentType;
  }
  return parts;
}

void DeserializeHttpBindings(int statusCode, const Aws::Http::HeaderValueCollection& headers, Aws::Crt::ByteCursor body,
                             SerializableStruct& output, const ClientProtocol& bodyProtocol) {
  Aws::Map<Aws::String, Aws::String> lowered;
  for (const auto& header : headers) {
    lowered[Lower(header.first)] = header.second;
  }

  const Schema& schema = output.GetSchema();
  const Schema* payloadMember = nullptr;
  bool hasBodyMembers = false;
  for (uint16_t i = 0; i < schema.GetMemberCount(); ++i) {
    const auto memberPtr = schema.GetMember(static_cast<int>(i));
    if (!memberPtr) {
      continue;
    }
    const Schema& member = **memberPtr;
    switch (ClassifyHttpMember(member, HttpBindingDirection::Response)) {
      case HttpBinding::Header: {
        const auto header = lowered.find(Lower(member.GetTrait(HttpHeaderTrait::KEY())->GetName()));
        if (header != lowered.end()) {
          HeaderTextDeserializer value(header->second, &member);
          output.From(member, value);
        }
        break;
      }
      case HttpBinding::PrefixHeaders: {
        const Aws::String prefix = Lower(member.GetTrait(HttpPrefixHeadersTrait::KEY())->GetPrefix());
        Aws::Vector<std::pair<Aws::String, Aws::String>> matches;
        for (const auto& header : lowered) {
          if (header.first.compare(0, prefix.size(), prefix) == 0 && !hbv::IsOmittedPrefixHeader(header.first)) {
            matches.emplace_back(header.first.substr(prefix.size()), header.second);
          }
        }
        if (!matches.empty()) {
          PrefixHeadersDeserializer map(matches, member);
          output.From(member, map);
        }
        break;
      }
      case HttpBinding::Status: {
        StatusDeserializer status(statusCode);
        output.From(member, status);
        break;
      }
      case HttpBinding::Payload:
        payloadMember = &member;
        break;
      case HttpBinding::Body:
        hasBodyMembers = true;
        break;
      default:
        break;
    }
  }

  if (body.len == 0) {
    return;
  }
  if (payloadMember) {
    const ShapeType type = payloadMember->GetType();
    if (type == ShapeType::Blob || type == ShapeType::String || type == ShapeType::Enum) {
      RawBodyDeserializer raw(body);
      output.From(*payloadMember, raw);
    } else {
      auto deserializer = bodyProtocol.CreateOutputDeserializer(body);
      output.From(*payloadMember, *deserializer);
    }
    return;
  }
  if (hasBodyMembers) {
    auto deserializer = bodyProtocol.CreateOutputDeserializer(body);
    deserializer->ReadStruct(schema, [&output](const Schema& member, ShapeDeserializer& memberDeserializer) {
      if (ClassifyHttpMember(member, HttpBindingDirection::Response) == HttpBinding::Body) {
        output.From(member, memberDeserializer);
      }
    });
  }
}

}  // namespace schema
}  // namespace smithy
