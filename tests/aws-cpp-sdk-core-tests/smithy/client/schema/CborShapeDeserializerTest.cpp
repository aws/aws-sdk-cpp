/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/CborShapeDeserializer.h>
#include <smithy/client/schema/CborShapeSerializer.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>

#include <functional>
#include <limits>

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

}  // namespace

TEST_F(CborShapeDeserializerTest, BooleanTrue) {
  auto root = Schema::StructureBuilder("Root").PutMember("enabled", Schema::CreateBoolean("B")).Build();
  auto enabled = root->GetMember("enabled").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*enabled, true); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<bool> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBoolean(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_FALSE(got.value());
}

TEST_F(CborShapeDeserializerTest, IntegerSmall) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, 7); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 7);
}

TEST_F(CborShapeDeserializerTest, IntegerNegative) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, -42); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), -42);
}

TEST_F(CborShapeDeserializerTest, LongValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("big", Schema::CreateLong("L")).Build();
  auto big = root->GetMember("big").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteLong(*big, 5000000000LL); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int64_t> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 5000000000LL);
}

TEST_F(CborShapeDeserializerTest, DoubleValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.14); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<double> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadDouble(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_DOUBLE_EQ(got.value(), 3.14);
}

TEST_F(CborShapeDeserializerTest, DoubleWholeNumber) {
  auto root = Schema::StructureBuilder("Root").PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 5.0); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<double> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadDouble(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_DOUBLE_EQ(got.value(), 5.0);
}

TEST_F(CborShapeDeserializerTest, FloatValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("f", Schema::CreateFloat("F")).Build();
  auto member = root->GetMember("f").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, 1.5f); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<float> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadFloat(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_FLOAT_EQ(got.value(), 1.5f);
}

TEST_F(CborShapeDeserializerTest, StringValue) {
  auto root = Schema::StructureBuilder("Root").PutMember("name", Schema::CreateString("S")).Build();
  auto member = root->GetMember("name").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::Utils::DateTime> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().Seconds(), 1234567890);
}

TEST_F(CborShapeDeserializerTest, NullMemberIsSkipped) {
  auto root = Schema::StructureBuilder("Root").PutMember("item", Schema::CreateString("S")).Build();
  auto member = root->GetMember("item").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(empty, 0));
  auto val = d.ReadBoolean(*scalar);
  EXPECT_FALSE(val.has_value());
}

TEST_F(CborShapeDeserializerTest, EmptyOptionalOnTypeMismatch) {
  auto root = Schema::StructureBuilder("Root").PutMember("val", Schema::CreateString("S")).Build();
  auto member = root->GetMember("val").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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
  auto root =
      Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).PutMember("b", Schema::CreateInteger("I2")).Build();
  const unsigned char data[] = {0xA2, 0x61, 0x61, 0x01, 0x61, 0x62, 0x02};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(data, sizeof(data)));
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

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 99);
}

TEST_F(CborShapeDeserializerTest, TimestampFromFloat) {
  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC1, 0xFB, 0x41, 0xD2, 0x65, 0x80, 0xB4, 0xA0, 0x00, 0x00};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(data, sizeof(data)));
  auto ts = d.ReadTimestamp(*scalar);
  ASSERT_TRUE(ts.has_value());
  EXPECT_DOUBLE_EQ(ts.value().SecondsWithMSPrecision(), 1234567890.5);
}

TEST_F(CborShapeDeserializerTest, TimestampFloatMatchesLegacyDateTimeDouble) {
  auto scalar = Schema::CreateTimestamp("T");
  // Tag 1, float64 1.9996 (0x3FFFFE5C91D14E3C)
  const unsigned char data[] = {0xC1, 0xFB, 0x3F, 0xFF, 0xFE, 0x5C, 0x91, 0xD1, 0x4E, 0x3C};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(data, sizeof(data)));
  auto ts = d.ReadTimestamp(*scalar);
  ASSERT_TRUE(ts.has_value());
  EXPECT_EQ(ts.value().Millis(), 1999);
  EXPECT_EQ(ts.value().Millis(), Aws::Utils::DateTime(1.9996).Millis());
}

TEST_F(CborShapeDeserializerTest, TimestampNegativeIntReturnsEmpty) {
  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC1, 0x20};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(data, sizeof(data)));
  auto ts = d.ReadTimestamp(*scalar);
  EXPECT_FALSE(ts.has_value());
}

