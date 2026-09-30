/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <cmath>
#include <functional>
#include <limits>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class JsonShapeDeserializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {

Aws::String Encode(const std::shared_ptr<const Schema>& root, const std::function<void(ShapeSerializer&)>& writeMembers) {
  JsonShapeSerializer s;
  LambdaStruct rootStruct(*root, writeMembers);
  s.WriteStruct(*root, rootStruct);
  return s.GetPayload().GetResult();
}

}  // namespace

TEST_F(JsonShapeDeserializerTest, Boolean) {
  auto root = Schema::StructureBuilder("Root").PutMember("enabled", Schema::CreateBoolean("B")).Build();
  auto enabled = root->GetMember("enabled").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*enabled, true); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<bool> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBoolean(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_TRUE(got.value());
}

TEST_F(JsonShapeDeserializerTest, Integer) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, -42); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), -42);
}

TEST_F(JsonShapeDeserializerTest, Long) {
  auto root = Schema::StructureBuilder("Root").PutMember("big", Schema::CreateLong("L")).Build();
  auto big = root->GetMember("big").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteLong(*big, 9876543210LL); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int64_t> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 9876543210LL);
}

TEST_F(JsonShapeDeserializerTest, Double) {
  auto root = Schema::StructureBuilder("Root").PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.25); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<double> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadDouble(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_DOUBLE_EQ(got.value(), 3.25);
}

TEST_F(JsonShapeDeserializerTest, NonFiniteDoubles) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("nan", Schema::CreateDouble("D1"))
                  .PutMember("inf", Schema::CreateDouble("D2"))
                  .PutMember("ninf", Schema::CreateDouble("D3"))
                  .Build();
  auto nan = root->GetMember("nan").value();
  auto inf = root->GetMember("inf").value();
  auto ninf = root->GetMember("ninf").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteDouble(*nan, std::numeric_limits<double>::quiet_NaN());
    ser.WriteDouble(*inf, std::numeric_limits<double>::infinity());
    ser.WriteDouble(*ninf, -std::numeric_limits<double>::infinity());
  });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  bool sawNan = false, sawInf = false, sawNinf = false;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    auto v = de.ReadDouble(m);
    ASSERT_TRUE(v.has_value());
    if (m.GetMemberName() == "nan") {
      sawNan = std::isnan(v.value());
    } else if (m.GetMemberName() == "inf") {
      sawInf = std::isinf(v.value()) && v.value() > 0;
    } else if (m.GetMemberName() == "ninf") {
      sawNinf = std::isinf(v.value()) && v.value() < 0;
    }
  });
  EXPECT_TRUE(sawNan);
  EXPECT_TRUE(sawInf);
  EXPECT_TRUE(sawNinf);
}

TEST_F(JsonShapeDeserializerTest, String) {
  auto root = Schema::StructureBuilder("Root").PutMember("name", Schema::CreateString("S")).Build();
  auto member = root->GetMember("name").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "he\"llo\n"); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "he\"llo\n");
}

TEST_F(JsonShapeDeserializerTest, Blob) {
  auto root = Schema::StructureBuilder("Root").PutMember("data", Schema::CreateBlob("Bl")).Build();
  auto member = root->GetMember("data").value();
  Aws::Utils::ByteBuffer blob(3);
  blob[0] = 0x66;
  blob[1] = 0x6f;
  blob[2] = 0x6f;
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, blob); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBlob(m); });
  ASSERT_TRUE(got.has_value());
  ASSERT_EQ(got.value().GetLength(), 3u);
  EXPECT_EQ(got.value()[0], 0x66);
  EXPECT_EQ(got.value()[1], 0x6f);
  EXPECT_EQ(got.value()[2], 0x6f);
}

TEST_F(JsonShapeDeserializerTest, TimestampEpochSeconds) {
  auto root = Schema::StructureBuilder("Root").PutMember("ts", Schema::CreateTimestamp("T")).Build();
  const Aws::String payload = "{\"ts\":1234567890}";

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::Utils::DateTime> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().Seconds(), 1234567890);
}

TEST_F(JsonShapeDeserializerTest, TimestampDateTimeString) {
  auto root = Schema::StructureBuilder("Root").PutMember("ts", Schema::CreateTimestamp("T")).Build();
  const Aws::String payload = "{\"ts\":\"2009-02-13T23:31:30Z\"}";

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::Utils::DateTime> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().Seconds(), 1234567890);
}

