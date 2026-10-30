/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlShapeDeserializer.h>
#include <smithy/client/schema/XmlShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <array>
#include <cmath>
#include <functional>
#include <limits>
#include <utility>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class XmlShapeDeserializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {

SchemaBuilder RootBuilder() {
  return Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Root")}});
}

Aws::String Encode(const std::shared_ptr<const Schema>& root, const std::function<void(ShapeSerializer&)>& writeMembers) {
  XmlShapeSerializer s;
  LambdaStruct rootStruct(*root, writeMembers);
  s.WriteStruct(*root, rootStruct);
  return s.GetPayload().GetResult();
}

}  // namespace

TEST_F(XmlShapeDeserializerTest, Boolean) {
  auto root = RootBuilder().PutMember("enabled", Schema::CreateBoolean("B")).Build();
  auto enabled = root->GetMember("enabled").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*enabled, true); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<bool> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBoolean(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_TRUE(got.value());
}

TEST_F(XmlShapeDeserializerTest, Integer) {
  auto root = RootBuilder().PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, -42); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), -42);
}

TEST_F(XmlShapeDeserializerTest, Long) {
  auto root = RootBuilder().PutMember("big", Schema::CreateLong("L")).Build();
  auto big = root->GetMember("big").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteLong(*big, 9876543210LL); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<int64_t> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 9876543210LL);
}

TEST_F(XmlShapeDeserializerTest, LongPlainDigitOverflowRecordsError) {
  auto root = RootBuilder().PutMember("big", Schema::CreateLong("L")).Build();
  for (const Aws::String payload : {"<Root><big>99999999999999999999</big></Root>", "<Root><big>-99999999999999999999</big></Root>",
                                    "<Root><big> 99999999999999999999</big></Root>", "<Root><big>9223372036854775808</big></Root>"}) {
    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<int64_t> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
    EXPECT_FALSE(got.has_value()) << payload;
    ASSERT_TRUE(d.GetError().has_value()) << payload;
    EXPECT_NE(d.GetError()->GetMessage().find("out of range"), Aws::String::npos) << payload;
  }
}

TEST_F(XmlShapeDeserializerTest, LongRejectsMalformed) {
  auto root = RootBuilder().PutMember("big", Schema::CreateLong("L")).Build();
  const Aws::Vector<Aws::String> payloads = {"<Root><big>12abc</big></Root>", "<Root><big>1.5</big></Root>",
                                             "<Root><big>1e30</big></Root>", "<Root><big>Infinity</big></Root>",
                                             "<Root><big>-</big></Root>", "<Root><big>0x1A</big></Root>",
                                             "<Root><big>99999999999999999999 </big></Root>"};
  for (const auto& payload : payloads) {
    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    bool present = true;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { present = de.ReadLong(m).has_value(); });
    EXPECT_FALSE(present) << payload;
  }
}

TEST_F(XmlShapeDeserializerTest, DoubleRejectsTrailingCharacters) {
  auto root = RootBuilder().PutMember("d", Schema::CreateDouble("D")).Build();
  const Aws::String payload = "<Root><d>1.2.3</d></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  bool present = true;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { present = de.ReadDouble(m).has_value(); });
  EXPECT_FALSE(present);
}

TEST_F(XmlShapeDeserializerTest, Double) {
  auto root = RootBuilder().PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.25); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<double> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadDouble(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_DOUBLE_EQ(got.value(), 3.25);
}

TEST_F(XmlShapeDeserializerTest, NonFiniteDoubles) {
  auto root = RootBuilder()
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

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

TEST_F(XmlShapeDeserializerTest, StringWithEscapes) {
  auto root = RootBuilder().PutMember("msg", Schema::CreateString("S")).Build();
  auto member = root->GetMember("msg").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "x < 5 & y > 3"); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "x < 5 & y > 3");
}

TEST_F(XmlShapeDeserializerTest, Blob) {
  auto root = RootBuilder().PutMember("data", Schema::CreateBlob("Bl")).Build();
  auto member = root->GetMember("data").value();
  Aws::Utils::ByteBuffer blob(3);
  blob[0] = 0x66;
  blob[1] = 0x6f;
  blob[2] = 0x6f;
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, blob); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBlob(m); });
  ASSERT_TRUE(got.has_value());
  ASSERT_EQ(got.value().GetLength(), 3u);
  EXPECT_EQ(got.value()[0], 0x66);
  EXPECT_EQ(got.value()[1], 0x6f);
  EXPECT_EQ(got.value()[2], 0x6f);
}

TEST_F(XmlShapeDeserializerTest, Timestamp) {
  auto root = RootBuilder().PutMember("ts", Schema::CreateTimestamp("T")).Build();
  auto member = root->GetMember("ts").value();
  Aws::Utils::DateTime dt(1234567890.0);
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::Utils::DateTime> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().Seconds(), 1234567890);
}

TEST_F(XmlShapeDeserializerTest, TimestampHonorsCodecSettingsDefault) {
  // XML's default is date-time (see the Timestamp test above); a numeric wire value only parses
  // under an EPOCH_SECONDS setting for a member with no @timestampFormat trait -- proving the
  // setting reached ReadTimestamp rather than a hard-coded default.
  auto root = RootBuilder().PutMember("ts", Schema::CreateTimestamp("T")).Build();
  const Aws::String payload = "<Root><ts>1234567890</ts></Root>";

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()),
                         CodecSettings{TimestampFormatTrait::Format::EPOCH_SECONDS});
  Aws::Crt::Optional<Aws::Utils::DateTime> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value().Seconds(), 1234567890);
}

TEST_F(XmlShapeDeserializerTest, XmlNameOverride) {
  auto root = RootBuilder()
                  .PutMember("internalName", Schema::CreateString("S"),
                             {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "ExternalName")}})
                  .Build();
  auto member = root->GetMember("internalName").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  EXPECT_NE(payload.find("<ExternalName>"), Aws::String::npos);

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "hello");
}

