/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/StringUtils.h>
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

#include <chrono>
#include <cmath>
#include <functional>
#include <limits>
#include <memory>
#include <utility>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class JsonShapeDeserializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {

Aws::String EpochText(int64_t millis) {
  const bool negative = millis < 0;
  const int64_t abs = negative ? -millis : millis;
  Aws::String frac = Aws::Utils::StringUtils::to_string(abs % 1000);
  frac.insert(0, 3 - frac.size(), '0');
  return Aws::String(negative ? "-" : "") + Aws::Utils::StringUtils::to_string(abs / 1000) + "." + frac;
}

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

TEST_F(JsonShapeDeserializerTest, EpochTimestampMatchesLegacyDateTimeDouble) {
  auto root = Schema::StructureBuilder("Root").PutMember("ts", Schema::CreateTimestamp("T")).Build();
  auto member = root->GetMember("ts").value();
  for (const int64_t millis : {int64_t(-4307758798296), int64_t(4307758798296), int64_t(1296), int64_t(-1296), int64_t(1700000000123)}) {
    auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, Aws::Utils::DateTime(millis)); });
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<Aws::Utils::DateTime> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
    ASSERT_TRUE(got.has_value()) << payload;
    EXPECT_EQ(got.value().Millis(), LegacyEpochMillis(EpochSecondsText(Aws::Utils::DateTime(millis)))) << payload;
  }
}

TEST_F(JsonShapeDeserializerTest, EpochTimestampSweepMatchesLegacyDateTimeDouble) {
  auto schema = Schema::CreateTimestamp("T");
  for (int64_t millis = -3000; millis <= 3000; ++millis) {
    const Aws::String wire = EpochText(millis);
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
    auto got = d.ReadTimestamp(*schema);
    ASSERT_TRUE(got.has_value()) << wire;
    EXPECT_EQ(got.value().Millis(), LegacyEpochMillis(wire)) << wire;
  }
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

namespace {

std::pair<Aws::String, bool> ReadName(const Aws::String& json) {
  auto root = Schema::StructureBuilder("Root").PutMember("name", Schema::CreateString("S")).Build();
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  Aws::String name;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    auto v = de.ReadString(m);
    if (v.has_value()) {
      name = v.value();
    }
  });
  return {name, d.GetError().has_value()};
}

}  // namespace

TEST_F(JsonShapeDeserializerTest, SkippedValidValuesAreConsumed) {
  for (const Aws::String json : {R"({"unknown":{"a":[1,2.5e3,-0,true,false,null,"x\"y"],"b":{}},"name":"bob"})",
                                 R"({"unknown":1e400,"name":"bob"})", R"({"unknown":[],"name":"bob"})", R"({"unknown" : "\ud83d\ude00" ,"name":"bob"})"}) {
    const auto result = ReadName(json);
    EXPECT_FALSE(result.second) << json;
    EXPECT_EQ(result.first, "bob") << json;
  }
}

TEST_F(JsonShapeDeserializerTest, SkippedMalformedValueRecordsError) {
  for (const Aws::String json : {R"({"unknown":[1 2],"name":"bob"})", R"({"unknown":{"a" 1},"name":"bob"})",
                                 R"({"unknown":[1},"name":"bob"})", R"({"unknown":[1,],"name":"bob"})",
                                 R"({"unknown":{"a":1,},"name":"bob"})", R"({"unknown":{1:2},"name":"bob"})",
                                 R"({"unknown":tru,"name":"bob"})", R"({"unknown":1e,"name":"bob"})", R"({"unknown":-,"name":"bob"})",
                                 R"({"unknown":[[[)", R"({"name":[1 2]})", R"({"unknown":"\q","name":"bob"})"}) {
    EXPECT_TRUE(ReadName(json).second) << json;
  }
}

TEST_F(JsonShapeDeserializerTest, SurrogatePairDecodes) {
  const auto result = ReadName(R"({"name":"\ud83d\ude00"})");
  EXPECT_FALSE(result.second);
  EXPECT_EQ(result.first, "\xF0\x9F\x98\x80");
}

