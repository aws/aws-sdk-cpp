/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/crt/Optional.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <functional>

#include "SchemaSerializerTestHelpers.h"

using namespace smithy::schema;

class ClientProtocolTest : public Aws::Testing::AwsCppSdkGTestSuite {};

namespace {

std::shared_ptr<const Schema> TwoMemberRoot(bool withXmlName) {
  auto builder = withXmlName ? Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Root")}})
                             : Schema::StructureBuilder("Root");
  builder.PutMember("name", Schema::CreateString("S")).PutMember("count", Schema::CreateInteger("I"));
  return builder.Build();
}

void RoundTrip(const ClientProtocol& protocol, const std::shared_ptr<const Schema>& root) {
  auto name = root->GetMember("name").value();
  auto count = root->GetMember("count").value();
  LambdaStruct shape(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*name, "hello");
    ser.WriteInteger(*count, 42);
  });
  auto payload = protocol.SerializeInput(*root, shape);
  ASSERT_TRUE(payload.IsSuccess());
  const Aws::String bytes = payload.GetResult();

  auto d = protocol.CreateOutputDeserializer(reinterpret_cast<const unsigned char*>(bytes.data()), bytes.size());
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

TEST_F(ClientProtocolTest, ContentTypesAndIds) {
  EXPECT_EQ(RestJsonProtocol().GetContentType(), "application/json");
  EXPECT_EQ(RestJsonProtocol().GetProtocolId(), "aws.protocols#restJson1");
  EXPECT_EQ(AwsJson10Protocol().GetContentType(), "application/x-amz-json-1.0");
  EXPECT_EQ(AwsJson11Protocol().GetContentType(), "application/x-amz-json-1.1");
  EXPECT_EQ(RpcV2CborProtocol().GetContentType(), "application/cbor");
  EXPECT_EQ(RestXmlProtocol().GetContentType(), "application/xml");
  EXPECT_EQ(AwsQueryProtocol().GetContentType(), "application/x-www-form-urlencoded");
  EXPECT_EQ(Ec2QueryProtocol().GetContentType(), "application/x-www-form-urlencoded");
  EXPECT_EQ(Ec2QueryProtocol().GetProtocolId(), "aws.protocols#ec2Query");
}

TEST_F(ClientProtocolTest, RestJsonRoundTrip) { RoundTrip(RestJsonProtocol(), TwoMemberRoot(false)); }
TEST_F(ClientProtocolTest, AwsJson11RoundTrip) { RoundTrip(AwsJson11Protocol(), TwoMemberRoot(false)); }
TEST_F(ClientProtocolTest, RpcV2CborRoundTrip) { RoundTrip(RpcV2CborProtocol(), TwoMemberRoot(false)); }
TEST_F(ClientProtocolTest, RestXmlRoundTrip) { RoundTrip(RestXmlProtocol(), TwoMemberRoot(true)); }

TEST_F(ClientProtocolTest, AwsQuerySerializesForm) {
  auto root = TwoMemberRoot(false);
  auto name = root->GetMember("name").value();
  auto count = root->GetMember("count").value();
  LambdaStruct shape(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*name, "hello");
    ser.WriteInteger(*count, 42);
  });
  auto payload = AwsQueryProtocol().SerializeInput(*root, shape);
  ASSERT_TRUE(payload.IsSuccess());
  EXPECT_EQ(payload.GetResult(), "name=hello&count=42");
}

TEST_F(ClientProtocolTest, Ec2QuerySerializesCapitalizedForm) {
  auto root = TwoMemberRoot(false);
  auto name = root->GetMember("name").value();
  auto count = root->GetMember("count").value();
  LambdaStruct shape(*root, [&](ShapeSerializer& ser) {
    ser.WriteString(*name, "hello");
    ser.WriteInteger(*count, 42);
  });
  auto payload = Ec2QueryProtocol().SerializeInput(*root, shape);
  ASSERT_TRUE(payload.IsSuccess());
  EXPECT_EQ(payload.GetResult(), "Name=hello&Count=42");
}

TEST_F(ClientProtocolTest, QueryResponseParsedAsXml) {

  auto root = Schema::StructureBuilder("Root", {{XmlNameTrait::KEY(), Aws::MakeShared<XmlNameTrait>("Test", "Root")}})
                  .PutMember("status", Schema::CreateString("S"))
                  .Build();
  const Aws::String xml = "<Root><status>ok</status></Root>";
  auto d = AwsQueryProtocol().CreateOutputDeserializer(reinterpret_cast<const unsigned char*>(xml.data()), xml.size());
  Aws::Crt::Optional<Aws::String> got;
  d->ReadStruct(*root, [&](const Schema& m, ShapeDeserializer& de) {
    if (m.GetMemberName() == "status") {
      got = de.ReadString(m);
    }
  });
  ASSERT_TRUE(got.has_value());
  EXPECT_EQ(got.value(), "ok");
}
