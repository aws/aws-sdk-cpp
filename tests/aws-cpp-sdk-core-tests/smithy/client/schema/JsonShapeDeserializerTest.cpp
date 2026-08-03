/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SerdeTraits.h>

using namespace smithy::schema;

class JsonShapeDeserializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

// --- Scalar round-trips ---

TEST_F(JsonShapeDeserializerTest, BooleanTrue) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("enabled", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, true);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "enabled");
  auto val = d.ReadBoolean();
  ASSERT_TRUE(val.has_value());
  EXPECT_TRUE(val.value());
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, BooleanFalse) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("ok", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, false);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ok");
  auto val = d.ReadBoolean();
  ASSERT_TRUE(val.has_value());
  EXPECT_FALSE(val.value());
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, Integer) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("count", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, -42);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "count");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), -42);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, Long) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("big", ShapeType::Long);
  s.BeginStructure(root);
  s.WriteLong(member, 9876543210LL);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "big");
  auto val = d.ReadLong();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 9876543210LL);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, Float) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("f", ShapeType::Float);
  s.BeginStructure(root);
  s.WriteFloat(member, 1.5f);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "f");
  auto val = d.ReadFloat();
  ASSERT_TRUE(val.has_value());
  EXPECT_FLOAT_EQ(val.value(), 1.5f);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, Double) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("ratio", ShapeType::Double);
  s.BeginStructure(root);
  s.WriteDouble(member, 3.14);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ratio");
  auto val = d.ReadDouble();
  ASSERT_TRUE(val.has_value());
  EXPECT_DOUBLE_EQ(val.value(), 3.14);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, String) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("name", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "hello world");
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "name");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), "hello world");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, StringWithSpecialCharacters) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("msg", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "line1\nline2\t\"quoted\"\\backslash");
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "msg");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), "line1\nline2\t\"quoted\"\\backslash");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, Timestamp) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  s.BeginStructure(root);
  Aws::Utils::DateTime dt(1234567890.5);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ts");
  auto val = d.ReadTimestamp();
  ASSERT_TRUE(val.has_value());
  EXPECT_DOUBLE_EQ(val.value().SecondsWithMSPrecision(), 1234567890.5);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, Blob) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("data", ShapeType::Blob);
  s.BeginStructure(root);
  unsigned char raw[] = {0x01, 0x02, 0x03, 0xFF, 0x00, 0xAB};
  Aws::Utils::ByteBuffer buf(raw, 6);
  s.WriteBlob(member, buf);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "data");
  auto val = d.ReadBlob();
  ASSERT_TRUE(val.has_value());
  ASSERT_EQ(val.value().GetLength(), 6u);
  EXPECT_EQ(val.value()[0], 0x01);
  EXPECT_EQ(val.value()[1], 0x02);
  EXPECT_EQ(val.value()[2], 0x03);
  EXPECT_EQ(val.value()[3], 0xFF);
  EXPECT_EQ(val.value()[4], 0x00);
  EXPECT_EQ(val.value()[5], 0xAB);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, NullValue) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("item", ShapeType::String);
  s.BeginStructure(root);
  s.WriteNull(member);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "item");
  EXPECT_TRUE(d.IsNull());
  d.ReadNull();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Collection round-trips ---

TEST_F(JsonShapeDeserializerTest, ListOfIntegers) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("nums", ShapeType::List);
  Schema elem("member", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteInteger(elem, 10);
  s.WriteInteger(elem, 20);
  s.WriteInteger(elem, 30);
  s.EndList();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "nums");
  d.BeginList();
  auto v1 = d.ReadInteger();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), 10);
  auto v2 = d.ReadInteger();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), 20);
  auto v3 = d.ReadInteger();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), 30);
  EXPECT_TRUE(d.IsBreak());
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, EmptyList) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("items", ShapeType::List);
  s.BeginStructure(root);
  s.BeginList(listMember, 0);
  s.EndList();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "items");
  d.BeginList();
  EXPECT_TRUE(d.IsBreak());
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, MapOfStrings) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("headers", ShapeType::Map);
  Schema valSchema("value", ShapeType::String);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 2);
  s.WriteMapKey("foo");
  s.WriteString(valSchema, "bar");
  s.WriteMapKey("baz");
  s.WriteString(valSchema, "qux");
  s.EndMap();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "headers");
  d.BeginMap();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "foo");
  auto v1 = d.ReadString();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), "bar");
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "baz");
  auto v2 = d.ReadString();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), "qux");
  EXPECT_TRUE(d.IsBreak());
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, EmptyMap) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("tags", ShapeType::Map);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 0);
  s.EndMap();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "tags");
  d.BeginMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Nested structures ---