TEST_F(XmlShapeDeserializerTest, Attribute) {
  auto root = RootBuilder()
                  .PutMember("id", Schema::CreateString("S"), {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Test")}})
                  .Build();
  auto member = root->GetMember("id").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "abc"); });
  EXPECT_NE(payload.find("id=\"abc\""), Aws::String::npos);

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "abc");
}

TEST_F(XmlShapeDeserializerTest, NestedStructure) {
  auto metaBuilder = Schema::StructureBuilder("Meta");
  metaBuilder.PutMember("key", Schema::CreateString("S"));
  auto root = RootBuilder().PutMember("meta", metaBuilder).Build();
  auto meta = root->GetMember("meta").value();
  auto inner = meta->GetMemberTarget().value()->GetMember("key").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*meta, LambdaStruct(*meta, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

TEST_F(XmlShapeDeserializerTest, WrappedListOfStrings) {
  auto listBuilder = Schema::ListBuilder("Tags");
  auto root = RootBuilder().PutMember("tags", listBuilder).Build();
  auto tags = root->GetMember("tags").value();
  auto elem = Schema::CreateMember("member", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteList(*tags, 3, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
      lser.WriteString(*elem, "c");
    });
  });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Vector<Aws::String> values;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "tags") {
      de.ReadList(m, [&](ShapeDeserializer& ede) {
        auto v = ede.ReadString(*elem);
        if (v.has_value()) {
          values.push_back(v.value());
        }
      });
    }
  });
  ASSERT_EQ(values.size(), 3u);
  EXPECT_EQ(values[0], "a");
  EXPECT_EQ(values[1], "b");
  EXPECT_EQ(values[2], "c");
}

TEST_F(XmlShapeDeserializerTest, FlattenedList) {
  auto listBuilder = Schema::ListBuilder("Tags");
  auto root =
      RootBuilder().PutMember("tags", listBuilder, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Test")}}).Build();
  auto tags = root->GetMember("tags").value();
  auto elem = Schema::CreateMember("member", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteList(*tags, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
    });
  });

  EXPECT_NE(payload.find("<tags>a</tags><tags>b</tags>"), Aws::String::npos);

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Vector<Aws::String> values;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "tags") {
      de.ReadList(m, [&](ShapeDeserializer& ede) {
        auto v = ede.ReadString(*elem);
        if (v.has_value()) {
          values.push_back(v.value());
        }
      });
    }
  });
  ASSERT_EQ(values.size(), 2u);
  EXPECT_EQ(values[0], "a");
  EXPECT_EQ(values[1], "b");
}

TEST_F(XmlShapeDeserializerTest, ListOfStructures) {
  auto listBuilder = Schema::ListBuilder("Items");
  auto root = RootBuilder().PutMember("items", listBuilder).Build();
  auto items = root->GetMember("items").value();
  auto structElem = Schema::CreateMember("member", ShapeType::Structure);
  auto field = Schema::CreateMember("id", ShapeType::Integer);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteList(*items, 2, [&](ShapeSerializer& lser) {
      lser.WriteStruct(*structElem, LambdaStruct(*structElem, [&](ShapeSerializer& es) { es.WriteInteger(*field, 1); }));
      lser.WriteStruct(*structElem, LambdaStruct(*structElem, [&](ShapeSerializer& es) { es.WriteInteger(*field, 2); }));
    });
  });

  auto elemStruct = Schema::StructureBuilder("Item");
  elemStruct.PutMember("id", Schema::CreateInteger("I"));
  auto elemSchema = elemStruct.Build();

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Vector<int> ids;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "items") {
      de.ReadList(m, [&](ShapeDeserializer& ede) {
        ede.ReadStruct(*elemSchema, [&](const Schema& im, ShapeDeserializer& ide) {
          if (im.GetMemberName() == "id") {
            auto v = ide.ReadInteger(im);
            if (v.has_value()) {
              ids.push_back(v.value());
            }
          }
        });
      });
    }
  });
  ASSERT_EQ(ids.size(), 2u);
  EXPECT_EQ(ids[0], 1);
  EXPECT_EQ(ids[1], 2);
}

TEST_F(XmlShapeDeserializerTest, WrappedMapOfStrings) {
  auto mapBuilder = Schema::MapBuilder("Headers");
  auto root = RootBuilder().PutMember("headers", mapBuilder).Build();
  auto headers = root->GetMember("headers").value();
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*headers, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("foo", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "bar"); });
      mapSer.WriteEntry("baz", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "qux"); });
    });
  });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

TEST_F(XmlShapeDeserializerTest, CustomMapNames) {
  auto mapBuilder = Schema::MapBuilder("Tags");
  auto root = RootBuilder()
                  .PutMember("tags", mapBuilder,
                             {{XmlMapEntryNameTrait::KEY(), Aws::MakeShared<XmlMapEntryNameTrait>("Test", "item")},
                              {XmlMapKeyNameTrait::KEY(), Aws::MakeShared<XmlMapKeyNameTrait>("Test", "tagKey")},
                              {XmlMapValueNameTrait::KEY(), Aws::MakeShared<XmlMapValueNameTrait>("Test", "tagValue")}})
                  .Build();
  auto tags = root->GetMember("tags").value();
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*tags, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("color", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "red"); });
    });
  });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Map<Aws::String, Aws::String> entries;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "tags") {
      de.ReadMap(m, [&](const Aws::String& key, ShapeDeserializer& vde) {
        auto v = vde.ReadString(*valSchema);
        if (v.has_value()) {
          entries[key] = v.value();
        }
      });
    }
  });
  ASSERT_EQ(entries.size(), 1u);
  EXPECT_EQ(entries["color"], "red");
}