TEST_F(CborShapeDeserializerTest, TimestampNegativeFloatReturnsEmpty) {
  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC1, 0xFB, 0xBF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(data, sizeof(data)));
  auto ts = d.ReadTimestamp(*scalar);
  EXPECT_FALSE(ts.has_value());
}

TEST_F(CborShapeDeserializerTest, TimestampInvalidTagReturnsEmpty) {
  auto scalar = Schema::CreateTimestamp("T");
  const unsigned char data[] = {0xC2, 0x18, 0x64};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(data, sizeof(data)));
  auto ts = d.ReadTimestamp(*scalar);
  EXPECT_FALSE(ts.has_value());
}

namespace {

class CborNestedBar final : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *m_schema; }
  const std::shared_ptr<const Schema>& SchemaPtr() const { return m_schema; }

  void SerializeMembers(ShapeSerializer& serializer) const override {
    serializer.WriteString(*GetSchema().GetMember("buzz").value(), buzz);
  }

  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override {
    if (memberSchema.GetMemberIndex() == 0) {
      auto v = deserializer.ReadString(memberSchema);
      if (v.has_value()) {
        buzz = v.value();
      }
    }
  }

  Aws::String buzz;

 private:
  static std::shared_ptr<const Schema> BuildSchema() {
    return Schema::StructureBuilder("Bar").PutMember("buzz", Schema::CreateString("S")).Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema()};
};

class CborNestedFoo final : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *m_schema; }

  void SerializeMembers(ShapeSerializer& serializer) const override {
    serializer.WriteStruct(*GetSchema().GetMember("fizz").value(), fizz);
  }

  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override {
    if (memberSchema.GetMemberIndex() == 0) {
      deserializer.ReadStruct(*memberSchema.GetMemberTarget().value(),
                              [this](const Schema& im, ShapeDeserializer& ide) { fizz.From(im, ide); });
    }
  }

  CborNestedBar fizz;

 private:
  static std::shared_ptr<const Schema> BuildSchema(const CborNestedBar& fizz) {
    return Schema::StructureBuilder("Foo").PutMember("fizz", fizz.SchemaPtr()).Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema(fizz)};
};

}  // namespace

TEST_F(CborShapeDeserializerTest, DeserializesNestedIntoClass) {
  CborNestedFoo source;
  source.fizz.buzz = "value";
  CborShapeSerializer s;
  s.WriteStruct(source.GetSchema(), source);
  const Aws::String encoded = s.GetPayload().GetResult();

  CborNestedFoo f;
  CborShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(encoded.data()), encoded.size()));
  f.Deserialize(d);

  EXPECT_EQ(f.fizz.buzz, "value");
}

TEST_F(CborShapeDeserializerTest, ReadDocumentIsUnsupported) {
  const unsigned char cbor[] = {0xf6};  // CBOR null; ReadDocument returns empty regardless of input
  CborShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(cbor), sizeof(cbor)));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  EXPECT_EQ(deser.ReadDocument(*schema), nullptr);
}

TEST_F(CborShapeDeserializerTest, ReadDocumentConsumesValueSoTrailingMemberSurvives) {
  // CBOR: map(2){ "doc": 5, "trailing": "x" }. "doc" is document-typed.
  const uint8_t cbor[] = {0xA2,
                          0x63, 'd', 'o', 'c', 0x05,
                          0x68, 't', 'r', 'a', 'i', 'l', 'i', 'n', 'g', 0x61, 'x'};
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("doc", Schema::CreateDocument("smithy.api#Document"))
                  .PutMember("trailing", Schema::CreateString("S"))
                  .Build();
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(cbor, sizeof(cbor)));
  Aws::String trailing;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "doc") {
      de.ReadDocument(m);  // must consume the encoded 5
    } else if (m.GetMemberName() == "trailing") {
      auto v = de.ReadString(m);
      if (v.has_value()) trailing = v.value();
    }
  });
  EXPECT_EQ(trailing, "x");
}

TEST_F(CborShapeDeserializerTest, DefiniteMapShorterThanHeaderSetsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  const unsigned char bytes[] = {0xA2, 0x61, 'a', 0x01};  // map(2) holding one entry
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 1);
  EXPECT_TRUE(d.GetError().has_value());
}

