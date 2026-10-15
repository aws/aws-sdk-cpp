/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <functional>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class XmlShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(XmlShapeSerializerTest, EmptyStructure) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  LambdaStruct rootStruct(*root, [](ShapeSerializer&) {});
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root></Root>");
}

TEST_F(XmlShapeSerializerTest, BooleanTrue) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, true); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<enabled>true</enabled>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, BooleanFalse) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, false); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<enabled>false</enabled>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Integer) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("count", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 42); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<count>42</count>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Long) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("bigNum", ShapeType::Long);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteLong(*member, 9876543210LL); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<bigNum>9876543210</bigNum>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Double) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("ratio", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.14); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<ratio>3.14</ratio>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, String) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<name>hello</name>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EmptyString) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, ""); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<name></name>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Timestamp) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("created", ShapeType::Timestamp);
  Aws::Utils::DateTime dt(1234567890.0);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<created>2009-02-13T23:31:30Z</created>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, Blob) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("data", ShapeType::Blob);
  unsigned char raw[] = {0x66, 0x6f, 0x6f};
  Aws::Utils::ByteBuffer buf(raw, 3);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, buf); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<data>Zm9v</data>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, NullValueWritesEmptyElement) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("item", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });
  s.WriteStruct(*root, rootStruct);
  // An explicit null writes an empty element; generated code omits absent
  // members by not calling WriteNull at all.
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root><item></item></Root>");
}