TEST_F(JsonShapeDeserializerTest, JsonNameOverride) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("internalName", Schema::CreateString("S"),
                             {{JsonNameTrait::KEY(), Aws::MakeShared<JsonNameTrait>("Schema", "ExternalName")}})
                  .Build();
  auto member = root->GetMember("internalName").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });

  EXPECT_NE(payload.find("ExternalName"), Aws::String::npos);
  EXPECT_EQ(payload.find("internalName"), Aws::String::npos);

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "hello");
}

TEST_F(JsonShapeDeserializerTest, NullMemberIsSkipped) {
  auto root = Schema::StructureBuilder("Root").PutMember("item", Schema::CreateString("S")).Build();
  auto member = root->GetMember("item").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  int calls = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++calls; });
  EXPECT_EQ(calls, 0);
}

TEST_F(JsonShapeDeserializerTest, ListOfIntegers) {
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

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

TEST_F(JsonShapeDeserializerTest, MapOfStrings) {
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

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

TEST_F(JsonShapeDeserializerTest, NestedStructure) {
  auto metaBuilder = Schema::StructureBuilder("Meta");
  metaBuilder.PutMember("key", Schema::CreateString("S"));
  auto root = Schema::StructureBuilder("Root").PutMember("meta", metaBuilder).Build();
  auto meta = root->GetMember("meta").value();
  auto inner = meta->GetMemberTarget().value()->GetMember("key").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*meta, LambdaStruct(*meta, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

TEST_F(JsonShapeDeserializerTest, SkipsUnknownField) {
  auto root = Schema::StructureBuilder("Root").PutMember("known", Schema::CreateInteger("I")).Build();
  auto known = Schema::CreateMember("known", ShapeType::Integer);
  auto extra = Schema::CreateMember("extra", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteInteger(*known, 5);
    ser.WriteString(*extra, "ignored");
  });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Map<Aws::String, int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    auto v = de.ReadInteger(m);
    if (v.has_value()) {
      got[m.GetMemberName()] = v.value();
    }
  });
  ASSERT_EQ(got.size(), 1u);
  EXPECT_EQ(got["known"], 5);
}

TEST_F(JsonShapeDeserializerTest, EmptyOptionalOnTypeMismatch) {
  auto root = Schema::StructureBuilder("Root").PutMember("val", Schema::CreateString("S")).Build();
  auto member = root->GetMember("val").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  EXPECT_FALSE(got.has_value());
}

TEST_F(JsonShapeDeserializerTest, MultipleScalarsByIndex) {
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

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

TEST_F(JsonShapeDeserializerTest, DeserializesLiteralPayload) {
  auto nested = Schema::StructureBuilder("Nested");
  nested.PutMember("id", Schema::CreateInteger("NI"));
  auto tags = Schema::ListBuilder("Tags");
  auto meta = Schema::MapBuilder("Meta");
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("name", Schema::CreateString("S"))
                  .PutMember("count", Schema::CreateInteger("I"))
                  .PutMember("ratio", Schema::CreateDouble("D"))
                  .PutMember("active", Schema::CreateBoolean("B"))
                  .PutMember("tags", tags)
                  .PutMember("meta", meta)
                  .PutMember("nested", nested)
                  .Build();
  auto elem = Schema::CreateMember("member", ShapeType::String);
  auto mapVal = Schema::CreateMember("value", ShapeType::String);

  const Aws::String payload =
      "{\"name\":\"Alice\",\"count\":3,\"ratio\":2.5,\"active\":true,"
      "\"tags\":[\"x\",\"y\"],\"meta\":{\"k1\":\"v1\"},\"nested\":{\"id\":7}}";
  SCOPED_TRACE(Aws::String("input JSON: ") + payload);

  Aws::String name;
  int count = 0;
  double ratio = 0.0;
  bool active = false;
  Aws::Vector<Aws::String> tagValues;
  Aws::Map<Aws::String, Aws::String> metaValues;
  int nestedId = -1;

  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    const Aws::String n = m.GetMemberName();
    if (n == "name") {
      name = de.ReadString(m).value();
    } else if (n == "count") {
      count = de.ReadInteger(m).value();
    } else if (n == "ratio") {
      ratio = de.ReadDouble(m).value();
    } else if (n == "active") {
      active = de.ReadBoolean(m).value();
    } else if (n == "tags") {
      de.ReadList(m, [&](ShapeDeserializer& e) { tagValues.push_back(e.ReadString(*elem).value()); });
    } else if (n == "meta") {
      de.ReadMap(m, [&](const Aws::String& k, ShapeDeserializer& v) { metaValues[k] = v.ReadString(*mapVal).value(); });
    } else if (n == "nested") {
      de.ReadStruct(*m.GetMemberTarget().value(), [&](const Schema& im, ShapeDeserializer& ide) {
        if (im.GetMemberName() == "id") {
          nestedId = ide.ReadInteger(im).value();
        }
      });
    }
  });

  EXPECT_EQ(name, "Alice");
  EXPECT_EQ(count, 3);
  EXPECT_DOUBLE_EQ(ratio, 2.5);
  EXPECT_TRUE(active);
  ASSERT_EQ(tagValues.size(), 2u);
  EXPECT_EQ(tagValues[0], "x");
  EXPECT_EQ(tagValues[1], "y");
  ASSERT_EQ(metaValues.size(), 1u);
  EXPECT_EQ(metaValues["k1"], "v1");
  EXPECT_EQ(nestedId, 7);
}