namespace {
struct ChunkedRead {
  Aws::Crt::Optional<Aws::String> text;
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> blob;
  bool failed = false;
};

ChunkedRead ReadChunked(const Aws::Vector<unsigned char>& bytes) {
  auto root = Schema::StructureBuilder("Root").PutMember("s", Schema::CreateString("S")).PutMember("b", Schema::CreateBlob("B")).Build();
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes.data(), bytes.size()));
  ChunkedRead got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "s") {
      got.text = de.ReadString(m);
    } else {
      got.blob = de.ReadBlob(m);
    }
  });
  got.failed = d.GetError().has_value();
  return got;
}
}  // namespace

TEST_F(CborShapeDeserializerTest, IndefiniteTextIsJoined) {
  // {"s": (_ "ab", "", "c")}
  const auto got = ReadChunked({0xA1, 0x61, 's', 0x7F, 0x62, 'a', 'b', 0x60, 0x61, 'c', 0xFF});
  EXPECT_FALSE(got.failed);
  ASSERT_TRUE(got.text.has_value());
  EXPECT_EQ(got.text.value(), "abc");
}

TEST_F(CborShapeDeserializerTest, EmptyIndefiniteTextIsEmptyString) {
  const auto got = ReadChunked({0xA1, 0x61, 's', 0x7F, 0xFF});
  EXPECT_FALSE(got.failed);
  ASSERT_TRUE(got.text.has_value());
  EXPECT_EQ(got.text.value(), "");
}

TEST_F(CborShapeDeserializerTest, IndefiniteBytesAreJoined) {
  // {"b": (_ h'0102', h'03'), "s": "x"}
  const auto got = ReadChunked({0xA2, 0x61, 'b', 0x5F, 0x42, 0x01, 0x02, 0x41, 0x03, 0xFF, 0x61, 's', 0x61, 'x'});
  EXPECT_FALSE(got.failed);
  ASSERT_TRUE(got.blob.has_value());
  const unsigned char expected[] = {0x01, 0x02, 0x03};
  EXPECT_EQ(got.blob.value(), Aws::Utils::ByteBuffer(expected, sizeof(expected)));
  ASSERT_TRUE(got.text.has_value());
  EXPECT_EQ(got.text.value(), "x");
}

TEST_F(CborShapeDeserializerTest, IndefiniteTextKeyIsJoined) {
  // {(_ "", "s"): "x"}
  const auto got = ReadChunked({0xA1, 0x7F, 0x60, 0x61, 's', 0xFF, 0x61, 'x'});
  EXPECT_FALSE(got.failed);
  ASSERT_TRUE(got.text.has_value());
  EXPECT_EQ(got.text.value(), "x");
}

TEST_F(CborShapeDeserializerTest, MalformedIndefiniteStringRecordsError) {
  for (const auto& bytes : Aws::Vector<Aws::Vector<unsigned char>>{
           {0xA1, 0x61, 's', 0x7F, 0x01, 0xFF},             // integer chunk
           {0xA1, 0x61, 's', 0x7F, 0x41, 0x01, 0xFF},       // byte-string chunk in a text string
           {0xA1, 0x61, 'b', 0x5F, 0x61, 'a', 0xFF},        // text chunk in a byte string
           {0xA1, 0x61, 's', 0x7F, 0x7F, 0xFF, 0xFF},       // nested indefinite chunk
           {0xA1, 0x61, 's', 0x7F, 0x61, 'a'}}) {           // no break
    EXPECT_TRUE(ReadChunked(bytes).failed);
  }
}

TEST_F(CborShapeDeserializerTest, EmptyInputIsNotAnError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  const unsigned char empty[1] = {0};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(empty, 0));
  d.ReadStruct(*root, [](const Schema&, ShapeDeserializer&) { FAIL() << "no members expected"; });
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, GarbageRootSetsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  const unsigned char bytes[] = {0xBA, 0x00};  // map with 4-byte length, truncated header
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  d.ReadStruct(*root, [](const Schema&, ShapeDeserializer&) {});
  EXPECT_TRUE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, RecursiveStructAtMaxDepthSucceeds) {
  RecursiveNodeSchema node;
  const Aws::String cbor = NestedCborNodes(MAX_NESTING_DEPTH);
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(cbor.data()), cbor.size()));
  EXPECT_EQ(DescendRecursiveNode(d, node.Get()), MAX_NESTING_DEPTH);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, RecursiveStructPastMaxDepthSetsError) {
  RecursiveNodeSchema node;
  const Aws::String cbor = NestedCborNodes(MAX_NESTING_DEPTH + 1);
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(cbor.data()), cbor.size()));
  DescendRecursiveNode(d, node.Get());
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("depth"), Aws::String::npos);
}