TEST_F(XmlShapeDeserializerTest, CustomListItemName) {
  auto listBuilder = Schema::ListBuilder("Things");
  auto root = RootBuilder()
                  .PutMember("things", listBuilder, {{XmlListItemNameTrait::KEY(), Aws::MakeShared<XmlListItemNameTrait>("Test", "item")}})
                  .Build();
  auto things = root->GetMember("things").value();
  auto elem = Schema::CreateMember("member", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteList(*things, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
    });
  });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Vector<Aws::String> values;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "things") {
      de.ReadList(m, [&](ShapeDeserializer& ede) {
        auto v = ede.ReadString(*elem);
        if (v.has_value()) {
          values.push_back(v.value());
        }
      });
    }
  });
  ASSERT_EQ(values.size(), 2u);
  EXPECT_EQ(values[0], "a");
  EXPECT_EQ(values[1], "b");
}

TEST_F(XmlShapeDeserializerTest, AbsentMemberSkipped) {
  auto root = RootBuilder().PutMember("present", Schema::CreateString("S")).PutMember("absent", Schema::CreateString("S2")).Build();
  auto present = root->GetMember("present").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*present, "here"); });

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Map<Aws::String, Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    auto v = de.ReadString(m);
    if (v.has_value()) {
      got[m.GetMemberName()] = v.value();
    }
  });
  ASSERT_EQ(got.size(), 1u);
  EXPECT_EQ(got["present"], "here");
  EXPECT_EQ(got.find("absent"), got.end());
}

TEST_F(XmlShapeDeserializerTest, DeserializesLiteralPayload) {
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
      "<Root><name>Alice</name><count>3</count><ratio>2.5</ratio><active>true</active>"
      "<tags><member>x</member><member>y</member></tags>"
      "<meta><entry><key>k1</key><value>v1</value></entry></meta>"
      "<nested><id>7</id></nested></Root>";
  SCOPED_TRACE(Aws::String("input XML: ") + payload);

  Aws::String name;
  int count = 0;
  double ratio = 0.0;
  bool active = false;
  Aws::Vector<Aws::String> tagValues;
  Aws::Map<Aws::String, Aws::String> metaValues;
  int nestedId = -1;

  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
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

namespace {

class XmlNestedBar final : public SerializableStruct {
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
    return Schema::StructureBuilder("Bar", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Bar")}})
        .PutMember("buzz", Schema::CreateString("S"))
        .Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema()};
};

class XmlNestedFoo final : public SerializableStruct {
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

  XmlNestedBar fizz;

 private:
  static std::shared_ptr<const Schema> BuildSchema(const XmlNestedBar& fizz) {
    return Schema::StructureBuilder("Foo", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Foo")}})
        .PutMember("fizz", fizz.SchemaPtr())
        .Build();
  }
  std::shared_ptr<const Schema> m_schema{BuildSchema(fizz)};
};

}  // namespace

TEST_F(XmlShapeDeserializerTest, DeserializesNestedIntoClass) {
  XmlNestedFoo source;
  source.fizz.buzz = "value";
  XmlShapeSerializer s;
  s.WriteStruct(source.GetSchema(), source);
  const Aws::String encoded = s.GetPayload().GetResult();
  SCOPED_TRACE(Aws::String("encoded XML: ") + encoded);

  XmlNestedFoo f;
  XmlShapeDeserializer d(
      Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(encoded.data()), encoded.size()));
  f.Deserialize(d);

  EXPECT_EQ(f.fizz.buzz, "value");
}

TEST_F(XmlShapeDeserializerTest, TimestampFormatTraitControlsParsing) {
  const Aws::Utils::DateTime dt(1234567890.0);
  for (auto fmt : {TimestampFormatTrait::Format::EPOCH_SECONDS, TimestampFormatTrait::Format::HTTP_DATE}) {
    auto root = RootBuilder()
                    .PutMember("ts", Schema::CreateTimestamp("T"),
                               {{TimestampFormatTrait::KEY(), Aws::MakeShared<TimestampFormatTrait>("Test", fmt)}})
                    .Build();
    auto member = root->GetMember("ts").value();
    auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });

    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<Aws::Utils::DateTime> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
    ASSERT_TRUE(got.has_value());
    EXPECT_EQ(got.value().Seconds(), 1234567890);
  }
}

TEST_F(XmlShapeDeserializerTest, EpochTimestampMatchesLegacyDateTimeDouble) {
  auto root =
      RootBuilder()
          .PutMember(
              "ts", Schema::CreateTimestamp("T"),
              {{TimestampFormatTrait::KEY(), Aws::MakeShared<TimestampFormatTrait>("Test", TimestampFormatTrait::Format::EPOCH_SECONDS)}})
          .Build();
  auto member = root->GetMember("ts").value();
  for (const int64_t millis : {int64_t(-4307758798296), int64_t(4307758798296), int64_t(1296), int64_t(-1296), int64_t(1700000000123)}) {
    auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, Aws::Utils::DateTime(millis)); });
    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<Aws::Utils::DateTime> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadTimestamp(m); });
    ASSERT_TRUE(got.has_value()) << payload;
    EXPECT_EQ(got.value().Millis(), LegacyEpochMillis(EpochSecondsText(Aws::Utils::DateTime(millis)))) << payload;
  }
}

TEST_F(XmlShapeDeserializerTest, ReadDocumentIsUnsupported) {
  Aws::String xml = "<x/>";
  XmlShapeDeserializer deser(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.c_str()), xml.size()));
  auto schema = Schema::CreateDocument("smithy.api#Document");
  EXPECT_EQ(deser.ReadDocument(*schema), nullptr);
}

TEST_F(XmlShapeDeserializerTest, WhitespaceOnlyInputIsNotAnError) {
  const Aws::String xml = "  \n\t ";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.data()), xml.size()));
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(XmlShapeDeserializerTest, UnclosedRootSetsError) {
  const Aws::String xml = "<Root><a>1</a>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.data()), xml.size()));
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("unclosed"), Aws::String::npos);
}

TEST_F(XmlShapeDeserializerTest, TextWithoutRootSetsError) {
  const Aws::String xml = "hello";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.data()), xml.size()));
  EXPECT_TRUE(d.GetError().has_value());
}

