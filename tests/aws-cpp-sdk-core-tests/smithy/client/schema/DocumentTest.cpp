/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/Schema.h>

#include <limits>

using namespace smithy::schema;

// Named SchemaDocumentTest (not DocumentTest) to avoid a gtest suite-name collision with the
// pre-existing tests/aws-cpp-sdk-core-tests/utils/DocumentTest.cpp fixture in the same test binary.
class SchemaDocumentTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(SchemaDocumentTest, FactoriesReportType) {
  EXPECT_EQ(Document::Null().GetType(), ShapeType::Null);
  EXPECT_TRUE(Document::Null().IsNull());
  EXPECT_EQ(Document::FromBoolean(true).GetType(), ShapeType::Boolean);
  EXPECT_EQ(Document::FromInteger(7).GetType(), ShapeType::Long);
  EXPECT_EQ(Document::FromDouble(1.5).GetType(), ShapeType::Double);
  EXPECT_EQ(Document::FromString("hi").GetType(), ShapeType::String);
  EXPECT_EQ(Document::FromList({}).GetType(), ShapeType::List);
  EXPECT_EQ(Document::FromMap({}).GetType(), ShapeType::Map);
}

TEST_F(SchemaDocumentTest, AccessorsReturnValueOrEmptyOnMismatch) {
  EXPECT_EQ(Document::FromInteger(42).AsInteger().value(), 42);
  EXPECT_FALSE(Document::FromInteger(42).AsString().has_value());
  EXPECT_EQ(Document::FromString("x").AsString().value(), "x");
  EXPECT_FALSE(Document::FromString("x").AsBoolean().has_value());
  EXPECT_EQ(Document::FromMap({}).AsList(), nullptr);
  EXPECT_NE(Document::FromMap({}).AsMap(), nullptr);
}

TEST_F(SchemaDocumentTest, NumericAccessorsCoerce) {
  // Stored Long coerces to double/float; stored Double truncates to integer/long (SEP number coercion).
  EXPECT_DOUBLE_EQ(Document::FromInteger(5).AsDouble().value(), 5.0);
  EXPECT_FLOAT_EQ(Document::FromInteger(5).AsFloat().value(), 5.0f);
  EXPECT_EQ(Document::FromDouble(3.9).AsInteger().value(), 3);
  EXPECT_EQ(Document::FromDouble(3.9).AsLong().value(), 3);
  EXPECT_DOUBLE_EQ(Document::FromDouble(2.5).AsDouble().value(), 2.5);
  EXPECT_FALSE(Document::FromString("5").AsInteger().has_value());
}

TEST_F(SchemaDocumentTest, AgnosticBlobCoercion) {
  unsigned char raw[] = {'h', 'i'};
  Aws::Utils::ByteBuffer buf(raw, 2);
  EXPECT_EQ(Document::FromBlob(buf).AsBlob().value(), buf);          // Blob node: identity
  EXPECT_FALSE(Document::FromString("aGk=").AsBlob().has_value());   // agnostic: no base64 interpretation
  EXPECT_FALSE(Document::FromString("!!!not-base64!!!").AsBlob().has_value());
}

TEST_F(SchemaDocumentTest, AgnosticTimestampCoercion) {
  Aws::Utils::DateTime ts(1700000000.0);
  EXPECT_TRUE(Document::FromTimestamp(ts).AsTimestamp().has_value());              // Timestamp node: identity
  EXPECT_FALSE(Document::FromInteger(1700000000).AsTimestamp().has_value());       // agnostic: no epoch coercion
  EXPECT_FALSE(Document::FromString("2023-11-14T22:13:20Z").AsTimestamp().has_value());  // agnostic: no ISO parse
}

TEST_F(SchemaDocumentTest, MemberAccess) {
  Aws::Map<Aws::String, Document> obj;
  obj.emplace("a", Document::FromInteger(1));
  obj.emplace("b", Document::FromString("v"));
  Document doc = Document::FromMap(std::move(obj));
  ASSERT_NE(doc.GetMember("a"), nullptr);
  EXPECT_EQ(doc.GetMember("a")->AsInteger().value(), 1);
  EXPECT_EQ(doc.GetMember("missing"), nullptr);
  EXPECT_EQ(doc.GetMemberNames().size(), 2u);
  EXPECT_EQ(Document::FromString("x").GetMember("a"), nullptr);
  EXPECT_TRUE(Document::FromString("x").GetMemberNames().empty());
}

