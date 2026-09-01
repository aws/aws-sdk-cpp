/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/JsonShapeDeserializer.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>

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

}

TEST_F(JsonShapeDeserializerTest, Boolean) {
  auto root = Schema::StructureBuilder("Root").PutMember("enabled", Schema::CreateBoolean("B")).Build();
  auto enabled = root->GetMember("enabled").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*enabled, true); });

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<bool> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBoolean(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_TRUE(got.value());
}

TEST_F(JsonShapeDeserializerTest, Integer) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, -42); });

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), -42);
}

TEST_F(JsonShapeDeserializerTest, Long) {
  auto root = Schema::StructureBuilder("Root").PutMember("big", Schema::CreateLong("L")).Build();
  auto big = root->GetMember("big").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteLong(*big, 9876543210LL); });

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int64_t> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 9876543210LL);
}

TEST_F(JsonShapeDeserializerTest, Double) {
  auto root = Schema::StructureBuilder("Root").PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.25); });

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<Aws::Utils::DateTime> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().Seconds(), 1234567890);
}

TEST_F(JsonShapeDeserializerTest, TimestampDateTimeString) {

  auto root = Schema::StructureBuilder("Root").PutMember("ts", Schema::CreateTimestamp("T")).Build();
  const Aws::String payload = "{\"ts\":\"2009-02-13T23:31:30Z\"}";

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "hello");
}

TEST_F(JsonShapeDeserializerTest, NullMemberIsSkipped) {
  auto root = Schema::StructureBuilder("Root").PutMember("item", Schema::CreateString("S")).Build();
  auto member = root->GetMember("item").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  JsonShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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
