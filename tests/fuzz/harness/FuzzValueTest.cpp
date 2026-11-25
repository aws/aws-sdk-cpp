/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <gtest/gtest.h>
#include <harness/FuzzValue.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <limits>

using namespace smithy::schema;
using namespace smithy::schema::fuzz;

namespace {

std::shared_ptr<const Schema> Root() {
  auto list = Schema::ListBuilder("t#IntList").PutMember("member", Schema::CreateInteger("t#Int")).Build();
  auto timestamps = Schema::ListBuilder("t#TsList").PutMember("member", Schema::CreateTimestamp("t#Ts")).Build();
  return Schema::StructureBuilder("t#Root")
      .PutMember("i", Schema::CreateInteger("t#Int"))
      .PutMember("f", Schema::CreateFloat("t#Float"))
      .PutMember("d", Schema::CreateDouble("t#Double"))
      .PutMember("ts", Schema::CreateTimestamp("t#Ts"))
      .PutMember("list", list)
      .PutMember("doc", Schema::CreateDocument("t#Doc"))
      .PutMember("tslist", timestamps)
      .PutMember("tsmap", Schema::MapBuilder("t#TsMap")
                              .PutMember("key", Schema::CreateString("t#Key"))
                              .PutMember("value", Schema::CreateTimestamp("t#Ts"))
                              .Build())
      .Build();
}

FuzzValue Ts(int64_t millis) { return FuzzValue::Timestamp(Aws::Utils::DateTime(millis)); }

FuzzValue With(int index, FuzzValue v) {
  FuzzValue s = FuzzValue::Struct();
  s.SetMember(index, std::move(v));
  return s;
}

}  // namespace

TEST(FuzzValue, IdenticalTreesMatch) {
  auto root = Root();
  auto v = With(0, FuzzValue::Integer(7));
  EXPECT_EQ(FindMismatch(v, v, *root, CodecTolerance::Json()), "");
}

TEST(FuzzValue, DifferentIntegerNamesTheMember) {
  auto root = Root();
  const auto mismatch = FindMismatch(With(0, FuzzValue::Integer(7)), With(0, FuzzValue::Integer(8)), *root, CodecTolerance::Json());
  EXPECT_NE(mismatch.find("i"), Aws::String::npos);
}

