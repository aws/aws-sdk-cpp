/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <cstdint>
#include <memory>

namespace smithy {
namespace schema {
namespace fuzz {

class FuzzValue final {
 public:
  enum class Kind { Boolean, Integer, Double, String, Blob, Timestamp, Document, List, Map, Struct };

  static FuzzValue Boolean(bool value);
  static FuzzValue Integer(int64_t value);
  static FuzzValue Double(double value);
  static FuzzValue String(Aws::String value);
  static FuzzValue Blob(Aws::Utils::ByteBuffer value);
  static FuzzValue Timestamp(Aws::Utils::DateTime value);
  static FuzzValue FromDocument(std::shared_ptr<const smithy::schema::Document> value);
  static FuzzValue List(Aws::Vector<FuzzValue> items);
  static FuzzValue Map(Aws::Map<Aws::String, FuzzValue> entries);
  static FuzzValue Struct();

  Kind GetKind() const { return m_kind; }
  bool GetBoolean() const { return m_boolean; }
  int64_t GetInteger() const { return m_integer; }
  double GetDouble() const { return m_double; }
  const Aws::String& GetString() const { return m_string; }
  const Aws::Utils::ByteBuffer& GetBlob() const { return m_blob; }
  const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  const std::shared_ptr<const smithy::schema::Document>& GetDocument() const { return m_document; }
  const Aws::Vector<FuzzValue>& GetList() const { return m_list; }
  const Aws::Map<Aws::String, FuzzValue>& GetMap() const { return m_map; }
  const Aws::Map<int, FuzzValue>& GetMembers() const { return m_members; }

  void SetMember(int index, FuzzValue value);

  Aws::String Describe() const;

 private:
  explicit FuzzValue(Kind kind) : m_kind(kind) {}

  Kind m_kind;
  bool m_boolean = false;
  int64_t m_integer = 0;
  double m_double = 0.0;
  Aws::String m_string;
  Aws::Utils::ByteBuffer m_blob;
  Aws::Utils::DateTime m_timestamp;
  std::shared_ptr<const smithy::schema::Document> m_document;
  Aws::Vector<FuzzValue> m_list;
  Aws::Map<Aws::String, FuzzValue> m_map;
  Aws::Map<int, FuzzValue> m_members;
};

class CodecTolerance final {
 public:
  struct Options {
    TimestampFormatTrait::Format defaultTimestampFormat = TimestampFormatTrait::Format::EPOCH_SECONDS;
    // For comparing two generated values, not a codec round trip.
    bool exactTimestamps = false;
    bool timestampsAlwaysInSeconds = false;
    bool dropsPreEpochTimestamps = false;
    bool epochSecondsDecodeTruncates = false;
    bool emptyContainerMayBeAbsent = false;
    bool cborDropsNegativeZeroSign = false;
    // cJSON reads every number as a double.
    bool numbersReadAsDoubles = false;
  };

  static CodecTolerance Json();
  static CodecTolerance Cbor();
  static CodecTolerance Xml();
  static CodecTolerance Exact();

  CodecTolerance ReadByCrtJson() const;

  bool CompareTimestampsInSeconds(const Schema& member) const;
  bool DropsPreEpochTimestamps() const { return m_options.dropsPreEpochTimestamps; }
  bool EpochSecondsDecodeTruncates() const { return !m_options.exactTimestamps && m_options.epochSecondsDecodeTruncates; }
  bool EmptyContainerMayBeAbsent() const { return m_options.emptyContainerMayBeAbsent; }
  bool CborDropsNegativeZeroSign() const { return m_options.cborDropsNegativeZeroSign; }
  bool NumbersReadAsDoubles() const { return m_options.numbersReadAsDoubles; }

 private:
  explicit CodecTolerance(const Options& options) : m_options(options) {}

  Options m_options;
};

// Empty when `actual` is an acceptable round trip of `expected`; otherwise the first difference.
Aws::String FindMismatch(const FuzzValue& expected, const FuzzValue& actual, const Schema& structSchema, const CodecTolerance& tolerance);

bool ContainsDocument(const FuzzValue& value);

// Numbers keep their type unless `numbersByValue`; a non-finite double may come back as its JSON string.
bool DocumentsEquivalent(const smithy::schema::Document& expected, const smithy::schema::Document& actual, bool numbersByValue = false);

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