namespace {
void ExpectOutOfRange(const ShapeDeserializer& d) {
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("out of range"), Aws::String::npos);
}
}  // namespace

TEST_F(CborShapeDeserializerTest, NegIntBeyondInt64RecordsError) {
  const unsigned char bytes[] = {0x3B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto schema = Schema::CreateLong("L");
  EXPECT_FALSE(d.ReadLong(*schema).has_value());
  ExpectOutOfRange(d);
}

TEST_F(CborShapeDeserializerTest, NegIntAtInt64MinIsExact) {
  const unsigned char bytes[] = {0x3B, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto schema = Schema::CreateLong("L");
  auto v = d.ReadLong(*schema);
  ASSERT_TRUE(v.has_value());
  EXPECT_EQ(v.value(), (std::numeric_limits<int64_t>::min)());
}

namespace {
double ReadDoubleFromInteger(uint8_t majorTypeByte, uint64_t n) {
  unsigned char bytes[9] = {majorTypeByte};
  for (int i = 0; i < 8; ++i) {
    bytes[1 + i] = static_cast<unsigned char>(n >> (8 * (7 - i)));
  }
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto schema = Schema::CreateDouble("D");
  auto v = d.ReadDouble(*schema);
  EXPECT_TRUE(v.has_value());
  return v.has_value() ? v.value() : 0.0;
}
}  // namespace

TEST_F(CborShapeDeserializerTest, NegIntDoubleRoundsOnce) {
  EXPECT_EQ(ReadDoubleFromInteger(0x3B, UINT64_C(11943773121102237)), static_cast<double>(INT64_C(-11943773121102238)));
}

TEST_F(CborShapeDeserializerTest, NegIntDoubleAtUint64Max) { EXPECT_EQ(ReadDoubleFromInteger(0x3B, UINT64_MAX), -18446744073709551616.0); }

TEST_F(CborShapeDeserializerTest, NegIntDoubleZeroIsMinusOne) { EXPECT_EQ(ReadDoubleFromInteger(0x3B, 0), -1.0); }

TEST_F(CborShapeDeserializerTest, NegIntDoubleAboveTwoPow53) {
  const uint64_t n = UINT64_C(1) << 53;
  EXPECT_EQ(ReadDoubleFromInteger(0x3B, n), static_cast<double>(-static_cast<int64_t>(n) - 1));
}

TEST_F(CborShapeDeserializerTest, UIntDoubleAtUint64MaxRoundsOnce) {
  EXPECT_EQ(ReadDoubleFromInteger(0x1B, UINT64_MAX), static_cast<double>(UINT64_MAX));
}

TEST_F(CborShapeDeserializerTest, UIntBeyondInt64RecordsError) {
  const unsigned char bytes[] = {0x1B, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};  // 2^63
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto schema = Schema::CreateLong("L");
  EXPECT_FALSE(d.ReadLong(*schema).has_value());
  ExpectOutOfRange(d);
}

TEST_F(CborShapeDeserializerTest, IntegerBeyondInt32RecordsError) {
  const unsigned char bytes[] = {0x1B, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00};  // 2^40
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto schema = Schema::CreateInteger("I");
  EXPECT_FALSE(d.ReadInteger(*schema).has_value());
  ExpectOutOfRange(d);
}

TEST_F(CborShapeDeserializerTest, FloatBeyondFloatRangeRecordsError) {
  const unsigned char bytes[] = {0xFB, 0x7E, 0x37, 0xE4, 0x3C, 0x88, 0x00, 0x75, 0x9C};  // 1e300
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto schema = Schema::CreateFloat("F");
  EXPECT_FALSE(d.ReadFloat(*schema).has_value());
  ExpectOutOfRange(d);
}

TEST_F(CborShapeDeserializerTest, UnrepresentableTimestampRecordsError) {
  const unsigned char bytes[] = {0xC1, 0xFB, 0x7E, 0x37, 0xE4, 0x3C, 0x88, 0x00, 0x75, 0x9C};  // 1(1e300)
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto schema = Schema::CreateTimestamp("T");
  EXPECT_FALSE(d.ReadTimestamp(*schema).has_value());
  ExpectOutOfRange(d);
}

TEST_F(CborShapeDeserializerTest, MismatchedListElementsAreConsumed) {
  auto listBuilder = Schema::ListBuilder("L");
  listBuilder.PutMember("member", Schema::CreateInteger("I"));
  auto list = listBuilder.Build();
  const unsigned char bytes[] = {0x9F, 0x61, 'a', 0x61, 'b', 0xFF};  // [_ "a", "b"]
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  int calls = 0;
  d.ReadList(*list, [&](ShapeDeserializer& de) {
    ++calls;
    EXPECT_FALSE(de.ReadInteger(*list->GetMember("member").value()).has_value());
  });
  EXPECT_EQ(calls, 2);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, MismatchedMemberKeepsSiblingsAligned) {
  auto root =
      Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).PutMember("b", Schema::CreateInteger("I")).Build();
  const unsigned char bytes[] = {0xA2, 0x61, 'a', 0x63, 'x', 'y', 'z', 0x61, 'b', 0x02};  // {"a":"xyz","b":2}
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  Aws::Crt::Optional<int> b;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    auto v = de.ReadInteger(m);
    if (m.GetMemberName() == "b") {
      b = v;
    }
  });
  ASSERT_TRUE(b.has_value());
  EXPECT_EQ(b.value(), 2);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, ScalarWhereStructExpectedKeepsSiblingsAligned) {
  auto inner = Schema::StructureBuilder("Inner").Build();
  auto root = Schema::StructureBuilder("Root").PutMember("child", inner).PutMember("x", Schema::CreateInteger("I")).Build();
  const unsigned char bytes[] = {0xA2, 0x65, 'c', 'h', 'i', 'l', 'd', 0x05, 0x61, 'x', 0x01};  // {"child":5,"x":1}
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  Aws::Crt::Optional<int> x;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "x") {
      x = de.ReadInteger(m);
    } else {
      de.ReadStruct(*m.GetMemberTarget().value(), [](const Schema&, ShapeDeserializer&) {});
    }
  });
  ASSERT_TRUE(x.has_value());
  EXPECT_EQ(x.value(), 1);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, HugeDefiniteArrayHeaderTerminatesWithError) {
  auto listBuilder = Schema::ListBuilder("L");
  listBuilder.PutMember("member", Schema::CreateInteger("I"));
  auto list = listBuilder.Build();
  const unsigned char bytes[] = {0x9B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};  // array(2^64-1), no items
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  d.ReadList(*list, [&](ShapeDeserializer& de) { de.ReadInteger(*list->GetMember("member").value()); });
  EXPECT_TRUE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, NonMapRootRecordsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  const Aws::Vector<Aws::Vector<unsigned char>> roots = {{0x05}, {0x81, 0x01}, {0x61, 'x'}, {0xF5}};
  for (const auto& bytes : roots) {
    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes.data(), bytes.size()));
    int delivered = 0;
    d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
    EXPECT_EQ(delivered, 0);
    ASSERT_TRUE(d.GetError().has_value()) << static_cast<int>(bytes[0]);
  }
}

