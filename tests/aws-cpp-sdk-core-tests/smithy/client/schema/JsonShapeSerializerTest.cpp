/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/DateTime.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/JsonShapeSerializer.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>

#include <functional>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class JsonShapeSerializerTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(JsonShapeSerializerTest, EmptyStructure) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  LambdaStruct rootStruct(*root, [](ShapeSerializer&) {});
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "{}");
}

TEST_F(JsonShapeSerializerTest, BooleanTrue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, true); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"enabled\":true"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, BooleanFalse) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("enabled", ShapeType::Boolean);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBoolean(*member, false); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"enabled\":false"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Integer) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("count", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteInteger(*member, 42); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"count\":42"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Long) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("bigNum", ShapeType::Long);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteLong(*member, 9876543210LL); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"bigNum\":9876543210"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Double) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("ratio", ShapeType::Double);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteDouble(*member, 3.14); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"ratio\":3.14"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, String) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"name\":\"hello\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyString) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("name", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, ""); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"name\":\"\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Timestamp) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("created", ShapeType::Timestamp);
  Aws::Utils::DateTime dt(1234567890.0);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteTimestamp(*member, dt); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"created\":"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, Blob) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("data", ShapeType::Blob);
  unsigned char raw[] = {0x66, 0x6f, 0x6f};
  Aws::Utils::ByteBuffer buf(raw, 3);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteBlob(*member, buf); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"data\":\"Zm9v\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, NullValue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("item", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteNull(*member); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"item\":null"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MultipleScalars) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
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
  EXPECT_NE(payload.find("\"a\":true"), Aws::String::npos);
  EXPECT_NE(payload.find("\"b\":7"), Aws::String::npos);
  EXPECT_NE(payload.find("\"c\":\"x\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, NestedStructure) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("metadata", ShapeType::Structure);
  auto inner = Schema::CreateMember("key", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&](ShapeSerializer& ser2) { ser2.WriteString(*inner, "val"); }));
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"metadata\":{\"key\":\"val\"}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, DeeplyNestedStructure) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto level1 = Schema::CreateMember("l1", ShapeType::Structure);
  auto level2 = Schema::CreateMember("l2", ShapeType::Structure);
  auto leaf = Schema::CreateMember("val", ShapeType::Integer);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteStruct(*level1, LambdaStruct(*level1, [&](ShapeSerializer& ser2) {
      ser2.WriteStruct(*level2, LambdaStruct(*level2, [&](ShapeSerializer& ser3) { ser3.WriteInteger(*leaf, 99); }));
    }));
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"l1\":{\"l2\":{\"val\":99}}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, ListOfStrings) {
  JsonShapeSerializer s;
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
  EXPECT_NE(s.GetPayload().GetResult().find("\"tags\":[\"a\",\"b\",\"c\"]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, ListOfIntegers) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
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
  EXPECT_NE(s.GetPayload().GetResult().find("\"nums\":[1,2,3]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyList) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteList(*listMember, 0, [](ShapeSerializer&) {}); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"items\":[]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, ListOfStructures) {
  JsonShapeSerializer s;
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
  EXPECT_NE(s.GetPayload().GetResult().find("\"items\":[{\"id\":1},{\"id\":2}]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, SparseList) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto listMember = Schema::CreateMember("items", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteList(*listMember, 3, [&](ShapeSerializer& lser) {
      lser.WriteString(*elem, "a");
      lser.WriteNull(*elem);
      lser.WriteString(*elem, "b");
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"items\":[\"a\",null,\"b\"]"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MapOfStrings) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("headers", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("x-foo", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "bar"); });
      mapSer.WriteEntry("x-baz", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "qux"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"x-foo\":\"bar\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"x-baz\":\"qux\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EmptyMap) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("tags", ShapeType::Map);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteMap(*mapMember, 0, [](MapSerializer&) {}); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"tags\":{}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MapOfStructures) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
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
  EXPECT_NE(s.GetPayload().GetResult().find("\"nodes\":{\"a\":{\"val\":1}}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, SparseMap) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("data", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 2, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("present", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "yes"); });
      mapSer.WriteEntry("absent", [&](ShapeSerializer& vser) { vser.WriteNull(*valSchema); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"present\":\"yes\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"absent\":null"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, StructureWithListAndMap) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
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
  EXPECT_NE(payload.find("\"name\":\"test\""), Aws::String::npos);
  EXPECT_NE(payload.find("\"tags\":[\"t1\",\"t2\"]"), Aws::String::npos);
  EXPECT_NE(payload.find("\"meta\":{\"k\":\"v\"}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MapContainingList) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("data", ShapeType::Map);
  auto listSchema = Schema::CreateMember("value", ShapeType::List);
  auto elem = Schema::CreateMember("member", ShapeType::Integer);

  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("nums", [&](ShapeSerializer& vser) {
        vser.WriteList(*listSchema, 2, [&](ShapeSerializer& lser) {
          lser.WriteInteger(*elem, 1);
          lser.WriteInteger(*elem, 2);
        });
      });
    });
  });
  s.WriteStruct(*root, rootStruct);

  EXPECT_NE(s.GetPayload().GetResult().find("\"data\":{\"nums\":[1,2]}"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesQuotesInString) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("msg", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "say \"hello\""); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"msg\":\"say \\\"hello\\\"\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesBackslash) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("path", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "C:\\Users\\test"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"path\":\"C:\\\\Users\\\\test\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesControlCharacters) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("text", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "line1\nline2\ttab"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"text\":\"line1\\nline2\\ttab\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesNullByte) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("data", ShapeType::String);
  Aws::String val("ab");
  val += '\0';
  val += "cd";
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, val); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"data\":\"ab\\u0000cd\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, EscapesInMapKey) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto mapMember = Schema::CreateMember("m", ShapeType::Map);
  auto valSchema = Schema::CreateMember("value", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) {
    ser.WriteMap(*mapMember, 1, [&](MapSerializer& mapSer) {
      mapSer.WriteEntry("key\"with\"quotes", [&](ShapeSerializer& vser) { vser.WriteString(*valSchema, "v"); });
    });
  });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"key\\\"with\\\"quotes\":\"v\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, MaxDepthEnforcement) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto nested = Schema::CreateMember("n", ShapeType::Structure);
  std::function<void(ShapeSerializer&, int)> nest = [&](ShapeSerializer& ser, int remaining) {
    if (remaining <= 0) {
      return;
    }
    ser.WriteStruct(*nested, LambdaStruct(*nested, [&, remaining](ShapeSerializer& inner) { nest(inner, remaining - 1); }));
  };
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { nest(ser, 200); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_FALSE(outcome.IsSuccess());
  EXPECT_NE(outcome.GetError().GetMessage().find("depth"), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, JsonNameOverridesMemberName) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("internalName", ShapeType::String,
                                     {{JsonNameTrait::KEY(), Aws::MakeShared<JsonNameTrait>("Schema", "ExternalName")}});
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "hello"); });
  s.WriteStruct(*root, rootStruct);
  auto payload = s.GetPayload().GetResult();
  EXPECT_NE(payload.find("\"ExternalName\":\"hello\""), Aws::String::npos);
  EXPECT_EQ(payload.find("\"internalName\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, NoJsonNameUsesGetMemberName) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("fieldName", ShapeType::String);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteString(*member, "value"); });
  s.WriteStruct(*root, rootStruct);
  EXPECT_NE(s.GetPayload().GetResult().find("\"fieldName\":\"value\""), Aws::String::npos);
}

TEST_F(JsonShapeSerializerTest, FloatValue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("f", ShapeType::Float);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, 1.5f); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "{\"f\":1.5}");
}

TEST_F(JsonShapeSerializerTest, FloatNegativeValue) {
  JsonShapeSerializer s;
  auto root = Schema::StructureBuilder("Root").Build();
  auto member = Schema::CreateMember("f", ShapeType::Float);
  LambdaStruct rootStruct(*root, [&](ShapeSerializer& ser) { ser.WriteFloat(*member, -2.25f); });
  s.WriteStruct(*root, rootStruct);
  auto outcome = s.GetPayload();
  ASSERT_TRUE(outcome.IsSuccess());
  EXPECT_EQ(outcome.GetResult(), "{\"f\":-2.25}");
}
