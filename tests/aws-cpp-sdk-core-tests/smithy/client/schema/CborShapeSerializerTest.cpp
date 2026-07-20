/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/CborShapeSerializer.h>
#include <smithy/client/schema/Schema.h>

#include <cstring>

using namespace smithy::schema;

class CborShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {
Aws::String Bytes(const char* data, size_t len) { return Aws::String(data, len); }
}  // namespace

// --- Scalars ---

TEST_F(CborShapeSerializerTest, EmptyStructure) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  // indefinite map start + break
  EXPECT_EQ(outcome.GetResult(), Bytes("\xBF\xFF", 2));
}

TEST_F(CborShapeSerializerTest, BooleanTrue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("enabled", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, true);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // BF + text("enabled") + true + FF
  // text "enabled" = 67 65 6E 61 62 6C 65 64
  Aws::String expected;
  expected += '\xBF';
  expected += '\x67';  // text string, length 7
  expected += "enabled";
  expected += '\xF5';  // true
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, BooleanFalse) {
  CborShapeSerializer s;
  Schema root;
  Schema member("ok", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, false);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x62';  // text string, length 2
  expected += "ok";
  expected += '\xF4';  // false
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, IntegerSmall) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, 1);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // text string, length 1
  expected += 'n';
  expected += '\x01';  // positive integer 1
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, IntegerOneByte) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, 42);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';
  expected += 'n';
  expected += '\x18';  // additional info 24 (1-byte follows)
  expected += '\x2A';  // 42
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, IntegerNegative) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, -1);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';
  expected += 'n';
  expected += '\x20';  // negative integer, value 0 => encodes -1
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, IntegerNegativeLarge) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, -100);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';
  expected += 'n';
  expected += '\x38';  // major type 1, additional 24 (1-byte follows)
  expected += '\x63';  // 99 = 0x63 (encodes -100)
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, LongValue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("big", ShapeType::Long);
  s.BeginStructure(root);
  s.WriteLong(member, 1000000LL);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x63';  // text string, length 3
  expected += "big";
  // 1000000 = 0x000F4240 -> 4-byte encoding
  expected += '\x1A';  // major type 0, additional 26 (4-byte follows)
  expected += '\x00';
  expected += '\x0F';
  expected += '\x42';
  expected += '\x40';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, DoubleValue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("d", ShapeType::Double);
  s.BeginStructure(root);
  s.WriteDouble(member, 3.14);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // Check prefix: BF + text("d") + FB (double marker)
  ASSERT_GE(payload.size(), 4u);
  EXPECT_EQ(static_cast<unsigned char>(payload[0]), 0xBF);
  EXPECT_EQ(static_cast<unsigned char>(payload[1]), 0x61);
  EXPECT_EQ(payload[2], 'd');
  EXPECT_EQ(static_cast<unsigned char>(payload[3]), 0xFB);  // double (type 7, additional 27)
  // 8 bytes of IEEE 754 double + break
  EXPECT_EQ(payload.size(), 13u);
  EXPECT_EQ(static_cast<unsigned char>(payload[12]), 0xFF);
  // Verify actual double bytes
  double reconstructed;
  uint64_t bits = 0;
  for (int i = 0; i < 8; i++) {
    bits = (bits << 8) | static_cast<unsigned char>(payload[4 + i]);
  }
  std::memcpy(&reconstructed, &bits, sizeof(reconstructed));
  EXPECT_DOUBLE_EQ(reconstructed, 3.14);
}

TEST_F(CborShapeSerializerTest, StringValue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("name", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "hello");
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // text string, length 4
  expected += "name";
  expected += '\x65';  // text string, length 5
  expected += "hello";
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, EmptyString) {
  CborShapeSerializer s;
  Schema root;
  Schema member("s", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "");
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // text string, length 1
  expected += 's';
  expected += '\x60';  // text string, length 0
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, BlobValue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("data", ShapeType::Blob);
  s.BeginStructure(root);
  unsigned char raw[] = {0xDE, 0xAD, 0xBE, 0xEF};
  Aws::Utils::ByteBuffer buf(raw, 4);
  s.WriteBlob(member, buf);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // text string, length 4
  expected += "data";
  expected += '\x44';  // byte string, length 4
  expected += '\xDE';
  expected += '\xAD';
  expected += '\xBE';
  expected += '\xEF';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, NullValue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("item", ShapeType::String);
  s.BeginStructure(root);
  s.WriteNull(member);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // text string, length 4
  expected += "item";
  expected += '\xF6';  // null
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, TimestampIntegerSeconds) {
  CborShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  s.BeginStructure(root);
  // DateTime(int64_t) takes milliseconds; 1234567000ms = 1234567 seconds (no fractional part)
  Aws::Utils::DateTime dt(static_cast<int64_t>(1234567000));
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x62';  // text string, length 2
  expected += "ts";
  expected += '\xC1';  // tag 1
  // 1234567 = 0x12D687 -> 4-byte encoding
  expected += '\x1A';  // major type 0, additional 26 (4-byte uint)
  expected += '\x00';
  expected += '\x12';
  expected += '\xD6';
  expected += '\x87';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, TimestampFractionalSeconds) {
  CborShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  s.BeginStructure(root);
  Aws::Utils::DateTime dt(1234567890.5);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // Should use tag 1 + double encoding
  ASSERT_GE(payload.size(), 5u);
  EXPECT_EQ(static_cast<unsigned char>(payload[0]), 0xBF);
  // After key "ts", expect tag 1 + double marker
  // key: 62 74 73 => positions [1..3]
  // tag 1: C1 => position [4]
  // double: FB + 8 bytes => positions [5..13]
  // break: FF => position [14]
  EXPECT_EQ(payload.size(), 15u);
  EXPECT_EQ(static_cast<unsigned char>(payload[4]), 0xC1);
  EXPECT_EQ(static_cast<unsigned char>(payload[5]), 0xFB);
  EXPECT_EQ(static_cast<unsigned char>(payload[14]), 0xFF);
}

