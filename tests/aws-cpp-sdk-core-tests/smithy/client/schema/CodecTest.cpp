/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <functional>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class CodecTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {

void RoundTrip(const Codec& codec, const std::shared_ptr<const Schema>& root) {
  auto name = root->GetMember("name").value();
  auto count = root->GetMember("count").value();

  LambdaStruct shape(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*name, "hello");
    ser.WriteInteger(*count, 42);
  });
  auto payload = codec.Serialize(*root, shape);
  ASSERT_TRUE(payload.IsSuccess());
  const Aws::String bytes = payload.GetResult();

  auto d = codec.CreateDeserializer(reinterpret_cast<const unsigned char*>(bytes.data()), bytes.size());
  ASSERT_NE(d, nullptr);
  Aws::Crt::Optional<Aws::String> gotName;
  Aws::Crt::Optional<int> gotCount;
  d->ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "name") {
      gotName = de.ReadString(m);
    } else if (m.GetMemberName() == "count") {
      gotCount = de.ReadInteger(m);
    }
  });
  ASSERT_TRUE(gotName.has_value());
  EXPECT_EQ(gotName.value(), "hello");
  ASSERT_TRUE(gotCount.has_value());
  EXPECT_EQ(gotCount.value(), 42);
}

}

TEST_F(CodecTest, JsonRoundTrip) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("name", Schema::CreateString("S"))
                  .PutMember("count", Schema::CreateInteger("I"))
                  .Build();
  JsonCodec codec;
  RoundTrip(codec, root);
}

TEST_F(CodecTest, CborRoundTrip) {
  auto root = Schema::StructureBuilder("Root")
                  .PutMember("name", Schema::CreateString("S"))
                  .PutMember("count", Schema::CreateInteger("I"))
                  .Build();
  CborCodec codec;
  RoundTrip(codec, root);
}

TEST_F(CodecTest, XmlRoundTrip) {

  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Root")}})
                  .PutMember("name", Schema::CreateString("S"))
                  .PutMember("count", Schema::CreateInteger("I"))
                  .Build();
  XmlCodec codec;
  RoundTrip(codec, root);
}
