/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Types.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/Schema.h>

#include <limits>
#include <memory>

using namespace smithy::schema;

// Named SchemaDocumentTest (not DocumentTest) to avoid a gtest suite-name collision with the
// pre-existing tests/aws-cpp-sdk-core-tests/utils/DocumentTest.cpp fixture in the same test binary.
class SchemaDocumentTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {
// Stands in for a Document implemented outside the SDK: reports a String or Blob tag and nothing else.
class ExternalDocument final : public Document {
 public:
  static std::shared_ptr<const Document> String(Aws::String value) {
    return Aws::MakeShared<ExternalDocument>("ExternalDocument", ShapeType::String, std::move(value), Aws::Utils::ByteBuffer());
  }
  static std::shared_ptr<const Document> Blob(Aws::Utils::ByteBuffer value) {
    return Aws::MakeShared<ExternalDocument>("ExternalDocument", ShapeType::Blob, Aws::String(), std::move(value));
  }

  ExternalDocument(ShapeType type, Aws::String text, Aws::Utils::ByteBuffer bytes)
      : m_type(type), m_text(std::move(text)), m_bytes(std::move(bytes)) {}

  ShapeType GetType() const override { return m_type; }
  bool IsNull() const override { return false; }
  Aws::Crt::Optional<bool> AsBoolean() const override { return {}; }
  Aws::Crt::Optional<Aws::String> AsString() const override {
    return m_type == ShapeType::String ? Aws::Crt::Optional<Aws::String>(m_text) : Aws::Crt::Optional<Aws::String>();
  }
  Aws::Crt::Optional<int> AsInteger() const override { return {}; }
  Aws::Crt::Optional<int64_t> AsLong() const override { return {}; }
  Aws::Crt::Optional<double> AsDouble() const override { return {}; }
  Aws::Crt::Optional<float> AsFloat() const override { return {}; }
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> AsBlob() const override {
    return m_type == ShapeType::Blob ? Aws::Crt::Optional<Aws::Utils::ByteBuffer>(m_bytes) : Aws::Crt::Optional<Aws::Utils::ByteBuffer>();
  }
  Aws::Crt::Optional<Aws::Utils::DateTime> AsTimestamp() const override { return {}; }
  std::shared_ptr<const Aws::Vector<std::shared_ptr<const Document>>> AsList() const override { return nullptr; }
  std::shared_ptr<const Aws::Map<Aws::String, std::shared_ptr<const Document>>> AsMap() const override { return nullptr; }
  std::shared_ptr<const Document> GetMember(const Aws::String&) const override { return nullptr; }
  Aws::Vector<Aws::String> GetMemberNames() const override { return {}; }
  void Serialize(ShapeSerializer&, const Schema&) const override {}

 private:
  ShapeType m_type;
  Aws::String m_text;
  Aws::Utils::ByteBuffer m_bytes;
};
}  // namespace

TEST_F(SchemaDocumentTest, FactoriesReportType) {
  EXPECT_EQ(Document::Null()->GetType(), ShapeType::Null);
  EXPECT_TRUE(Document::Null()->IsNull());
  EXPECT_EQ(Document::FromBoolean(true)->GetType(), ShapeType::Boolean);
  EXPECT_EQ(Document::FromInteger(7)->GetType(), ShapeType::Integer);
  EXPECT_EQ(Document::FromInteger(3000000000LL)->GetType(), ShapeType::Long);
  EXPECT_EQ(Document::FromDouble(1.5)->GetType(), ShapeType::Double);
  EXPECT_EQ(Document::FromString("hi")->GetType(), ShapeType::String);
  EXPECT_EQ(Document::FromList({})->GetType(), ShapeType::List);
  EXPECT_EQ(Document::FromMap({})->GetType(), ShapeType::Map);
}

TEST_F(SchemaDocumentTest, AccessorsReturnValueOrEmptyOnMismatch) {
  EXPECT_EQ(Document::FromInteger(42)->AsInteger().value(), 42);
  EXPECT_FALSE(Document::FromInteger(42)->AsString().has_value());
  EXPECT_EQ(Document::FromString("x")->AsString().value(), "x");
  EXPECT_FALSE(Document::FromString("x")->AsBoolean().has_value());
  EXPECT_EQ(Document::FromMap({})->AsList(), nullptr);
  EXPECT_NE(Document::FromMap({})->AsMap(), nullptr);
  EXPECT_EQ(Document::FromList({})->AsMap(), nullptr);
  EXPECT_NE(Document::FromList({})->AsList(), nullptr);
}