// Sketch of a generated, schema-driven shape: it owns its Schema, writes its
// members (push), and populates itself from per-member deserialize callbacks.
class Widget : public SerializableStruct {
 public:
  const Schema& GetSchema() const override { return *m_schema; }

  void SerializeMembers(ShapeSerializer& serializer) const override { serializer.WriteString(*GetSchema().GetMember("foo").value(), foo); }

  void From(const Schema& memberSchema, ShapeDeserializer& deserializer) override {
    switch (memberSchema.GetMemberIndex()) {
      case 0: {
        auto v = deserializer.ReadString(memberSchema);
        if (v.has_value()) {
          foo = v.value();
        }
        break;
      }
      default:
        break;
    }
  }

  Aws::String foo{};

 private:
  static std::shared_ptr<const Schema> BuildSchema() {
    return Schema::StructureBuilder("Widget").PutMember("foo", Schema::CreateString("S")).Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema()};
};

TEST_F(JsonShapeDeserializerTest, DeserializesIntoClass) {
  const Aws::String serialized_struct{"{\"foo\":\"whatever\"}"};

  JsonCodec codec;
  Widget w{};
  codec.DeserializeShape(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(serialized_struct.data()), serialized_struct.size()), w);

  EXPECT_EQ(w.foo, "whatever");
}

TEST_F(JsonShapeDeserializerTest, TimestampFormatTraitControlsParsing) {
  {
    auto root = Schema::StructureBuilder("Root")
                    .PutMember("t", Schema::CreateTimestamp("T"),
                               {{TimestampFormatTrait::KEY(),
                                 Aws::MakeShared<TimestampFormatTrait>("Test", TimestampFormatTrait::Format::HTTP_DATE)}})
                    .Build();
    const Aws::String wire = "{\"t\":\"Fri, 13 Feb 2009 23:31:30 GMT\"}";
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
    Aws::Crt::Optional<Aws::Utils::DateTime> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
    ASSERT_TRUE(got.has_value());
    EXPECT_EQ(got.value().Seconds(), 1234567890);
  }
  {
    auto root = Schema::StructureBuilder("Root").PutMember("t", Schema::CreateTimestamp("T")).Build();
    const Aws::String wire = "{\"t\":1234567890}";
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
    Aws::Crt::Optional<Aws::Utils::DateTime> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
    ASSERT_TRUE(got.has_value());
    EXPECT_EQ(got.value().Seconds(), 1234567890);
  }
}

TEST_F(JsonShapeDeserializerTest, TimestampHonorsCodecSettingsDefault) {
  auto root = Schema::StructureBuilder("Root").PutMember("t", Schema::CreateTimestamp("T")).Build();
  {  // default epoch: numeric wire value read as epoch seconds
    const Aws::String wire = "{\"t\":0}";
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
    Aws::Crt::Optional<Aws::Utils::DateTime> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
    ASSERT_TRUE(got.has_value());
    EXPECT_EQ(got->Seconds(), 0);
  }
  {  // HTTP_DATE setting drives the typed-read fallback (the only value that changes ReadTimestamp's branch)
    const Aws::String wire = "{\"t\":\"Thu, 01 Jan 1970 00:00:00 GMT\"}";
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()),
                            CodecSettings{TimestampFormatTrait::Format::HTTP_DATE});
    Aws::Crt::Optional<Aws::Utils::DateTime> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
    ASSERT_TRUE(got.has_value());
    EXPECT_EQ(got->Seconds(), 0);
  }
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentBuildsNestedTree) {
  Aws::String json = "{\"n\":1,\"d\":2.5,\"b\":true,\"nil\":null,\"list\":[\"x\",false]}";
  JsonShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.c_str()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = deser.ReadDocument(*schema);
  ASSERT_TRUE(doc.has_value());

  Aws::Vector<Document> list;
  list.push_back(Document::FromString("x"));
  list.push_back(Document::FromBoolean(false));
  Aws::Map<Aws::String, Document> expected;
  expected.emplace("n", Document::FromInteger(1));
  expected.emplace("d", Document::FromDouble(2.5));
  expected.emplace("b", Document::FromBoolean(true));
  expected.emplace("nil", Document::Null());
  expected.emplace("list", Document::FromList(std::move(list)));
  EXPECT_TRUE(*doc == Document::FromMap(std::move(expected)));
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentIntegerVsDouble) {
  Aws::String json = "[7,7.0]";
  JsonShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.c_str()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = deser.ReadDocument(*schema);
  ASSERT_TRUE(doc.has_value());
  const auto* list = doc->AsList();
  ASSERT_NE(list, nullptr);
  ASSERT_EQ(list->size(), 2u);
  EXPECT_EQ((*list)[0].GetType(), ShapeType::Long);
  EXPECT_EQ((*list)[1].GetType(), ShapeType::Double);
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentRejectsExcessiveNesting) {
  // Locks the MAX_DOCUMENT_DEPTH=64 guard: nesting past the cap yields an empty Optional, not a crash.
  Aws::String json(70, '[');
  json += "1";
  json.append(70, ']');
  JsonShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.c_str()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  EXPECT_FALSE(deser.ReadDocument(*schema).has_value());
}