TEST_F(JsonShapeDeserializerTest, NestedStructure) {
  JsonShapeSerializer s;
  Schema root;
  Schema nested("metadata", ShapeType::Structure);
  Schema inner("key", ShapeType::String);
  s.BeginStructure(root);
  s.BeginNestedStructure(nested);
  s.WriteString(inner, "val");
  s.EndNestedStructure();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "metadata");
  d.BeginStruct();
  auto innerKey = d.ReadKey();
  ASSERT_TRUE(innerKey.has_value());
  EXPECT_EQ(innerKey.value(), "key");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), "val");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, DeeplyNested) {
  JsonShapeSerializer s;
  Schema root;
  Schema l1("l1", ShapeType::Structure);
  Schema l2("l2", ShapeType::Structure);
  Schema leaf("val", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginNestedStructure(l1);
  s.BeginNestedStructure(l2);
  s.WriteInteger(leaf, 99);
  s.EndNestedStructure();
  s.EndNestedStructure();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "l1");
  d.BeginStruct();
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "l2");
  d.BeginStruct();
  auto k3 = d.ReadKey();
  ASSERT_TRUE(k3.has_value());
  EXPECT_EQ(k3.value(), "val");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 99);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Complex combinations ---

TEST_F(JsonShapeDeserializerTest, StructureWithAllTypes) {
  JsonShapeSerializer s;
  Schema root;
  Schema boolM("b", ShapeType::Boolean);
  Schema intM("i", ShapeType::Integer);
  Schema longM("l", ShapeType::Long);
  Schema floatM("f", ShapeType::Float);
  Schema doubleM("d", ShapeType::Double);
  Schema strM("s", ShapeType::String);

  s.BeginStructure(root);
  s.WriteBoolean(boolM, true);
  s.WriteInteger(intM, 7);
  s.WriteLong(longM, 5000000000LL);
  s.WriteFloat(floatM, 2.5f);
  s.WriteDouble(doubleM, 1.23);
  s.WriteString(strM, "test");
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();

  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "b");
  auto v1 = d.ReadBoolean();
  ASSERT_TRUE(v1.has_value());
  EXPECT_TRUE(v1.value());

  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "i");
  auto v2 = d.ReadInteger();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), 7);

  auto k3 = d.ReadKey();
  ASSERT_TRUE(k3.has_value());
  EXPECT_EQ(k3.value(), "l");
  auto v3 = d.ReadLong();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), 5000000000LL);

  auto k4 = d.ReadKey();
  ASSERT_TRUE(k4.has_value());
  EXPECT_EQ(k4.value(), "f");
  auto v4 = d.ReadFloat();
  ASSERT_TRUE(v4.has_value());
  EXPECT_FLOAT_EQ(v4.value(), 2.5f);

  auto k5 = d.ReadKey();
  ASSERT_TRUE(k5.has_value());
  EXPECT_EQ(k5.value(), "d");
  auto v5 = d.ReadDouble();
  ASSERT_TRUE(v5.has_value());
  EXPECT_DOUBLE_EQ(v5.value(), 1.23);

  auto k6 = d.ReadKey();
  ASSERT_TRUE(k6.has_value());
  EXPECT_EQ(k6.value(), "s");
  auto v6 = d.ReadString();
  ASSERT_TRUE(v6.has_value());
  EXPECT_EQ(v6.value(), "test");

  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, ListOfStructures) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("items", ShapeType::List);
  Schema structElem("member", ShapeType::Structure);
  Schema idField("id", ShapeType::Integer);
  Schema nameField("name", ShapeType::String);

  s.BeginStructure(root);
  s.BeginList(listMember, 2);
  s.BeginNestedStructure(structElem);
  s.WriteInteger(idField, 1);
  s.WriteString(nameField, "first");
  s.EndNestedStructure();
  s.BeginNestedStructure(structElem);
  s.WriteInteger(idField, 2);
  s.WriteString(nameField, "second");
  s.EndNestedStructure();
  s.EndList();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "items");
  d.BeginList();

  // First element
  d.BeginStruct();
  auto ik1 = d.ReadKey();
  ASSERT_TRUE(ik1.has_value());
  EXPECT_EQ(ik1.value(), "id");
  auto iv1 = d.ReadInteger();
  ASSERT_TRUE(iv1.has_value());
  EXPECT_EQ(iv1.value(), 1);
  auto nk1 = d.ReadKey();
  ASSERT_TRUE(nk1.has_value());
  EXPECT_EQ(nk1.value(), "name");
  auto nv1 = d.ReadString();
  ASSERT_TRUE(nv1.has_value());
  EXPECT_EQ(nv1.value(), "first");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();

  // Second element
  d.BeginStruct();
  auto ik2 = d.ReadKey();
  ASSERT_TRUE(ik2.has_value());
  EXPECT_EQ(ik2.value(), "id");
  auto iv2 = d.ReadInteger();
  ASSERT_TRUE(iv2.has_value());
  EXPECT_EQ(iv2.value(), 2);
  auto nk2 = d.ReadKey();
  ASSERT_TRUE(nk2.has_value());
  EXPECT_EQ(nk2.value(), "name");
  auto nv2 = d.ReadString();
  ASSERT_TRUE(nv2.has_value());
  EXPECT_EQ(nv2.value(), "second");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();

  EXPECT_TRUE(d.IsBreak());
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, MapContainingList) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("data", ShapeType::Map);
  Schema listSchema("value", ShapeType::List);
  Schema elem("member", ShapeType::Integer);

  s.BeginStructure(root);
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("nums");
  s.BeginList(listSchema, 3);
  s.WriteInteger(elem, 1);
  s.WriteInteger(elem, 2);
  s.WriteInteger(elem, 3);
  s.EndList();
  s.EndMap();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "data");
  d.BeginMap();
  auto mk = d.ReadKey();
  ASSERT_TRUE(mk.has_value());
  EXPECT_EQ(mk.value(), "nums");
  d.BeginList();
  auto v1 = d.ReadInteger();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), 1);
  auto v2 = d.ReadInteger();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), 2);
  auto v3 = d.ReadInteger();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), 3);
  EXPECT_TRUE(d.IsBreak());
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, SparseList) {
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
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "items");
  d.BeginList();
  auto v1 = d.ReadString();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), "a");
  EXPECT_TRUE(d.IsNull());
  d.ReadNull();
  auto v3 = d.ReadString();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), "b");
  EXPECT_TRUE(d.IsBreak());
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, SparseMap) {
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
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "data");
  d.BeginMap();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "present");
  auto v1 = d.ReadString();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), "yes");
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "absent");
  EXPECT_TRUE(d.IsNull());
  d.ReadNull();
  EXPECT_TRUE(d.IsBreak());
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, ComplexMixed) {
  JsonShapeSerializer s;
  Schema root;
  Schema strM("name", ShapeType::String);
  Schema listMember("tags", ShapeType::List);
  Schema listElem("member", ShapeType::String);
  Schema mapMember("meta", ShapeType::Map);
  Schema mapVal("value", ShapeType::Integer);
  Schema nested("config", ShapeType::Structure);
  Schema inner("debug", ShapeType::Boolean);

  s.BeginStructure(root);
  s.WriteString(strM, "test");
  s.BeginList(listMember, 2);
  s.WriteString(listElem, "t1");
  s.WriteString(listElem, "t2");
  s.EndList();
  s.BeginMap(mapMember, 2);
  s.WriteMapKey("x");
  s.WriteInteger(mapVal, 1);
  s.WriteMapKey("y");
  s.WriteInteger(mapVal, 2);
  s.EndMap();
  s.BeginNestedStructure(nested);
  s.WriteBoolean(inner, true);
  s.EndNestedStructure();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();

  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "name");
  auto v1 = d.ReadString();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), "test");

  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "tags");
  d.BeginList();
  auto lv1 = d.ReadString();
  ASSERT_TRUE(lv1.has_value());
  EXPECT_EQ(lv1.value(), "t1");
  auto lv2 = d.ReadString();
  ASSERT_TRUE(lv2.has_value());
  EXPECT_EQ(lv2.value(), "t2");
  EXPECT_TRUE(d.IsBreak());
  d.EndList();

  auto k3 = d.ReadKey();
  ASSERT_TRUE(k3.has_value());
  EXPECT_EQ(k3.value(), "meta");
  d.BeginMap();
  auto mk1 = d.ReadKey();
  ASSERT_TRUE(mk1.has_value());
  EXPECT_EQ(mk1.value(), "x");
  auto mv1 = d.ReadInteger();
  ASSERT_TRUE(mv1.has_value());
  EXPECT_EQ(mv1.value(), 1);
  auto mk2 = d.ReadKey();
  ASSERT_TRUE(mk2.has_value());
  EXPECT_EQ(mk2.value(), "y");
  auto mv2 = d.ReadInteger();
  ASSERT_TRUE(mv2.has_value());
  EXPECT_EQ(mv2.value(), 2);
  EXPECT_TRUE(d.IsBreak());
  d.EndMap();

  auto k4 = d.ReadKey();
  ASSERT_TRUE(k4.has_value());
  EXPECT_EQ(k4.value(), "config");
  d.BeginStruct();
  auto ik = d.ReadKey();
  ASSERT_TRUE(ik.has_value());
  EXPECT_EQ(ik.value(), "debug");
  auto iv = d.ReadBoolean();
  ASSERT_TRUE(iv.has_value());
  EXPECT_TRUE(iv.value());
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();

  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Empty structure ---

