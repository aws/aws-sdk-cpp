/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/QueryShapeSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/XmlTraits.h>

#include <functional>
#include <limits>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class QueryShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(QueryShapeSerializerTest, EmptyStructure) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  LambdaStruct rootStruct(*root, [](ShapeSerializer&) {});
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "");
}

TEST_F(QueryShapeSerializerTest, SingleString) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("stringValue", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "stringValue=hello");
}

TEST_F(QueryShapeSerializerTest, MultipleScalarsJoinedByAmpersand) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto m1 = Schema::CreateMember("stringValue", ShapeType::String);
  auto m2 = Schema::CreateMember("trueValue", ShapeType::Boolean);
  auto m3 = Schema::CreateMember("intValue", ShapeType::Integer);
  auto m4 = Schema::CreateMember("longValue", ShapeType::Long);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*m1, "abc");
    ser.WriteBoolean(*m2, true);
    ser.WriteInteger(*m3, 3);
    ser.WriteLong(*m4, 9876543210LL);
  });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "stringValue=abc&trueValue=true&intValue=3&longValue=9876543210");
}

TEST_F(QueryShapeSerializerTest, UrlEncodesStringValues) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("q", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "a b&c=d"); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());

  const auto& body = outcome.GetResult();
  EXPECT_EQ(body.find("a b&c=d"), Aws::String::npos);
  EXPECT_EQ(body.rfind("q=", 0), 0u);
  EXPECT_NE(body.find("%26"), Aws::String::npos);
  EXPECT_NE(body.find("%3D"), Aws::String::npos);
}

TEST_F(QueryShapeSerializerTest, Double) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ratio", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 6.5); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "ratio=6.5");
}

TEST_F(QueryShapeSerializerTest, NonFiniteFloats) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nan = Schema::CreateMember("nanValue", ShapeType::Double);
  auto inf = Schema::CreateMember("infValue", ShapeType::Double);
  auto ninf = Schema::CreateMember("negInfValue", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteDouble(*nan, std::numeric_limits<double>::quiet_NaN());
    ser.WriteDouble(*inf, std::numeric_limits<double>::infinity());
    ser.WriteDouble(*ninf, -std::numeric_limits<double>::infinity());
  });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "nanValue=NaN&infValue=Infinity&negInfValue=-Infinity");
}

TEST_F(QueryShapeSerializerTest, XmlNameOverridesMemberName) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("internalName", ShapeType::String,
                                     {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "ExternalName")}});
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "ExternalName=hello");
}

TEST_F(QueryShapeSerializerTest, NestedStructure) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("metadata", ShapeType::Structure);
  auto inner = Schema::CreateMember("key", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "metadata.key=val");
}

TEST_F(QueryShapeSerializerTest, ListOfStrings) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
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
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "tags.member.1=a&tags.member.2=b&tags.member.3=c");
}

TEST_F(QueryShapeSerializerTest, FlattenedList) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember =
      Schema::CreateMember("tags", ShapeType::List, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema")}});
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "tags.1=a&tags.2=b");
}

TEST_F(QueryShapeSerializerTest, ListOfStructures) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
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
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "items.member.1.id=1&items.member.2.id=2");
}

TEST_F(QueryShapeSerializerTest, MapOfStrings) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("attributes", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("foo", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "bar"); });
      mapSer.WriteEntry("baz", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "qux"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(),
            "attributes.entry.1.key=foo&attributes.entry.1.value=bar&attributes.entry.2.key=baz&attributes.entry.2.value=qux");
}

TEST_F(QueryShapeSerializerTest, FlattenedMap) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember =
      Schema::CreateMember("attr", ShapeType::Map, {{XmlFlattenedTrait::KEY(), Aws::MakeShared<XmlFlattenedTrait>("Schema")}});
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("k1", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "v1"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "attr.1.key=k1&attr.1.value=v1");
}

TEST_F(QueryShapeSerializerTest, MaxDepthEnforcement) {
  QueryShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("n", ShapeType::Structure);
  std::function<void(ShapeSerializer&, int)> nest = [&](ShapeSerializer& ser, int remaining) {
    if (remaining <= 0) {
      return;
    }
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&, remaining](ShapeSerializer& inner) { nest(inner, remaining - 1); }));
  };
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { nest(ser, 1000); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_FALSE(s.GetPayload().IsSuccess());
}

TEST_F(QueryShapeSerializerTest, Ec2CapitalizesMemberName) {
  QueryShapeSerializer s(QueryShapeSerializer::Flavor::Ec2Query);
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("stringValue", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "StringValue=hello");
}

TEST_F(QueryShapeSerializerTest, Ec2CapitalizesXmlName) {
  QueryShapeSerializer s(QueryShapeSerializer::Flavor::Ec2Query);
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("internal", ShapeType::String,
                                     {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "fooBar")}});
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "v"); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "FooBar=v");
}

TEST_F(QueryShapeSerializerTest, Ec2QueryNameUsedVerbatim) {
  QueryShapeSerializer s(QueryShapeSerializer::Flavor::Ec2Query);
  auto root = Schema::StructureBuilder("Root").Build();

  auto member = Schema::CreateMember("internal", ShapeType::String,
                                     {{Ec2QueryNameTrait::KEY(), Aws::MakeShared<Ec2QueryNameTrait>("Schema", "ipAddress")},
                                      {XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Schema", "IgnoredName")}});
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "1.2.3.4"); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "ipAddress=1.2.3.4");
}

TEST_F(QueryShapeSerializerTest, Ec2ListIsFlatWithDotN) {
  QueryShapeSerializer s(QueryShapeSerializer::Flavor::Ec2Query);
  auto root = Schema::StructureBuilder("Root").Build();

  auto listMember = Schema::CreateMember("items", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 2, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteString(*elem, "b");
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "Items.1=a&Items.2=b");
}