TEST_F(XmlShapeDeserializerTest, RecursiveStructAtMaxDepthSucceeds) {
  RecursiveNodeSchema node;
  const Aws::String xml = NestedXmlNodes(MAX_NESTING_DEPTH);
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.data()), xml.size()));
  EXPECT_EQ(DescendRecursiveNode(d, node.Get()), MAX_NESTING_DEPTH);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(XmlShapeDeserializerTest, RecursiveStructPastMaxDepthSetsError) {
  RecursiveNodeSchema node;
  const Aws::String xml = NestedXmlNodes(MAX_NESTING_DEPTH + 1);
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.data()), xml.size()));
  DescendRecursiveNode(d, node.Get());
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("depth"), Aws::String::npos);
}

namespace {
template <typename Fn>
void WithXmlValue(const Aws::String& text, const std::shared_ptr<const Schema>& member, const Fn& fn, TraitList memberTraits = {}) {
  auto root = Schema::StructureBuilder("Root").PutMember("v", member, memberTraits).Build();
  const Aws::String xml = "<Root><v>" + text + "</v></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.data()), xml.size()));
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { fn(m, de); });
  EXPECT_FALSE(d.GetError().has_value());
}

template <typename Fn>
void ExpectXmlValueOutOfRange(const Aws::String& text, const std::shared_ptr<const Schema>& member, const Fn& read,
                              TraitList memberTraits = {}) {
  auto root = Schema::StructureBuilder("Root").PutMember("v", member, memberTraits).Build();
  const Aws::String xml = "<Root><v>" + text + "</v></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(xml.data()), xml.size()));
  bool present = true;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { present = read(m, de); });
  EXPECT_FALSE(present) << text;
  ASSERT_TRUE(d.GetError().has_value()) << text;
  EXPECT_NE(d.GetError()->GetMessage().find("out of range"), Aws::String::npos) << text;
}
}  // namespace

TEST_F(XmlShapeDeserializerTest, IntegerBeyondInt32RecordsError) {
  ExpectXmlValueOutOfRange("3000000000", Schema::CreateInteger("I"),
                           [](const Schema& m, ShapeDeserializer& de) { return de.ReadInteger(m).has_value(); });
}

TEST_F(XmlShapeDeserializerTest, FloatBeyondFloatRangeRecordsError) {
  ExpectXmlValueOutOfRange("1e300", Schema::CreateFloat("F"),
                           [](const Schema& m, ShapeDeserializer& de) { return de.ReadFloat(m).has_value(); });
}

TEST_F(XmlShapeDeserializerTest, UnrepresentableEpochTimestampRecordsError) {
  ExpectXmlValueOutOfRange("1e300", Schema::CreateTimestamp("T"),
                           [](const Schema& m, ShapeDeserializer& de) { return de.ReadTimestamp(m).has_value(); },
                           {{TimestampFormatTrait::KEY(), Aws::MakeShared<TimestampFormatTrait>("Test", TimestampFormatTrait::Format::EPOCH_SECONDS)}});
}

namespace {
const std::array<double, 7> ROUND_TRIP_DOUBLES = {{2147483647.0, 0.1, 1.0 / 3.0, 9007199254740993.0, (std::numeric_limits<double>::max)(),
                                                  (std::numeric_limits<double>::min)(), -123456789.123456789}};
const std::array<float, 8> ROUND_TRIP_FLOATS = {{(std::numeric_limits<float>::max)(), (std::numeric_limits<float>::min)(),
                                                std::numeric_limits<float>::denorm_min(), 0.1f, 3.14f, std::nextafter(16777216.0f, 1e9f),
                                                std::nextafter(16777216.0f, 0.0f), 2147483647.0f}};

std::shared_ptr<const Schema> ElementNumberRoot(ShapeType type) {
  return RootBuilder().PutMember("n", type == ShapeType::Float ? Schema::CreateFloat("N") : Schema::CreateDouble("N")).Build();
}

std::shared_ptr<const Schema> AttributeNumberRoot(ShapeType type) {
  return RootBuilder()
      .PutMember("n", type == ShapeType::Float ? Schema::CreateFloat("N") : Schema::CreateDouble("N"),
                 {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Test")}})
      .Build();
}

template <typename T>
Aws::Crt::Optional<T> RoundTripNumber(ShapeType type, const std::shared_ptr<const Schema>& root, T value) {
  auto n = root->GetMember("n").value();
  const Aws::String payload = Encode(root, [&](ShapeSerializer& ser) {
    if (type == ShapeType::Float) {
      ser.WriteFloat(*n, static_cast<float>(value));
    } else {
      ser.WriteDouble(*n, static_cast<double>(value));
    }
  });
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<T> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (type == ShapeType::Float) {
      auto v = de.ReadFloat(m);
      if (v.has_value()) {
        got = static_cast<T>(v.value());
      }
    } else {
      auto v = de.ReadDouble(m);
      if (v.has_value()) {
        got = static_cast<T>(v.value());
      }
    }
  });
  return got;
}
}  // namespace

TEST_F(XmlShapeDeserializerTest, DoubleRoundTripsExactlyAsElementAndAttribute) {
  const auto element = ElementNumberRoot(ShapeType::Double);
  const auto attribute = AttributeNumberRoot(ShapeType::Double);
  for (const double value : ROUND_TRIP_DOUBLES) {
    const auto asElement = RoundTripNumber<double>(ShapeType::Double, element, value);
    ASSERT_TRUE(asElement.has_value()) << value;
    EXPECT_EQ(asElement.value(), value);
    const auto asAttribute = RoundTripNumber<double>(ShapeType::Double, attribute, value);
    ASSERT_TRUE(asAttribute.has_value()) << value;
    EXPECT_EQ(asAttribute.value(), value);
  }
}

