/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/XmlShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

using namespace smithy::schema;

class XmlShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

// --- Scalars ---

TEST_F(XmlShapeSerializerTest, EmptyStructure) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  s.BeginStructure(root);
  s.EndStructure();
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root></Root>");
}

TEST_F(XmlShapeSerializerTest, BooleanTrue) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("enabled", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, true);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<enabled>true</enabled>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, BooleanFalse) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("enabled", ShapeType::Boolean);
  s.BeginStructure(root);
  s.WriteBoolean(member, false);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<enabled>false</enabled>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Integer) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("count", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(member, 42);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<count>42</count>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Long) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("bigNum", ShapeType::Long);
  s.BeginStructure(root);
  s.WriteLong(member, 9876543210LL);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<bigNum>9876543210</bigNum>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Double) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("ratio", ShapeType::Double);
  s.BeginStructure(root);
  s.WriteDouble(member, 3.14);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<ratio>3.14</ratio>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, String) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("name", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "hello");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<name>hello</name>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EmptyString) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("name", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<name></name>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Timestamp) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("created", ShapeType::Timestamp);
  s.BeginStructure(root);
  Aws::Utils::DateTime dt(1234567890.0);
  s.WriteTimestamp(member, dt);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<created>2009-02-13T23:31:30Z</created>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Blob) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("data", ShapeType::Blob);
  s.BeginStructure(root);
  unsigned char raw[] = {0x66, 0x6f, 0x6f};
  Aws::Utils::ByteBuffer buf(raw, 3);
  s.WriteBlob(member, buf);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<data>Zm9v</data>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, NullValueOmitted) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("item", ShapeType::String);
  s.BeginStructure(root);
  s.WriteNull(member);
  s.EndStructure();
  // Null values are omitted in XML
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root></Root>");
}

TEST_F(XmlShapeSerializerTest, MultipleScalars) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema m1("a", ShapeType::Boolean);
  Schema m2("b", ShapeType::Integer);
  Schema m3("c", ShapeType::String);
  s.BeginStructure(root);
  s.WriteBoolean(m1, true);
  s.WriteInteger(m2, 7);
  s.WriteString(m3, "x");
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<a>true</a>"), Aws::String::npos);
  EXPECT_NE(payload.find("<b>7</b>"), Aws::String::npos);
  EXPECT_NE(payload.find("<c>x</c>"), Aws::String::npos);
}

// --- Nested structures ---

TEST_F(XmlShapeSerializerTest, NestedStructure) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema nested("metadata", ShapeType::Structure);
  Schema inner("key", ShapeType::String);
  s.BeginStructure(root);
  s.BeginNestedStructure(nested);
  s.WriteString(inner, "val");
  s.EndNestedStructure();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<metadata><key>val</key></metadata>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, DeeplyNestedStructure) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema level1("l1", ShapeType::Structure);
  Schema level2("l2", ShapeType::Structure);
  Schema leaf("val", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginNestedStructure(level1);
  s.BeginNestedStructure(level2);
  s.WriteInteger(leaf, 99);
  s.EndNestedStructure();
  s.EndNestedStructure();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<l1><l2><val>99</val></l2></l1>"), Aws::String::npos);
}

// --- Lists ---