TEST_F(JsonShapeDeserializerTest, InvalidEscapeRecordsError) {
  for (const Aws::String json : {R"({"name":"\ud800"})", R"({"name":"\ude00"})", R"({"name":"\ud800x"})", R"({"name":"\ud800\u0041"})",
                                 R"({"name":"\u12G4"})", R"({"name":"\u12"})", R"({"name":"\q"})"}) {
    EXPECT_TRUE(ReadName(json).second) << json;
  }
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
  ASSERT_NE(doc, nullptr);

  Aws::Vector<std::shared_ptr<const Document>> list;
  list.push_back(Document::FromString("x"));
  list.push_back(Document::FromBoolean(false));
  Aws::Map<Aws::String, std::shared_ptr<const Document>> expected;
  expected.emplace("n", Document::FromInteger(1));
  expected.emplace("d", Document::FromDouble(2.5));
  expected.emplace("b", Document::FromBoolean(true));
  expected.emplace("nil", Document::Null());
  expected.emplace("list", Document::FromList(std::move(list)));
  // Content equality across implementations: a JSON-built tree equals a plain-built tree.
  EXPECT_TRUE(*doc == *Document::FromMap(std::move(expected)));
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentIntegerVsDouble) {
  Aws::String json = "[7,7.0,3000000000]";
  JsonShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.c_str()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = deser.ReadDocument(*schema);
  ASSERT_NE(doc, nullptr);
  auto list = doc->AsList();
  ASSERT_NE(list, nullptr);
  ASSERT_EQ(list->size(), 3u);
  EXPECT_EQ((*list)[0]->GetType(), ShapeType::Integer);
  EXPECT_EQ((*list)[1]->GetType(), ShapeType::Double);
  EXPECT_EQ((*list)[2]->GetType(), ShapeType::Long);
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentAcceptsNestingAtDepthLimit) {
  Aws::String json(MAX_NESTING_DEPTH, '[');
  json += "1";
  json.append(MAX_NESTING_DEPTH, ']');
  JsonShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.c_str()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  EXPECT_NE(deser.ReadDocument(*schema), nullptr);
  EXPECT_FALSE(deser.GetError().has_value());
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentRejectsExcessiveNesting) {
  Aws::String json(MAX_NESTING_DEPTH + 1, '[');
  json += "1";
  json.append(MAX_NESTING_DEPTH + 1, ']');
  JsonShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.c_str()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  EXPECT_EQ(deser.ReadDocument(*schema), nullptr);
  ASSERT_TRUE(deser.GetError().has_value());
  EXPECT_NE(deser.GetError()->GetMessage().find("depth"), Aws::String::npos);
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentRequiresColonAfterKey) {
  auto schema = Schema::CreateDocument("smithy.api#Document");
  const Aws::String valid = "{\"a\" : 1}";
  JsonShapeDeserializer ok(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(valid.data()), valid.size()));
  auto doc = ok.ReadDocument(*schema);
  ASSERT_NE(doc, nullptr);
  ASSERT_NE(doc->GetMember("a"), nullptr);
  EXPECT_EQ(doc->GetMember("a")->AsLong().value(), 1);

  const Aws::String missing = "{\"a\" 1}";
  JsonShapeDeserializer bad(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(missing.data()), missing.size()));
  EXPECT_EQ(bad.ReadDocument(*schema), nullptr);
  ASSERT_TRUE(bad.GetError().has_value());
  EXPECT_NE(bad.GetError()->GetMessage().find("expected ':'"), Aws::String::npos);
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentMalformedRecordsError) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("doc", Schema::CreateDocument("smithy.api#Document"))
                  .PutMember("name", Schema::CreateString("S"))
                  .Build();
  const Aws::Vector<Aws::String> payloads = {
      "{\"doc\":[1.2.3],\"name\":\"bob\"}",           "{\"doc\":{1:2},\"name\":\"bob\"}", "{\"doc\":[1,2 3],\"name\":\"bob\"}",
      "{\"doc\":{\"a\":1 \"b\":2},\"name\":\"bob\"}", "{\"doc\":[1:2],\"name\":\"bob\"}", "{\"doc\":{\"a\" 1},\"name\":\"bob\"}",
  };
  for (const auto& json : payloads) {
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    bool docPresent = true;
    Aws::String name;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
      if (m.GetMemberName() == "doc") {
        docPresent = de.ReadDocument(m) != nullptr;
      } else {
        auto v = de.ReadString(m);
        if (v.has_value()) {
          name = v.value();
        }
      }
    });
    EXPECT_FALSE(docPresent) << json;
    EXPECT_TRUE(name.empty()) << json;
    EXPECT_TRUE(d.GetError().has_value()) << json;
  }
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentUnrecognisedLiteralRecordsError) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("doc", Schema::CreateDocument("smithy.api#Document"))
                  .PutMember("name", Schema::CreateString("S"))
                  .Build();
  for (const Aws::String json : {"{\"doc\":nul,\"name\":\"bob\"}", "{\"doc\":[1,tru],\"name\":\"bob\"}"}) {
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    bool docPresent = true;
    Aws::String name;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
      if (m.GetMemberName() == "doc") {
        docPresent = de.ReadDocument(m) != nullptr;
      } else {
        auto v = de.ReadString(m);
        if (v.has_value()) {
          name = v.value();
        }
      }
    });
    EXPECT_FALSE(docPresent) << json;
    EXPECT_TRUE(name.empty()) << json;
    EXPECT_TRUE(d.GetError().has_value()) << json;
  }
}

