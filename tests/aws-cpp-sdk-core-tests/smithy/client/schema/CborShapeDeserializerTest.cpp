/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/CborShapeDeserializer.h>
#include <smithy/client/schema/CborShapeSerializer.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>

#include <functional>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class CborShapeDeserializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

// --- Scalars ---

TEST_F(CborShapeDeserializerTest, BooleanTrue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, true); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  ASSERT_FALSE(d.IsBreak());
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "enabled");
  auto val = d.ReadBoolean();
  ASSERT_TRUE(val.has_value());
  EXPECT_TRUE(val.value());
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, BooleanFalse) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ok", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, false); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

TEST_F(CborShapeDeserializerTest, IntegerSmall) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 7); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "n");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 7);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, IntegerNegative) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, -42); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "n");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), -42);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, LongValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("big", ShapeType::Long);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteLong(*member, 5000000000LL); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "big");
  auto val = d.ReadLong();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 5000000000LL);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, DoubleValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("d", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.14); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "d");
  auto val = d.ReadDouble();
  ASSERT_TRUE(val.has_value());
  EXPECT_DOUBLE_EQ(val.value(), 3.14);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, DoubleWholeNumber) {
  // CRT encodes 5.0 as integer 5 — deserializer must handle this
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("d", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 5.0); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "d");
  auto val = d.ReadDouble();
  ASSERT_TRUE(val.has_value());
  EXPECT_DOUBLE_EQ(val.value(), 5.0);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, FloatValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("f", ShapeType::Float);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, 1.5f); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

TEST_F(CborShapeDeserializerTest, StringValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "name");
  auto val = d.ReadString();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), "hello");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, BlobValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  Aws::Utils::ByteBuffer blob(4);
  blob[0] = 0xDE;
  blob[1] = 0xAD;
  blob[2] = 0xBE;
  blob[3] = 0xEF;
  auto member = Schema::CreateMember("data", ShapeType::Blob);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, blob); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "data");
  auto result = d.ReadBlob();
  ASSERT_TRUE(result.has_value());
  ASSERT_EQ(result.value().GetLength(), 4u);
  EXPECT_EQ(result.value()[0], 0xDE);
  EXPECT_EQ(result.value()[1], 0xAD);
  EXPECT_EQ(result.value()[2], 0xBE);
  EXPECT_EQ(result.value()[3], 0xEF);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, TimestampValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  Aws::Utils::DateTime dt(1234567890.0);  // seconds since epoch
  auto member = Schema::CreateMember("ts", ShapeType::Timestamp);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "ts");
  auto result = d.ReadTimestamp();
  ASSERT_TRUE(result.has_value());
  EXPECT_EQ(result.value().Seconds(), 1234567890);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, NullValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("item", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "item");
  EXPECT_TRUE(d.IsNull());
  d.ReadNull();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Collections ---

TEST_F(CborShapeDeserializerTest, ListOfIntegers) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("nums", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 3, [&](ShapeSerializer& lser) {
      lser.WriteInteger(*elem, 10);
      lser.WriteInteger(*elem, 20);
      lser.WriteInteger(*elem, 30);
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "nums");
  size_t count = d.BeginList();
  EXPECT_EQ(count, 3u);
  auto v1 = d.ReadInteger();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), 10);
  auto v2 = d.ReadInteger();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), 20);
  auto v3 = d.ReadInteger();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), 30);
  d.EndList();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, MapOfStrings) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("headers", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("foo", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "bar"); });
      mapSer.WriteEntry("baz", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "qux"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "headers");
  size_t count = d.BeginMap();
  EXPECT_EQ(count, 2u);
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
  d.EndMap();
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, NestedStructure) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("meta", ShapeType::Structure);
  auto inner = Schema::CreateMember("key", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "meta");
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

// --- Skip unknown fields ---

TEST_F(CborShapeDeserializerTest, SkipUnknownField) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto known = Schema::CreateMember("known", ShapeType::Integer);
  auto unknown = Schema::CreateMember("unknown", ShapeType::String);
  auto alsoKnown = Schema::CreateMember("also_known", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteInteger(*known, 1);
    ser.WriteString(*unknown, "skip me");
    ser.WriteInteger(*alsoKnown, 2);
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

TEST_F(CborShapeDeserializerTest, SkipNestedUnknown) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto unknownStruct = Schema::CreateMember("unknown_struct", ShapeType::Structure);
  auto a = Schema::CreateMember("a", ShapeType::Integer);
  auto b = Schema::CreateMember("b", ShapeType::String);
  auto known = Schema::CreateMember("known", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*unknownStruct, LambdaStruct(*unknownStruct, [&](ShapeSerializer& ser2) {
                      ser2.WriteInteger(*a, 1);
                      ser2.WriteString(*b, "nested");
                    }));
    ser.WriteInteger(*known, 42);
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "unknown_struct");
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

// --- Multiple fields ---