TEST(FuzzValue, MissingAndExtraMembersMismatch) {
  auto root = Root();
  EXPECT_NE(FindMismatch(With(0, FuzzValue::Integer(1)), FuzzValue::Struct(), *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(FuzzValue::Struct(), With(0, FuzzValue::Integer(1)), *root, CodecTolerance::Json()), "");
}

TEST(FuzzValue, UnionWithTwoMembersMismatchesEvenAgainstItself) {
  auto variants =
      Schema::UnionBuilder("t#U").PutMember("a", Schema::CreateInteger("t#Int")).PutMember("b", Schema::CreateInteger("t#Int")).Build();
  FuzzValue both = With(0, FuzzValue::Integer(1));
  both.SetMember(1, FuzzValue::Integer(2));
  EXPECT_NE(FindMismatch(both, both, *variants, CodecTolerance::Exact()).find("union holds 2 members"), Aws::String::npos);
  EXPECT_EQ(FindMismatch(With(1, FuzzValue::Integer(2)), With(1, FuzzValue::Integer(2)), *variants, CodecTolerance::Exact()), "");
}

TEST(FuzzValue, NanMatchesNanButSignedZeroDoesNotMatchZero) {
  auto root = Root();
  const double nan = std::numeric_limits<double>::quiet_NaN();
  EXPECT_EQ(FindMismatch(With(2, FuzzValue::Double(nan)), With(2, FuzzValue::Double(nan)), *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(With(2, FuzzValue::Double(-0.0)), With(2, FuzzValue::Double(0.0)), *root, CodecTolerance::Json()), "");
}

TEST(FuzzValue, CborMayDropNegativeZeroSign) {
  auto root = Root();
  for (const int member : {1, 2}) {
    EXPECT_EQ(FindMismatch(With(member, FuzzValue::Double(-0.0)), With(member, FuzzValue::Double(0.0)), *root, CodecTolerance::Cbor()), "");
    EXPECT_NE(FindMismatch(With(member, FuzzValue::Double(0.0)), With(member, FuzzValue::Double(-0.0)), *root, CodecTolerance::Cbor()), "");
    EXPECT_NE(FindMismatch(With(member, FuzzValue::Double(-0.0)), With(member, FuzzValue::Double(0.0)), *root, CodecTolerance::Json()), "");
    EXPECT_NE(FindMismatch(With(member, FuzzValue::Double(-0.0)), With(member, FuzzValue::Double(0.0)), *root, CodecTolerance::Xml()), "");
    EXPECT_NE(FindMismatch(With(member, FuzzValue::Double(1.0)), With(member, FuzzValue::Double(0.0)), *root, CodecTolerance::Cbor()), "");
    EXPECT_NE(FindMismatch(With(member, FuzzValue::Double(0.0)), With(member, FuzzValue::Double(1.0)), *root, CodecTolerance::Cbor()), "");
  }
}

TEST(FuzzValue, FloatMembersCompareAtFloatPrecision) {
  auto root = Root();
  const double widened = static_cast<double>(0.1f);
  EXPECT_EQ(FindMismatch(With(1, FuzzValue::Double(widened)), With(1, FuzzValue::Double(widened)), *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(With(1, FuzzValue::Double(widened)), With(1, FuzzValue::Double(0.2)), *root, CodecTolerance::Json()), "");
}

TEST(FuzzValue, TimestampPrecisionDependsOnCodecAndFormat) {
  auto root = Root();
  auto expected = With(3, Ts(1500));
  auto actual = With(3, Ts(1000));
  EXPECT_NE(FindMismatch(expected, actual, *root, CodecTolerance::Json()), "");  // JSON default is epoch-seconds with millis
  EXPECT_EQ(FindMismatch(expected, actual, *root, CodecTolerance::Cbor()), "");  // CBOR truncates to seconds by design
  EXPECT_EQ(FindMismatch(expected, actual, *root, CodecTolerance::Xml()), "");   // XML default is date-time
}

TEST(FuzzValue, SecondsPrecisionRequiresTruncationTowardZero) {
  auto root = Root();
  for (const auto& tolerance : {CodecTolerance::Cbor(), CodecTolerance::Xml()}) {
    EXPECT_EQ(FindMismatch(With(3, Ts(1500)), With(3, Ts(1000)), *root, tolerance), "");
    EXPECT_NE(FindMismatch(With(3, Ts(1500)), With(3, Ts(2000)), *root, tolerance), "");
    EXPECT_NE(FindMismatch(With(3, Ts(1500)), With(3, Ts(1500)), *root, tolerance), "");
    EXPECT_NE(FindMismatch(With(3, Ts(1500)), With(3, Ts(0)), *root, tolerance), "");
    EXPECT_EQ(FindMismatch(With(3, Ts(1000)), With(3, Ts(1000)), *root, tolerance), "");
    EXPECT_EQ(FindMismatch(With(3, Ts(-500)), With(3, Ts(0)), *root, tolerance), "");
    EXPECT_NE(FindMismatch(With(3, Ts(-500)), With(3, Ts(-1000)), *root, tolerance), "");
    EXPECT_NE(FindMismatch(With(3, Ts(-500)), With(3, Ts(-500)), *root, tolerance), "");
  }
}

TEST(FuzzValue, EpochSecondsAcceptsOnlyTheLegacyTruncatedDecode) {
  auto root = Root();
  // "4307758798.296" is stored just below .296, so DateTime(double) gives ...295.
  EXPECT_EQ(FindMismatch(With(3, Ts(4307758798296)), With(3, Ts(4307758798295)), *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(4307758798296)), With(3, Ts(4307758798294)), *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(4307758798296)), With(3, Ts(4307758798297)), *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(1500)), With(3, Ts(1499)), *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(4307758798296)), With(3, Ts(4307758798295)), *root, CodecTolerance::Exact()), "");
}

TEST(FuzzValue, ExactToleranceComparesSubSecondTimestampsOnSecondsFormattedMembers) {
  auto root = Root();
  EXPECT_EQ(FindMismatch(With(3, Ts(999)), With(3, Ts(999)), *root, CodecTolerance::Exact()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(999)), With(3, Ts(999)), *root, CodecTolerance::Xml()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(999)), With(3, Ts(0)), *root, CodecTolerance::Exact()), "");
}