TEST_F(JsonShapeDeserializerTest, ReadLongNonIntegralOrOutOfRangeRecordsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateLong("L")).Build();
  const Aws::Vector<Aws::String> wires = {"{\"n\":1e30}", "{\"n\":1e400}", "{\"n\":1.5}", "{\"n\":-2.5e0}"};
  for (const auto& wire : wires) {
    JsonShapeDeserializer d(
        Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
    bool present = true;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { present = de.ReadLong(m).has_value(); });
    EXPECT_FALSE(present) << wire;
    ASSERT_TRUE(d.GetError().has_value()) << wire;
    EXPECT_NE(d.GetError()->GetMessage().find("out of range"), Aws::String::npos) << wire;
  }
}

TEST_F(JsonShapeDeserializerTest, ReadLongIntegralExponentFormIsExact) {
  auto schema = Schema::CreateLong("L");
  const Aws::String json = "1.5e3";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  EXPECT_EQ(d.ReadLong(*schema).value(), 1500);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(JsonShapeDeserializerTest, ReadLongPlainDigitOverflowRecordsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateLong("L")).Build();
  for (const Aws::String wire : {"{\"n\":99999999999999999999}", "{\"n\":9223372036854775808}", "{\"n\":-9223372036854775809}"}) {
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(wire.data()), wire.size()));
    Aws::Crt::Optional<int64_t> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
    EXPECT_FALSE(got.has_value()) << wire;
    ASSERT_TRUE(d.GetError().has_value()) << wire;
    EXPECT_NE(d.GetError()->GetMessage().find("out of range"), Aws::String::npos) << wire;
  }
  const Aws::Vector<std::pair<Aws::String, int64_t>> bounds = {{"{\"n\":9223372036854775807}", (std::numeric_limits<int64_t>::max)()},
                                                               {"{\"n\":-9223372036854775808}", (std::numeric_limits<int64_t>::min)()}};
  for (const auto& bound : bounds) {
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(bound.first.data()), bound.first.size()));
    Aws::Crt::Optional<int64_t> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
    ASSERT_TRUE(got.has_value()) << bound.first;
    EXPECT_EQ(got.value(), bound.second);
    EXPECT_FALSE(d.GetError().has_value()) << bound.first;
  }
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentOverflowIntegerBecomesDouble) {
  Aws::String json = "9999999999999999999";  // > INT64_MAX
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_NE(doc, nullptr);
  EXPECT_EQ(doc->GetType(), ShapeType::Double);  // magnitude preserved as double, not clamped to Long
}