TEST_F(XmlShapeSerializerTest, ListOfStrings) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema listMember("tags", ShapeType::List);
  Schema elem("member", ShapeType::String);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteString(elem, "a");
  s.WriteString(elem, "b");
  s.WriteString(elem, "c");
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<tags><member>a</member><member>b</member><member>c</member></tags>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, ListOfIntegers) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema listMember("nums", ShapeType::List);
  Schema elem("member", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteInteger(elem, 1);
  s.WriteInteger(elem, 2);
  s.WriteInteger(elem, 3);
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<nums><member>1</member><member>2</member><member>3</member></nums>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EmptyList) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema listMember("items", ShapeType::List);
  s.BeginStructure(root);
  s.BeginList(listMember, 0);
  s.EndList();
  s.EndStructure();
  // Empty list still produces the wrapper element
  EXPECT_NE(s.GetPayload().GetResult().find("<items></items>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, ListOfStructures) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema listMember("items", ShapeType::List);
  Schema structElem("member", ShapeType::Structure);
  Schema field("id", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginList(listMember, 2);
  s.BeginNestedStructure(structElem);
  s.WriteInteger(field, 1);
  s.EndNestedStructure();
  s.BeginNestedStructure(structElem);
  s.WriteInteger(field, 2);
  s.EndNestedStructure();
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<items><member><id>1</id></member><member><id>2</id></member></items>"), Aws::String::npos);
}

// --- Maps ---

TEST_F(XmlShapeSerializerTest, MapOfStrings) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema mapMember("headers", ShapeType::Map);
  Schema valSchema("value", ShapeType::String);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 2);
  s.WriteMapKey("foo");
  s.WriteString(valSchema, "bar");
  s.WriteMapKey("baz");
  s.WriteString(valSchema, "qux");
  s.EndMap();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<entry><key>foo</key><value>bar</value></entry>"), Aws::String::npos);
  EXPECT_NE(payload.find("<entry><key>baz</key><value>qux</value></entry>"), Aws::String::npos);
  EXPECT_NE(payload.find("<headers>"), Aws::String::npos);
  EXPECT_NE(payload.find("</headers>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EmptyMap) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema mapMember("tags", ShapeType::Map);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 0);
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<tags></tags>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, MapOfStructures) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema mapMember("nodes", ShapeType::Map);
  Schema valSchema("value", ShapeType::Structure);
  Schema field("val", ShapeType::Integer);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("a");
  s.BeginNestedStructure(valSchema);
  s.WriteInteger(field, 1);
  s.EndNestedStructure();
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<nodes><entry><key>a</key><value><val>1</val></value></entry></nodes>"), Aws::String::npos);
}

// --- Combinations ---

TEST_F(XmlShapeSerializerTest, StructureWithListAndMap) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema strMember("name", ShapeType::String);
  Schema listMember("tags", ShapeType::List);
  Schema listElem("member", ShapeType::String);
  Schema mapMember("meta", ShapeType::Map);
  Schema mapVal("value", ShapeType::String);

  s.BeginStructure(root);
  s.WriteString(strMember, "test");
  s.BeginList(listMember, 2);
  s.WriteString(listElem, "t1");
  s.WriteString(listElem, "t2");
  s.EndList();
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("k");
  s.WriteString(mapVal, "v");
  s.EndMap();
  s.EndStructure();

  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<name>test</name>"), Aws::String::npos);
  EXPECT_NE(payload.find("<tags><member>t1</member><member>t2</member></tags>"), Aws::String::npos);
  EXPECT_NE(payload.find("<meta><entry><key>k</key><value>v</value></entry></meta>"), Aws::String::npos);
}

// --- XML Escaping ---

TEST_F(XmlShapeSerializerTest, EscapesAmpersand) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("msg", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "a&b");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>a&amp;b</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesLessThan) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("msg", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "a<b");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>a&lt;b</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesGreaterThan) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("msg", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "a>b");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>a&gt;b</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesQuotes) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("msg", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "say \"hello\"");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>say &quot;hello&quot;</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesMultipleSpecialChars) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("expr", ShapeType::String);
  s.BeginStructure(root);
  s.WriteString(member, "x < 5 & y > 3");
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<expr>x &lt; 5 &amp; y &gt; 3</expr>"), Aws::String::npos);
}

// --- Depth limit ---

TEST_F(XmlShapeSerializerTest, MaxDepthEnforcement) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema nested("n", ShapeType::Structure);
  s.BeginStructure(root);
  bool hitLimit = false;
  for (int i = 0; i < 1000; i++) {
    if (!s.BeginNestedStructure(nested)) {
      hitLimit = true;
      break;
    }
  }
  EXPECT_TRUE(hitLimit);
}

// --- xmlName trait ---

TEST_F(XmlShapeSerializerTest, XmlNameOverridesMemberName) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("internalName", ShapeType::String);
  member.SetTrait(XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "ExternalName"));
  s.BeginStructure(root);
  s.WriteString(member, "hello");
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<ExternalName>hello</ExternalName>"), Aws::String::npos);
  EXPECT_EQ(payload.find("<internalName>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, XmlNameOnStructure) {
  XmlShapeSerializer s;
  Schema root("MyStruct", ShapeType::Structure);
  root.SetTrait(XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "CustomRoot"));
  Schema field("val", ShapeType::Integer);
  s.BeginStructure(root);
  s.WriteInteger(field, 42);
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<CustomRoot><val>42</val></CustomRoot>"), Aws::String::npos);
}

