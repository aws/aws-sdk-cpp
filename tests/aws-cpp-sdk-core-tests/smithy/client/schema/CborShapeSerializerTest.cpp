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
  s.WriteMapKey("enabled");
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
  s.WriteMapKey("ok");
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
  s.WriteMapKey("n");
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
  s.WriteMapKey("n");
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
  s.WriteMapKey("n");
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
  s.WriteMapKey("n");
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
  s.WriteMapKey("big");
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
  s.WriteMapKey("d");
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
  s.WriteMapKey("name");
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
  s.WriteMapKey("s");
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
  s.WriteMapKey("data");
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
  s.WriteMapKey("item");
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
  s.WriteMapKey("ts");
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
  // Fractional seconds are truncated to integer per rpcv2Cbor protocol
  CborShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  s.BeginStructure(root);
  s.WriteMapKey("ts");
  Aws::Utils::DateTime dt(1234567890.5);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // key: 62 74 73 => positions [1..3]
  // tag 1: C1 => position [4]
  // integer 1234567890 (four-byte): 1A 49 96 02 D2 => positions [5..9]
  // break: FF => position [10]
  EXPECT_EQ(payload.size(), 11u);
  EXPECT_EQ(static_cast<unsigned char>(payload[0]), 0xBF);
  EXPECT_EQ(static_cast<unsigned char>(payload[4]), 0xC1);
  EXPECT_EQ(static_cast<unsigned char>(payload[5]), 0x1A);
  EXPECT_EQ(static_cast<unsigned char>(payload[10]), 0xFF);
}

// --- Multiple fields ---

TEST_F(CborShapeSerializerTest, MultipleScalars) {
  CborShapeSerializer s;
  Schema root;
  Schema m1("a", ShapeType::Boolean);
  Schema m2("b", ShapeType::Integer);
  Schema m3("c", ShapeType::String);
  s.BeginStructure(root);
  s.WriteMapKey("a");
  s.WriteBoolean(m1, true);
  s.WriteMapKey("b");
  s.WriteInteger(m2, 7);
  s.WriteMapKey("c");
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
  s.WriteMapKey("meta");
  s.BeginNestedStructure(nested);
  s.WriteMapKey("key");
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
  s.WriteMapKey("l1");
  s.BeginNestedStructure(l1);
  s.WriteMapKey("l2");
  s.BeginNestedStructure(l2);
  s.WriteMapKey("v");
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
  s.WriteMapKey("nums");
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
  s.WriteMapKey("items");
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
  s.WriteMapKey("tags");
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
  s.WriteMapKey("items");
  s.BeginList(listMember, 2);
  s.BeginNestedStructure(structElem);
  s.WriteMapKey("id");
  s.WriteInteger(field, 1);
  s.EndNestedStructure();
  s.BeginNestedStructure(structElem);
  s.WriteMapKey("id");
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
  s.WriteMapKey("headers");
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
  expected += '\xA2';  // definite map of 2 entries
  expected += '\x63';  // text "foo" length 3
  expected += "foo";
  expected += '\x63';  // text "bar" length 3
  expected += "bar";
  expected += '\x63';  // text "baz"
  expected += "baz";
  expected += '\x63';  // text "qux"
  expected += "qux";
  expected += '\xFF';  // outer map break
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, EmptyMap) {
  CborShapeSerializer s;
  Schema root;
  Schema mapMember("tags", ShapeType::Map);
  s.BeginStructure(root);
  s.WriteMapKey("tags");
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
  expected += '\xA0';  // definite map of 0 entries
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
  s.WriteMapKey("nodes");
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("a");
  s.BeginNestedStructure(valSchema);
  s.WriteMapKey("val");
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
  expected += '\xA1';  // definite map of 1 entry
  expected += '\x61';  // key "a"
  expected += 'a';
  expected += '\xBF';  // nested struct (indefinite)
  expected += '\x63';  // "val"
  expected += "val";
  expected += '\x01';  // integer 1
  expected += '\xFF';  // end nested struct
  expected += '\xFF';  // end outer map
  EXPECT_EQ(payload, expected);
}