TEST_F(JsonShapeDeserializerTest, ReadDocumentNonFiniteNumberRecordsError) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("doc", Schema::CreateDocument("smithy.api#Document"))
                  .PutMember("name", Schema::CreateString("S"))
                  .Build();
  const Aws::Vector<Aws::String> payloads = {
      "{\"doc\":1E310,\"name\":\"bob\"}",
      "{\"doc\":-1E310,\"name\":\"bob\"}",
      "{\"doc\":[1,1E310],\"name\":\"bob\"}",
  };
  for (const auto& json : payloads) {
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    bool docPresent = true;
    Aws::String name;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
      if (m.GetMemberName() == "doc") {
        docPresent = de.ReadDocument(m) != nullptr;
      } else {
        auto v = de.ReadString(m);
        if (v.has_value()) {
          name = v.value();
        }
      }
    });
    EXPECT_FALSE(docPresent) << json;
    EXPECT_TRUE(name.empty()) << json;
    ASSERT_TRUE(d.GetError().has_value()) << json;
    EXPECT_NE(d.GetError()->GetMessage().find("out of range"), Aws::String::npos) << json;
  }
}

TEST_F(JsonShapeDeserializerTest, DocumentJsonCoercesBase64AndIsoAndRejectsMalformed) {
  Aws::String json = "{\"b\":\"aGk=\",\"t\":\"2023-11-14T22:13:20Z\",\"bad\":\"!!!not-base64!!!\"}";
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()),
      CodecSettings{TimestampFormatTrait::Format::DATE_TIME});
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_NE(doc, nullptr);
  auto b = doc->GetMember("b");
  ASSERT_NE(b, nullptr);
  auto blob = b->AsBlob();
  ASSERT_TRUE(blob.has_value());
  EXPECT_EQ(blob->GetLength(), 2u);  // "hi"
  auto t = doc->GetMember("t");
  ASSERT_NE(t, nullptr);
  EXPECT_TRUE(t->AsTimestamp().has_value());  // ISO-8601 under a string-based default
  auto bad = doc->GetMember("bad");
  ASSERT_NE(bad, nullptr);
  EXPECT_FALSE(bad->AsBlob().has_value());  // malformed base64 -> absent, not present-empty
}

TEST_F(JsonShapeDeserializerTest, DocumentJsonEmptyStringBlobIsPresentEmpty) {
  Aws::String json = "{\"e\":\"\"}";
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_NE(doc, nullptr);
  auto e = doc->GetMember("e");
  ASSERT_NE(e, nullptr);
  auto blob = e->AsBlob();
  ASSERT_TRUE(blob.has_value());     // legitimately-empty string -> present blob
  EXPECT_EQ(blob->GetLength(), 0u);  // ...of length 0 (distinct from malformed -> absent)
}

TEST_F(JsonShapeDeserializerTest, DocumentTimestampHonorsConfiguredHttpDate) {
  Aws::String json = "\"Thu, 01 Jan 1970 00:00:00 GMT\"";
  JsonShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()),
      CodecSettings{TimestampFormatTrait::Format::HTTP_DATE});
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_NE(doc, nullptr);
  auto ts = doc->AsTimestamp();
  ASSERT_TRUE(ts.has_value());
  EXPECT_EQ(ts->Seconds(), 0);
}

TEST_F(JsonShapeDeserializerTest, DocumentTimestampCoercesUnderDateTimeFormat) {
  Aws::String json = "\"1970-01-01T00:00:00Z\"";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()),
                          CodecSettings{TimestampFormatTrait::Format::DATE_TIME});
  auto schema = Schema::CreateDocument("smithy.api#Document");
  auto doc = d.ReadDocument(*schema);
  ASSERT_NE(doc, nullptr);
  EXPECT_TRUE(doc->AsTimestamp().has_value());  // ISO-8601 under a string-based (DATE_TIME) default
}

TEST_F(JsonShapeDeserializerTest, DocumentStringTimestampGatedByConfiguredFormat) {
  auto schema = Schema::CreateDocument("smithy.api#Document");
  const Aws::String iso = "\"2009-02-13T23:31:30Z\"";
  {  // epoch (numeric) default: a string does NOT coerce to timestamp (SEP format-gating)
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(iso.data()), iso.size()));
    auto doc = d.ReadDocument(*schema);
    ASSERT_NE(doc, nullptr);
    EXPECT_FALSE(doc->AsTimestamp().has_value());
  }
  {  // date-time (string-based) default: the string coerces
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(iso.data()), iso.size()),
                            CodecSettings{TimestampFormatTrait::Format::DATE_TIME});
    auto doc = d.ReadDocument(*schema);
    ASSERT_NE(doc, nullptr);
    ASSERT_TRUE(doc->AsTimestamp().has_value());
    EXPECT_EQ(doc->AsTimestamp()->Seconds(), 1234567890);
  }
}

