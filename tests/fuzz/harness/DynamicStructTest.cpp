/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/crt/Types.h>
#include <gtest/gtest.h>
#include <harness/DynamicStruct.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Document.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/XmlTraits.h>

using namespace smithy::schema;
using namespace smithy::schema::fuzz;

namespace {

std::shared_ptr<const Schema> Inner() { return Schema::StructureBuilder("Inner").PutMember("s", Schema::CreateString("String")).Build(); }

std::shared_ptr<const Schema> Everything() {
  auto strings = Schema::ListBuilder("StringList").PutMember("member", Schema::CreateString("String")).Build();
  auto ints = Schema::MapBuilder("IntMap")
                  .PutMember("key", Schema::CreateString("String"))
                  .PutMember("value", Schema::CreateInteger("Integer"))
                  .Build();
  auto choice = Schema::UnionBuilder("Choice").PutMember("text", Schema::CreateString("String")).PutMember("inner", Inner()).Build();
  return Schema::StructureBuilder("Everything")
      .PutMember("bool", Schema::CreateBoolean("Boolean"))
      .PutMember("byte", Schema::CreateByte("Byte"))
      .PutMember("short", Schema::CreateShort("Short"))
      .PutMember("int", Schema::CreateInteger("Integer"))
      .PutMember("long", Schema::CreateLong("Long"))
      .PutMember("float", Schema::CreateFloat("Float"))
      .PutMember("double", Schema::CreateDouble("Double"))
      .PutMember("string", Schema::CreateString("String"))
      .PutMember("blob", Schema::CreateBlob("Blob"))
      .PutMember("ts", Schema::CreateTimestamp("Timestamp"))
      .PutMember("list", strings)
      .PutMember("map", ints)
      .PutMember("inner", Inner())
      .PutMember("choice", choice)
      .Build();
}

FuzzValue SampleValue() {
  FuzzValue inner = FuzzValue::Struct();
  inner.SetMember(0, FuzzValue::String("nested"));
  FuzzValue choice = FuzzValue::Struct();
  choice.SetMember(1, inner);
  const unsigned char bytes[] = {0x00, 0xFF, 0x10};
  FuzzValue v = FuzzValue::Struct();
  v.SetMember(0, FuzzValue::Boolean(true));
  v.SetMember(1, FuzzValue::Integer(-128));
  v.SetMember(2, FuzzValue::Integer(32767));
  v.SetMember(3, FuzzValue::Integer(-2147483647 - 1));
  v.SetMember(4, FuzzValue::Integer(9007199254740993LL));
  v.SetMember(5, FuzzValue::Double(static_cast<double>(1.5f)));
  v.SetMember(6, FuzzValue::Double(0.1));
  v.SetMember(7, FuzzValue::String("a\"b<c>&d"));
  v.SetMember(8, FuzzValue::Blob(Aws::Utils::ByteBuffer(bytes, sizeof(bytes))));
  v.SetMember(9, FuzzValue::Timestamp(Aws::Utils::DateTime(static_cast<int64_t>(1700000000000LL))));
  v.SetMember(10, FuzzValue::List({FuzzValue::String("x"), FuzzValue::String("")}));
  Aws::Map<Aws::String, FuzzValue> entries;
  entries.emplace("k1", FuzzValue::Integer(1));
  entries.emplace("k2", FuzzValue::Integer(-1));
  v.SetMember(11, FuzzValue::Map(std::move(entries)));
  v.SetMember(12, inner);
  v.SetMember(13, choice);
  return v;
}

Aws::Crt::ByteCursor CursorOf(const Aws::String& s) {
  return Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(s.data()), s.size());
}

void ExpectRoundTrip(const Codec& codec, const CodecTolerance& tolerance) {
  auto schema = Everything();
  DynamicStruct original(schema, SampleValue());
  auto payload = codec.Serialize(*schema, original);
  ASSERT_TRUE(payload.IsSuccess()) << payload.GetError().GetMessage();
  DynamicStruct decoded(schema);
  const auto error = codec.DeserializeShape(CursorOf(payload.GetResult()), decoded);
  ASSERT_FALSE(error.has_value()) << error->GetMessage();
  EXPECT_EQ(FindMismatch(original.GetValue(), decoded.GetValue(), *schema, tolerance), "") << payload.GetResult();
}

}  // namespace

TEST(DynamicStruct, JsonRoundTrip) { ExpectRoundTrip(JsonCodec(), CodecTolerance::Json()); }
TEST(DynamicStruct, CborRoundTrip) { ExpectRoundTrip(CborCodec(), CodecTolerance::Cbor()); }
TEST(DynamicStruct, XmlRoundTrip) { ExpectRoundTrip(XmlCodec(), CodecTolerance::Xml()); }