TEST_F(XmlShapeDeserializerTest, FloatRoundTripsExactlyAsElementAndAttribute) {
  const auto element = ElementNumberRoot(ShapeType::Float);
  const auto attribute = AttributeNumberRoot(ShapeType::Float);
  for (const float value : ROUND_TRIP_FLOATS) {
    const auto asElement = RoundTripNumber<float>(ShapeType::Float, element, value);
    ASSERT_TRUE(asElement.has_value()) << value;
    EXPECT_EQ(asElement.value(), value);
    const auto asAttribute = RoundTripNumber<float>(ShapeType::Float, attribute, value);
    ASSERT_TRUE(asAttribute.has_value()) << value;
    EXPECT_EQ(asAttribute.value(), value);
  }
}

TEST_F(XmlShapeDeserializerTest, NonFiniteDoubleRoundTripsAsAttribute) {
  const auto attribute = AttributeNumberRoot(ShapeType::Double);
  const auto nan = RoundTripNumber<double>(ShapeType::Double, attribute, std::numeric_limits<double>::quiet_NaN());
  ASSERT_TRUE(nan.has_value());
  EXPECT_TRUE(std::isnan(nan.value()));
  for (const double value : {std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity()}) {
    const auto got = RoundTripNumber<double>(ShapeType::Double, attribute, value);
    ASSERT_TRUE(got.has_value()) << value;
    EXPECT_EQ(got.value(), value);
  }
}

TEST_F(XmlShapeDeserializerTest, AbsentAttributeMemberIsNotDelivered) {
  auto root = RootBuilder()
                  .PutMember("id", Schema::CreateString("S"), {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Test")}})
                  .Build();
  const Aws::String payload = "<Root></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
  EXPECT_EQ(delivered, 0);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(XmlShapeDeserializerTest, AbsentNumericAttributeMemberIsNotDelivered) {
  auto root = RootBuilder()
                  .PutMember("n", Schema::CreateInteger("I"), {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Test")}})
                  .Build();
  const Aws::String payload = "<Root other=\"1\"/>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
  EXPECT_EQ(delivered, 0);
}

TEST_F(XmlShapeDeserializerTest, ExplicitEmptyAttributeIsDeliveredAsEmptyString) {
  auto root = RootBuilder()
                  .PutMember("id", Schema::CreateString("S"), {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Test")}})
                  .Build();
  const Aws::String payload = "<Root id=\"\"></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  int delivered = 0;
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    ++delivered;
    got = de.ReadString(m);
  });
  EXPECT_EQ(delivered, 1);
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "");
}

namespace {
Aws::Map<Aws::String, Aws::String> ReadStringAttributes(const Aws::String& payload, const Aws::Vector<Aws::String>& names,
                                                        Aws::Crt::Optional<DeserializerError>* error = nullptr) {
  auto builder = RootBuilder();
  for (const auto& name : names) {
    builder.PutMember(name.c_str(), Schema::CreateString("S"), {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Test")}});
  }
  auto root = builder.Build();
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Map<Aws::String, Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    const auto value = de.ReadString(m);
    if (value.has_value()) {
      got[m.GetMemberName()] = value.value();
    }
  });
  if (error) {
    *error = d.GetError();
  }
  return got;
}
}  // namespace

TEST_F(XmlShapeDeserializerTest, AttributeNameInsideDoubleQuotedValueIsNotMatched) {
  const auto got = ReadStringAttributes("<Root a=\"z b='x'\" b=\"y\"/>", {"a", "b"});
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("a"), "z b='x'");
  EXPECT_EQ(got.at("b"), "y");
}

TEST_F(XmlShapeDeserializerTest, AttributeNameInsideSingleQuotedValueIsNotMatched) {
  const auto got = ReadStringAttributes("<Root a='z b=\"x\"' b='y'/>", {"a", "b"});
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("a"), "z b=\"x\"");
  EXPECT_EQ(got.at("b"), "y");
}

TEST_F(XmlShapeDeserializerTest, AttributeNameInsideValueFollowedByQuoteIsNotMatched) {
  const auto got = ReadStringAttributes("<Root attr=\"x int-attr=\" int-attr=\"1\"/>", {"attr", "int-attr"});
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("attr"), "x int-attr=");
  EXPECT_EQ(got.at("int-attr"), "1");
}

TEST_F(XmlShapeDeserializerTest, AttributeValueContainingTagEndIsRead) {
  const auto got = ReadStringAttributes("<Root a=\"1>2\" b=\"y\"/>", {"a", "b"});
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("a"), "1>2");
  EXPECT_EQ(got.at("b"), "y");
}

TEST_F(XmlShapeDeserializerTest, AttributeNameThatIsSuffixOfAnotherIsNotMatched) {
  const auto got = ReadStringAttributes("<Root int-attr=\"1\" attr=\"2\"/>", {"attr", "int-attr"});
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("attr"), "2");
  EXPECT_EQ(got.at("int-attr"), "1");
}

TEST_F(XmlShapeDeserializerTest, AttributeNameThatIsSuffixOfAnotherIsAbsentWhenOnlyLongerPresent) {
  const auto got = ReadStringAttributes("<Root int-attr=\"1\"/>", {"attr"});
  EXPECT_TRUE(got.empty());
}

TEST_F(XmlShapeDeserializerTest, AttributeWithWhitespaceAroundEqualsIsRead) {
  const auto got = ReadStringAttributes("<Root a = \"1\"  b\t=\n'2'/>", {"a", "b"});
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("a"), "1");
  EXPECT_EQ(got.at("b"), "2");
}

TEST_F(XmlShapeDeserializerTest, MalformedAttributeRecordsError) {
  for (const char* payload : {"<Root a></Root>", "<Root a=1></Root>", "<Root a=\"1\" a=\"2\"/>", "<Root 1a=\"1\"/>", "<Root a$=\"1\"/>",
                              "<Root a=\"1\" / >", "<Root><c a=\"1\" a=\"1\"/></Root>", "<Root a=\"1>"}) {
    Aws::Crt::Optional<DeserializerError> error;
    EXPECT_TRUE(ReadStringAttributes(payload, {"a"}, &error).empty()) << payload;
    EXPECT_TRUE(error.has_value()) << payload;
  }
}