// --- Multiple fields ---

TEST_F(CborShapeSerializerTest, MultipleScalars) {
  CborShapeSerializer s;
  Schema root;
  Schema m1("a", ShapeType::Boolean);
  Schema m2("b", ShapeType::Integer);
  Schema m3("c", ShapeType::String);
  s.BeginStructure(root);
  s.WriteBoolean(m1, true);
  s.WriteInteger(m2, 7);
  s.WriteString(m3, "x");
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // text "a"
  expected += 'a';
  expected += '\xF5';  // true
  expected += '\x61';  // text "b"
  expected += 'b';
  expected += '\x07';  // integer 7
  expected += '\x61';  // text "c"
  expected += 'c';
  expected += '\x61';  // text "x" (length 1)
  expected += 'x';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

// --- Nested structures ---

TEST_F(CborShapeSerializerTest, NestedStructure) {
  CborShapeSerializer s;
  Schema root;
  Schema nested("meta", ShapeType::Structure);
  Schema inner("key", ShapeType::String);
  s.BeginStructure(root);
  s.BeginNestedStructure(nested);
  s.WriteString(inner, "val");
  s.EndNestedStructure();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';  // outer map start
  expected += '\x64';  // text "meta" length 4
  expected += "meta";
  expected += '\xBF';  // nested map start
  expected += '\x63';  // text "key" length 3
  expected += "key";
  expected += '\x63';  // text "val" length 3
  expected += "val";
  expected += '\xFF';  // nested map end
  expected += '\xFF';  // outer map end
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, DeeplyNestedStructure) {
  CborShapeSerializer s;
  Schema root;
  Schema l1("l1", ShapeType::Structure);
  Schema l2("l2", ShapeType::Structure);
  Schema leaf("v", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginNestedStructure(l1);
  s.BeginNestedStructure(l2);
  s.WriteInteger(leaf, 99);
  s.EndNestedStructure();
  s.EndNestedStructure();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x62';  // "l1"
  expected += "l1";
  expected += '\xBF';
  expected += '\x62';  // "l2"
  expected += "l2";
  expected += '\xBF';
  expected += '\x61';  // "v"
  expected += 'v';
  expected += '\x18';  // integer 99 (1-byte)
  expected += '\x63';  // 99 = 0x63
  expected += '\xFF';
  expected += '\xFF';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

// --- Lists ---

TEST_F(CborShapeSerializerTest, ListOfIntegers) {
  CborShapeSerializer s;
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
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // text "nums" length 4
  expected += "nums";
  expected += '\x83';  // array of length 3
  expected += '\x01';  // integer 1
  expected += '\x02';  // integer 2
  expected += '\x03';  // integer 3
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, EmptyList) {
  CborShapeSerializer s;
  Schema root;
  Schema listMember("items", ShapeType::List);
  s.BeginStructure(root);
  s.BeginList(listMember, 0);
  s.EndList();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x65';  // text "items" length 5
  expected += "items";
  expected += '\x80';  // array of length 0
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, ListOfStrings) {
  CborShapeSerializer s;
  Schema root;
  Schema listMember("tags", ShapeType::List);
  Schema elem("member", ShapeType::String);
  s.BeginStructure(root);
  s.BeginList(listMember, 2);
  s.WriteString(elem, "ab");
  s.WriteString(elem, "cd");
  s.EndList();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // text "tags" length 4
  expected += "tags";
  expected += '\x82';  // array of length 2
  expected += '\x62';  // text "ab" length 2
  expected += "ab";
  expected += '\x62';  // text "cd" length 2
  expected += "cd";
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, ListOfStructures) {
  CborShapeSerializer s;
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
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x65';  // "items"
  expected += "items";
  expected += '\x82';  // array of 2
  expected += '\xBF';  // nested struct 1
  expected += '\x62';  // "id"
  expected += "id";
  expected += '\x01';  // integer 1
  expected += '\xFF';  // end struct 1
  expected += '\xBF';  // nested struct 2
  expected += '\x62';  // "id"
  expected += "id";
  expected += '\x02';  // integer 2
  expected += '\xFF';  // end struct 2
  expected += '\xFF';  // end outer map
  EXPECT_EQ(payload, expected);
}

// --- Maps ---

TEST_F(CborShapeSerializerTest, MapOfStrings) {
  CborShapeSerializer s;
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
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x67';  // text "headers" length 7
  expected += "headers";
  expected += '\xBF';  // inner indefinite map
  expected += '\x63';  // text "foo" length 3
  expected += "foo";
  expected += '\x63';  // text "bar" length 3
  expected += "bar";
  expected += '\x63';  // text "baz"
  expected += "baz";
  expected += '\x63';  // text "qux"
  expected += "qux";
  expected += '\xFF';  // inner map break
  expected += '\xFF';  // outer map break
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, EmptyMap) {
  CborShapeSerializer s;
  Schema root;
  Schema mapMember("tags", ShapeType::Map);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 0);
  s.EndMap();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // text "tags" length 4
  expected += "tags";
  expected += '\xBF';  // indefinite map (empty)
  expected += '\xFF';  // break
  expected += '\xFF';  // outer break
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, MapOfStructures) {
  CborShapeSerializer s;
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
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x65';  // "nodes"
  expected += "nodes";
  expected += '\xBF';  // map start
  expected += '\x61';  // key "a"
  expected += 'a';
  expected += '\xBF';  // nested struct
  expected += '\x63';  // "val"
  expected += "val";
  expected += '\x01';  // integer 1
  expected += '\xFF';  // end nested struct
  expected += '\xFF';  // end map
  expected += '\xFF';  // end outer map
  EXPECT_EQ(payload, expected);
}

// --- Depth limit ---

TEST_F(CborShapeSerializerTest, MaxDepthEnforcement) {
  CborShapeSerializer s;
  Schema root;
  Schema nested("n", ShapeType::Structure);
  s.BeginStructure(root);
  for (int i = 0; i < 500; i++) {
    s.BeginNestedStructure(nested);
  }
  auto outcome = s.GetPayload();
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_NE(outcome.GetError().GetMessage().find("depth"), Aws::String::npos);
}

// --- GetPayload error cases ---

TEST_F(CborShapeSerializerTest, GetPayloadCalledTwice) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.EndStructure();
  auto outcome1 = s.GetPayload();
  ASSERT_TRUE(outcome1.IsSuccess());
  auto outcome2 = s.GetPayload();
  ASSERT_FALSE(outcome2.IsSuccess());
  EXPECT_NE(outcome2.GetError().GetMessage().find("finalized"), Aws::String::npos);
}

// --- Enum ---

TEST_F(CborShapeSerializerTest, EnumValue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("status", ShapeType::Enum);
  s.BeginStructure(root);
  s.WriteEnum(member, 3);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x66';  // text "status" length 6
  expected += "status";
  expected += '\x03';  // integer 3
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

// --- Combinations ---

TEST_F(CborShapeSerializerTest, StructureWithListAndMap) {
  CborShapeSerializer s;
  Schema root;
  Schema strMember("name", ShapeType::String);
  Schema listMember("tags", ShapeType::List);
  Schema listElem("member", ShapeType::String);
  Schema mapMember("meta", ShapeType::Map);
  Schema mapVal("value", ShapeType::Integer);

  s.BeginStructure(root);
  s.WriteString(strMember, "hi");
  s.BeginList(listMember, 1);
  s.WriteString(listElem, "t1");
  s.EndList();
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("k");
  s.WriteInteger(mapVal, 5);
  s.EndMap();
  s.EndStructure();

  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // "name"
  expected += "name";
  expected += '\x62';  // "hi"
  expected += "hi";
  expected += '\x64';  // "tags"
  expected += "tags";
  expected += '\x81';  // array of 1
  expected += '\x62';  // "t1"
  expected += "t1";
  expected += '\x64';  // "meta"
  expected += "meta";
  expected += '\xBF';  // map start
  expected += '\x61';  // "k"
  expected += 'k';
  expected += '\x05';  // integer 5
  expected += '\xFF';  // map end
  expected += '\xFF';  // outer end
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, IntegerZero) {
  CborShapeSerializer s;
  Schema root;
  Schema member("z", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, 0);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "z"
  expected += 'z';
  expected += '\x00';  // integer 0
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, IntegerTwoByte) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, 1000);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';
  expected += 'n';
  // 1000 = 0x03E8 -> 2-byte encoding
  expected += '\x19';  // major type 0, additional 25 (2 bytes follow)
  expected += '\x03';
  expected += '\xE8';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, SparseList) {
  CborShapeSerializer s;
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
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x65';  // "items"
  expected += "items";
  expected += '\x83';  // array of 3
  expected += '\x61';  // text "a"
  expected += 'a';
  expected += '\xF6';  // null
  expected += '\x61';  // text "b"
  expected += 'b';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}