TEST_F(JsonShapeDeserializerTest, EmptyStructure) {
  JsonShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Empty string ---

TEST_F(JsonShapeDeserializerTest, EmptyString) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("name", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "");
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "name");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), "");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- List of strings ---

TEST_F(JsonShapeDeserializerTest, ListOfStrings) {
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
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "tags");
  d.BeginList();
  auto v1 = d.ReadString();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), "a");
  auto v2 = d.ReadString();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), "b");
  auto v3 = d.ReadString();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), "c");
  EXPECT_TRUE(d.IsBreak());
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Map of structures ---

TEST_F(JsonShapeDeserializerTest, MapOfStructures) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("nodes", ShapeType::Map);
  Schema valSchema("value", ShapeType::Structure);
  Schema field("val", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 2);
  s.WriteMapKey("a");
  s.BeginNestedStructure(valSchema);
  s.WriteInteger(field, 1);
  s.EndNestedStructure();
  s.WriteMapKey("b");
  s.BeginNestedStructure(valSchema);
  s.WriteInteger(field, 2);
  s.EndNestedStructure();
  s.EndMap();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "nodes");
  d.BeginMap();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "a");
  d.BeginStruct();
  auto ik1 = d.ReadKey();
  ASSERT_TRUE(ik1.has_value());
  EXPECT_EQ(ik1.value(), "val");
  auto iv1 = d.ReadInteger();
  ASSERT_TRUE(iv1.has_value());
  EXPECT_EQ(iv1.value(), 1);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "b");
  d.BeginStruct();
  auto ik2 = d.ReadKey();
  ASSERT_TRUE(ik2.has_value());
  EXPECT_EQ(ik2.value(), "val");
  auto iv2 = d.ReadInteger();
  ASSERT_TRUE(iv2.has_value());
  EXPECT_EQ(iv2.value(), 2);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
  EXPECT_TRUE(d.IsBreak());
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Escapes in map keys ---