TEST_F(SchemaDocumentTest, ContainerAccessorsShareStorage) {
  auto list = Document::FromList({Document::FromInteger(1)});
  EXPECT_EQ(list->AsList().get(), list->AsList().get());
  auto map = Document::FromMap({{"k", Document::FromInteger(1)}});
  EXPECT_EQ(map->AsMap().get(), map->AsMap().get());
}

TEST_F(SchemaDocumentTest, ContainerHandleOutlivesDocument) {
  auto elements = Document::FromList({Document::FromString("a"), Document::FromString("b")})->AsList();
  ASSERT_NE(elements, nullptr);
  ASSERT_EQ(elements->size(), 2u);
  EXPECT_EQ((*elements)[1]->AsString().value(), "b");

  auto members = Document::FromMap({{"k", Document::FromString("v")}})->AsMap();
  ASSERT_NE(members, nullptr);
  EXPECT_EQ(members->at("k")->AsString().value(), "v");
}

TEST_F(SchemaDocumentTest, NumericAccessorsCoerce) {
  // Stored Long coerces to double/float; stored Double truncates to integer/long (SEP number coercion).
  EXPECT_DOUBLE_EQ(Document::FromInteger(5)->AsDouble().value(), 5.0);
  EXPECT_FLOAT_EQ(Document::FromInteger(5)->AsFloat().value(), 5.0f);
  EXPECT_EQ(Document::FromDouble(3.9)->AsInteger().value(), 3);
  EXPECT_EQ(Document::FromDouble(3.9)->AsLong().value(), 3);
  EXPECT_DOUBLE_EQ(Document::FromDouble(2.5)->AsDouble().value(), 2.5);
  EXPECT_FALSE(Document::FromString("5")->AsInteger().has_value());
}

TEST_F(SchemaDocumentTest, AgnosticBlobCoercion) {
  unsigned char raw[] = {'h', 'i'};
  Aws::Utils::ByteBuffer buf(raw, 2);
  EXPECT_EQ(Document::FromBlob(buf)->AsBlob().value(), buf);          // Blob node: identity
  EXPECT_FALSE(Document::FromString("aGk=")->AsBlob().has_value());   // agnostic: no base64 interpretation
  EXPECT_FALSE(Document::FromString("!!!not-base64!!!")->AsBlob().has_value());
}

TEST_F(SchemaDocumentTest, AgnosticTimestampCoercion) {
  Aws::Utils::DateTime ts(1700000000.0);
  EXPECT_TRUE(Document::FromTimestamp(ts)->AsTimestamp().has_value());         // Timestamp node: identity
  EXPECT_FALSE(Document::FromInteger(1700000000)->AsTimestamp().has_value());  // agnostic: no epoch coercion
  EXPECT_FALSE(Document::FromString("2023-11-14T22:13:20Z")->AsTimestamp().has_value());  // agnostic: no ISO parse
}

TEST_F(SchemaDocumentTest, MemberAccess) {
  Aws::Map<Aws::String, std::shared_ptr<const Document>> obj;
  obj.emplace("a", Document::FromInteger(1));
  obj.emplace("b", Document::FromString("v"));
  auto doc = Document::FromMap(std::move(obj));
  ASSERT_NE(doc->GetMember("a"), nullptr);
  EXPECT_EQ(doc->GetMember("a")->AsInteger().value(), 1);
  EXPECT_EQ(doc->GetMember("missing"), nullptr);
  EXPECT_EQ(doc->GetMemberNames().size(), 2u);
  EXPECT_EQ(Document::FromString("x")->GetMember("a"), nullptr);
  EXPECT_TRUE(Document::FromString("x")->GetMemberNames().empty());
}

TEST_F(SchemaDocumentTest, NonFiniteOrOutOfRangeDoubleDoesNotCoerceToInteger) {
  // static_cast<int64_t> of a non-finite/out-of-range double is UB; the guard returns empty instead.
  EXPECT_FALSE(Document::FromDouble(std::numeric_limits<double>::infinity())->AsLong().has_value());
  EXPECT_FALSE(Document::FromDouble(std::numeric_limits<double>::quiet_NaN())->AsInteger().has_value());
  EXPECT_FALSE(Document::FromDouble(1e300)->AsLong().has_value());
  // A finite in-range double still coerces.
  EXPECT_EQ(Document::FromDouble(7.9)->AsLong().value(), 7);
}

TEST_F(SchemaDocumentTest, OutOfRangeDoubleDoesNotCoerceToFloat) {
  // static_cast<float> of a finite double beyond float range is UB; the guard returns empty
  // (mirroring the AsLong out-of-range guard).
  EXPECT_FALSE(Document::FromDouble(1e300)->AsFloat().has_value());
  EXPECT_FALSE(Document::FromDouble(-1e300)->AsFloat().has_value());
  // In-range doubles still coerce (with the precision loss the SEP permits).
  EXPECT_FLOAT_EQ(Document::FromDouble(1.5)->AsFloat().value(), 1.5f);
}

