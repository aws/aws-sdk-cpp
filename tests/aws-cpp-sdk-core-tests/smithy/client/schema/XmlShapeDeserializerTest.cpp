/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/XmlShapeDeserializer.h>
#include <smithy/client/schema/XmlShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <cmath>
#include <functional>
#include <limits>

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

}

TEST_F(XmlShapeDeserializerTest, Boolean) {
  auto root = RootBuilder().PutMember("enabled", Schema::CreateBoolean("B")).Build();
  auto enabled = root->GetMember("enabled").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*enabled, true); });

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<bool> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadBoolean(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_TRUE(got.value());
}

TEST_F(XmlShapeDeserializerTest, Integer) {
  auto root = RootBuilder().PutMember("n", Schema::CreateInteger("I")).Build();
  auto n = root->GetMember("n").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteInteger(*n, -42); });

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadInteger(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), -42);
}

TEST_F(XmlShapeDeserializerTest, Long) {
  auto root = RootBuilder().PutMember("big", Schema::CreateLong("L")).Build();
  auto big = root->GetMember("big").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteLong(*big, 9876543210LL); });

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
  Aws::Crt::Optional<int64_t> got;
  d.ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) { got = de.ReadLong(m); });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), 9876543210LL);
}

TEST_F(XmlShapeDeserializerTest, Double) {
  auto root = RootBuilder().PutMember("d", Schema::CreateDouble("D")).Build();
  auto member = root->GetMember("d").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.25); });

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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
  auto root = RootBuilder().PutMember("tags", listBuilder, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Test")}}).Build();
  auto tags = root->GetMember("tags").value();
  auto elem = Schema::CreateMember("member", ShapeType::String);
  auto payload = Encode(root, [&](ShapeSerializer& ser) {
    ser.WriteList(*tags, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
    });
  });

  EXPECT_NE(payload.find("<tags>a</tags><tags>b</tags>"), Aws::String::npos);

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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
    ser.WriteMap(*tags, 1,
                 [&](MapSerializer& mapSer) { mapSer.WriteEntry("color", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "red"); }); });
  });

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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
  auto root = RootBuilder()
                  .PutMember("present", Schema::CreateString("S"))
                  .PutMember("absent", Schema::CreateString("S2"))
                  .Build();
  auto present = root->GetMember("present").value();
  auto payload = Encode(root, [&](ShapeSerializer& ser) { ser.WriteString(*present, "here"); });

  XmlShapeDeserializer d(reinterpret_cast<const unsigned char*>(payload.data()), payload.size());
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