TEST_F(JsonShapeDeserializerTest, EscapesInMapKey) {
  JsonShapeSerializer s;
  Schema root;
  Schema mapMember("m", ShapeType::Map);
  Schema valSchema("value", ShapeType::String);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("key\"with\"quotes");
  s.WriteString(valSchema, "v");
  s.EndMap();
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "m");
  d.BeginMap();
  auto mk = d.ReadKey();
  ASSERT_TRUE(mk.has_value());
  EXPECT_EQ(mk.value(), "key\"with\"quotes");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), "v");
  EXPECT_TRUE(d.IsBreak());
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Null byte in string ---

TEST_F(JsonShapeDeserializerTest, EscapesNullByte) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("data", ShapeType::String);
  s.BeginStructure(root);
  Aws::String val("ab");
  val += '\0';
  val += "cd";
  s.WriteString(member, val);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "data");
  auto result = d.ReadString();
  ASSERT_TRUE(result.has_value());
  ASSERT_EQ(result.value().size(), 5u);
  EXPECT_EQ(result.value()[0], 'a');
  EXPECT_EQ(result.value()[1], 'b');
  EXPECT_EQ(result.value()[2], '\0');
  EXPECT_EQ(result.value()[3], 'c');
  EXPECT_EQ(result.value()[4], 'd');
}

// --- Double precision ---