TEST_F(XmlShapeDeserializerTest, AttributesWithoutSeparatingWhitespaceAreRead) {
  Aws::Crt::Optional<DeserializerError> error;
  const auto got = ReadStringAttributes("<Root a=\"1\"b='2'/>", {"a", "b"}, &error);
  EXPECT_FALSE(error.has_value());
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("b"), "2");
}

TEST_F(XmlShapeDeserializerTest, AttributeValueIsDecodedAndLineEndsNormalized) {
  const auto got = ReadStringAttributes("<Root a=\"x&#65;&lt;\r\ny&#xD;\tz\"/>", {"a"});
  ASSERT_EQ(got.size(), 1u);
  EXPECT_EQ(got.at("a"), "xA<\ny\r\tz");
}

TEST_F(XmlShapeDeserializerTest, UnterminatedAttributeQuoteBeforeLaterQuoteIsAbsent) {
  EXPECT_TRUE(ReadStringAttributes("<Root a=\"1><x b=\"2\"/></Root>", {"a"}).empty());
}

TEST_F(XmlShapeDeserializerTest, OverflowingFiniteTextRecordsError) {
  auto root = RootBuilder().PutMember("d", Schema::CreateDouble("D")).PutMember("f", Schema::CreateFloat("F")).Build();
  for (const char* text : {"1e400", "-1e400"}) {
    ExpectXmlValueOutOfRange(text, Schema::CreateDouble("D"),
                             [](const Schema& m, ShapeDeserializer& de) { return de.ReadDouble(m).has_value(); });
    ExpectXmlValueOutOfRange(text, Schema::CreateFloat("F"),
                             [](const Schema& m, ShapeDeserializer& de) { return de.ReadFloat(m).has_value(); });
  }
  const Aws::String payload = "<Root><d>Infinity</d></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<double> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadDouble(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_TRUE(std::isinf(got.value()));
}

namespace {
Aws::String ReadText(const Aws::String& payload, Aws::Crt::Optional<DeserializerError>* error = nullptr) {
  auto root = RootBuilder().PutMember("s", Schema::CreateString("S")).Build();
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
  if (error) {
    *error = d.GetError();
  }
  return got.has_value() ? got.value() : Aws::String("<absent>");
}
}  // namespace

TEST_F(XmlShapeDeserializerTest, NumericCharacterReferencesDecode) {
  EXPECT_EQ(ReadText("<Root><s>&#65;&#x42;&#xE9;&#x1F600;&#0000067;</s></Root>"), Aws::String("AB\xC3\xA9\xF0\x9F\x98\x80" "C"));
}

TEST_F(XmlShapeDeserializerTest, UnrecognisedReferencesAreKeptAsWritten) {
  for (const char* text : {"&#X41;", "&#;", "&#x;", "&#x110000;", "&#12a;", "&#65", "&foo;", "a&b", "&amp"}) {
    EXPECT_EQ(ReadText(Aws::String("<Root><s>") + text + "</s></Root>"), Aws::String(text)) << text;
  }
}

TEST_F(XmlShapeDeserializerTest, CdataIsLiteral) {
  EXPECT_EQ(ReadText("<Root><s><![CDATA[<a>&amp;]]></s></Root>"), Aws::String("<a>&amp;"));
  EXPECT_EQ(ReadText("<Root><s>x<![CDATA[y]]>&amp;z</s></Root>"), Aws::String("xy&z"));
}

TEST_F(XmlShapeDeserializerTest, CommentsAreNotText) { EXPECT_EQ(ReadText("<Root><s>a<!--c-->b<!---->c</s></Root>"), Aws::String("abc")); }

TEST_F(XmlShapeDeserializerTest, LineEndsAreNormalizedAsTinyxml2Does) {
  EXPECT_EQ(ReadText("<Root><s>a\r\nb\rc\n\rd\n\ne</s></Root>"), Aws::String("a\nb\nc\nd\n\ne"));
  EXPECT_EQ(ReadText("<Root><s><![CDATA[a\r\nb]]></s></Root>"), Aws::String("a\nb"));
  EXPECT_EQ(ReadText("<Root><s>a&#xD;&#13;\nb</s></Root>"), Aws::String("a\r\r\nb"));
}

TEST_F(XmlShapeDeserializerTest, InvalidElementNameRecordsError) {
  for (const char* payload : {"<Root><1v>x</1v><s>a</s></Root>", "<Root><-v/><s>a</s></Root>", "<Root$><s>a</s></Root$>",
                              "<Root><s>a</s><.x/></Root>"}) {
    Aws::Crt::Optional<DeserializerError> error;
    EXPECT_EQ(ReadText(payload, &error), "<absent>") << payload;
    EXPECT_TRUE(error.has_value()) << payload;
  }
  Aws::Crt::Optional<DeserializerError> error;
  EXPECT_EQ(ReadText("<Root><_a.b-c:d\xC3\xA9/><s>a</s></Root>", &error), Aws::String("a"));
  EXPECT_FALSE(error.has_value());
}

TEST_F(XmlShapeDeserializerTest, MalformedStructureRecordsError) {
  auto root = RootBuilder().PutMember("a", Schema::CreateString("S")).Build();
  const Aws::Vector<std::pair<Aws::String, Aws::String>> cases = {
      {"<Root/", "unterminated tag"},
      {"<Root a='x/", "unterminated tag"},
      {"<Root><a>x</b></Root>", "mismatched closing tag"},
      {"<Root><a>x</Root></a>", "mismatched closing tag"},
      {"<Root><a>x</a>", "unclosed element"},
      {"<Root/>junk", "text outside the root element"},
      {"<Root></Root><Root></Root>", "multiple root elements"},
      {"<Root><!-- open </Root>", "unterminated markup"},
      {"<?pi <Root/>", "unterminated markup"},
      {"<Root><a>x</a y></Root>", "invalid closing tag"},
      {"<Root><a>x</a '<b>y</b>'></Root>", "invalid closing tag"},
  };
  for (const auto& c : cases) {
    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(c.first.data()), c.first.size()));
    int delivered = 0;
    d.ReadStruct(*root, [&](const Schema&, ShapeDeserializer&) { ++delivered; });
    EXPECT_EQ(delivered, 0) << c.first;
    ASSERT_TRUE(d.GetError().has_value()) << c.first;
    EXPECT_NE(d.GetError()->GetMessage().find(c.second), Aws::String::npos) << c.first << ": " << d.GetError()->GetMessage();
  }
}

