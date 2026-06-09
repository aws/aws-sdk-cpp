/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/JsonShapeSerializer.h>

using namespace smithy::schema;

class JsonShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

// --- Scalars ---

TEST_F(JsonShapeSerializerTest, EmptyStructure) {
  JsonShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.EndStructure();
  EXPECT_EQ(s.GetPayload(), "{}");
}

TEST_F(JsonShapeSerializerTest, BooleanTrue) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("enabled", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, true);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"enabled\":true"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, BooleanFalse) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("enabled", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, false);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"enabled\":false"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Integer) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("count", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, 42);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"count\":42"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Long) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("bigNum", ShapeType::Long);
  s.BeginStructure(root);
  s.WriteLong(member, 9876543210LL);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"bigNum\":9876543210"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Double) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("ratio", ShapeType::Double);
  s.BeginStructure(root);
  s.WriteDouble(member, 3.14);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"ratio\":3.14"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, String) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("name", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "hello");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"name\":\"hello\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyString) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("name", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"name\":\"\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Timestamp) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("created", ShapeType::Timestamp);
  s.BeginStructure(root);
  Aws::Utils::DateTime dt(1234567890.0);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"created\":"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Blob) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("data", ShapeType::Blob);
  s.BeginStructure(root);
  unsigned char raw[] = {0x66, 0x6f, 0x6f};
  Aws::Utils::ByteBuffer buf(raw, 3);
  s.WriteBlob(member, buf);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"data\":\"Zm9v\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, NullValue) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("item", ShapeType::String);
  s.BeginStructure(root);
  s.WriteNull(member);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"item\":null"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MultipleScalars) {
  JsonShapeSerializer s;
  Schema root;
  Schema m1("a", ShapeType::Boolean);
  Schema m2("b", ShapeType::Integer);
  Schema m3("c", ShapeType::String);
  s.BeginStructure(root);
  s.WriteBoolean(m1, true);
  s.WriteInteger(m2, 7);
  s.WriteString(m3, "x");
  s.EndStructure();
  auto payload = s.GetPayload();
  EXPECT_NE(payload.find("\"a\":true"), Aws::String::npos);
  EXPECT_NE(payload.find("\"b\":7"), Aws::String::npos);
  EXPECT_NE(payload.find("\"c\":\"x\""), Aws::String::npos);
}

// --- Nested structures ---

TEST_F(JsonShapeSerializerTest, NestedStructure) {
  JsonShapeSerializer s;
  Schema root;
  Schema nested("metadata", ShapeType::Structure);
  Schema inner("key", ShapeType::String);
  s.BeginStructure(root);
  s.BeginNestedStructure(nested);
  s.WriteString(inner, "val");
  s.EndNestedStructure();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"metadata\":{\"key\":\"val\"}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, DeeplyNestedStructure) {
  JsonShapeSerializer s;
  Schema root;
  Schema level1("l1", ShapeType::Structure);
  Schema level2("l2", ShapeType::Structure);
  Schema leaf("val", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginNestedStructure(level1);
  s.BeginNestedStructure(level2);
  s.WriteInteger(leaf, 99);
  s.EndNestedStructure();
  s.EndNestedStructure();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"l1\":{\"l2\":{\"val\":99}}"), Aws::String::npos);
}

// --- Lists ---

TEST_F(JsonShapeSerializerTest, ListOfStrings) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("tags", ShapeType::List);
  Schema elem("member", ShapeType::String);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteString(elem, "a");
  s.WriteString(elem, "b");
  s.WriteString(elem, "c");
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"tags\":[\"a\",\"b\",\"c\"]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, ListOfIntegers) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("nums", ShapeType::List);
  Schema elem("member", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteInteger(elem, 1);
  s.WriteInteger(elem, 2);
  s.WriteInteger(elem, 3);
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"nums\":[1,2,3]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyList) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("items", ShapeType::List);
  s.BeginStructure(root);
  s.BeginList(listMember, 0);
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"items\":[]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, ListOfStructures) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("items", ShapeType::List);
  Schema structElem("member", ShapeType::Structure);
  Schema field("id", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginList(listMember, 2);
  s.BeginNestedStructure(structElem);
  s.WriteInteger(field, 1);
  s.EndNestedStructure();
  s.BeginNestedStructure(structElem);
  s.WriteInteger(field, 2);
  s.EndNestedStructure();
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"items\":[{\"id\":1},{\"id\":2}]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, SparseList) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("items", ShapeType::List);
  Schema elem("member", ShapeType::String);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteString(elem, "a");
  s.WriteNull(elem);
  s.WriteString(elem, "b");
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"items\":[\"a\",null,\"b\"]"), Aws::String::npos);
}

// --- Maps ---

TEST_F(JsonShapeSerializerTest, MapOfStrings) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("headers", ShapeType::Map);
  Schema valSchema("value", ShapeType::String);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 2);
  s.WriteMapKey("x-foo");
  s.WriteString(valSchema, "bar");
  s.WriteMapKey("x-baz");
  s.WriteString(valSchema, "qux");
  s.EndMap();
  s.EndStructure();
  auto payload = s.GetPayload();
  EXPECT_NE(payload.find("\"x-foo\":\"bar\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"x-baz\":\"qux\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyMap) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("tags", ShapeType::Map);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 0);
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"tags\":{}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MapOfStructures) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("nodes", ShapeType::Map);
  Schema valSchema("value", ShapeType::Structure);
  Schema field("val", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("a");
  s.BeginNestedStructure(valSchema);
  s.WriteInteger(field, 1);
  s.EndNestedStructure();
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().find("\"nodes\":{\"a\":{\"val\":1}}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, SparseMap) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("data", ShapeType::Map);
  Schema valSchema("value", ShapeType::String);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 2);
  s.WriteMapKey("present");
  s.WriteString(valSchema, "yes");
  s.WriteMapKey("absent");
  s.WriteNull(valSchema);
  s.EndMap();
  s.EndStructure();
  auto payload = s.GetPayload();
  EXPECT_NE(payload.find("\"present\":\"yes\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"absent\":null"), Aws::String::npos);
}

// --- Combinations ---

TEST_F(JsonShapeSerializerTest, StructureWithListAndMap) {
  JsonShapeSerializer s;
  Schema root;
  Schema strMember("name", ShapeType::String);
  Schema listMember("tags", ShapeType::List);
  Schema listElem("member", ShapeType::String);
  Schema mapMember("meta", ShapeType::Map);
  Schema mapVal("value", ShapeType::String);

  s.BeginStructure(root);
  s.WriteString(strMember, "test");
  s.BeginList(listMember, 2);
  s.WriteString(listElem, "t1");
  s.WriteString(listElem, "t2");
  s.EndList();
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("k");
  s.WriteString(mapVal, "v");
  s.EndMap();
  s.EndStructure();

  auto payload = s.GetPayload();
  EXPECT_NE(payload.find("\"name\":\"test\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"tags\":[\"t1\",\"t2\"]"), Aws::String::npos);
  EXPECT_NE(payload.find("\"meta\":{\"k\":\"v\"}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MapContainingList) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("data", ShapeType::Map);
  Schema listSchema("value", ShapeType::List);
  Schema elem("member", ShapeType::Integer);

  s.BeginStructure(root);
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("nums");
  s.BeginList(listSchema, 2);
  s.WriteInteger(elem, 1);
  s.WriteInteger(elem, 2);
  s.EndList();
  s.EndMap();
  s.EndStructure();

  EXPECT_NE(s.GetPayload().find("\"data\":{\"nums\":[1,2]}"), Aws::String::npos);
}