TEST_F(XmlShapeSerializerTest, MultipleScalars) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto m1 = Schema::CreateMember("a", ShapeType::Boolean);
  auto m2 = Schema::CreateMember("b", ShapeType::Integer);
  auto m3 = Schema::CreateMember("c", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteBoolean(*m1, true);
    ser.WriteInteger(*m2, 7);
    ser.WriteString(*m3, "x");
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<a>true</a>"), Aws::String::npos);
  EXPECT_NE(payload.find("<b>7</b>"), Aws::String::npos);
  EXPECT_NE(payload.find("<c>x</c>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, NestedStructure) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto nested = Schema::CreateMember("metadata", ShapeType::Structure);
  auto inner = Schema::CreateMember("key", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<metadata><key>val</key></metadata>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, DeeplyNestedStructure) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto level1 = Schema::CreateMember("l1", ShapeType::Structure);
  auto level2 = Schema::CreateMember("l2", ShapeType::Structure);
  auto leaf = Schema::CreateMember("val", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*level1, LambdaStruct(*level1, [&](ShapeSerializer& ser2) {
      ser2.WriteStruct(*level2, LambdaStruct(*level2, [&](ShapeSerializer& ser3) { ser3.WriteInteger(*leaf, 99); }));
    }));
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<l1><l2><val>99</val></l2></l1>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, ListOfStrings) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto listMember = Schema::CreateMember("tags", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 3, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
      lser.WriteString(*elem, "c");
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<tags><member>a</member><member>b</member><member>c</member></tags>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, ListOfIntegers) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto listMember = Schema::CreateMember("nums", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 3, [&](ShapeSerializer& lser) {
      lser.WriteInteger(*elem, 1);
      lser.WriteInteger(*elem, 2);
      lser.WriteInteger(*elem, 3);
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<nums><member>1</member><member>2</member><member>3</member></nums>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EmptyList) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteList(*listMember, 0, [](ShapeSerializer&) {}); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<items></items>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, ListOfStructures) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  auto structElem = Schema::CreateMember("member", ShapeType::Structure);
  auto field = Schema::CreateMember("id", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteStruct(*structElem, LambdaStruct(*structElem, [&](ShapeSerializer& es) { es.WriteInteger(*field, 1); }));
      lser.WriteStruct(*structElem, LambdaStruct(*structElem, [&](ShapeSerializer& es) { es.WriteInteger(*field, 2); }));
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<items><member><id>1</id></member><member><id>2</id></member></items>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, MapOfStrings) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto mapMember = Schema::CreateMember("headers", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("foo", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "bar"); });
      mapSer.WriteEntry("baz", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "qux"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<entry><key>foo</key><value>bar</value></entry>"), Aws::String::npos);
  EXPECT_NE(payload.find("<entry><key>baz</key><value>qux</value></entry>"), Aws::String::npos);
  EXPECT_NE(payload.find("<headers>"), Aws::String::npos);
  EXPECT_NE(payload.find("</headers>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EmptyMap) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto mapMember = Schema::CreateMember("tags", ShapeType::Map);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteMap(*mapMember, 0, [](MapSerializer&) {}); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<tags></tags>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, MapOfStructures) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto mapMember = Schema::CreateMember("nodes", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::Structure);
  auto field = Schema::CreateMember("val", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("a", [&](ShapeSerializer& vser) {
        vser.WriteStruct(*valSchema, LambdaStruct(*valSchema, [&](ShapeSerializer& vs) { vs.WriteInteger(*field, 1); }));
      });
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<nodes><entry><key>a</key><value><val>1</val></value></entry></nodes>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, StructureWithListAndMap) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto strMember = Schema::CreateMember("name", ShapeType::String);
  auto listMember = Schema::CreateMember("tags", ShapeType::List);
  auto listElem = Schema::CreateMember("member", ShapeType::String);
  auto mapMember = Schema::CreateMember("meta", ShapeType::Map);
  auto mapVal = Schema::CreateMember("value", ShapeType::String);

  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*strMember, "test");
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*listElem, "t1");
      lser.WriteString(*listElem, "t2");
    });
    ser.WriteMap(*mapMember, 1,
                 [&](MapSerializer& mapSer) { mapSer.WriteEntry("k", [&](ShapeSerializer& vser) { vser.WriteString(*mapVal, "v"); }); });
  });
  s.WriteStruct(*root, rootStruct);

  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<name>test</name>"), Aws::String::npos);
  EXPECT_NE(payload.find("<tags><member>t1</member><member>t2</member></tags>"), Aws::String::npos);
  EXPECT_NE(payload.find("<meta><entry><key>k</key><value>v</value></entry></meta>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesAmpersand) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("msg", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "a&b"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>a&amp;b</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesLessThan) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("msg", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "a<b"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>a&lt;b</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesGreaterThan) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("msg", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "a>b"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>a&gt;b</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesQuotes) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("msg", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "say \"hello\""); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<msg>say &quot;hello&quot;</msg>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, EscapesMultipleSpecialChars) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("expr", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "x < 5 & y > 3"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<expr>x &lt; 5 &amp; y &gt; 3</expr>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, MaxDepthEnforcement) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto nested = Schema::CreateMember("n", ShapeType::Structure);
  std::function<void(ShapeSerializer&, int)> nest = [&](ShapeSerializer& ser, int remaining) {
    if (remaining <= 0) {
      return;
    }
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&, remaining](ShapeSerializer& inner) { nest(inner, remaining - 1); }));
  };
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { nest(ser, 1000); });
  s.WriteStruct(*root, rootStruct);
  bool hitLimit = !s.GetPayload().IsSuccess();
  EXPECT_TRUE(hitLimit);
}

