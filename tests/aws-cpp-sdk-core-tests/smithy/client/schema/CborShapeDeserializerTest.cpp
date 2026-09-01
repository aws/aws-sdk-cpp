/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/crt/Optional.h>
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

namespace {

Aws::String Encode(const std::shared_ptr<const Schema>& root, const std::function<void(ShapeSerializer&)>& writeMembers) {
  CborShapeSerializer s;
  LambdaStruct rootStruct(*root, writeMembers);
  s.WriteStruct(*root, rootStruct);
  return s.GetPayload().GetResult();
}

}

TEST_F(CborShapeDeserializerTest, BooleanTrue) {
  auto root = Schema::StructureBuilder("Root").PutMember("enabled", Schema::CreateBoolean("B")).Build();
  auto enabled = root->GetMember("enabled").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*enabled, true); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<bool> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "enabled") {
      got = de.ReadBoolean(m);
    }
  });
  ASSERT_TRUE(got.has_value());
  EXPECT_TRUE(got.value());
}

TEST_F(CborShapeDeserializerTest, BooleanFalse) {
  auto root = Schema::StructureBuilder("Root").PutMember("ok", Schema::CreateBoolean("B")).Build();
  auto ok = root->GetMember("ok").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*ok, false); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<bool> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBoolean(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_FALSE(got.value());
}

TEST_F(CborShapeDeserializerTest, IntegerSmall) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, 7); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 7);
}

TEST_F(CborShapeDeserializerTest, IntegerNegative) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, -42); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), -42);
}

TEST_F(CborShapeDeserializerTest, LongValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("big", Schema::CreateLong("L")).Build();
  auto big = root->GetMember("big").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteLong(*big, 5000000000LL); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int64_t> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 5000000000LL);
}

TEST_F(CborShapeDeserializerTest, DoubleValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.14); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<double> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadDouble(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_DOUBLE_EQ(got.value(), 3.14);
}

TEST_F(CborShapeDeserializerTest, DoubleWholeNumber) {

  auto root = Schema::StructureBuilder("Root").PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 5.0); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<double> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadDouble(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_DOUBLE_EQ(got.value(), 5.0);
}

TEST_F(CborShapeDeserializerTest, FloatValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("f", Schema::CreateFloat("F")).Build();
  auto member = root->GetMember("f").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, 1.5f); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<float> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadFloat(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_FLOAT_EQ(got.value(), 1.5f);
}

TEST_F(CborShapeDeserializerTest, StringValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("name", Schema::CreateString("S")).Build();
  auto member = root->GetMember("name").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "hello");
}

TEST_F(CborShapeDeserializerTest, BlobValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("data", Schema::CreateBlob("Bl")).Build();
  auto member = root->GetMember("data").value();
  Aws::Utils::ByteBuffer blob(4);
  blob[0] = 0xDE;
  blob[1] = 0xAD;
  blob[2] = 0xBE;
  blob[3] = 0xEF;
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, blob); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBlob(m); });
  ASSERT_TRUE(got.has_value());
  ASSERT_EQ(got.value().GetLength(), 4u);
  EXPECT_EQ(got.value()[0], 0xDE);
  EXPECT_EQ(got.value()[1], 0xAD);
  EXPECT_EQ(got.value()[2], 0xBE);
  EXPECT_EQ(got.value()[3], 0xEF);
}

TEST_F(CborShapeDeserializerTest, TimestampValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("ts", Schema::CreateTimestamp("T")).Build();
  auto member = root->GetMember("ts").value();
  Aws::Utils::DateTime dt(1234567890.0);
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<Aws::Utils::DateTime> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().Seconds(), 1234567890);
}

TEST_F(CborShapeDeserializerTest, NullMemberIsSkipped) {
  auto root = Schema::StructureBuilder("Root").PutMember("item", Schema::CreateString("S")).Build();
  auto member = root->GetMember("item").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  int memberCalls = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++memberCalls; });

  EXPECT_EQ(memberCalls, 0);
}