TEST_F(XmlShapeDeserializerTest, MarkupAroundRootIsAccepted) {
  auto root = RootBuilder().PutMember("a", Schema::CreateString("S")).Build();
  for (const Aws::String payload : {"\xEF\xBB\xBF<?xml version=\"1.0\"?>\n<!-- lead --><Root><a>x</a></Root>\n<!-- tail -->\n",
                                    "<!DOCTYPE Root><Root><a><![CDATA[x]]></a></Root>", "<ns:Root xmlns:ns=\"u\"><a>x</a></ns:Root>"}) {
    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<Aws::String> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadString(m); });
    EXPECT_FALSE(d.GetError().has_value()) << payload;
    EXPECT_TRUE(got.has_value()) << payload;
  }
}

namespace {
Aws::Map<Aws::String, Aws::String> ReadStringMembers(const Aws::String& payload, const Aws::Vector<Aws::String>& names) {
  auto builder = RootBuilder();
  for (const auto& name : names) {
    builder.PutMember(name.c_str(), Schema::CreateString("S"));
  }
  auto root = builder.Build();
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Map<Aws::String, Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    const auto value = de.ReadString(m);
    if (value.has_value()) {
      got[m.GetMemberName()] = value.value();
    }
  });
  EXPECT_FALSE(d.GetError().has_value()) << payload;
  return got;
}
}  // namespace

TEST_F(XmlShapeDeserializerTest, DeclarationInsideElementIsSkippedByNavigation) {
  const auto got = ReadStringMembers("<Root><!X><a>1</a><b>2</b></Root>", {"a", "b"});
  ASSERT_EQ(got.size(), 2u);
  EXPECT_EQ(got.at("a"), "1");
  EXPECT_EQ(got.at("b"), "2");
  EXPECT_EQ(ReadStringMembers("<Root><a><!X>1</a><b>2</b></Root>", {"a", "b"}).at("b"), "2");
}

TEST_F(XmlShapeDeserializerTest, ProcessingInstructionEndsAtItsOwnTerminator) {
  const auto got = ReadStringMembers("<?><Root><a>1</a></Root>?><Root><b>2</b></Root>", {"a", "b"});
  ASSERT_EQ(got.size(), 1u);
  EXPECT_EQ(got.at("b"), "2");
}

TEST_F(XmlShapeDeserializerTest, RootIsFoundAfterProcessingInstructionContainingTags) {
  const auto got = ReadStringMembers("<?p <Root><a>1</a></Root> ?><Root><a>2</a></Root>", {"a"});
  ASSERT_EQ(got.size(), 1u);
  EXPECT_EQ(got.at("a"), "2");
}

TEST_F(XmlShapeDeserializerTest, StructStopsDeliveringMembersAfterFailure) {
  auto root = RootBuilder().PutMember("a", Schema::CreateInteger("I")).PutMember("b", Schema::CreateString("S")).Build();
  const Aws::String payload = "<Root><a>99999999999</a><b>x</b></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    ++delivered;
    de.ReadInteger(m);
  });
  EXPECT_EQ(delivered, 1);
  EXPECT_TRUE(d.GetError().has_value());
}

TEST_F(XmlShapeDeserializerTest, ListStopsDeliveringElementsAfterFailure) {
  auto listBuilder = Schema::ListBuilder("Nums");
  auto root = RootBuilder().PutMember("nums", listBuilder).Build();
  auto elem = Schema::CreateMember("member", ShapeType::Integer);
  const Aws::String payload = "<Root><nums><member>99999999999</member><member>1</member><member>2</member></nums></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    de.ReadList(m, [&](ShapeDeserializer& ede) {
      ++delivered;
      ede.ReadInteger(*elem);
    });
  });
  EXPECT_EQ(delivered, 1);
  EXPECT_TRUE(d.GetError().has_value());
}

TEST_F(XmlShapeDeserializerTest, MapStopsDeliveringEntriesAfterFailure) {
  auto mapBuilder = Schema::MapBuilder("M");
  auto root = RootBuilder().PutMember("m", mapBuilder).Build();
  auto valSchema = Schema::CreateMember("value", ShapeType::Integer);
  const Aws::String payload =
      "<Root><m><entry><key>k1</key><value>99999999999</value></entry><entry><key>k2</key><value>1</value></entry></m></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  int delivered = 0;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    de.ReadMap(m, [&](const Aws::String&, ShapeDeserializer& vde) {
      ++delivered;
      vde.ReadInteger(*valSchema);
    });
  });
  EXPECT_EQ(delivered, 1);
  EXPECT_TRUE(d.GetError().has_value());
}