TEST(FuzzValue, XmlSecondsPrecisionTruncatesPreEpochTowardZero) {
  auto root = Root();
  EXPECT_EQ(FindMismatch(With(3, Ts(-1500)), With(3, Ts(-1000)), *root, CodecTolerance::Xml()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(-1500)), With(3, Ts(-2000)), *root, CodecTolerance::Xml()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(-1500)), With(3, Ts(-1500)), *root, CodecTolerance::Xml()), "");
}

TEST(FuzzValue, CborMayDropPreEpochTimestamps) {
  auto root = Root();
  auto expected = With(3, FuzzValue::Timestamp(Aws::Utils::DateTime(static_cast<int64_t>(-5000))));
  EXPECT_EQ(FindMismatch(expected, FuzzValue::Struct(), *root, CodecTolerance::Cbor()), "");
  EXPECT_NE(FindMismatch(expected, FuzzValue::Struct(), *root, CodecTolerance::Json()), "");
}

TEST(FuzzValue, CborMayDropPreEpochTimestampsInsideCollections) {
  auto root = Root();
  const auto preEpoch = FuzzValue::Timestamp(Aws::Utils::DateTime(static_cast<int64_t>(-5000)));
  const auto atEpoch = FuzzValue::Timestamp(Aws::Utils::DateTime(static_cast<int64_t>(1000)));
  auto expected = With(6, FuzzValue::List({preEpoch, atEpoch}));
  auto actual = With(6, FuzzValue::List({atEpoch}));
  EXPECT_EQ(FindMismatch(expected, actual, *root, CodecTolerance::Cbor()), "");
  EXPECT_NE(FindMismatch(expected, actual, *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(expected, With(6, FuzzValue::List({preEpoch, atEpoch})), *root, CodecTolerance::Cbor()), "");
  EXPECT_NE(FindMismatch(With(6, FuzzValue::List({atEpoch})), With(6, FuzzValue::List({})), *root, CodecTolerance::Cbor()), "");
  const auto subSecond = FuzzValue::Timestamp(Aws::Utils::DateTime(static_cast<int64_t>(-999)));
  EXPECT_NE(FindMismatch(With(6, FuzzValue::List({subSecond})), With(6, FuzzValue::List({})), *root, CodecTolerance::Cbor()), "");
}

TEST(FuzzValue, CborMayDropPreEpochTimestampsInMapValues) {
  auto root = Root();
  const auto atEpoch = Ts(1000);
  auto expected = With(7, FuzzValue::Map({{"a", Ts(-5000)}, {"b", atEpoch}}));
  auto actual = With(7, FuzzValue::Map({{"b", atEpoch}}));
  EXPECT_EQ(FindMismatch(expected, actual, *root, CodecTolerance::Cbor()), "");
  EXPECT_NE(FindMismatch(expected, actual, *root, CodecTolerance::Json()), "");
  EXPECT_NE(FindMismatch(expected, With(7, FuzzValue::Map({{"a", Ts(-5000)}, {"b", atEpoch}})), *root, CodecTolerance::Cbor()), "");
  EXPECT_NE(FindMismatch(With(7, FuzzValue::Map({{"b", atEpoch}})), With(7, FuzzValue::Map({})), *root, CodecTolerance::Cbor()), "");
  EXPECT_NE(FindMismatch(With(7, FuzzValue::Map({{"b", Ts(-999)}})), With(7, FuzzValue::Map({})), *root, CodecTolerance::Cbor()), "");
}

TEST(FuzzValue, CborPreEpochDropBoundaryIsMinusOneSecond) {
  auto root = Root();
  EXPECT_EQ(FindMismatch(With(3, Ts(-1000)), FuzzValue::Struct(), *root, CodecTolerance::Cbor()), "");
  EXPECT_NE(FindMismatch(With(3, Ts(-999)), FuzzValue::Struct(), *root, CodecTolerance::Cbor()), "");
  EXPECT_EQ(FindMismatch(With(3, Ts(-999)), With(3, Ts(0)), *root, CodecTolerance::Cbor()), "");
}

TEST(FuzzValue, XmlMayDropEmptyContainers) {
  auto root = Root();
  auto expected = With(4, FuzzValue::List({}));
  EXPECT_EQ(FindMismatch(expected, FuzzValue::Struct(), *root, CodecTolerance::Xml()), "");
  EXPECT_NE(FindMismatch(expected, FuzzValue::Struct(), *root, CodecTolerance::Json()), "");
}

TEST(FuzzValue, ListElementDifferenceIsReported) {
  auto root = Root();
  auto a = With(4, FuzzValue::List({FuzzValue::Integer(1), FuzzValue::Integer(2)}));
  auto b = With(4, FuzzValue::List({FuzzValue::Integer(1), FuzzValue::Integer(3)}));
  EXPECT_NE(FindMismatch(a, b, *root, CodecTolerance::Json()).find("[1]"), Aws::String::npos);
}

namespace {

std::shared_ptr<const Document> Obj(Aws::Map<Aws::String, std::shared_ptr<const Document>> entries) {
  return Document::FromMap(std::move(entries));
}

}  // namespace

TEST(FuzzValue, DocumentIntegersRequireIntegersOfTheSameValue) {
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromInteger(5), *Document::FromInteger(5)));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromInteger(5), *Document::FromInteger(6)));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromInteger(9007199254740993LL), *Document::FromDouble(9007199254740992.0)));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromInteger(5), *Document::FromDouble(5.0)));
}

