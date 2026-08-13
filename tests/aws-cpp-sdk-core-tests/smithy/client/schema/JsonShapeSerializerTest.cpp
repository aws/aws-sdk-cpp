/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>

using namespace smithy::schema;

class JsonShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

// --- Scalars ---

TEST_F(JsonShapeSerializerTest, EmptyStructure) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  s.BeginStructure(*root);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "{}");
}

TEST_F(JsonShapeSerializerTest, BooleanTrue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  s.BeginStructure(*root);
  s.WriteBoolean(*member, true);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"enabled\":true"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, BooleanFalse) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  s.BeginStructure(*root);
  s.WriteBoolean(*member, false);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"enabled\":false"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Integer) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("count", ShapeType::Integer);
  s.BeginStructure(*root);
  s.WriteInteger(*member, 42);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"count\":42"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Long) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("bigNum", ShapeType::Long);
  s.BeginStructure(*root);
  s.WriteLong(*member, 9876543210LL);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"bigNum\":9876543210"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Double) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ratio", ShapeType::Double);
  s.BeginStructure(*root);
  s.WriteDouble(*member, 3.14);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"ratio\":3.14"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, String) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteString(*member, "hello");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"name\":\"hello\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyString) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteString(*member, "");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"name\":\"\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Timestamp) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("created", ShapeType::Timestamp);
  s.BeginStructure(*root);
  Aws::Utils::DateTime dt(1234567890.0);
  s.WriteTimestamp(*member, dt);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"created\":"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Blob) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("data", ShapeType::Blob);
  s.BeginStructure(*root);
  unsigned char raw[] = {0x66, 0x6f, 0x6f};
  Aws::Utils::ByteBuffer buf(raw, 3);
  s.WriteBlob(*member, buf);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"data\":\"Zm9v\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, NullValue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("item", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteNull(*member);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"item\":null"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MultipleScalars) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto m1 = Schema::CreateMember("a", ShapeType::Boolean);
  auto m2 = Schema::CreateMember("b", ShapeType::Integer);
  auto m3 = Schema::CreateMember("c", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteBoolean(*m1, true);
  s.WriteInteger(*m2, 7);
  s.WriteString(*m3, "x");
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"a\":true"), Aws::String::npos);
  EXPECT_NE(payload.find("\"b\":7"), Aws::String::npos);
  EXPECT_NE(payload.find("\"c\":\"x\""), Aws::String::npos);
}

// --- Nested structures ---

TEST_F(JsonShapeSerializerTest, NestedStructure) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("metadata", ShapeType::Structure);
  auto inner = Schema::CreateMember("key", ShapeType::String);
  s.BeginStructure(*root);
  s.BeginNestedStructure(*nested);
  s.WriteString(*inner, "val");
  s.EndNestedStructure();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"metadata\":{\"key\":\"val\"}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, DeeplyNestedStructure) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto level1 = Schema::CreateMember("l1", ShapeType::Structure);
  auto level2 = Schema::CreateMember("l2", ShapeType::Structure);
  auto leaf = Schema::CreateMember("val", ShapeType::Integer);
  s.BeginStructure(*root);
  s.BeginNestedStructure(*level1);
  s.BeginNestedStructure(*level2);
  s.WriteInteger(*leaf, 99);
  s.EndNestedStructure();
  s.EndNestedStructure();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"l1\":{\"l2\":{\"val\":99}}"), Aws::String::npos);
}

// --- Lists ---

TEST_F(JsonShapeSerializerTest, ListOfStrings) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("tags", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::String);
  s.BeginStructure(*root);
  s.BeginList(*listMember, 3);
  s.WriteString(*elem, "a");
  s.WriteString(*elem, "b");
  s.WriteString(*elem, "c");
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"tags\":[\"a\",\"b\",\"c\"]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, ListOfIntegers) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("nums", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::Integer);
  s.BeginStructure(*root);
  s.BeginList(*listMember, 3);
  s.WriteInteger(*elem, 1);
  s.WriteInteger(*elem, 2);
  s.WriteInteger(*elem, 3);
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"nums\":[1,2,3]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyList) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  s.BeginStructure(*root);
  s.BeginList(*listMember, 0);
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"items\":[]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, ListOfStructures) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  auto structElem = Schema::CreateMember("member", ShapeType::Structure);
  auto field = Schema::CreateMember("id", ShapeType::Integer);
  s.BeginStructure(*root);
  s.BeginList(*listMember, 2);
  s.BeginNestedStructure(*structElem);
  s.WriteInteger(*field, 1);
  s.EndNestedStructure();
  s.BeginNestedStructure(*structElem);
  s.WriteInteger(*field, 2);
  s.EndNestedStructure();
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"items\":[{\"id\":1},{\"id\":2}]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, SparseList) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::String);
  s.BeginStructure(*root);
  s.BeginList(*listMember, 3);
  s.WriteString(*elem, "a");
  s.WriteNull(*elem);
  s.WriteString(*elem, "b");
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"items\":[\"a\",null,\"b\"]"), Aws::String::npos);
}

// --- Maps ---