TEST_F(JsonShapeDeserializerTest, DocumentNumberTimestampGatedByConfiguredFormat) {
  auto schema = Schema::CreateDocument("smithy.api#Document");
  const Aws::String num = "1234567890";
  {  // epoch default: a number coerces as epoch seconds
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(num.data()), num.size()));
    auto doc = d.ReadDocument(*schema);
    ASSERT_NE(doc, nullptr);
    ASSERT_TRUE(doc->AsTimestamp().has_value());
    EXPECT_EQ(doc->AsTimestamp()->Seconds(), 1234567890);
  }
  {  // date-time (string-based) default: a number does NOT coerce
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(num.data()), num.size()),
                            CodecSettings{TimestampFormatTrait::Format::DATE_TIME});
    auto doc = d.ReadDocument(*schema);
    ASSERT_NE(doc, nullptr);
    EXPECT_FALSE(doc->AsTimestamp().has_value());
  }
}

TEST_F(JsonShapeDeserializerTest, MissingSeparatorSetsErrorAndStops) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("a", Schema::CreateInteger("I"))
                  .PutMember("b", Schema::CreateInteger("I"))
                  .Build();
  const Aws::String json = "{\"a\":1 \"b\":2}";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    ++delivered;
    de.ReadInteger(m);
  });
  EXPECT_EQ(delivered, 1);
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("expected ','"), Aws::String::npos);
}

TEST_F(JsonShapeDeserializerTest, ReadsReturnEmptyAfterError) {
  const Aws::String json = "{\"a\":1-2,\"b\":3}";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateLong("A")).PutMember("b", Schema::CreateLong("B")).Build();
  Aws::Vector<Aws::String> seen;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    seen.push_back(m.GetMemberName());
    de.ReadLong(m);
  });
  ASSERT_EQ(seen.size(), 1u);
  EXPECT_EQ(seen[0], "a");
  EXPECT_TRUE(d.GetError().has_value());
}

TEST_F(JsonShapeDeserializerTest, MalformedNumberSetsError) {
  const Aws::String json = "1-2";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateLong("L");
  EXPECT_FALSE(d.ReadLong(*schema).has_value());
  EXPECT_TRUE(d.GetError().has_value());
}

TEST_F(JsonShapeDeserializerTest, BadDocumentNumberRecordsError) {
  const Aws::String json = "[1.2.3]";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  EXPECT_EQ(d.ReadDocument(*schema), nullptr);
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("invalid number"), Aws::String::npos);
}

TEST_F(JsonShapeDeserializerTest, RecursiveStructAtMaxDepthSucceeds) {
  RecursiveNodeSchema node;
  const Aws::String json = NestedJsonNodes(MAX_NESTING_DEPTH);
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  EXPECT_EQ(DescendRecursiveNode(d, node.Get()), MAX_NESTING_DEPTH);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(JsonShapeDeserializerTest, RecursiveStructPastMaxDepthSetsError) {
  RecursiveNodeSchema node;
  const Aws::String json = NestedJsonNodes(MAX_NESTING_DEPTH + 1);
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  DescendRecursiveNode(d, node.Get());
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("depth"), Aws::String::npos);
}

TEST_F(JsonShapeDeserializerTest, NestedListsPastMaxDepthSetErrorWithoutRecursingFurther) {
  auto listBuilder = Schema::ListBuilder("L");
  listBuilder.PutMember("member", listBuilder);
  auto list = listBuilder.Build();
  const Aws::String json = Aws::String(MAX_NESTING_DEPTH * 4, '[') + Aws::String(MAX_NESTING_DEPTH * 4, ']');
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  size_t calls = 0;
  std::function<void(ShapeDeserializer&)> descend = [&](ShapeDeserializer& de) {
    ++calls;
    de.ReadList(*list, descend);
  };
  descend(d);
  EXPECT_TRUE(d.GetError().has_value());
  EXPECT_LE(calls, static_cast<size_t>(MAX_NESTING_DEPTH) + 1);
}