TEST_F(CborShapeDeserializerTest, NullRootIsEmptyStructWithoutError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  const unsigned char bytes[] = {0xF6};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
  EXPECT_EQ(delivered, 0);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, TrailingDataAfterRootRecordsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  // map(1){"a": 1} then a stray item; map(0) then a stray item; null then a stray item.
  const Aws::Vector<Aws::Vector<unsigned char>> payloads = {{0xA1, 0x61, 'a', 0x01, 0x05}, {0xA0, 0xA0}, {0xF6, 0x00}};
  for (const auto& bytes : payloads) {
    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes.data(), bytes.size()));
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { de.ReadInteger(m); });
    ASSERT_TRUE(d.GetError().has_value()) << bytes.size();
    EXPECT_NE(d.GetError()->GetMessage().find("trailing data"), Aws::String::npos);
  }
}

TEST_F(CborShapeDeserializerTest, EmptyRootIsEmptyStructWithoutError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  const unsigned char none[1] = {0};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(none, 0));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
  EXPECT_EQ(delivered, 0);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, ScalarWhereNestedStructExpectedIsNotAnError) {
  auto inner = Schema::StructureBuilder("Inner").PutMember("x", Schema::CreateInteger("I")).Build();
  auto root = Schema::StructureBuilder("Root").PutMember("inner", inner).Build();
  const unsigned char bytes[] = {0xA1, 0x65, 'i', 'n', 'n', 'e', 'r', 0x05};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  int innerDelivered = 0;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    de.ReadStruct(m, [&](const Schema&, ShapeDeserializer&) { ++innerDelivered; });
  });
  EXPECT_EQ(innerDelivered, 0);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, UIntAboveInt64MaxOnDoubleConvertsDirectly) {
  const unsigned char bytes[] = {0x1B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto v = d.ReadDouble(*Schema::CreateDouble("D"));
  ASSERT_TRUE(v.has_value());
  EXPECT_EQ(v.value(), 1.8446744073709552e19);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, NegIntBeyondInt64OnDoubleConvertsDirectly) {
  const unsigned char bytes[] = {0x3B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  auto v = d.ReadDouble(*Schema::CreateDouble("D"));
  ASSERT_TRUE(v.has_value());
  EXPECT_EQ(v.value(), -1.8446744073709552e19);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(CborShapeDeserializerTest, SmallIntegersOnDoubleAndFloat) {
  const unsigned char neg[] = {0x38, 0x63};  // -100
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(neg, sizeof(neg)));
  EXPECT_EQ(d.ReadDouble(*Schema::CreateDouble("D")).value(), -100.0);
  CborShapeDeserializer f(Aws::Crt::ByteCursorFromArray(neg, sizeof(neg)));
  EXPECT_EQ(f.ReadFloat(*Schema::CreateFloat("F")).value(), -100.0f);
}

namespace {

int ReadUnionVariants(CborShapeDeserializer& d) {
  auto variants = Schema::UnionBuilder("U").PutMember("a", Schema::CreateString("S")).PutMember("b", Schema::CreateInteger("I")).Build();
  auto root = Schema::StructureBuilder("Root").PutMember("u", variants).Build();
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    de.ReadStruct(**m.GetMemberTarget(), [&](const Schema& variant, ShapeDeserializer& vde) {
      ++delivered;
      if (variant.GetMemberName() == Aws::String("a")) {
        vde.ReadString(variant);
      } else {
        vde.ReadInteger(variant);
      }
    });
  });
  return delivered;
}

}  // namespace

