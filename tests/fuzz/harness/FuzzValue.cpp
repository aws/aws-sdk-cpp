/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <harness/FuzzValue.h>
#include <harness/ScalarText.h>

#include <cmath>
#include <cstdlib>
#include <utility>

using Aws::Utils::StringUtils;

namespace smithy {
namespace schema {
namespace fuzz {

FuzzValue FuzzValue::Boolean(bool value) {
  FuzzValue v(Kind::Boolean);
  v.m_boolean = value;
  return v;
}
FuzzValue FuzzValue::Integer(int64_t value) {
  FuzzValue v(Kind::Integer);
  v.m_integer = value;
  return v;
}
FuzzValue FuzzValue::Double(double value) {
  FuzzValue v(Kind::Double);
  v.m_double = value;
  return v;
}
FuzzValue FuzzValue::String(Aws::String value) {
  FuzzValue v(Kind::String);
  v.m_string = std::move(value);
  return v;
}
FuzzValue FuzzValue::Blob(Aws::Utils::ByteBuffer value) {
  FuzzValue v(Kind::Blob);
  v.m_blob = std::move(value);
  return v;
}
FuzzValue FuzzValue::Timestamp(Aws::Utils::DateTime value) {
  FuzzValue v(Kind::Timestamp);
  v.m_timestamp = value;
  return v;
}
FuzzValue FuzzValue::FromDocument(std::shared_ptr<const smithy::schema::Document> value) {
  FuzzValue v(Kind::Document);
  v.m_document = std::move(value);
  return v;
}
FuzzValue FuzzValue::List(Aws::Vector<FuzzValue> items) {
  FuzzValue v(Kind::List);
  v.m_list = std::move(items);
  return v;
}
FuzzValue FuzzValue::Map(Aws::Map<Aws::String, FuzzValue> entries) {
  FuzzValue v(Kind::Map);
  v.m_map = std::move(entries);
  return v;
}
FuzzValue FuzzValue::Struct() { return FuzzValue(Kind::Struct); }

void FuzzValue::SetMember(int index, FuzzValue value) {
  m_members.erase(index);
  m_members.emplace(index, std::move(value));
}

Aws::String FuzzValue::Describe() const {
  switch (m_kind) {
    case Kind::Boolean:
      return m_boolean ? "true" : "false";
    case Kind::Integer:
      return StringUtils::to_string(m_integer);
    case Kind::Double: {
      Aws::OStringStream ss;
      ss.precision(17);
      ss << m_double;
      return ss.str();
    }
    case Kind::String:
      return "\"" + m_string + "\"";
    case Kind::Blob:
      return "blob[" + StringUtils::to_string(m_blob.GetLength()) + "]";
    case Kind::Timestamp:
      return "ts(" + StringUtils::to_string(m_timestamp.Millis()) + "ms)";
    case Kind::Document:
      return "document";
    case Kind::List: {
      Aws::String out = "[";
      for (size_t i = 0; i < m_list.size(); ++i) {
        out += (i == 0 ? "" : ", ") + m_list[i].Describe();
      }
      return out + "]";
    }
    case Kind::Map: {
      Aws::String out = "{";
      for (const auto& entry : m_map) {
        out += (out.size() == 1 ? "" : ", ") + ("\"" + entry.first + "\": ") + entry.second.Describe();
      }
      return out + "}";
    }
    case Kind::Struct: {
      Aws::String out = "{";
      for (const auto& member : m_members) {
        out += (out.size() == 1 ? "#" : ", #") + StringUtils::to_string(member.first) + ": " + member.second.Describe();
      }
      return out + "}";
    }
  }
  return {};
}

CodecTolerance CodecTolerance::Json() {
  Options options;
  options.epochSecondsDecodeTruncates = true;
  return CodecTolerance(options);
}

CodecTolerance CodecTolerance::Cbor() {
  Options options;
  options.timestampsAlwaysInSeconds = true;
  options.dropsPreEpochTimestamps = true;
  options.cborDropsNegativeZeroSign = true;
  return CodecTolerance(options);
}

CodecTolerance CodecTolerance::Xml() {
  Options options;
  options.defaultTimestampFormat = TimestampFormatTrait::Format::DATE_TIME;
  options.epochSecondsDecodeTruncates = true;
  options.emptyContainerMayBeAbsent = true;
  return CodecTolerance(options);
}

CodecTolerance CodecTolerance::Exact() {
  Options options;
  options.exactTimestamps = true;
  return CodecTolerance(options);
}

CodecTolerance CodecTolerance::ReadByCrtJson() const {
  Options options = m_options;
  options.numbersReadAsDoubles = true;
  return CodecTolerance(options);
}

bool CodecTolerance::CompareTimestampsInSeconds(const Schema& member) const {
  return !m_options.exactTimestamps &&
         (m_options.timestampsAlwaysInSeconds ||
          ResolveTimestampFormat(member, m_options.defaultTimestampFormat) != TimestampFormatTrait::Format::EPOCH_SECONDS);
}

namespace {

bool SameFloatingPoint(double expected, double actual) {
  if (std::isnan(expected) || std::isnan(actual)) {
    return std::isnan(expected) && std::isnan(actual);
  }
  return expected == actual && std::signbit(expected) == std::signbit(actual);
}

bool SameFloatingPoint(double expected, double actual, const CodecTolerance& tolerance) {
  if (tolerance.CborDropsNegativeZeroSign() && expected == 0.0 && actual == 0.0 && std::signbit(expected) && !std::signbit(actual)) {
    return true;
  }
  return SameFloatingPoint(expected, actual);
}

bool IsIntegral(ShapeType type) {
  return type == ShapeType::Byte || type == ShapeType::Short || type == ShapeType::Integer || type == ShapeType::Long;
}

bool IsFloatingPoint(ShapeType type) { return type == ShapeType::Float || type == ShapeType::Double; }

// DateTime::Seconds() and system_clock::to_time_t truncate toward zero.
bool SameTimestampTruncatedToSeconds(int64_t expectedMillis, int64_t actualMillis) {
  return actualMillis % 1000 == 0 && actualMillis == expectedMillis - expectedMillis % 1000;
}

int64_t LegacyEpochDecode(int64_t millis) {
  const auto seconds = ParseDoubleText(EpochSecondsText(Aws::Utils::DateTime(millis)));
  return seconds.has_value() ? Aws::Utils::DateTime(*seconds).Millis() : millis;
}

bool IsEmptyContainer(const FuzzValue& value) {
  return (value.GetKind() == FuzzValue::Kind::List && value.GetList().empty()) ||
         (value.GetKind() == FuzzValue::Kind::Map && value.GetMap().empty());
}

bool DroppedAsPreEpoch(const FuzzValue& value, const CodecTolerance& tolerance) {
  return tolerance.DropsPreEpochTimestamps() && value.GetKind() == FuzzValue::Kind::Timestamp && value.GetTimestamp().Millis() <= -1000;
}

Aws::String CompareValue(const FuzzValue& expected, const FuzzValue& actual, const Schema& member, const CodecTolerance& tolerance,
                         const Aws::String& path);

Aws::String CompareStruct(const FuzzValue& expected, const FuzzValue& actual, const Schema& structSchema, const CodecTolerance& tolerance,
                          const Aws::String& path) {
  if (structSchema.GetType() == ShapeType::Union && actual.GetMembers().size() > 1) {
    return path + ": union holds " + StringUtils::to_string(actual.GetMembers().size()) + " members";
  }
  for (const auto& entry : expected.GetMembers()) {
    const auto member = structSchema.GetMember(entry.first);
    if (!member.has_value() || !*member) {
      return path + ": member #" + StringUtils::to_string(entry.first) + " is not in schema " + structSchema.GetId();
    }
    const Aws::String memberPath = path + "." + (*member)->GetMemberName();
    const auto found = actual.GetMembers().find(entry.first);
    if (found != actual.GetMembers().end()) {
      const Aws::String mismatch = CompareValue(entry.second, found->second, **member, tolerance, memberPath);
      if (!mismatch.empty()) {
        return mismatch;
      }
    } else {
      const bool droppedEmpty = tolerance.EmptyContainerMayBeAbsent() && IsEmptyContainer(entry.second);
      if (!droppedEmpty && !DroppedAsPreEpoch(entry.second, tolerance)) {
        return memberPath + ": missing, expected " + entry.second.Describe();
      }
    }
  }
  for (const auto& entry : actual.GetMembers()) {
    if (expected.GetMembers().find(entry.first) == expected.GetMembers().end()) {
      const auto member = structSchema.GetMember(entry.first);
      const Aws::String name = member.has_value() && *member ? (*member)->GetMemberName() : "#" + StringUtils::to_string(entry.first);
      return path + "." + name + ": unexpected " + entry.second.Describe();
    }
  }
  return {};
}

__attribute__((noinline)) Aws::String CompareScalar(const FuzzValue& expected, const FuzzValue& actual, const Schema& member,
                                                    const CodecTolerance& tolerance, const Aws::String& path) {
  if (tolerance.NumbersReadAsDoubles() && IsIntegral(member.GetType()) && expected.GetKind() != actual.GetKind()) {
    const auto asDouble = [](const FuzzValue& v) {
      return v.GetKind() == FuzzValue::Kind::Integer ? static_cast<double>(v.GetInteger()) : v.GetDouble();
    };
    return asDouble(expected) == asDouble(actual) ? Aws::String() : path + ": " + expected.Describe() + " != " + actual.Describe();
  }
  switch (expected.GetKind()) {
    case FuzzValue::Kind::Boolean:
      return expected.GetBoolean() == actual.GetBoolean() ? Aws::String() : path + ": " + expected.Describe() + " != " + actual.Describe();
    case FuzzValue::Kind::Integer:
      return expected.GetInteger() == actual.GetInteger() ? Aws::String() : path + ": " + expected.Describe() + " != " + actual.Describe();
    case FuzzValue::Kind::Double: {
      const bool same = member.GetType() == ShapeType::Float
                            ? SameFloatingPoint(static_cast<float>(expected.GetDouble()), static_cast<float>(actual.GetDouble()), tolerance)
                            : SameFloatingPoint(expected.GetDouble(), actual.GetDouble(), tolerance);
      return same ? Aws::String() : path + ": " + expected.Describe() + " != " + actual.Describe();
    }
    case FuzzValue::Kind::String:
      return expected.GetString() == actual.GetString() ? Aws::String() : path + ": " + expected.Describe() + " != " + actual.Describe();
    case FuzzValue::Kind::Blob:
      return expected.GetBlob() == actual.GetBlob() ? Aws::String() : path + ": blob bytes differ";
    case FuzzValue::Kind::Timestamp: {
      const int64_t expectedMillis = expected.GetTimestamp().Millis();
      const int64_t actualMillis = actual.GetTimestamp().Millis();
      const bool same = tolerance.CompareTimestampsInSeconds(member)
                            ? SameTimestampTruncatedToSeconds(expectedMillis, actualMillis)
                            : expectedMillis == actualMillis ||
                                  (tolerance.EpochSecondsDecodeTruncates() && actualMillis == LegacyEpochDecode(expectedMillis));
      return same ? Aws::String() : path + ": " + expected.Describe() + " != " + actual.Describe();
    }
    case FuzzValue::Kind::Document:
      return DocumentsEquivalent(*expected.GetDocument(), *actual.GetDocument(), tolerance.NumbersReadAsDoubles())
                 ? Aws::String()
                 : path + ": documents differ";
    default:
      return {};
  }
}

__attribute__((noinline)) Aws::String CompareList(const FuzzValue& expected, const FuzzValue& actual, const Schema& member,
                                                  const CodecTolerance& tolerance, const Aws::String& path) {
  const auto target = member.GetMemberTarget();
  Aws::Vector<const FuzzValue*> kept;
  for (const auto& item : expected.GetList()) {
    if (!DroppedAsPreEpoch(item, tolerance)) {
      kept.push_back(&item);
    }
  }
  if (kept.size() != actual.GetList().size()) {
    return path + ": list size " + StringUtils::to_string(kept.size()) + " != " + StringUtils::to_string(actual.GetList().size());
  }
  const auto element = (*target)->GetMember("member").value();
  for (size_t i = 0; i < kept.size(); ++i) {
    const Aws::String mismatch =
        CompareValue(*kept[i], actual.GetList()[i], *element, tolerance, path + "[" + StringUtils::to_string(i) + "]");
    if (!mismatch.empty()) {
      return mismatch;
    }
  }
  return {};
}

__attribute__((noinline)) Aws::String CompareMap(const FuzzValue& expected, const FuzzValue& actual, const Schema& member,
                                                 const CodecTolerance& tolerance, const Aws::String& path) {
  const auto target = member.GetMemberTarget();
  size_t keptCount = 0;
  for (const auto& entry : expected.GetMap()) {
    if (!DroppedAsPreEpoch(entry.second, tolerance)) {
      ++keptCount;
    }
  }
  if (keptCount != actual.GetMap().size()) {
    return path + ": map size " + StringUtils::to_string(keptCount) + " != " + StringUtils::to_string(actual.GetMap().size());
  }
  const auto valueMember = (*target)->GetMember("value").value();
  for (const auto& entry : expected.GetMap()) {
    if (!DroppedAsPreEpoch(entry.second, tolerance)) {
      const auto found = actual.GetMap().find(entry.first);
      if (found == actual.GetMap().end()) {
        return path + "[\"" + entry.first + "\"]: missing key";
      }
      const Aws::String mismatch = CompareValue(entry.second, found->second, *valueMember, tolerance, path + "[\"" + entry.first + "\"]");
      if (!mismatch.empty()) {
        return mismatch;
      }
    }
  }
  return {};
}

Aws::String CompareValue(const FuzzValue& expected, const FuzzValue& actual, const Schema& member, const CodecTolerance& tolerance,
                         const Aws::String& path) {
  const bool inexactInteger = tolerance.NumbersReadAsDoubles() && IsIntegral(member.GetType());
  if (expected.GetKind() != actual.GetKind() && !inexactInteger) {
    return path + ": kind differs, expected " + expected.Describe() + " got " + actual.Describe();
  }
  switch (expected.GetKind()) {
    case FuzzValue::Kind::List:
      return CompareList(expected, actual, member, tolerance, path);
    case FuzzValue::Kind::Map:
      return CompareMap(expected, actual, member, tolerance, path);
    case FuzzValue::Kind::Struct:
      return CompareStruct(expected, actual, **member.GetMemberTarget(), tolerance, path);
    default:
      return CompareScalar(expected, actual, member, tolerance, path);
  }
}

Aws::Crt::Optional<double> NumberAsDouble(const smithy::schema::Document& number) {
  if (IsIntegral(number.GetType())) {
    const auto value = number.AsLong();
    return value.has_value() ? Aws::Crt::Optional<double>(static_cast<double>(value.value())) : Aws::Crt::Optional<double>();
  }
  return IsFloatingPoint(number.GetType()) ? number.AsDouble() : Aws::Crt::Optional<double>();
}

}  // namespace

Aws::String FindMismatch(const FuzzValue& expected, const FuzzValue& actual, const Schema& structSchema, const CodecTolerance& tolerance) {
  return CompareStruct(expected, actual, structSchema, tolerance, structSchema.GetId());
}

bool ContainsDocument(const FuzzValue& value) {
  switch (value.GetKind()) {
    case FuzzValue::Kind::Document:
      return true;
    case FuzzValue::Kind::List:
      for (const auto& item : value.GetList()) {
        if (ContainsDocument(item)) {
          return true;
        }
      }
      return false;
    case FuzzValue::Kind::Map:
      for (const auto& entry : value.GetMap()) {
        if (ContainsDocument(entry.second)) {
          return true;
        }
      }
      return false;
    case FuzzValue::Kind::Struct:
      for (const auto& entry : value.GetMembers()) {
        if (ContainsDocument(entry.second)) {
          return true;
        }
      }
      return false;
    default:
      return false;
  }
}

bool DocumentsEquivalent(const smithy::schema::Document& expected, const smithy::schema::Document& actual, bool numbersByValue) {
  const bool numbers = (IsIntegral(expected.GetType()) || IsFloatingPoint(expected.GetType())) &&
                       (IsIntegral(actual.GetType()) || IsFloatingPoint(actual.GetType()));
  if (numbersByValue && numbers) {
    const auto e = NumberAsDouble(expected);
    const auto a = NumberAsDouble(actual);
    return e.has_value() && a.has_value() && (e.value() == a.value() || (std::isnan(e.value()) && std::isnan(a.value())));
  }
  if (IsIntegral(expected.GetType())) {
    const auto el = expected.AsLong();
    const auto al = IsIntegral(actual.GetType()) ? actual.AsLong() : Aws::Crt::Optional<int64_t>();
    return el.has_value() && al.has_value() && el.value() == al.value();
  }
  if (IsFloatingPoint(expected.GetType())) {
    const auto e = expected.AsDouble();
    const auto a = IsFloatingPoint(actual.GetType()) ? actual.AsDouble() : Aws::Crt::Optional<double>();
    if (e.has_value() && a.has_value()) {
      return SameFloatingPoint(e.value(), a.value());
    }
    const auto text = actual.GetType() == ShapeType::String ? actual.AsString() : Aws::Crt::Optional<Aws::String>();
    return e.has_value() && !std::isfinite(e.value()) && text.has_value() &&
           text.value() == (std::isnan(e.value()) ? "NaN" : (e.value() > 0 ? "Infinity" : "-Infinity"));
  }
  if (expected.GetType() != actual.GetType()) {
    return false;
  }
  if (expected.GetType() == ShapeType::List) {
    const auto el = expected.AsList();
    const auto al = actual.AsList();
    if (!el || !al || el->size() != al->size()) {
      return false;
    }
    for (size_t i = 0; i < el->size(); ++i) {
      if (!DocumentsEquivalent(*(*el)[i], *(*al)[i], numbersByValue)) {
        return false;
      }
    }
    return true;
  }
  if (expected.GetType() == ShapeType::Map) {
    const auto em = expected.AsMap();
    const auto am = actual.AsMap();
    if (!em || !am || em->size() != am->size()) {
      return false;
    }
    for (const auto& entry : *em) {
      const auto found = am->find(entry.first);
      if (found == am->end() || !DocumentsEquivalent(*entry.second, *found->second, numbersByValue)) {
        return false;
      }
    }
    return true;
  }
  return expected == actual;
}

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