TEST_F(SchemaDocumentTest, IntegralTypeTagNarrowsToInt32Range) {
  EXPECT_EQ(Document::FromInteger(2147483647LL)->GetType(), ShapeType::Integer);
  EXPECT_EQ(Document::FromInteger(-2147483648LL)->GetType(), ShapeType::Integer);
  EXPECT_EQ(Document::FromInteger(2147483648LL)->GetType(), ShapeType::Long);
  EXPECT_EQ(Document::FromInteger(-2147483649LL)->GetType(), ShapeType::Long);
  // The wider tag still coerces through every numeric accessor; only AsInteger rejects it as out of range.
  EXPECT_EQ(Document::FromInteger(3000000000LL)->AsLong().value(), 3000000000LL);
  EXPECT_DOUBLE_EQ(Document::FromInteger(3000000000LL)->AsDouble().value(), 3000000000.0);
  EXPECT_FALSE(Document::FromInteger(3000000000LL)->AsInteger().has_value());
}

TEST_F(SchemaDocumentTest, EqualityCoversListBlobTimestampVariants) {
  Aws::Vector<std::shared_ptr<const Document>> a;
  a.push_back(Document::FromInteger(1));
  Aws::Vector<std::shared_ptr<const Document>> b;
  b.push_back(Document::FromInteger(1));
  EXPECT_TRUE(*Document::FromList(std::move(a)) == *Document::FromList(std::move(b)));
  Aws::Utils::ByteBuffer bytes(reinterpret_cast<const unsigned char*>("z"), 1);
  EXPECT_TRUE(*Document::FromBlob(bytes) == *Document::FromBlob(bytes));
  auto ts = Aws::Utils::DateTime(static_cast<double>(100));
  EXPECT_TRUE(*Document::FromTimestamp(ts) == *Document::FromTimestamp(ts));
  EXPECT_TRUE(*Document::FromInteger(1) != *Document::FromDouble(1.0));  // different stored kind

  Aws::Vector<std::shared_ptr<const Document>> shortList;
  shortList.push_back(Document::FromInteger(1));
  Aws::Vector<std::shared_ptr<const Document>> longList;
  longList.push_back(Document::FromInteger(1));
  longList.push_back(Document::FromInteger(2));
  EXPECT_TRUE(*Document::FromList(std::move(shortList)) != *Document::FromList(std::move(longList)));
}

TEST_F(SchemaDocumentTest, EqualityComparesActiveMemberRecursively) {
  Aws::Map<Aws::String, std::shared_ptr<const Document>> a;
  a.emplace("n", Document::FromInteger(1));
  a.emplace("s", Document::FromString("v"));
  Aws::Map<Aws::String, std::shared_ptr<const Document>> b = a;
  EXPECT_TRUE(*Document::FromMap(std::move(a)) == *Document::FromMap(std::move(b)));
  EXPECT_TRUE(*Document::FromInteger(1) != *Document::FromString("1"));

  Aws::Map<Aws::String, std::shared_ptr<const Document>> c;
  c.emplace("n", Document::FromInteger(1));
  c.emplace("other", Document::FromString("v"));
  Aws::Map<Aws::String, std::shared_ptr<const Document>> d;
  d.emplace("n", Document::FromInteger(1));
  d.emplace("s", Document::FromString("v"));
  EXPECT_TRUE(*Document::FromMap(std::move(c)) != *Document::FromMap(std::move(d)));
}

TEST_F(SchemaDocumentTest, NullChildrenAreStoredAsNullDocuments) {
  // A caller can hand a null handle to FromList/FromMap; it is stored as a null document so the tree
  // never contains a dangling child.
  Aws::Vector<std::shared_ptr<const Document>> list;
  list.push_back(nullptr);
  auto doc = Document::FromList(std::move(list));
  auto elements = doc->AsList();
  ASSERT_NE(elements, nullptr);
  ASSERT_EQ(elements->size(), 1u);
  ASSERT_NE((*elements)[0], nullptr);
  EXPECT_TRUE((*elements)[0]->IsNull());

  Aws::Map<Aws::String, std::shared_ptr<const Document>> map;
  map.emplace("k", nullptr);
  auto mapDoc = Document::FromMap(std::move(map));
  auto members = mapDoc->AsMap();
  ASSERT_NE(members, nullptr);
  ASSERT_NE(members->at("k"), nullptr);
  EXPECT_TRUE(members->at("k")->IsNull());
}