TEST_F(CborShapeDeserializerTest, UnionWithTwoMembersSetRecordsError) {
  // {"u": {"a": "x", "b": 1}}
  const unsigned char bytes[] = {0xA1, 0x61, 'u', 0xA2, 0x61, 'a', 0x61, 'x', 0x61, 'b', 0x01};
  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(bytes, sizeof(bytes)));
  EXPECT_EQ(ReadUnionVariants(d), 1);
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("more than one member"), Aws::String::npos);
}

TEST_F(CborShapeDeserializerTest, UnionIgnoresNullAndUnmodeledMembers) {
  // {"u": {"a": "x", "b": null}}
  const unsigned char withNull[] = {0xA1, 0x61, 'u', 0xA2, 0x61, 'a', 0x61, 'x', 0x61, 'b', 0xF6};
  // {"u": {"z": 2, "b": 1}}
  const unsigned char withUnmodeled[] = {0xA1, 0x61, 'u', 0xA2, 0x61, 'z', 0x02, 0x61, 'b', 0x01};
  CborShapeDeserializer nullVariant(Aws::Crt::ByteCursorFromArray(withNull, sizeof(withNull)));
  EXPECT_EQ(ReadUnionVariants(nullVariant), 1);
  EXPECT_FALSE(nullVariant.GetError().has_value());
  CborShapeDeserializer unmodeled(Aws::Crt::ByteCursorFromArray(withUnmodeled, sizeof(withUnmodeled)));
  EXPECT_EQ(ReadUnionVariants(unmodeled), 1);
  EXPECT_FALSE(unmodeled.GetError().has_value());
}