TEST_F(SchemaDocumentTest, NonFiniteOrOutOfRangeDoubleDoesNotCoerceToInteger) {
  // static_cast<int64_t> of a non-finite/out-of-range double is UB; the guard returns empty instead.
  EXPECT_FALSE(Document::FromDouble(std::numeric_limits<double>::infinity()).AsLong().has_value());
  EXPECT_FALSE(Document::FromDouble(std::numeric_limits<double>::quiet_NaN()).AsInteger().has_value());
  EXPECT_FALSE(Document::FromDouble(1e300).AsLong().has_value());
  // A finite in-range double still coerces.
  EXPECT_EQ(Document::FromDouble(7.9).AsLong().value(), 7);
}

TEST_F(SchemaDocumentTest, OutOfRangeDoubleDoesNotCoerceToFloat) {
  // static_cast<float> of a finite double beyond float range is UB; the guard returns empty
  // (mirroring the AsLong out-of-range guard).
  EXPECT_FALSE(Document::FromDouble(1e300).AsFloat().has_value());
  EXPECT_FALSE(Document::FromDouble(-1e300).AsFloat().has_value());
  // In-range doubles still coerce (with the precision loss the SEP permits).
  EXPECT_FLOAT_EQ(Document::FromDouble(1.5).AsFloat().value(), 1.5f);
}

TEST_F(SchemaDocumentTest, EqualityCoversListBlobTimestampVariants) {
  Aws::Vector<Document> a;
  a.push_back(Document::FromInteger(1));
  Aws::Vector<Document> b;
  b.push_back(Document::FromInteger(1));
  EXPECT_TRUE(Document::FromList(std::move(a)) == Document::FromList(std::move(b)));
  Aws::Utils::ByteBuffer bytes(reinterpret_cast<const unsigned char*>("z"), 1);
  EXPECT_TRUE(Document::FromBlob(bytes) == Document::FromBlob(bytes));
  auto ts = Aws::Utils::DateTime(static_cast<double>(100));
  EXPECT_TRUE(Document::FromTimestamp(ts) == Document::FromTimestamp(ts));
  EXPECT_TRUE(Document::FromInteger(1) != Document::FromDouble(1.0));  // different stored kind
}

TEST_F(SchemaDocumentTest, EqualityComparesActiveMemberRecursively) {
  Aws::Map<Aws::String, Document> a;
  a.emplace("n", Document::FromInteger(1));
  a.emplace("s", Document::FromString("v"));
  Aws::Map<Aws::String, Document> b = a;
  EXPECT_TRUE(Document::FromMap(std::move(a)) == Document::FromMap(std::move(b)));
  EXPECT_TRUE(Document::FromInteger(1) != Document::FromString("1"));
}

TEST_F(SchemaDocumentTest, SerializeContentsScalarThroughJson) {
  JsonShapeSerializer s;
  auto schema = Schema::CreateDocument("smithy.api#Document");
  Document::FromString("hello \"world\"").SerializeContents(s, *schema);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "\"hello \\\"world\\\"\"");
}

TEST_F(SchemaDocumentTest, SerializeContentsNestedThroughJson) {
  JsonShapeSerializer s;
  auto schema = Schema::CreateDocument("smithy.api#Document");
  Aws::Vector<Document> list;
  list.push_back(Document::FromInteger(1));
  list.push_back(Document::FromBoolean(true));
  Aws::Map<Aws::String, Document> obj;
  obj.emplace("items", Document::FromList(std::move(list)));
  obj.emplace("name", Document::FromString("n"));
  Document::FromMap(std::move(obj)).SerializeContents(s, *schema);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& json = outcome.GetResult();
  EXPECT_NE(json.find("\"items\":[1,true]"), Aws::String::npos);
  EXPECT_NE(json.find("\"name\":\"n\""), Aws::String::npos);
}