TEST_F(CborShapeDeserializerTest, MultipleScalars) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto m1 = Schema::CreateMember("a", ShapeType::Boolean);
  auto m2 = Schema::CreateMember("b", ShapeType::Integer);
  auto m3 = Schema::CreateMember("c", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteBoolean(*m1, true);
    ser.WriteInteger(*m2, 7);
    ser.WriteString(*m3, "x");
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "a");
  auto v1 = d.ReadBoolean();
  ASSERT_TRUE(v1.has_value());
  EXPECT_TRUE(v1.value());
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "b");
  auto v2 = d.ReadInteger();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), 7);
  auto k3 = d.ReadKey();
  ASSERT_TRUE(k3.has_value());
  EXPECT_EQ(k3.value(), "c");
  auto v3 = d.ReadString();
  ASSERT_TRUE(v3.has_value());
  EXPECT_EQ(v3.value(), "x");
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Error handling (Optional returns empty on failure) ---

TEST_F(CborShapeDeserializerTest, EmptyOptionalOnEmptyPayload) {
  const unsigned char empty[1] = {0};
  CborShapeDeserializer d(empty, 0);
  auto val = d.ReadBoolean();
  EXPECT_FALSE(val.has_value());
}

TEST_F(CborShapeDeserializerTest, EmptyOptionalOnTypeMismatch) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("val", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "val");
  auto val = d.ReadInteger();
  EXPECT_FALSE(val.has_value());
}

TEST_F(CborShapeDeserializerTest, ValidOptionalOnSuccess) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 42); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  d.BeginStruct();
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "n");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 42);
}

// --- BeginStruct returns size for definite-length maps ---

TEST_F(CborShapeDeserializerTest, BeginStructDefiniteLengthMap) {
  // Definite-length map with 2 entries:
  // A2             -- map(2)
  //   61 61        -- text(1) "a"
  //   01           -- unsigned(1)
  //   61 62        -- text(1) "b"
  //   02           -- unsigned(2)
  const unsigned char data[] = {0xA2, 0x61, 0x61, 0x01, 0x61, 0x62, 0x02};
  CborShapeDeserializer d(data, sizeof(data));
  size_t count = d.BeginStruct();
  EXPECT_EQ(count, 2u);
  auto k1 = d.ReadKey();
  ASSERT_TRUE(k1.has_value());
  EXPECT_EQ(k1.value(), "a");
  auto v1 = d.ReadInteger();
  ASSERT_TRUE(v1.has_value());
  EXPECT_EQ(v1.value(), 1);
  auto k2 = d.ReadKey();
  ASSERT_TRUE(k2.has_value());
  EXPECT_EQ(k2.value(), "b");
  auto v2 = d.ReadInteger();
  ASSERT_TRUE(v2.has_value());
  EXPECT_EQ(v2.value(), 2);
  d.EndStruct();
}

TEST_F(CborShapeDeserializerTest, BeginStructIndefiniteLengthMap) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("x", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 99); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  size_t count = d.BeginStruct();
  EXPECT_EQ(count, 0u);
  EXPECT_FALSE(d.IsBreak());
  auto key = d.ReadKey();
  ASSERT_TRUE(key.has_value());
  EXPECT_EQ(key.value(), "x");
  auto val = d.ReadInteger();
  ASSERT_TRUE(val.has_value());
  EXPECT_EQ(val.value(), 99);
  EXPECT_TRUE(d.IsBreak());
  d.EndStruct();
}

// --- Timestamp handling ---

TEST_F(CborShapeDeserializerTest, TimestampFromFloat) {
  // tag(1) followed by float64 1234567890.5
  // C1 = tag(1), FB = float64, 41D26580B4A00000 = IEEE 754 1234567890.5
  const unsigned char data[] = {0xC1, 0xFB, 0x41, 0xD2, 0x65, 0x80, 0xB4, 0xA0, 0x00, 0x00};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp();
  ASSERT_TRUE(ts.has_value());
  EXPECT_DOUBLE_EQ(ts.value().SecondsWithMSPrecision(), 1234567890.5);
}

TEST_F(CborShapeDeserializerTest, TimestampNegativeIntReturnsEmpty) {
  // tag(1) followed by negative int: C1 = tag(1), 20 = negint(0) meaning -1
  const unsigned char data[] = {0xC1, 0x20};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp();
  EXPECT_FALSE(ts.has_value());
}

TEST_F(CborShapeDeserializerTest, TimestampNegativeFloatReturnsEmpty) {
  // tag(1) followed by float64 -1.0
  // C1 = tag(1), FB = float64, BFF0000000000000 = IEEE 754 -1.0
  const unsigned char data[] = {0xC1, 0xFB, 0xBF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp();
  EXPECT_FALSE(ts.has_value());
}

TEST_F(CborShapeDeserializerTest, TimestampInvalidTagReturnsEmpty) {
  // tag(2) followed by uint 100 — tag 2 is not epoch timestamp
  // C2 = tag(2), 18 64 = uint(100)
  const unsigned char data[] = {0xC2, 0x18, 0x64};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp();
  EXPECT_FALSE(ts.has_value());
}

TEST_F(CborShapeDeserializerTest, ReadKeyOnNonStringReturnsEmpty) {
  // Raw uint 42 — not a text string
  // 18 2A = uint(42)
  const unsigned char data[] = {0x18, 0x2A};
  CborShapeDeserializer d(data, sizeof(data));
  auto key = d.ReadKey();
  EXPECT_FALSE(key.has_value());
}