TEST_F(XmlShapeSerializerTest, XmlNameOverridesMemberName) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("internalName", ShapeType::String,
                                     {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "ExternalName")}});
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<ExternalName>hello</ExternalName>"), Aws::String::npos);
  EXPECT_EQ(payload.find("<internalName>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, XmlNameOnStructure) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("MyStruct", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "CustomRoot")}}).Build();
  auto field = Schema::CreateMember("val", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*field, 42); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<CustomRoot><val>42</val></CustomRoot>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FlattenedListOfStrings) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto listMember =
      Schema::CreateMember("item", ShapeType::List, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema")}});
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 3, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
      lser.WriteString(*elem, "c");
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  // Flattened: no wrapper, items repeat with list's xmlName
  EXPECT_NE(payload.find("<item>a</item><item>b</item><item>c</item>"), Aws::String::npos);
  // Should NOT have a wrapper element around the items
  EXPECT_EQ(payload.find("<item><item>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FlattenedListWithXmlName) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List,
                                         {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema")},
                                          {XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Tag")}});
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "x");
      lser.WriteString(*elem, "y");
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<Tag>x</Tag><Tag>y</Tag>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, CustomListItemName) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto listMember = Schema::CreateMember("things", ShapeType::List,
                                         {{XmlListItemNameTrait::KEY(), Aws::MakeShared<XmlListItemNameTrait>("Schema", "item")}});
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<things><item>a</item><item>b</item></things>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, CustomMapNames) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto mapMember = Schema::CreateMember("tags", ShapeType::Map,
                                        {{XmlMapEntryNameTrait::KEY(), Aws::MakeShared<XmlMapEntryNameTrait>("Schema", "item")},
                                         {XmlMapKeyNameTrait::KEY(), Aws::MakeShared<XmlMapKeyNameTrait>("Schema", "tagKey")},
                                         {XmlMapValueNameTrait::KEY(), Aws::MakeShared<XmlMapValueNameTrait>("Schema", "tagValue")}});
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("color", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "red"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("<tags><item><tagKey>color</tagKey><tagValue>red</tagValue></item></tags>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FlattenedMap) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto mapMember = Schema::CreateMember("tag", ShapeType::Map, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema")}});
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("k1", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "v1"); });
      mapSer.WriteEntry("k2", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "v2"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  // Flattened map: no wrapper, entry uses the map's xmlName
  EXPECT_NE(payload.find("<tag><key>k1</key><value>v1</value></tag>"), Aws::String::npos);
  EXPECT_NE(payload.find("<tag><key>k2</key><value>v2</value></tag>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FloatValue) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("temp", ShapeType::Float);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, 1.5f); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<temp>1.5</temp>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, FloatNegativeValue) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("val", ShapeType::Float);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, -2.25f); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("<val>-2.25</val>"), Aws::String::npos);
}

TEST_F(XmlShapeSerializerTest, TimestampFormatTraitControlsWireForm) {
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  const Aws::Utils::DateTime dt(1234567890.0);
  auto httpDate = Schema::CreateMember(
      "t", ShapeType::Timestamp,
      {{TimestampFormatTrait::KEY(), Aws::MakeShared<TimestampFormatTrait>("Test", TimestampFormatTrait::Format::HTTP_DATE)}});
  auto epoch = Schema::CreateMember(
      "t", ShapeType::Timestamp,
      {{TimestampFormatTrait::KEY(), Aws::MakeShared<TimestampFormatTrait>("Test", TimestampFormatTrait::Format::EPOCH_SECONDS)}});

  {
    XmlShapeSerializer s;
    LambdaStruct rs(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*httpDate, dt); });
    s.WriteStruct(*root, rs);
    EXPECT_NE(s.GetPayload().GetResult().find("<t>Fri, 13 Feb 2009 23:31:30 GMT</t>"), Aws::String::npos);
  }
  {
    XmlShapeSerializer s;
    LambdaStruct rs(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*epoch, dt); });
    s.WriteStruct(*root, rs);
    const Aws::String payload = s.GetPayload().GetResult();
    EXPECT_NE(payload.find("<t>1234567890"), Aws::String::npos);
    EXPECT_EQ(payload.find("2009-02-13T23:31:30Z"), Aws::String::npos);
  }
}

TEST_F(XmlShapeSerializerTest, BigIntegerBeyondInt64) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("big", ShapeType::BigInteger);
  auto value = MakeBigInteger("123456789012345678901234567890");
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBigInteger(*member, value); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "<Root><big>123456789012345678901234567890</big></Root>");
}

TEST_F(XmlShapeSerializerTest, BigDecimalValues) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto simple = Schema::CreateMember("simple", ShapeType::BigDecimal);
  auto small = Schema::CreateMember("small", ShapeType::BigDecimal);
  auto negative = Schema::CreateMember("negative", ShapeType::BigDecimal);
  auto zero = Schema::CreateMember("zero", ShapeType::BigDecimal);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteBigDecimal(*simple, MakeBigDecimal("1.5"));
    ser.WriteBigDecimal(*small, MakeBigDecimal("0.100000000000000000000001"));
    ser.WriteBigDecimal(*negative, MakeBigDecimal("-12345678901234567890.123456789"));
    ser.WriteBigDecimal(*zero, Aws::Crt::BigDecimal());
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(),
            "<Root><simple>15e-1</simple><small>100000000000000000000001e-24</small>"
            "<negative>-12345678901234567890123456789e-9</negative><zero>0e0</zero></Root>");
}

