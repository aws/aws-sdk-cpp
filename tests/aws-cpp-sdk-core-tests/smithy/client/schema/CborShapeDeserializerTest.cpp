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

namespace {

Aws::Crt::ByteCursor CursorOf(const unsigned char* data, size_t len) { return Aws::Crt::ByteCursorFromArray(data, len); }

}  // namespace

TEST_F(CborShapeDeserializerTest, BigIntegerRoundTrip) {
  auto root = Schema::StructureBuilder("Root").PutMember("big", Schema::CreateBigInteger("BI")).Build();
  auto big = root->GetMember("big").value();
  const char* const values[] = {"0",
                                "42",
                                "-1000",
                                "18446744073709551615",
                                "-18446744073709551616",
                                "18446744073709551616",
                                "-18446744073709551617",
                                "123456789012345678901234567890",
                                "-123456789012345678901234567890"};
  for (const char* text : values) {
    SCOPED_TRACE(text);
    const auto value = MakeBigInteger(text);
    auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBigInteger(*big, value); });

    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<Aws::Crt::BigInteger> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBigInteger(m); });
    ASSERT_TRUE(got.has_value());
    EXPECT_TRUE(got.value() == value);
    EXPECT_EQ(got.value().ToString(), value.ToString());
  }
}

TEST_F(CborShapeDeserializerTest, BigDecimalRoundTrip) {
  auto root = Schema::StructureBuilder("Root").PutMember("dec", Schema::CreateBigDecimal("BD")).Build();
  auto dec = root->GetMember("dec").value();
  const char* const values[] = {
      "0", "1.5", "1.50", "-0.5", "0.100000000000000000000001", "-12345678901234567890.123456789", "123456789012345678901234567890"};
  for (const char* text : values) {
    SCOPED_TRACE(text);
    const auto value = MakeBigDecimal(text);
    auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBigDecimal(*dec, value); });

    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<Aws::Crt::BigDecimal> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBigDecimal(m); });
    ASSERT_TRUE(got.has_value());
    EXPECT_TRUE(got.value() == value);
    EXPECT_EQ(got.value().ToString(), value.ToString());
  }
}

TEST_F(CborShapeDeserializerTest, BigIntegerFromWireForms) {
  auto scalar = Schema::CreateBigInteger("BI");
  struct Case {
    Aws::String bytes;
    const char* expected;
  };
  const Case cases[] = {
      {Aws::String("\x18\x2A", 2), "42"},
      {Aws::String("\x39\x03\xE7", 3), "-1000"},
      {Aws::String("\xC2\x49\x01\x00\x00\x00\x00\x00\x00\x00\x00", 11), "18446744073709551616"},
      {Aws::String("\xC3\x49\x01\x00\x00\x00\x00\x00\x00\x00\x00", 11), "-18446744073709551617"},
      // a tag 2 value that would have fit in a UInt is still accepted
      {Aws::String("\xC2\x41\x2A", 3), "42"},
  };
  for (const auto& c : cases) {
    SCOPED_TRACE(c.expected);
    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(c.bytes.data()), c.bytes.size()));
    auto got = d.ReadBigInteger(*scalar);
    ASSERT_TRUE(got.has_value());
    EXPECT_EQ(got.value().ToString(), c.expected);
  }
}

TEST_F(CborShapeDeserializerTest, BigDecimalFromWireForm) {
  auto scalar = Schema::CreateBigDecimal("BD");
  // tag 4 [-1, 15]
  const unsigned char data[] = {0xC4, 0x82, 0x20, 0x0F};
  CborShapeDeserializer d(CursorOf(data, sizeof(data)));
  auto got = d.ReadBigDecimal(*scalar);
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().ToString(), "15e-1");
}

TEST_F(CborShapeDeserializerTest, BigNumbersInListAndMap) {
  auto intsBuilder = Schema::ListBuilder("Ints");
  auto decsBuilder = Schema::MapBuilder("Decs");
  auto root = Schema::StructureBuilder("Root").PutMember("ints", intsBuilder).PutMember("decs", decsBuilder).Build();
  auto ints = root->GetMember("ints").value();
  auto decs = root->GetMember("decs").value();
  auto intElem = Schema::CreateMember("member", ShapeType::BigInteger);
  auto decVal = Schema::CreateMember("value", ShapeType::BigDecimal);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteList(*ints, 2, [&](ShapeSerializer& lser) {
      lser.WriteBigInteger(*intElem, MakeBigInteger("123456789012345678901234567890"));
      lser.WriteBigInteger(*intElem, MakeBigInteger("-7"));
    });
    ser.WriteMap(*decs, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("k",
                        [&](ShapeSerializer& vser) { vser.WriteBigDecimal(*decVal, MakeBigDecimal("-12345678901234567890.123456789")); });
    });
  });

  CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Vector<Aws::String> intValues;
  Aws::Map<Aws::String, Aws::String> decValues;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "ints") {
      de.ReadList(m, [&](ShapeDeserializer& ede) {
        auto v = ede.ReadBigInteger(*intElem);
        ASSERT_TRUE(v.has_value());
        intValues.emplace_back(v.value().ToString().c_str());
      });
    } else if (m.GetMemberName() == "decs") {
      de.ReadMap(m, [&](const Aws::String& key, ShapeDeserializer& vde) {
        auto v = vde.ReadBigDecimal(*decVal);
        ASSERT_TRUE(v.has_value());
        decValues[key] = v.value().ToString().c_str();
      });
    }
  });
  ASSERT_EQ(intValues.size(), 2u);
  EXPECT_EQ(intValues[0], "123456789012345678901234567890");
  EXPECT_EQ(intValues[1], "-7");
  ASSERT_EQ(decValues.size(), 1u);
  EXPECT_EQ(decValues["k"], "-12345678901234567890123456789e-9");
}