TEST(DynamicStruct, JsonDocumentMemberRoundTrip) {
  auto schema = Schema::StructureBuilder("Holder").PutMember("doc", Schema::CreateDocument("Document")).Build();
  Aws::Map<Aws::String, std::shared_ptr<const Document>> fields{{"n", Document::FromInteger(3)}, {"s", Document::FromString("x")}};
  FuzzValue v = FuzzValue::Struct();
  v.SetMember(0, FuzzValue::FromDocument(Document::FromMap(fields)));
  DynamicStruct original(schema, v);
  JsonCodec codec;
  auto payload = codec.Serialize(*schema, original);
  ASSERT_TRUE(payload.IsSuccess());
  DynamicStruct decoded(schema);
  ASSERT_FALSE(codec.DeserializeShape(CursorOf(payload.GetResult()), decoded).has_value());
  EXPECT_EQ(FindMismatch(original.GetValue(), decoded.GetValue(), *schema, CodecTolerance::Json()), "");
}

TEST(DynamicStruct, OutOfRangeByteIsAbsent) {
  auto schema = Schema::StructureBuilder("B").PutMember("b", Schema::CreateByte("Byte")).Build();
  DynamicStruct decoded(schema);
  ASSERT_FALSE(JsonCodec().DeserializeShape(CursorOf("{\"b\":300}"), decoded).has_value());
  EXPECT_TRUE(decoded.GetValue().GetMembers().empty());
}

TEST(DynamicStruct, XmlRoundTripHonoursMemberTraits) {
  auto strings = Schema::ListBuilder("StringList").PutMember("member", Schema::CreateString("String")).Build();
  auto ints = Schema::ListBuilder("IntList").PutMember("member", Schema::CreateInteger("Integer")).Build();
  auto pairs = Schema::MapBuilder("PairMap")
                   .PutMember("key", Schema::CreateString("String"))
                   .PutMember("value", Schema::CreateInteger("Integer"))
                   .Build();
  auto schema =
      Schema::StructureBuilder("Traited")
          .PutMember("attr", Schema::CreateString("String"), {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Tag")}})
          .PutMember("plain", Schema::CreateString("String"), {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Tag", "Renamed")}})
          .PutMember("flat", strings, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Tag")}})
          .PutMember("items", ints, {{XmlListItemNameTrait::KEY(), Aws::MakeShared<XmlListItemNameTrait>("Tag", "item")}})
          .PutMember("pairs", pairs,
                     {{XmlMapEntryNameTrait::KEY(), Aws::MakeShared<XmlMapEntryNameTrait>("Tag", "pair")},
                      {XmlMapKeyNameTrait::KEY(), Aws::MakeShared<XmlMapKeyNameTrait>("Tag", "k")},
                      {XmlMapValueNameTrait::KEY(), Aws::MakeShared<XmlMapValueNameTrait>("Tag", "v")}})
          .Build();

  Aws::Map<Aws::String, FuzzValue> entries;
  entries.emplace("a", FuzzValue::Integer(1));
  entries.emplace("b", FuzzValue::Integer(2));
  FuzzValue v = FuzzValue::Struct();
  v.SetMember(0, FuzzValue::String("attrValue"));
  v.SetMember(1, FuzzValue::String("renamedValue"));
  v.SetMember(2, FuzzValue::List({FuzzValue::String("x"), FuzzValue::String("y")}));
  v.SetMember(3, FuzzValue::List({FuzzValue::Integer(7), FuzzValue::Integer(8)}));
  v.SetMember(4, FuzzValue::Map(std::move(entries)));

  DynamicStruct original(schema, v);
  XmlCodec codec;
  auto payload = codec.Serialize(*schema, original);
  ASSERT_TRUE(payload.IsSuccess()) << payload.GetError().GetMessage();
  DynamicStruct decoded(schema);
  const auto error = codec.DeserializeShape(CursorOf(payload.GetResult()), decoded);
  ASSERT_FALSE(error.has_value()) << error->GetMessage();
  EXPECT_EQ(FindMismatch(original.GetValue(), decoded.GetValue(), *schema, CodecTolerance::Xml()), "") << payload.GetResult();

  const Aws::String& xml = payload.GetResult();
  EXPECT_NE(xml.find("<Renamed>"), Aws::String::npos) << xml;
  EXPECT_NE(xml.find("<item>"), Aws::String::npos) << xml;
  EXPECT_NE(xml.find("<pair>"), Aws::String::npos) << xml;
  EXPECT_NE(xml.find("<k>"), Aws::String::npos) << xml;
  EXPECT_NE(xml.find("<v>"), Aws::String::npos) << xml;
  EXPECT_NE(xml.find("attr=\""), Aws::String::npos) << xml;
  EXPECT_EQ(xml.find("<member>"), Aws::String::npos) << xml;
}