TEST_F(JsonShapeDeserializerTest, ReadLongRejectsNonFiniteAndOutOfRange) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateLong("L")).Build();
  const Aws::Vector<Aws::String> wires = {"{\"n\":1e30}", "{\"n\":1e400}"};
  for (const auto& wire : wires) {
    JsonShapeDeserializer d(
        Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
    bool present = true;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { present = de.ReadLong(m).has_value(); });
    EXPECT_FALSE(present) << wire;
  }
}

TEST_F(JsonShapeDeserializerTest, ReadLongClampsPlainDigitOverflow) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateLong("L")).Build();
  const Aws::String wire = "{\"n\":99999999999999999999}";  // > INT64_MAX, no exponent
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
  Aws::Crt::Optional<int64_t> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
  // strtoll saturates on overflow; a plain-integer overflow clamps to INT64_MAX rather than dropping.
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 9223372036854775807LL);
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentOverflowIntegerBecomesDouble) {
  Aws::String json = "9999999999999999999";  // > INT64_MAX
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_TRUE(doc.has_value());
  EXPECT_EQ(doc->GetType(), ShapeType::Double);  // magnitude preserved as double, not clamped to Long
}

TEST_F(JsonShapeDeserializerTest, DocumentJsonCoercesBase64AndIsoAndRejectsMalformed) {
  Aws::String json = "{\"b\":\"aGk=\",\"t\":\"2023-11-14T22:13:20Z\",\"bad\":\"!!!not-base64!!!\"}";
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_TRUE(doc.has_value());
  const Document* b = doc->GetMember("b");
  ASSERT_NE(b, nullptr);
  auto blob = b->AsBlob();
  ASSERT_TRUE(blob.has_value());
  EXPECT_EQ(blob->GetLength(), 2u);  // "hi"
  const Document* t = doc->GetMember("t");
  ASSERT_NE(t, nullptr);
  EXPECT_TRUE(t->AsTimestamp().has_value());  // ISO-8601 (default)
  const Document* bad = doc->GetMember("bad");
  ASSERT_NE(bad, nullptr);
  EXPECT_FALSE(bad->AsBlob().has_value());  // malformed base64 -> absent, not present-empty
}

TEST_F(JsonShapeDeserializerTest, DocumentJsonEmptyStringBlobIsPresentEmpty) {
  Aws::String json = "{\"e\":\"\"}";
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_TRUE(doc.has_value());
  const Document* e = doc->GetMember("e");
  ASSERT_NE(e, nullptr);
  auto blob = e->AsBlob();
  ASSERT_TRUE(blob.has_value());        // legitimately-empty string -> present blob
  EXPECT_EQ(blob->GetLength(), 0u);     // ...of length 0 (distinct from malformed -> absent)
}

TEST_F(JsonShapeDeserializerTest, DocumentTimestampHonorsConfiguredHttpDate) {
  Aws::String json = "\"Thu, 01 Jan 1970 00:00:00 GMT\"";
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()),
      TimestampFormatTrait::Format::HTTP_DATE);
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_TRUE(doc.has_value());
  auto ts = doc->AsTimestamp();
  ASSERT_TRUE(ts.has_value());
  EXPECT_EQ(ts->Seconds(), 0);
}

TEST_F(JsonShapeDeserializerTest, DocumentTimestampDefaultsToIso8601) {
  Aws::String json = "\"1970-01-01T00:00:00Z\"";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_TRUE(doc.has_value());
  EXPECT_TRUE(doc->AsTimestamp().has_value());  // ISO-8601 by default
}