TEST_F(XmlShapeSerializerTest, BigNumberXmlNameOverridesMemberName) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto member = Schema::CreateMember("big", ShapeType::BigInteger, {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Big")}});
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBigInteger(*member, MakeBigInteger("5")); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root><Big>5</Big></Root>");
}

TEST_F(XmlShapeSerializerTest, BigNumberAttributes) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto intAttr =
      Schema::CreateMember("id", ShapeType::BigInteger, {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Schema")}});
  auto decAttr =
      Schema::CreateMember("scale", ShapeType::BigDecimal, {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Schema")}});
  auto element = Schema::CreateMember("name", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteBigInteger(*intAttr, MakeBigInteger("123456789012345678901234567890"));
    ser.WriteBigDecimal(*decAttr, MakeBigDecimal("-0.25"));
    ser.WriteString(*element, "x");
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root id=\"123456789012345678901234567890\" scale=\"-25e-2\"><name>x</name></Root>");
}

TEST_F(XmlShapeSerializerTest, ListOfBigNumbers) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto ints = Schema::CreateMember("ints", ShapeType::List);
  auto decs = Schema::CreateMember("decs", ShapeType::List);
  auto intElem = Schema::CreateMember("member", ShapeType::BigInteger);
  auto decElem = Schema::CreateMember("member", ShapeType::BigDecimal);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*ints, 2, [&](ShapeSerializer& lser) {
      lser.WriteBigInteger(*intElem, MakeBigInteger("123456789012345678901234567890"));
      lser.WriteBigInteger(*intElem, MakeBigInteger("-1"));
    });
    ser.WriteList(*decs, 1, [&](ShapeSerializer& lser) { lser.WriteBigDecimal(*decElem, MakeBigDecimal("1.5")); });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(),
            "<Root><ints><member>123456789012345678901234567890</member><member>-1</member></ints>"
            "<decs><member>15e-1</member></decs></Root>");
}

TEST_F(XmlShapeSerializerTest, FlattenedListOfBigIntegers) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto list = Schema::CreateMember("nums", ShapeType::List, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema")}});
  auto elem = Schema::CreateMember("member", ShapeType::BigInteger);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*list, 2, [&](ShapeSerializer& lser) {
      lser.WriteBigInteger(*elem, MakeBigInteger("1"));
      lser.WriteBigInteger(*elem, MakeBigInteger("2"));
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root><nums>1</nums><nums>2</nums></Root>");
}

TEST_F(XmlShapeSerializerTest, MapOfBigNumbers) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto ints = Schema::CreateMember("ints", ShapeType::Map);
  auto decs = Schema::CreateMember("decs", ShapeType::Map);
  auto intVal = Schema::CreateMember("value", ShapeType::BigInteger);
  auto decVal = Schema::CreateMember("value", ShapeType::BigDecimal);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*ints, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("a",
                        [&](ShapeSerializer& vser) { vser.WriteBigInteger(*intVal, MakeBigInteger("123456789012345678901234567890")); });
    });
    ser.WriteMap(*decs, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("b", [&](ShapeSerializer& vser) { vser.WriteBigDecimal(*decVal, MakeBigDecimal("0.100000000000000000000001")); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(),
            "<Root><ints><entry><key>a</key><value>123456789012345678901234567890</value></entry></ints>"
            "<decs><entry><key>b</key><value>100000000000000000000001e-24</value></entry></decs></Root>");
}

TEST_F(XmlShapeSerializerTest, ByteAndShortAreNumbers) {
  XmlShapeSerializer s;
  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "Root")}}).Build();
  auto attr = Schema::CreateMember("b", ShapeType::Byte, {{XmlAttributeTrait::KEY(), Aws::MakeShared<XmlAttributeTrait>("Schema")}});
  auto element = Schema::CreateMember("e", ShapeType::Byte);
  auto sh = Schema::CreateMember("s", ShapeType::Short);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteByte(*attr, 65);
    ser.WriteByte(*element, -128);
    ser.WriteShort(*sh, 32767);
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_EQ(s.GetPayload().GetResult(), "<Root b=\"65\"><e>-128</e><s>32767</s></Root>");
}