TEST_F(CborShapeDeserializerTest, ListOfIntegers) {
  auto listBuilder = Schema::ListBuilder("Nums");
  auto root = Schema::StructureBuilder("Root").PutMember("nums", listBuilder).Build();
  auto nums = root->GetMember("nums").value();
  auto elem = Schema::CreateMember("member", ShapeType::Integer);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteList(*nums, 3, [&](ShapeSerializer& lser) {
      lser.WriteInteger(*elem, 10);
      lser.WriteInteger(*elem, 20);
      lser.WriteInteger(*elem, 30);
    });
  });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Vector<int> values;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "nums") {
      de.ReadList(m, [&](ShapeDeserializer& ede) {
        auto v = ede.ReadInteger(*elem);
        if (v.has_value()) {
          values.push_back(v.value());
        }
      });
    }
  });
  ASSERT_EQ(values.size(), 3u);
  EXPECT_EQ(values[0], 10);
  EXPECT_EQ(values[1], 20);
  EXPECT_EQ(values[2], 30);
}

TEST_F(CborShapeDeserializerTest, MapOfStrings) {
  auto mapBuilder = Schema::MapBuilder("Headers");
  auto root = Schema::StructureBuilder("Root").PutMember("headers", mapBuilder).Build();
  auto headers = root->GetMember("headers").value();
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*headers, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("foo", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "bar"); });
      mapSer.WriteEntry("baz", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "qux"); });
    });
  });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Map<Aws::String, Aws::String> entries;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "headers") {
      de.ReadMap(m, [&](const Aws::String& key, ShapeDeserializer& vde) {
        auto v = vde.ReadString(*valSchema);
        if (v.has_value()) {
          entries[key] = v.value();
        }
      });
    }
  });
  ASSERT_EQ(entries.size(), 2u);
  EXPECT_EQ(entries["foo"], "bar");
  EXPECT_EQ(entries["baz"], "qux");
}

TEST_F(CborShapeDeserializerTest, NestedStructure) {
  auto metaBuilder = Schema::StructureBuilder("Meta");
  metaBuilder.PutMember("key", Schema::CreateString("S"));
  auto root = Schema::StructureBuilder("Root").PutMember("meta", metaBuilder).Build();
  auto meta = root->GetMember("meta").value();
  auto inner = meta->GetMemberTarget().value()->GetMember("key").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*meta, LambdaStruct(*meta, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::String got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "meta") {
      de.ReadStruct(*m.GetMemberTarget().value(), [&](const Schema& im, ShapeDeserializer& ide) {
        if (im.GetMemberName() == "key") {
          auto v = ide.ReadString(im);
          if (v.has_value()) {
            got = v.value();
          }
        }
      });
    }
  });
  EXPECT_EQ(got, "val");
}

TEST_F(CborShapeDeserializerTest, SkipUnknownField) {

  auto root = Schema::StructureBuilder("Root")
                  .PutMember("known", Schema::CreateInteger("I"))
                  .PutMember("also_known", Schema::CreateInteger("I2"))
                  .Build();
  auto known = Schema::CreateMember("known", ShapeType::Integer);
  auto unknown = Schema::CreateMember("unknown", ShapeType::String);
  auto alsoKnown = Schema::CreateMember("also_known", ShapeType::Integer);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteInteger(*known, 1);
    ser.WriteString(*unknown, "skip me");
    ser.WriteInteger(*alsoKnown, 2);
  });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Map<Aws::String, int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    auto v = de.ReadInteger(m);
    if (v.has_value()) {
      got[m.GetMemberName()] = v.value();
    }
  });
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got["known"], 1);
  EXPECT_EQ(got["also_known"], 2);
  EXPECT_EQ(got.find("unknown"), got.end());
}

TEST_F(CborShapeDeserializerTest, SkipNestedUnknown) {

  auto root = Schema::StructureBuilder("Root").PutMember("known", Schema::CreateInteger("I")).Build();
  auto unknownStruct = Schema::CreateMember("unknown_struct", ShapeType::Structure);
  auto a = Schema::CreateMember("a", ShapeType::Integer);
  auto b = Schema::CreateMember("b", ShapeType::String);
  auto known = Schema::CreateMember("known", ShapeType::Integer);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*unknownStruct, LambdaStruct(*unknownStruct, [&](ShapeSerializer& ser2) {
                      ser2.WriteInteger(*a, 1);
                      ser2.WriteString(*b, "nested");
                    }));
    ser.WriteInteger(*known, 42);
  });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "known") {
      got = de.ReadInteger(m);
    }
  });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 42);
}

