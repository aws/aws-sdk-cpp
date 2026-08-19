/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/CborShapeSerializer.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>

#include <cstring>
#include <functional>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class CborShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {
Aws::String Bytes(const char* data, size_t len) { return Aws::String(data, len); }
}  // namespace

TEST_F(CborShapeSerializerTest, EmptyStructure) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  LambdaStruct rootStruct(*root, [](ShapeSerializer&) {});
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  // indefinite map start + break
  EXPECT_EQ(outcome.GetResult(), Bytes("\xBF\xFF", 2));
}

TEST_F(CborShapeSerializerTest, BooleanTrue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, true); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ok", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, false); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 1); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 42); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, -1); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, -100); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("big", ShapeType::Long);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteLong(*member, 1000000LL); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("d", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.14); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("s", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, ""); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("data", ShapeType::Blob);
  unsigned char raw[] = {0xDE, 0xAD, 0xBE, 0xEF};
  Aws::Utils::ByteBuffer buf(raw, 4);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, buf); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("item", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ts", ShapeType::Timestamp);
  // DateTime(int64_t) takes milliseconds; 1234567000ms = 1234567 seconds (no fractional part)
  Aws::Utils::DateTime dt(static_cast<int64_t>(1234567000));
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ts", ShapeType::Timestamp);
  Aws::Utils::DateTime dt(1234567890.5);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });
  s.WriteStruct(*root, rootStruct);
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

TEST_F(CborShapeSerializerTest, MultipleScalars) {
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

TEST_F(CborShapeSerializerTest, NestedStructure) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("meta", ShapeType::Structure);
  auto inner = Schema::CreateMember("key", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto l1 = Schema::CreateMember("l1", ShapeType::Structure);
  auto l2 = Schema::CreateMember("l2", ShapeType::Structure);
  auto leaf = Schema::CreateMember("v", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*l1, LambdaStruct(*l1, [&](ShapeSerializer& ser2) {
      ser2.WriteStruct(*l2, LambdaStruct(*l2, [&](ShapeSerializer& ser3) { ser3.WriteInteger(*leaf, 99); }));
    }));
  });
  s.WriteStruct(*root, rootStruct);
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

TEST_F(CborShapeSerializerTest, ListOfIntegers) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("nums", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 3, [&](ShapeSerializer& lser) {
      lser.WriteInteger(*elem, 1);
      lser.WriteInteger(*elem, 2);
      lser.WriteInteger(*elem, 3);
    });
  });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteList(*listMember, 0, [](ShapeSerializer&) {}); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("tags", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "ab");
      lser.WriteString(*elem, "cd");
    });
  });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  auto structElem = Schema::CreateMember("member", ShapeType::Structure);
  auto field = Schema::CreateMember("id", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteStruct(*structElem, LambdaStruct(*structElem, [&](ShapeSerializer& es) { es.WriteInteger(*field, 1); }));
      lser.WriteStruct(*structElem, LambdaStruct(*structElem, [&](ShapeSerializer& es) { es.WriteInteger(*field, 2); }));
    });
  });
  s.WriteStruct(*root, rootStruct);
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

TEST_F(CborShapeSerializerTest, MapOfStrings) {
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("tags", ShapeType::Map);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteMap(*mapMember, 0, [](MapSerializer&) {}); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("nodes", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::Structure);
  auto field = Schema::CreateMember("val", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("a", [&](ShapeSerializer& vser) {
        vser.WriteStruct(*valSchema, LambdaStruct(*valSchema, [&](ShapeSerializer& vs) { vs.WriteInteger(*field, 1); }));
      });
    });
  });
  s.WriteStruct(*root, rootStruct);
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

TEST_F(CborShapeSerializerTest, GetPayloadCalledTwice) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  LambdaStruct rootStruct(*root, [](ShapeSerializer&) {});
  s.WriteStruct(*root, rootStruct);
  auto outcome1 = s.GetPayload();
  ASSERT_TRUE(outcome1.IsSuccess());
  auto outcome2 = s.GetPayload();
  ASSERT_FALSE(outcome2.IsSuccess());
  EXPECT_NE(outcome2.GetError().GetMessage().find("finalized"), Aws::String::npos);
}

TEST_F(CborShapeSerializerTest, EnumValue) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("status", ShapeType::Enum);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteEnum(*member, 3); });
  s.WriteStruct(*root, rootStruct);
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

TEST_F(CborShapeSerializerTest, StructureWithListAndMap) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto strMember = Schema::CreateMember("name", ShapeType::String);
  auto listMember = Schema::CreateMember("tags", ShapeType::List);
  auto listElem = Schema::CreateMember("member", ShapeType::String);
  auto mapMember = Schema::CreateMember("meta", ShapeType::Map);
  auto mapVal = Schema::CreateMember("value", ShapeType::Integer);

  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*strMember, "hi");
    ser.WriteList(*listMember, 1, [&](ShapeSerializer& lser) { lser.WriteString(*listElem, "t1"); });
    ser.WriteMap(*mapMember, 1,
                 [&](MapSerializer& mapSer) { mapSer.WriteEntry("k", [&](ShapeSerializer& vser) { vser.WriteInteger(*mapVal, 5); }); });
  });
  s.WriteStruct(*root, rootStruct);

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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("z", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 0); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 1000); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 3, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteNull(*elem);
      lser.WriteString(*elem, "b");
    });
  });
  s.WriteStruct(*root, rootStruct);
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

TEST_F(CborShapeSerializerTest, IntegerFourByte) {
  CborShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 70000); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Long);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteLong(*member, 5000000000LL); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("n", ShapeType::Long);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteLong(*member, -1000000LL); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("d", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 5.0); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("d", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, -3.0); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("s", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "\xC3\xA9\xC3\xA8"); });  // "éè" in UTF-8 (4 bytes)
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto outerList = Schema::CreateMember("data", ShapeType::List);
  auto innerList = Schema::CreateMember("member", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*outerList, 2, [&](ShapeSerializer& lser) {
      lser.WriteList(*innerList, 2, [&](ShapeSerializer& lser2) {
        lser2.WriteInteger(*elem, 1);
        lser2.WriteInteger(*elem, 2);
      });
      lser.WriteList(*innerList, 1, [&](ShapeSerializer& lser2) { lser2.WriteInteger(*elem, 3); });
    });
  });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("m", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 3, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("x", [&](ShapeSerializer& vser) { vser.WriteInteger(*valSchema, 1); });
      mapSer.WriteEntry("y", [&](ShapeSerializer& vser) { vser.WriteInteger(*valSchema, 2); });
      mapSer.WriteEntry("z", [&](ShapeSerializer& vser) { vser.WriteInteger(*valSchema, 3); });
    });
  });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("f", ShapeType::Float);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, 1.5f); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("f", ShapeType::Float);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, 7.0f); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ts", ShapeType::Timestamp);
  Aws::Utils::DateTime dt(0.0);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("b", ShapeType::Blob);
  Aws::Utils::ByteBuffer blob(300);
  for (size_t i = 0; i < 300; i++) {
    blob[i] = static_cast<unsigned char>(i % 256);
  }
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, blob); });
  s.WriteStruct(*root, rootStruct);
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
  auto root = Schema::StructureBuilder("Root").Build();
  auto unionMember = Schema::CreateMember("result", ShapeType::Union);
  auto field = Schema::CreateMember("message", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*unionMember, LambdaStruct(*unionMember, [&](ShapeSerializer& ser2) { ser2.WriteString(*field, "ok"); }));
  });
  s.WriteStruct(*root, rootStruct);
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
