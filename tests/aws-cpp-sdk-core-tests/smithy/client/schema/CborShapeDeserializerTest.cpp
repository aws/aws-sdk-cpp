/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/CborShapeDeserializer.h>
#include <smithy/client/schema/CborShapeSerializer.h>
#include <smithy/client/schema/Schema.h>

using namespace smithy::schema;

class CborShapeDeserializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

// --- Scalars ---

TEST_F(CborShapeDeserializerTest, BooleanTrue) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("enabled");
  s.WriteBoolean(root, true);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  ASSERT_FALSE(d.IsBreak());
  EXPECT_EQ(d.ReadKey(), "enabled");
  EXPECT_TRUE(d.ReadBoolean());
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, BooleanFalse) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("ok");
  s.WriteBoolean(root, false);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "ok");
  EXPECT_FALSE(d.ReadBoolean());
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, IntegerSmall) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("n");
  s.WriteInteger(root, 7);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "n");
  EXPECT_EQ(d.ReadInteger(), 7);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, IntegerNegative) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("n");
  s.WriteInteger(root, -42);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "n");
  EXPECT_EQ(d.ReadInteger(), -42);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, LongValue) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("big");
  s.WriteLong(root, 5000000000LL);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "big");
  EXPECT_EQ(d.ReadLong(), 5000000000LL);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, DoubleValue) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("d");
  s.WriteDouble(root, 3.14);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "d");
  EXPECT_DOUBLE_EQ(d.ReadDouble(), 3.14);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, DoubleWholeNumber) {
  // CRT encodes 5.0 as integer 5 — deserializer must handle this
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("d");
  s.WriteDouble(root, 5.0);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "d");
  EXPECT_DOUBLE_EQ(d.ReadDouble(), 5.0);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, FloatValue) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("f");
  s.WriteFloat(root, 1.5f);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "f");
  EXPECT_FLOAT_EQ(d.ReadFloat(), 1.5f);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, StringValue) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("name");
  s.WriteString(root, "hello");
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "name");
  EXPECT_EQ(d.ReadString(), "hello");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, BlobValue) {
  CborShapeSerializer s;
  Schema root;
  Aws::Utils::ByteBuffer blob(4);
  blob[0] = 0xDE; blob[1] = 0xAD; blob[2] = 0xBE; blob[3] = 0xEF;
  s.BeginStructure(root);
  s.WriteMapKey("data");
  s.WriteBlob(root, blob);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "data");
  auto result = d.ReadBlob();
  ASSERT_EQ(result.GetLength(), 4u);
  EXPECT_EQ(result[0], 0xDE);
  EXPECT_EQ(result[1], 0xAD);
  EXPECT_EQ(result[2], 0xBE);
  EXPECT_EQ(result[3], 0xEF);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, TimestampValue) {
  CborShapeSerializer s;
  Schema root;
  Aws::Utils::DateTime dt(1234567890.0);  // seconds since epoch
  s.BeginStructure(root);
  s.WriteMapKey("ts");
  s.WriteTimestamp(root, dt);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "ts");
  auto result = d.ReadTimestamp();
  EXPECT_EQ(result.Seconds(), 1234567890);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, NullValue) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("item");
  s.WriteNull(root);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "item");
  EXPECT_TRUE(d.IsNull());
  d.ReadNull();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Collections ---

TEST_F(CborShapeDeserializerTest, ListOfIntegers) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("nums");
  s.BeginList(root, 3);
  s.WriteInteger(root, 10);
  s.WriteInteger(root, 20);
  s.WriteInteger(root, 30);
  s.EndList();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "nums");
  size_t count = d.BeginList();
  EXPECT_EQ(count, 3u);
  EXPECT_EQ(d.ReadInteger(), 10);
  EXPECT_EQ(d.ReadInteger(), 20);
  EXPECT_EQ(d.ReadInteger(), 30);
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, MapOfStrings) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("headers");
  s.BeginMap(root, 2);
  s.WriteMapKey("foo");
  s.WriteString(root, "bar");
  s.WriteMapKey("baz");
  s.WriteString(root, "qux");
  s.EndMap();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "headers");
  size_t count = d.BeginMap();
  EXPECT_EQ(count, 2u);
  EXPECT_EQ(d.ReadKey(), "foo");
  EXPECT_EQ(d.ReadString(), "bar");
  EXPECT_EQ(d.ReadKey(), "baz");
  EXPECT_EQ(d.ReadString(), "qux");
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, NestedStructure) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("meta");
  s.BeginNestedStructure(root);
  s.WriteMapKey("key");
  s.WriteString(root, "val");
  s.EndNestedStructure();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "meta");
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "key");
  EXPECT_EQ(d.ReadString(), "val");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Skip unknown fields ---

TEST_F(CborShapeDeserializerTest, SkipUnknownField) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("known");
  s.WriteInteger(root, 1);
  s.WriteMapKey("unknown");
  s.WriteString(root, "skip me");
  s.WriteMapKey("also_known");
  s.WriteInteger(root, 2);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "known");
  EXPECT_EQ(d.ReadInteger(), 1);
  EXPECT_EQ(d.ReadKey(), "unknown");
  d.SkipValue();
  EXPECT_EQ(d.ReadKey(), "also_known");
  EXPECT_EQ(d.ReadInteger(), 2);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, SkipNestedUnknown) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("unknown_struct");
  s.BeginNestedStructure(root);
  s.WriteMapKey("a");
  s.WriteInteger(root, 1);
  s.WriteMapKey("b");
  s.WriteString(root, "nested");
  s.EndNestedStructure();
  s.WriteMapKey("known");
  s.WriteInteger(root, 42);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "unknown_struct");
  d.SkipValue();
  EXPECT_EQ(d.ReadKey(), "known");
  EXPECT_EQ(d.ReadInteger(), 42);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Multiple fields ---

TEST_F(CborShapeDeserializerTest, MultipleScalars) {
  CborShapeSerializer s;
  Schema root;
  s.BeginStructure(root);
  s.WriteMapKey("a");
  s.WriteBoolean(root, true);
  s.WriteMapKey("b");
  s.WriteInteger(root, 7);
  s.WriteMapKey("c");
  s.WriteString(root, "x");
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  EXPECT_EQ(d.ReadKey(), "a");
  EXPECT_TRUE(d.ReadBoolean());
  EXPECT_EQ(d.ReadKey(), "b");
  EXPECT_EQ(d.ReadInteger(), 7);
  EXPECT_EQ(d.ReadKey(), "c");
  EXPECT_EQ(d.ReadString(), "x");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}