TEST_F(JsonShapeDeserializerTest, DoubleLargeValueFullPrecision) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("d", ShapeType::Double);
  s.BeginStructure(root);
  s.WriteDouble(member, 1234567890.5);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "d");
  auto val = d.ReadDouble();
  ASSERT_TRUE(val.has_value());
  EXPECT_DOUBLE_EQ(val.value(), 1234567890.5);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Timestamp with milliseconds ---

TEST_F(JsonShapeDeserializerTest, TimestampEpochSecondsWithMillis) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  s.BeginStructure(root);
  Aws::Utils::DateTime dt(1398796238.123);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ts");
  auto val = d.ReadTimestamp();
  ASSERT_TRUE(val.has_value());
  EXPECT_DOUBLE_EQ(val.value().SecondsWithMSPrecision(), 1398796238.123);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Skip unknown fields ---

TEST_F(JsonShapeDeserializerTest, SkipUnknownScalar) {
  JsonShapeSerializer s;
  Schema root;
  Schema m1("known", ShapeType::Integer);
  Schema m2("unknown", ShapeType::String);
  Schema m3("also_known", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(m1, 1);
  s.WriteString(m2, "skip");
  s.WriteInteger(m3, 2);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "known");
  auto v1 = d.ReadInteger();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), 1);
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "unknown");
  d.SkipValue();
  auto k3 = d.ReadKey();
  ASSERT_TRUE(k3.has_value());
  EXPECT_EQ(k3.value(), "also_known");
  auto v3 = d.ReadInteger();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), 2);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, SkipNestedObject) {
  JsonShapeSerializer s;
  Schema root;
  Schema nested("nested", ShapeType::Structure);
  Schema innerA("a", ShapeType::Integer);
  Schema innerB("b", ShapeType::String);
  Schema known("known", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginNestedStructure(nested);
  s.WriteInteger(innerA, 1);
  s.WriteString(innerB, "x");
  s.EndNestedStructure();
  s.WriteInteger(known, 42);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "nested");
  d.SkipValue();
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "known");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 42);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, SkipNestedArray) {
  JsonShapeSerializer s;
  Schema root;
  Schema listMember("arr", ShapeType::List);
  Schema elem("member", ShapeType::Integer);
  Schema known("known", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteInteger(elem, 1);
  s.WriteInteger(elem, 2);
  s.WriteInteger(elem, 3);
  s.EndList();
  s.WriteInteger(known, 99);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "arr");
  d.SkipValue();
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "known");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 99);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- JsonNameTrait ---

TEST_F(JsonShapeDeserializerTest, JsonNameTraitUsedInSerialization) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("internalName", ShapeType::String);
  member.SetTrait(JsonNameTrait::KEY(), Aws::MakeShared<JsonNameTrait>("Schema", "ExternalName"));
  s.BeginStructure(root);
  s.WriteString(member, "hello");
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ExternalName");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), "hello");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- TimestampFormatTrait ---

TEST_F(JsonShapeDeserializerTest, TimestampFormatTraitDateTime) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  member.SetTrait(TimestampFormatTrait::KEY(),
                  Aws::MakeShared<TimestampFormatTrait>("Schema", TimestampFormatTrait::Format::DATE_TIME));
  s.BeginStructure(root);
  Aws::Utils::DateTime dt(1398796238.0);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ts");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_NE(val.value().find("2014"), Aws::String::npos);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(JsonShapeDeserializerTest, TimestampFormatTraitHttpDate) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  member.SetTrait(TimestampFormatTrait::KEY(),
                  Aws::MakeShared<TimestampFormatTrait>("Schema", TimestampFormatTrait::Format::HTTP_DATE));
  s.BeginStructure(root);
  Aws::Utils::DateTime dt(1398796238.0);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ts");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_NE(val.value().find("2014"), Aws::String::npos);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Error handling ---

TEST_F(JsonShapeDeserializerTest, EmptyOptionalOnEmptyInput) {
  const char* json = "";
  JsonShapeDeserializer d(json, 0);
  auto val = d.ReadBoolean();
  EXPECT_FALSE(val.has_value());
}

TEST_F(JsonShapeDeserializerTest, EmptyOptionalOnTypeMismatch) {
  JsonShapeSerializer s;
  Schema root;
  Schema member("val", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "hello");
  s.EndStructure();
  auto json = s.GetPayload().GetResult();

  JsonShapeDeserializer d(json.c_str(), json.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  auto val = d.ReadInteger();
  EXPECT_FALSE(val.has_value());
}