namespace {

int ReadUnionVariants(XmlShapeDeserializer& d) {
  auto variants = Schema::UnionBuilder("U").PutMember("a", Schema::CreateString("S")).PutMember("b", Schema::CreateInteger("I")).Build();
  auto root = RootBuilder().PutMember("u", variants).Build();
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

TEST_F(XmlShapeDeserializerTest, UnionWithTwoMembersSetRecordsError) {
  const Aws::String payload = "<Root><u><a>x</a><b>1</b></u></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  EXPECT_EQ(ReadUnionVariants(d), 1);
  ASSERT_TRUE(d.GetError().has_value());
  EXPECT_NE(d.GetError()->GetMessage().find("more than one member"), Aws::String::npos);
}

TEST_F(XmlShapeDeserializerTest, UnionIgnoresUnmodeledMembers) {
  const Aws::String payload = "<Root><u><z>2</z><b>1</b></u></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  EXPECT_EQ(ReadUnionVariants(d), 1);
  EXPECT_FALSE(d.GetError().has_value());
}

TEST_F(XmlShapeDeserializerTest, ProcessingInstructionOnlyOpensTheDocument) {
  auto root = RootBuilder().PutMember("v", Schema::CreateString("S")).Build();
  const auto errorFor = [&](const Aws::String& payload) {
    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    d.ReadStruct(*root, [](const Schema&, ShapeDeserializer&) {});
    return d.GetError();
  };
  EXPECT_FALSE(errorFor("<?xml version=\"1.0\"?><?pi data?><Root><v>x</v></Root>").has_value());
  EXPECT_FALSE(errorFor("  <?pi?>\n<!-- c --><Root/>").has_value());
  for (const Aws::String payload :
       {"<Root><?pi?></Root>", "<Root/><?pi?>", "<!-- c --><?xml version=\"1.0\"?><Root/>", "<!DOCTYPE x><?pi?><Root/>"}) {
    const auto error = errorFor(payload);
    ASSERT_TRUE(error.has_value()) << payload;
    EXPECT_NE(error->GetMessage().find("processing instruction"), Aws::String::npos) << payload;
  }
}

TEST_F(XmlShapeDeserializerTest, NumberBooleanAndTimestampTextIsTrimmedAsLegacyClientsDo) {
  const auto epoch = Aws::MakeShared<TimestampFormatTrait>("Test", TimestampFormatTrait::Format::EPOCH_SECONDS);
  auto root = RootBuilder()
                  .PutMember("b", Schema::CreateBoolean("B"))
                  .PutMember("i", Schema::CreateInteger("I"))
                  .PutMember("l", Schema::CreateLong("L"))
                  .PutMember("f", Schema::CreateFloat("F"))
                  .PutMember("d", Schema::CreateDouble("D"))
                  .PutMember("n", Schema::CreateDouble("D"))
                  .PutMember("t", Schema::CreateTimestamp("T"))
                  .PutMember("e", Schema::CreateTimestamp("T"), {{TimestampFormatTrait::KEY(), epoch}})
                  .PutMember("a", Schema::CreateInteger("I"), {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Test")}})
                  .Build();
  const Aws::String payload =
      "<Root a=\" 7 \"><b> true\n</b><i>\n  42\n</i><l>\t-9876543210 </l><f> 1.5 </f><d>&#32;2.25&#10;</d><n> NaN </n>"
      "<t> 2020-01-02T03:04:05Z </t><e> 1.5 </e></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Map<Aws::String, Aws::String> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    const Aws::String name = m.GetMemberName();
    if (name == "b") {
      const auto v = de.ReadBoolean(m);
      got[name] = v.has_value() ? (v.value() ? "true" : "false") : "<absent>";
    } else if (name == "i" || name == "a") {
      const auto v = de.ReadInteger(m);
      got[name] = v.has_value() ? Aws::Utils::StringUtils::to_string(v.value()) : "<absent>";
    } else if (name == "l") {
      const auto v = de.ReadLong(m);
      got[name] = v.has_value() ? Aws::Utils::StringUtils::to_string(v.value()) : "<absent>";
    } else if (name == "f") {
      const auto v = de.ReadFloat(m);
      got[name] = v.has_value() ? Aws::Utils::StringUtils::to_string(v.value()) : "<absent>";
    } else if (name == "d" || name == "n") {
      const auto v = de.ReadDouble(m);
      got[name] = v.has_value() ? (std::isnan(v.value()) ? "NaN" : Aws::Utils::StringUtils::to_string(v.value())) : "<absent>";
    } else {
      const auto v = de.ReadTimestamp(m);
      got[name] = v.has_value() ? Aws::Utils::StringUtils::to_string(v->Millis()) : "<absent>";
    }
  });
  EXPECT_FALSE(d.GetError().has_value());
  EXPECT_EQ(got["b"], "true");
  EXPECT_EQ(got["i"], "42");
  EXPECT_EQ(got["l"], "-9876543210");
  EXPECT_EQ(got["f"], "1.5");
  EXPECT_EQ(got["d"], "2.25");
  EXPECT_EQ(got["n"], "NaN");
  EXPECT_EQ(got["t"], "1577934245000");
  EXPECT_EQ(got["e"], "1500");
  EXPECT_EQ(got["a"], "7");
}

TEST_F(XmlShapeDeserializerTest, StringAndBlobTextIsNotTrimmed) {
  EXPECT_EQ(ReadText("<Root><s> x\n</s></Root>"), " x\n");
  auto root = RootBuilder().PutMember("b", Schema::CreateBlob("B")).Build();
  const Aws::String payload = "<Root><b> AQI= </b></Root>";
  XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBlob(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), Aws::Utils::HashingUtils::Base64Decode(" AQI= "));
}

TEST_F(XmlShapeDeserializerTest, BooleanTextIsCaseInsensitive) {
  auto root = RootBuilder().PutMember("b", Schema::CreateBoolean("B")).Build();
  const auto read = [&](const char* text) {
    const Aws::String payload = Aws::String("<Root><b>") + text + "</b></Root>";
    XmlShapeDeserializer d(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(payload.data()), payload.size()));
    Aws::Crt::Optional<bool> got;
    d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBoolean(m); });
    EXPECT_FALSE(d.GetError().has_value()) << text;
    return got;
  };
  for (const char* text : {"TRUE", "True", "tRuE"}) {
    ASSERT_TRUE(read(text).has_value()) << text;
    EXPECT_TRUE(read(text).value()) << text;
  }
  for (const char* text : {"FALSE", "False"}) {
    ASSERT_TRUE(read(text).has_value()) << text;
    EXPECT_FALSE(read(text).value()) << text;
  }
  for (const char* text : {"1", "0", "yes", "truee", ""}) {
    EXPECT_FALSE(read(text).has_value()) << text;
  }
}