TEST_F(CborShapeDeserializerTest, MultipleScalars) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("a", Schema::CreateBoolean("B"))
                  .PutMember("b", Schema::CreateInteger("I"))
                  .PutMember("c", Schema::CreateString("S"))
                  .Build();
  auto a = root->GetMember("a").value();
  auto b = root->GetMember("b").value();
  auto c = root->GetMember("c").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteBoolean(*a, true);
    ser.WriteInteger(*b, 7);
    ser.WriteString(*c, "x");
  });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<bool> ba;
  Aws::Crt::Optional<int> bb;
  Aws::Crt::Optional<Aws::String> bc;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    switch (m.GetMemberIndex()) {
      case 0:
        ba = de.ReadBoolean(m);
        break;
      case 1:
        bb = de.ReadInteger(m);
        break;
      case 2:
        bc = de.ReadString(m);
        break;
      default:
        break;
    }
  });
  ASSERT_TRUE(ba.has_value());
  EXPECT_TRUE(ba.value());
  ASSERT_TRUE(bb.has_value());
  EXPECT_EQ(bb.value(), 7);
  ASSERT_TRUE(bc.has_value());
  EXPECT_EQ(bc.value(), "x");
}

TEST_F(CborShapeDeserializerTest, EmptyOptionalOnEmptyPayload) {
  auto scalar = Schema::CreateBoolean("B");
  const unsigned char empty[1] = {0};
  CborShapeDeserializer d(empty, 0);
  auto val = d.ReadBoolean(*scalar);
  EXPECT_FALSE(val.has_value());
}

TEST_F(CborShapeDeserializerTest, EmptyOptionalOnTypeMismatch) {
  auto root = Schema::StructureBuilder("Root").PutMember("val", Schema::CreateString("S")).Build();
  auto member = root->GetMember("val").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  bool delivered = false;
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    delivered = true;
    got = de.ReadInteger(m);
  });
  EXPECT_TRUE(delivered);
  EXPECT_FALSE(got.has_value());
}

TEST_F(CborShapeDeserializerTest, DefiniteLengthStruct) {

  auto root = Schema::StructureBuilder("Root")
                  .PutMember("a", Schema::CreateInteger("I"))
                  .PutMember("b", Schema::CreateInteger("I2"))
                  .Build();
  const unsigned char data[] = {0xA2, 0x61, 0x61, 0x01, 0x61, 0x62, 0x02};
  CborShapeDeserializer d(data, sizeof(data));
  Aws::Map<Aws::String, int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    auto v = de.ReadInteger(m);
    if (v.has_value()) {
      got[m.GetMemberName()] = v.value();
    }
  });
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got["a"], 1);
  EXPECT_EQ(got["b"], 2);
}

TEST_F(CborShapeDeserializerTest, IndefiniteLengthStruct) {
  auto root = Schema::StructureBuilder("Root").PutMember("x", Schema::CreateInteger("I")).Build();
  auto x = root->GetMember("x").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*x, 99); });

  CborShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 99);
}

TEST_F(CborShapeDeserializerTest, TimestampFromFloat) {

  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC1, 0xFB, 0x41, 0xD2, 0x65, 0x80, 0xB4, 0xA0, 0x00, 0x00};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp(*scalar);
  ASSERT_TRUE(ts.has_value());
  EXPECT_DOUBLE_EQ(ts.value().SecondsWithMSPrecision(), 1234567890.5);
}

TEST_F(CborShapeDeserializerTest, TimestampNegativeIntReturnsEmpty) {
  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC1, 0x20};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp(*scalar);
  EXPECT_FALSE(ts.has_value());
}

TEST_F(CborShapeDeserializerTest, TimestampNegativeFloatReturnsEmpty) {
  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC1, 0xFB, 0xBF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp(*scalar);
  EXPECT_FALSE(ts.has_value());
}

TEST_F(CborShapeDeserializerTest, TimestampInvalidTagReturnsEmpty) {
  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC2, 0x18, 0x64};
  CborShapeDeserializer d(data, sizeof(data));
  auto ts = d.ReadTimestamp(*scalar);
  EXPECT_FALSE(ts.has_value());
}