TEST_F(JsonShapeSerializerTest, MapOfStrings) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("headers", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  s.BeginStructure(*root);
  s.BeginMap(*mapMember, 2);
  s.WriteMapKey("x-foo");
  s.WriteString(*valSchema, "bar");
  s.WriteMapKey("x-baz");
  s.WriteString(*valSchema, "qux");
  s.EndMap();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"x-foo\":\"bar\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"x-baz\":\"qux\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyMap) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("tags", ShapeType::Map);
  s.BeginStructure(*root);
  s.BeginMap(*mapMember, 0);
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"tags\":{}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MapOfStructures) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("nodes", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::Structure);
  auto field = Schema::CreateMember("val", ShapeType::Integer);
  s.BeginStructure(*root);
  s.BeginMap(*mapMember, 1);
  s.WriteMapKey("a");
  s.BeginNestedStructure(*valSchema);
  s.WriteInteger(*field, 1);
  s.EndNestedStructure();
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"nodes\":{\"a\":{\"val\":1}}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, SparseMap) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("data", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  s.BeginStructure(*root);
  s.BeginMap(*mapMember, 2);
  s.WriteMapKey("present");
  s.WriteString(*valSchema, "yes");
  s.WriteMapKey("absent");
  s.WriteNull(*valSchema);
  s.EndMap();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"present\":\"yes\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"absent\":null"), Aws::String::npos);
}

// --- Combinations ---

TEST_F(JsonShapeSerializerTest, StructureWithListAndMap) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto strMember = Schema::CreateMember("name", ShapeType::String);
  auto listMember = Schema::CreateMember("tags", ShapeType::List);
  auto listElem = Schema::CreateMember("member", ShapeType::String);
  auto mapMember = Schema::CreateMember("meta", ShapeType::Map);
  auto mapVal = Schema::CreateMember("value", ShapeType::String);

  s.BeginStructure(*root);
  s.WriteString(*strMember, "test");
  s.BeginList(*listMember, 2);
  s.WriteString(*listElem, "t1");
  s.WriteString(*listElem, "t2");
  s.EndList();
  s.BeginMap(*mapMember, 1);
  s.WriteMapKey("k");
  s.WriteString(*mapVal, "v");
  s.EndMap();
  s.EndStructure();

  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"name\":\"test\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"tags\":[\"t1\",\"t2\"]"), Aws::String::npos);
  EXPECT_NE(payload.find("\"meta\":{\"k\":\"v\"}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MapContainingList) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("data", ShapeType::Map);
  auto listSchema = Schema::CreateMember("value", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::Integer);

  s.BeginStructure(*root);
  s.BeginMap(*mapMember, 1);
  s.WriteMapKey("nums");
  s.BeginList(*listSchema, 2);
  s.WriteInteger(*elem, 1);
  s.WriteInteger(*elem, 2);
  s.EndList();
  s.EndMap();
  s.EndStructure();

  EXPECT_NE(s.GetPayload().GetResult().find("\"data\":{\"nums\":[1,2]}"), Aws::String::npos);
}

// --- JSON Escaping ---

TEST_F(JsonShapeSerializerTest, EscapesQuotesInString) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("msg", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteString(*member, "say \"hello\"");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"msg\":\"say \\\"hello\\\"\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesBackslash) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("path", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteString(*member, "C:\\Users\\test");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"path\":\"C:\\\\Users\\\\test\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesControlCharacters) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("text", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteString(*member, "line1\nline2\ttab");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"text\":\"line1\\nline2\\ttab\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesNullByte) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("data", ShapeType::String);
  s.BeginStructure(*root);
  Aws::String val("ab");
  val += '\0';
  val += "cd";
  s.WriteString(*member, val);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"data\":\"ab\\u0000cd\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesInMapKey) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("m", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  s.BeginStructure(*root);
  s.BeginMap(*mapMember, 1);
  s.WriteMapKey("key\"with\"quotes");
  s.WriteString(*valSchema, "v");
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"key\\\"with\\\"quotes\":\"v\""), Aws::String::npos);
}

// --- Depth limit ---

TEST_F(JsonShapeSerializerTest, MaxDepthEnforcement) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("n", ShapeType::Structure);
  s.BeginStructure(*root);
  // Nest 1000+ times to exceed MAX_DEPTH
  for (int i = 0; i < 1000; i++) {
    s.BeginNestedStructure(*nested);
  }
  auto outcome = s.GetPayload();
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_NE(outcome.GetError().GetMessage().find("depth"), Aws::String::npos);
}

// --- JsonNameTrait ---

TEST_F(JsonShapeSerializerTest, JsonNameOverridesMemberName) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("internalName", ShapeType::String, {{JsonNameTrait::KEY(), Aws::MakeShared<JsonNameTrait>("Schema", "ExternalName")}});
  s.BeginStructure(*root);
  s.WriteString(*member, "hello");
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"ExternalName\":\"hello\""), Aws::String::npos);
  EXPECT_EQ(payload.find("\"internalName\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, NoJsonNameUsesGetMemberName) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("fieldName", ShapeType::String);
  s.BeginStructure(*root);
  s.WriteString(*member, "value");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("\"fieldName\":\"value\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, FloatValue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("f", ShapeType::Float);
  s.BeginStructure(*root);
  s.WriteFloat(*member, 1.5f);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "{\"f\":1.5}");
}

TEST_F(JsonShapeSerializerTest, FloatNegativeValue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("f", ShapeType::Float);
  s.BeginStructure(*root);
  s.WriteFloat(*member, -2.25f);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "{\"f\":-2.25}");
}