TEST(FuzzValue, DocumentDoublesRequireDoublesWithNanAndSignedZeroPreserved) {
  const double nan = std::numeric_limits<double>::quiet_NaN();
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromDouble(nan), *Document::FromDouble(nan)));
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromDouble(5.5), *Document::FromDouble(5.5)));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(-0.0), *Document::FromDouble(0.0)));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(5.0), *Document::FromInteger(5)));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(5.5), *Document::FromString("5.5")));
}

TEST(FuzzValue, DocumentNumbersByValueIgnoreTypeAndTheSignOfZero) {
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromDouble(5.0), *Document::FromInteger(5), true));
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromDouble(-0.0), *Document::FromInteger(0), true));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(5.5), *Document::FromInteger(5), true));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(-0.0), *Document::FromInteger(0)));
}

TEST(FuzzValue, NonFiniteDocumentDoublesMayReadBackAsTheirStrings) {
  const double inf = std::numeric_limits<double>::infinity();
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromDouble(std::numeric_limits<double>::quiet_NaN()), *Document::FromString("NaN")));
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromDouble(inf), *Document::FromString("Infinity")));
  EXPECT_TRUE(DocumentsEquivalent(*Document::FromDouble(-inf), *Document::FromString("-Infinity")));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(inf), *Document::FromString("-Infinity")));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(std::numeric_limits<double>::quiet_NaN()), *Document::FromString("nan")));
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromDouble(inf), *Document::FromDouble(-inf)));
}

TEST(FuzzValue, DocumentComparisonRecursesIntoContainers) {
  const auto list = [](int64_t last) { return Document::FromList({Document::FromInteger(1), Document::FromInteger(last)}); };
  EXPECT_TRUE(DocumentsEquivalent(*Obj({{"a", list(2)}}), *Obj({{"a", list(2)}})));
  EXPECT_FALSE(DocumentsEquivalent(*Obj({{"a", list(2)}}), *Obj({{"a", list(3)}})));
  EXPECT_FALSE(
      DocumentsEquivalent(*Obj({{"a", Obj({{"n", Document::FromInteger(1)}})}}), *Obj({{"a", Obj({{"n", Document::FromDouble(1.0)}})}})));
  EXPECT_FALSE(DocumentsEquivalent(*Obj({{"a", list(2)}}), *Obj({{"b", list(2)}})));
  EXPECT_FALSE(DocumentsEquivalent(*Obj({{"a", list(2)}, {"b", list(2)}}), *Obj({{"a", list(2)}})));
}

TEST(FuzzValue, DocumentsCompareScalarsAndContainers) {
  Aws::Map<Aws::String, std::shared_ptr<const Document>> m1{{"a", Document::FromString("x")}};
  Aws::Map<Aws::String, std::shared_ptr<const Document>> m2{{"a", Document::FromString("y")}};
  EXPECT_FALSE(DocumentsEquivalent(*Document::FromMap(m1), *Document::FromMap(m2)));
  EXPECT_TRUE(ContainsDocument(With(5, FuzzValue::FromDocument(Document::Null()))));
  EXPECT_FALSE(ContainsDocument(With(0, FuzzValue::Integer(1))));
}
