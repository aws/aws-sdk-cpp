/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/Document.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/DocumentConversion.h>

using namespace smithy::schema;

class DocumentConversionTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(DocumentConversionTest, ScalarsConvertToSchemaDocument) {
  EXPECT_EQ(*ToSchemaDocument(Aws::Utils::Document(Aws::String("true")).View()), *Document::FromBoolean(true));
  EXPECT_EQ(*ToSchemaDocument(Aws::Utils::Document(Aws::String("42")).View()), *Document::FromInteger(42));
  EXPECT_EQ(*ToSchemaDocument(Aws::Utils::Document(Aws::String("1.5")).View()), *Document::FromDouble(1.5));
  EXPECT_EQ(*ToSchemaDocument(Aws::Utils::Document(Aws::String("\"hi\"")).View()), *Document::FromString("hi"));
  EXPECT_TRUE(ToSchemaDocument(Aws::Utils::Document(Aws::String("null")).View())->IsNull());
}

TEST_F(DocumentConversionTest, NestedRoundTripsThroughSchemaDocument) {
  const Aws::String json = R"({"list":[1,"two",null,{"k":false}],"empty":{},"num":2.5})";
  const Aws::Utils::Document original(json);
  ASSERT_TRUE(original.WasParseSuccessful());

  const auto schemaDoc = ToSchemaDocument(original.View());
  ASSERT_EQ(schemaDoc->GetType(), ShapeType::Map);
  const auto list = schemaDoc->GetMember("list");
  ASSERT_NE(list, nullptr);
  ASSERT_EQ(list->AsList()->size(), 4u);
  EXPECT_TRUE((*list->AsList())[2]->IsNull());

  const Aws::Utils::Document roundTripped = ToUtilsDocument(*schemaDoc);
  EXPECT_EQ(roundTripped, original);
}

TEST_F(DocumentConversionTest, EmptyContainersStayEmpty) {
  EXPECT_EQ(ToUtilsDocument(*Document::FromMap({})).View().WriteCompact(), "{}");
  EXPECT_EQ(ToUtilsDocument(*Document::FromList({})).View().WriteCompact(), "[]");
  EXPECT_EQ(ToUtilsDocument(*Document::Null()).View().WriteCompact(), "null");
}