namespace {
template <typename Fn>
void WithJson(const Aws::String& json, const Fn& fn) {
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  fn(d);
}

void ExpectOutOfRange(const ShapeDeserializer& d, const Aws::String& wire) {
  ASSERT_TRUE(d.GetError().has_value()) << wire;
  EXPECT_NE(d.GetError()->GetMessage().find("out of range"), Aws::String::npos) << wire;
}
}  // namespace

TEST_F(JsonShapeDeserializerTest, IntegerBeyondInt32RecordsError) {
  auto schema = Schema::CreateInteger("I");
  for (const char* wire : {"3000000000", "-2147483649"}) {
    WithJson(wire, [&](JsonShapeDeserializer& d) {
      EXPECT_FALSE(d.ReadInteger(*schema).has_value()) << wire;
      ExpectOutOfRange(d, wire);
    });
  }
  WithJson("-2147483648", [&](JsonShapeDeserializer& d) { EXPECT_EQ(d.ReadInteger(*schema).value(), (std::numeric_limits<int>::min)()); });
}

TEST_F(JsonShapeDeserializerTest, FloatBeyondFloatRangeRecordsError) {
  auto schema = Schema::CreateFloat("F");
  WithJson("1e300", [&](JsonShapeDeserializer& d) {
    EXPECT_FALSE(d.ReadFloat(*schema).has_value());
    ExpectOutOfRange(d, "1e300");
  });
  WithJson("\"Infinity\"", [&](JsonShapeDeserializer& d) { EXPECT_TRUE(std::isinf(d.ReadFloat(*schema).value())); });
}

TEST_F(JsonShapeDeserializerTest, FloatMaxRoundTrips) {
  auto root = Schema::StructureBuilder("Root").PutMember("f", Schema::CreateFloat("F")).Build();
  auto member = root->GetMember("f").value();
  const float max = (std::numeric_limits<float>::max)();
  for (const float value : {max, -max}) {
    auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, value); });
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<float> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadFloat(m); });
    ASSERT_TRUE(got.has_value()) << payload;
    EXPECT_EQ(got.value(), value);
  }
}

TEST_F(JsonShapeDeserializerTest, FloatNarrowingBoundaries) {
  auto schema = Schema::CreateFloat("F");
  const auto readFloat = [&](double value) {
    Aws::Crt::Optional<float> got;
    WithJson(Aws::Utils::StringUtils::FormatRoundTripDouble(value), [&](JsonShapeDeserializer& d) { got = d.ReadFloat(*schema); });
    return got;
  };
  const double max = static_cast<double>((std::numeric_limits<float>::max)());
  const double halfUlp = std::ldexp(1.0, 103);
  const float maxF = (std::numeric_limits<float>::max)();

  ASSERT_TRUE(readFloat(max).has_value());
  EXPECT_EQ(readFloat(max).value(), maxF);
  ASSERT_TRUE(readFloat(-max).has_value());
  EXPECT_EQ(readFloat(-max).value(), -maxF);

  const double justAbove = std::nextafter(max, std::numeric_limits<double>::infinity());
  ASSERT_TRUE(readFloat(justAbove).has_value());
  EXPECT_EQ(readFloat(justAbove).value(), maxF);
  ASSERT_TRUE(readFloat(-justAbove).has_value());
  EXPECT_EQ(readFloat(-justAbove).value(), -maxF);

  const double justBelowHalf = std::nextafter(max + halfUlp, 0.0);
  ASSERT_TRUE(readFloat(justBelowHalf).has_value());
  EXPECT_EQ(readFloat(justBelowHalf).value(), maxF);

  EXPECT_FALSE(readFloat(max + halfUlp).has_value());
  EXPECT_FALSE(readFloat(-(max + halfUlp)).has_value());
  EXPECT_FALSE(readFloat(1e300).has_value());

  WithJson("\"Infinity\"", [&](JsonShapeDeserializer& d) { EXPECT_TRUE(std::isinf(d.ReadFloat(*schema).value())); });
  WithJson("\"-Infinity\"", [&](JsonShapeDeserializer& d) { EXPECT_TRUE(std::isinf(d.ReadFloat(*schema).value())); });
  WithJson("\"NaN\"", [&](JsonShapeDeserializer& d) { EXPECT_TRUE(std::isnan(d.ReadFloat(*schema).value())); });
}