TEST_F(CborShapeDeserializerTest, BigIntegerRejectsWrongTypes) {
  auto scalar = Schema::CreateBigInteger("BI");
  const Aws::String inputs[] = {
      Aws::String("\x61\x61", 2),                              // text "a"
      Aws::String("\xF5", 1),                                  // true
      Aws::String("\xFB\x3F\xF8\x00\x00\x00\x00\x00\x00", 9),  // double 1.5
      Aws::String("\xC4\x82\x20\x0F", 4),                      // decimal fraction
      Aws::String("\x82\x01\x02", 3),                          // array
  };
  for (const auto& input : inputs) {
    SCOPED_TRACE(static_cast<unsigned char>(input[0]));
    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(input.data()), input.size()));
    EXPECT_FALSE(d.ReadBigInteger(*scalar).has_value());
  }
}

TEST_F(CborShapeDeserializerTest, BigIntegerRejectsEmptyPayload) {
  auto scalar = Schema::CreateBigInteger("BI");
  const unsigned char empty[1] = {0};
  CborShapeDeserializer d(CursorOf(empty, 0));
  EXPECT_FALSE(d.ReadBigInteger(*scalar).has_value());
}

TEST_F(CborShapeDeserializerTest, BigDecimalRejectsWrongTypes) {
  auto scalar = Schema::CreateBigDecimal("BD");
  const Aws::String inputs[] = {
      Aws::String("\x0F", 1),          // plain uint
      Aws::String("\x61\x61", 2),      // text "a"
      Aws::String("\xC2\x41\x2A", 3),  // bignum
      Aws::String("\xC4\x81\x01", 3),  // decimal fraction with a single element
      Aws::String("\xC4\x61\x61", 3),  // decimal fraction holding text
  };
  for (const auto& input : inputs) {
    SCOPED_TRACE(static_cast<unsigned char>(input[0]));
    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(input.data()), input.size()));
    EXPECT_FALSE(d.ReadBigDecimal(*scalar).has_value());
  }
}

TEST_F(CborShapeDeserializerTest, BigNumberNullMemberIsSkipped) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateBigInteger("BI")).Build();
  // {"n": null}
  const unsigned char data[] = {0xBF, 0x61, 0x6E, 0xF6, 0xFF};
  CborShapeDeserializer d(CursorOf(data, sizeof(data)));
  int calls = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++calls; });
  EXPECT_EQ(calls, 0);
}

TEST_F(CborShapeDeserializerTest, ByteAndShortRanges) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("b", Schema::CreateByte("B"))
                  .PutMember("s", Schema::CreateShort("S"))
                  .PutMember("after", Schema::CreateInteger("I"))
                  .Build();
  auto bMember = root->GetMember("b").value();
  auto sMember = root->GetMember("s").value();
  auto afterMember = root->GetMember("after").value();
  struct Case {
    int64_t byteWire;
    bool byteOk;
    int64_t shortWire;
    bool shortOk;
  };
  const Case cases[] = {
      {-128, true, -32768, true},
      {127, true, 32767, true},
      {128, false, 32768, false},
      {-129, false, -32769, false},
  };
  for (const auto& c : cases) {
    SCOPED_TRACE(c.byteWire);
    auto payload = Encode(root, [&](ShapeSerializer& ser) {
      ser.WriteLong(*bMember, c.byteWire);
      ser.WriteLong(*sMember, c.shortWire);
      ser.WriteInteger(*afterMember, 1);
    });
    CborShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<int8_t> b;
    Aws::Crt::Optional<int16_t> s;
    Aws::Crt::Optional<int> after;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
      if (m.GetMemberName() == "b") {
        b = de.ReadByte(m);
      } else if (m.GetMemberName() == "s") {
        s = de.ReadShort(m);
      } else {
        after = de.ReadInteger(m);
      }
    });
    ASSERT_EQ(b.has_value(), c.byteOk);
    ASSERT_EQ(s.has_value(), c.shortOk);
    if (c.byteOk) EXPECT_EQ(b.value(), c.byteWire);
    if (c.shortOk) EXPECT_EQ(s.value(), c.shortWire);
    ASSERT_TRUE(after.has_value());
    EXPECT_EQ(after.value(), 1);
  }
}