TEST_F(SchemaDocumentTest, SerializeScalarThroughJson) {
  JsonShapeSerializer s;
  auto schema = Schema::CreateDocument("smithy.api#Document");
  Document::FromString("hello \"world\"")->Serialize(s, *schema);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "\"hello \\\"world\\\"\"");
}

TEST_F(SchemaDocumentTest, SerializeNestedThroughJson) {
  JsonShapeSerializer s;
  auto schema = Schema::CreateDocument("smithy.api#Document");
  Aws::Vector<std::shared_ptr<const Document>> list;
  list.push_back(Document::FromInteger(1));
  list.push_back(Document::FromBoolean(true));
  Aws::Map<Aws::String, std::shared_ptr<const Document>> obj;
  obj.emplace("items", Document::FromList(std::move(list)));
  obj.emplace("name", Document::FromString("n"));
  Document::FromMap(std::move(obj))->Serialize(s, *schema);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& json = outcome.GetResult();
  EXPECT_NE(json.find("\"items\":[1,true]"), Aws::String::npos);
  EXPECT_NE(json.find("\"name\":\"n\""), Aws::String::npos);
}

TEST_F(SchemaDocumentTest, ContentEqualDocumentsCoerceDifferentlyByCodec) {
  // The point of the interface split: the same stored string is a plain string to a hand-built
  // document and base64 to a JSON-built one. The two are content-equal and still disagree on AsBlob.
  const Aws::String encoded = "aGk=";  // "hi"
  auto plain = Document::FromString(encoded);

  const Aws::String json = "\"" + encoded + "\"";
  JsonShapeDeserializer deser(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto fromJson = deser.ReadDocument(*schema);
  ASSERT_NE(fromJson, nullptr);

  EXPECT_TRUE(*plain == *fromJson);  // same type, same stored string
  EXPECT_FALSE(plain->AsBlob().has_value());
  auto decoded = fromJson->AsBlob();
  ASSERT_TRUE(decoded.has_value());
  ASSERT_EQ(decoded->GetLength(), 2u);
  EXPECT_EQ((*decoded)[0], 'h');
  EXPECT_EQ((*decoded)[1], 'i');

  // Same divergence for timestamps: the JSON node applies its configured epoch default, the plain node
  // applies none.
  const Aws::String epoch = "1234567890";
  JsonShapeDeserializer epochDeser(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(epoch.data()), epoch.size()));
  auto jsonNumber = epochDeser.ReadDocument(*schema);
  ASSERT_NE(jsonNumber, nullptr);
  auto plainNumber = Document::FromInteger(1234567890);
  EXPECT_TRUE(*plainNumber == *jsonNumber);
  EXPECT_FALSE(plainNumber->AsTimestamp().has_value());
  ASSERT_TRUE(jsonNumber->AsTimestamp().has_value());
  EXPECT_EQ(jsonNumber->AsTimestamp()->Seconds(), 1234567890);
}

TEST_F(SchemaDocumentTest, EqualityIsSymmetricAcrossImplementations) {
  const Aws::Utils::ByteBuffer hi(reinterpret_cast<const unsigned char*>("hi"), 2);
  const Aws::Utils::ByteBuffer ho(reinterpret_cast<const unsigned char*>("ho"), 2);

  auto plainString = Document::FromString("x");
  auto externalString = ExternalDocument::String("x");
  EXPECT_TRUE(*plainString == *externalString);
  EXPECT_TRUE(*externalString == *plainString);

  auto plainBlob = Document::FromBlob(hi);
  auto externalBlob = ExternalDocument::Blob(hi);
  EXPECT_TRUE(*plainBlob == *externalBlob);
  EXPECT_TRUE(*externalBlob == *plainBlob);

  auto otherBlob = ExternalDocument::Blob(ho);
  EXPECT_TRUE(*plainBlob != *otherBlob);
  EXPECT_TRUE(*otherBlob != *plainBlob);

  // Same content under different tags is unequal in both directions.
  EXPECT_TRUE(*externalString != *plainBlob);
  EXPECT_TRUE(*plainBlob != *externalString);
}

TEST_F(SchemaDocumentTest, EqualityRecursesIntoExternalChildren) {
  auto plainList = Document::FromList({Document::FromString("a")});
  auto mixedList = Document::FromList({ExternalDocument::String("a")});
  EXPECT_TRUE(*plainList == *mixedList);
  EXPECT_TRUE(*mixedList == *plainList);

  auto plainMap = Document::FromMap({{"k", Document::FromString("a")}});
  auto mixedMap = Document::FromMap({{"k", ExternalDocument::String("b")}});
  EXPECT_TRUE(*plainMap != *mixedMap);
  EXPECT_TRUE(*mixedMap != *plainMap);
}