// --- Depth limit ---

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
  s.WriteMapKey("status");
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
  s.WriteMapKey("name");
  s.WriteString(strMember, "hi");
  s.WriteMapKey("tags");
  s.BeginList(listMember, 1);
  s.WriteString(listElem, "t1");
  s.EndList();
  s.WriteMapKey("meta");
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
  expected += '\xA1';  // definite map of 1 entry
  expected += '\x61';  // "k"
  expected += 'k';
  expected += '\x05';  // integer 5
  expected += '\xFF';  // outer end
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, IntegerZero) {
  CborShapeSerializer s;
  Schema root;
  Schema member("z", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteMapKey("z");
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
  s.WriteMapKey("n");
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
  s.WriteMapKey("items");
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

// --- Additional coverage ---

TEST_F(CborShapeSerializerTest, IntegerFourByte) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteMapKey("n");
  s.WriteInteger(member, 70000);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "n"
  expected += 'n';
  expected += '\x1A';  // posint, four-byte follows
  expected += '\x00';
  expected += '\x01';
  expected += '\x11';
  expected += '\x70';  // 70000 = 0x00011170
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, LongEightByte) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Long);
  s.BeginStructure(root);
  s.WriteMapKey("n");
  s.WriteLong(member, 5000000000LL);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "n"
  expected += 'n';
  expected += '\x1B';  // posint, eight-byte follows
  expected += '\x00';
  expected += '\x00';
  expected += '\x00';
  expected += '\x01';
  expected += '\x2A';
  expected += '\x05';
  expected += '\xF2';
  expected += '\x00';  // 5000000000 = 0x000000012A05F200
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, LargeNegativeInteger) {
  CborShapeSerializer s;
  Schema root;
  Schema member("n", ShapeType::Long);
  s.BeginStructure(root);
  s.WriteMapKey("n");
  s.WriteLong(member, -1000000LL);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "n"
  expected += 'n';
  expected += '\x3A';  // negint, four-byte follows
  expected += '\x00';
  expected += '\x0F';
  expected += '\x42';
  expected += '\x3F';  // -1000000 => negint encoding: -(n+1), so 999999 = 0x000F423F
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, DoubleWholeNumberEncodedAsInt) {
  // CRT encoder uses "smallest possible" — a double like 5.0 encodes as integer 5
  CborShapeSerializer s;
  Schema root;
  Schema member("d", ShapeType::Double);
  s.BeginStructure(root);
  s.WriteMapKey("d");
  s.WriteDouble(member, 5.0);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // Expect integer encoding (0x05), not double encoding (0xFB + 8 bytes)
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "d"
  expected += 'd';
  expected += '\x05';  // integer 5 (smallest possible)
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, DoubleNegativeWholeNumberEncodedAsNegInt) {
  // CRT encoder: -3.0 encodes as negint 2 (meaning -(2+1) = -3)
  CborShapeSerializer s;
  Schema root;
  Schema member("d", ShapeType::Double);
  s.BeginStructure(root);
  s.WriteMapKey("d");
  s.WriteDouble(member, -3.0);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "d"
  expected += 'd';
  expected += '\x22';  // negint 2 => -3
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, UnicodeString) {
  CborShapeSerializer s;
  Schema root;
  Schema member("s", ShapeType::String);
  s.BeginStructure(root);
  s.WriteMapKey("s");
  s.WriteString(member, "\xC3\xA9\xC3\xA8");  // "éè" in UTF-8 (4 bytes)
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "s"
  expected += 's';
  expected += '\x64';  // text length 4
  expected += "\xC3\xA9\xC3\xA8";
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, NestedListInList) {
  CborShapeSerializer s;
  Schema root;
  Schema outerList("data", ShapeType::List);
  Schema innerList("member", ShapeType::List);
  Schema elem("member", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteMapKey("data");
  s.BeginList(outerList, 2);
  s.BeginList(innerList, 2);
  s.WriteInteger(elem, 1);
  s.WriteInteger(elem, 2);
  s.EndList();
  s.BeginList(innerList, 1);
  s.WriteInteger(elem, 3);
  s.EndList();
  s.EndList();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x64';  // "data"
  expected += "data";
  expected += '\x82';  // outer array of 2
  expected += '\x82';  // inner array of 2
  expected += '\x01';  // 1
  expected += '\x02';  // 2
  expected += '\x81';  // inner array of 1
  expected += '\x03';  // 3
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, MapWithMultipleEntries) {
  CborShapeSerializer s;
  Schema root;
  Schema mapMember("m", ShapeType::Map);
  Schema valSchema("value", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteMapKey("m");
  s.BeginMap(mapMember, 3);
  s.WriteMapKey("x");
  s.WriteInteger(valSchema, 1);
  s.WriteMapKey("y");
  s.WriteInteger(valSchema, 2);
  s.WriteMapKey("z");
  s.WriteInteger(valSchema, 3);
  s.EndMap();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "m"
  expected += 'm';
  expected += '\xA3';  // definite map of 3
  expected += '\x61';  // "x"
  expected += 'x';
  expected += '\x01';  // 1
  expected += '\x61';  // "y"
  expected += 'y';
  expected += '\x02';  // 2
  expected += '\x61';  // "z"
  expected += 'z';
  expected += '\x03';  // 3
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, FloatValue) {
  CborShapeSerializer s;
  Schema root;
  Schema member("f", ShapeType::Float);
  s.BeginStructure(root);
  s.WriteMapKey("f");
  s.WriteFloat(member, 1.5f);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // 1.5 can be represented exactly as float32, CRT encodes as single float (0xFA)
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "f"
  expected += 'f';
  expected += '\xFA';  // single-precision float marker
  expected += '\x3F';  // 1.5f IEEE 754: 0x3FC00000
  expected += '\xC0';
  expected += '\x00';
  expected += '\x00';
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, FloatWholeNumberEncodedAsInt) {
  // CRT "smallest possible": 7.0f encodes as integer 7
  CborShapeSerializer s;
  Schema root;
  Schema member("f", ShapeType::Float);
  s.BeginStructure(root);
  s.WriteMapKey("f");
  s.WriteFloat(member, 7.0f);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x61';  // "f"
  expected += 'f';
  expected += '\x07';  // integer 7
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, TimestampEpochZero) {
  CborShapeSerializer s;
  Schema root;
  Schema member("ts", ShapeType::Timestamp);
  s.BeginStructure(root);
  s.WriteMapKey("ts");
  Aws::Utils::DateTime dt(0.0);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // Tag 1 + integer 0
  Aws::String expected;
  expected += '\xBF';
  expected += '\x62';  // "ts"
  expected += "ts";
  expected += '\xC1';  // tag 1
  expected += '\x00';  // integer 0
  expected += '\xFF';
  EXPECT_EQ(payload, expected);
}

TEST_F(CborShapeSerializerTest, LargeBlob) {
  CborShapeSerializer s;
  Schema root;
  Schema member("b", ShapeType::Blob);
  s.BeginStructure(root);
  s.WriteMapKey("b");
  Aws::Utils::ByteBuffer blob(300);
  for (size_t i = 0; i < 300; i++) {
    blob[i] = static_cast<unsigned char>(i % 256);
  }
  s.WriteBlob(member, blob);
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  // Verify: BF + key "b" + bytestring header (two-byte length for 300) + 300 bytes + FF
  ASSERT_GE(payload.size(), 306u);
  EXPECT_EQ(static_cast<unsigned char>(payload[0]), 0xBF);
  EXPECT_EQ(static_cast<unsigned char>(payload[1]), 0x61);  // text len 1
  EXPECT_EQ(payload[2], 'b');
  EXPECT_EQ(static_cast<unsigned char>(payload[3]), 0x59);  // bytestring, two-byte length
  EXPECT_EQ(static_cast<unsigned char>(payload[4]), 0x01);  // 300 = 0x012C
  EXPECT_EQ(static_cast<unsigned char>(payload[5]), 0x2C);
  EXPECT_EQ(static_cast<unsigned char>(payload[payload.size() - 1]), 0xFF);
  EXPECT_EQ(payload.size(), 3 + 3 + 300 + 1u);  // key + header + blob + break
}

TEST_F(CborShapeSerializerTest, UnionAsStructure) {
  // Unions serialize like a structure with exactly one field
  CborShapeSerializer s;
  Schema root;
  Schema unionMember("result", ShapeType::Union);
  Schema field("message", ShapeType::String);
  s.BeginStructure(root);
  s.WriteMapKey("result");
  s.BeginNestedStructure(unionMember);
  s.WriteMapKey("message");
  s.WriteString(field, "ok");
  s.EndNestedStructure();
  s.EndStructure();
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  const auto& payload = outcome.GetResult();
  Aws::String expected;
  expected += '\xBF';
  expected += '\x66';  // "result"
  expected += "result";
  expected += '\xBF';  // nested indefinite map (union)
  expected += '\x67';  // "message"
  expected += "message";
  expected += '\x62';  // "ok"
  expected += "ok";
  expected += '\xFF';  // end union
  expected += '\xFF';  // end outer
  EXPECT_EQ(payload, expected);
}