// --- Flattened lists ---

TEST_F(XmlShapeSerializerTest, FlattenedListOfStrings) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema listMember("item", ShapeType::List);
  listMember.SetTrait(XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema"));
  Schema elem("member", ShapeType::String);
  s.BeginStructure(root);
  s.BeginList(listMember, 3);
  s.WriteString(elem, "a");
  s.WriteString(elem, "b");
  s.WriteString(elem, "c");
  s.EndList();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  // Flattened: no wrapper, items repeat with list's xmlName
  EXPECT_NE(payload.find("<item>a</item><item>b</item><item>c</item>"), Aws::String::npos);
  // Should NOT have a wrapper element around the items
  EXPECT_EQ(payload.find("<item><item>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FlattenedListWithXmlName) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema listMember("items", ShapeType::List);
  listMember.SetTrait(XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema"));
  listMember.SetTrait(XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Tag"));
  Schema elem("member", ShapeType::String);
  s.BeginStructure(root);
  s.BeginList(listMember, 2);
  s.WriteString(elem, "x");
  s.WriteString(elem, "y");
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<Tag>x</Tag><Tag>y</Tag>"), Aws::String::npos);
}

// --- Custom list item name ---

TEST_F(XmlShapeSerializerTest, CustomListItemName) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema listMember("things", ShapeType::List);
  listMember.SetTrait(XmlListItemNameTrait::KEY(), Aws::MakeShared<XmlListItemNameTrait>("Schema", "item"));
  Schema elem("member", ShapeType::String);
  s.BeginStructure(root);
  s.BeginList(listMember, 2);
  s.WriteString(elem, "a");
  s.WriteString(elem, "b");
  s.EndList();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<things><item>a</item><item>b</item></things>"), Aws::String::npos);
}

// --- Custom map entry/key/value names ---

TEST_F(XmlShapeSerializerTest, CustomMapNames) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema mapMember("tags", ShapeType::Map);
  mapMember.SetTrait(XmlMapEntryNameTrait::KEY(), Aws::MakeShared<XmlMapEntryNameTrait>("Schema", "item"));
  mapMember.SetTrait(XmlMapKeyNameTrait::KEY(), Aws::MakeShared<XmlMapKeyNameTrait>("Schema", "tagKey"));
  mapMember.SetTrait(XmlMapValueNameTrait::KEY(), Aws::MakeShared<XmlMapValueNameTrait>("Schema", "tagValue"));
  Schema valSchema("value", ShapeType::String);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 1);
  s.WriteMapKey("color");
  s.WriteString(valSchema, "red");
  s.EndMap();
  s.EndStructure();
  EXPECT_NE(s.GetPayload().GetResult().find("<tags><item><tagKey>color</tagKey><tagValue>red</tagValue></item></tags>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FlattenedMap) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema mapMember("tag", ShapeType::Map);
  mapMember.SetTrait(XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema"));
  Schema valSchema("value", ShapeType::String);
  s.BeginStructure(root);
  s.BeginMap(mapMember, 2);
  s.WriteMapKey("k1");
  s.WriteString(valSchema, "v1");
  s.WriteMapKey("k2");
  s.WriteString(valSchema, "v2");
  s.EndMap();
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  // Flattened map: no wrapper, entry uses the map's xmlName
  EXPECT_NE(payload.find("<tag><key>k1</key><value>v1</value></tag>"), Aws::String::npos);
  EXPECT_NE(payload.find("<tag><key>k2</key><value>v2</value></tag>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FloatValue) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("temp", ShapeType::Float);
  s.BeginStructure(root);
  s.WriteFloat(member, 1.5f);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<temp>1.5</temp>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FloatNegativeValue) {
  XmlShapeSerializer s;
  Schema root("Root", ShapeType::Structure);
  Schema member("val", ShapeType::Float);
  s.BeginStructure(root);
  s.WriteFloat(member, -2.25f);
  s.EndStructure();
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<val>-2.25</val>"), Aws::String::npos);
}