TEST_F(JsonShapeDeserializerTest, UnrepresentableEpochTimestampRecordsError) {
  auto schema = Schema::CreateTimestamp("T");
  for (const char* wire : {"1e300", "-1e300", "1e400"}) {
    WithJson(wire, [&](JsonShapeDeserializer& d) {
      EXPECT_FALSE(d.ReadTimestamp(*schema).has_value()) << wire;
      ExpectOutOfRange(d, wire);
    });
  }
}

namespace {
void ExpectRootRecordsError(const Aws::String& json) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
  EXPECT_EQ(delivered, 0) << json;
  ASSERT_TRUE(d.GetError().has_value()) << json;
  EXPECT_NE(d.GetError()->GetMessage().find("expected object"), Aws::String::npos) << json;
}
}  // namespace

TEST_F(JsonShapeDeserializerTest, NonObjectRootRecordsError) {
  for (const char* wire : {"hello", "[1]", "\"x\"", "<html>503</html>", "5"}) {
    ExpectRootRecordsError(wire);
  }
}

TEST_F(JsonShapeDeserializerTest, RootNullIsEmptyStructWithoutError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  for (const char* wire : {"null", "  null  ", "\nnull\t"}) {
    const Aws::String json = wire;
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    int delivered = 0;
    d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
    EXPECT_EQ(delivered, 0) << "[" << wire << "]";
    EXPECT_FALSE(d.GetError().has_value()) << "[" << wire << "]";
  }
}

TEST_F(JsonShapeDeserializerTest, RootNullxRecordsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  const Aws::String json = "nullx";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
  EXPECT_EQ(delivered, 0);
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("trailing data"), Aws::String::npos);
}

TEST_F(JsonShapeDeserializerTest, TrailingDataAfterRootRecordsError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  for (const char* wire : {"{\"a\":1}xyz", "{\"a\":1} {}", "{}]", "null null"}) {
    const Aws::String json = wire;
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { de.ReadInteger(m); });
    ASSERT_TRUE(d.GetError().has_value()) << wire;
    EXPECT_NE(d.GetError()->GetMessage().find("trailing data"), Aws::String::npos) << wire;
  }
  const Aws::String json = "{\"a\":1} \n\t";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { de.ReadInteger(m); });
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(JsonShapeDeserializerTest, MissingColonAfterKeyRecordsError) {
  auto mapBuilder = Schema::MapBuilder("M");
  auto root = Schema::StructureBuilder("Root").PutMember("name", Schema::CreateString("S")).PutMember("m", mapBuilder).Build();
  auto valueSchema = Schema::CreateString("V");
  for (const char* wire : {"{\"name\" \"Alice\"}", "{\"m\":{\"k\" \"v\"}}"}) {
    const Aws::String json = wire;
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
      if (m.GetType() == ShapeType::Map) {
        de.ReadMap(m, [&](const Aws::String&, ShapeDeserializer& v) { v.ReadString(*valueSchema); });
      } else {
        de.ReadString(m);
      }
    });
    ASSERT_TRUE(d.GetError().has_value()) << wire;
    EXPECT_NE(d.GetError()->GetMessage().find("expected ':'"), Aws::String::npos) << wire;
  }
}

TEST_F(JsonShapeDeserializerTest, WhitespaceOnlyRootIsEmptyStructWithoutError) {
  auto root = Schema::StructureBuilder("Root").PutMember("a", Schema::CreateInteger("I")).Build();
  for (const char* wire : {"", "   ", " \n\t"}) {
    const Aws::String json = wire;
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    int delivered = 0;
    d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
    EXPECT_EQ(delivered, 0);
    EXPECT_FALSE(d.GetError().has_value()) << "[" << wire << "]";
  }
}

TEST_F(JsonShapeDeserializerTest, ScalarWhereNestedStructExpectedIsNotAnError) {
  auto inner = Schema::StructureBuilder("Inner").PutMember("x", Schema::CreateInteger("I")).Build();
  auto root = Schema::StructureBuilder("Root").PutMember("inner", inner).PutMember("after", Schema::CreateInteger("I")).Build();
  const Aws::String json = "{\"inner\":5,\"after\":7}";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  Aws::Crt::Optional<int> after;
  int innerDelivered = 0;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "inner") {
      de.ReadStruct(m, [&](const Schema&, ShapeDeserializer&) { ++innerDelivered; });
    } else {
      after = de.ReadInteger(m);
    }
  });
  EXPECT_EQ(innerDelivered, 0);
  EXPECT_FALSE(d.GetError().has_value());
  ASSERT_TRUE(after.has_value());
  EXPECT_EQ(after.value(), 7);
}

TEST_F(JsonShapeDeserializerTest, OverflowingFiniteTextRecordsError) {
  auto dbl = Schema::CreateDouble("D");
  auto flt = Schema::CreateFloat("F");
  for (const char* wire : {"1e400", "-1e400"}) {
    WithJson(wire, [&](JsonShapeDeserializer& d) {
      EXPECT_FALSE(d.ReadDouble(*dbl).has_value()) << wire;
      ExpectOutOfRange(d, wire);
    });
    WithJson(wire, [&](JsonShapeDeserializer& d) {
      EXPECT_FALSE(d.ReadFloat(*flt).has_value()) << wire;
      ExpectOutOfRange(d, wire);
    });
  }
  WithJson("\"Infinity\"", [&](JsonShapeDeserializer& d) {
    const auto v = d.ReadDouble(*dbl);
    ASSERT_TRUE(v.has_value());
    EXPECT_TRUE(std::isinf(v.value()));
  });
}

namespace {

std::shared_ptr<const Schema> UnionRoot() {
  auto variants = Schema::UnionBuilder("U").PutMember("a", Schema::CreateString("S")).PutMember("b", Schema::CreateInteger("I")).Build();
  return Schema::StructureBuilder("Root").PutMember("u", variants).Build();
}

int ReadUnionVariants(JsonShapeDeserializer& d) {
  const auto root = UnionRoot();
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

TEST_F(JsonShapeDeserializerTest, LeadingByteOrderMarkIsSkipped) {
  auto root = Schema::StructureBuilder("Root").PutMember("n", Schema::CreateInteger("I")).Build();
  const auto read = [&](const Aws::String& json, Aws::Crt::Optional<int>& got) {
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
    return d.GetError();
  };
  Aws::Crt::Optional<int> got;
  EXPECT_FALSE(read("\xEF\xBB\xBF{\"n\":7}", got).has_value());
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 7);
  Aws::Crt::Optional<int> none;
  EXPECT_FALSE(read("\xEF\xBB\xBF", none).has_value());
  EXPECT_FALSE(none.has_value());
  EXPECT_TRUE(read("{\"n\":7}\xEF\xBB\xBF", none).has_value());
  EXPECT_TRUE(read("\xEF\xBB{}", none).has_value());
}

TEST_F(JsonShapeDeserializerTest, UnionWithTwoMembersSetRecordsError) {
  const Aws::String json = "{\"u\":{\"a\":\"x\",\"b\":1}}";
  JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
  EXPECT_EQ(ReadUnionVariants(d), 1);
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("more than one member"), Aws::String::npos);
}

TEST_F(JsonShapeDeserializerTest, UnionIgnoresNullAndUnmodeledMembers) {
  for (const Aws::String json : {"{\"u\":{\"a\":\"x\",\"b\":null}}", "{\"u\":{\"__type\":\"T\",\"b\":1}}"}) {
    JsonShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(json.data()), json.size()));
    EXPECT_EQ(ReadUnionVariants(d), 1) << json;
    EXPECT_FALSE(d.GetError().has_value()) << json;
  }
}
