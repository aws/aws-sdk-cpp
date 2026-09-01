/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <smithy/client/schema/ClientProtocol.h>

#include <smithy/client/schema/QueryShapeSerializer.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/XmlShapeDeserializer.h>

using namespace smithy::schema;

namespace {
constexpr char ALLOC_TAG[] = "SmithyClientProtocol";

ClientProtocol::SerializerOutcome SerializeQuery(const Schema& schema, const SerializableStruct& input,
                                                 QueryShapeSerializer::Flavor flavor) {
  QueryShapeSerializer serializer(flavor);
  serializer.WriteStruct(schema, input);
  return serializer.GetPayload();
}
}

Aws::String RestJsonProtocol::GetProtocolId() const { return "aws.protocols#restJson1"; }
Aws::String RestJsonProtocol::GetContentType() const { return "application/json"; }
ClientProtocol::SerializerOutcome RestJsonProtocol::SerializeInput(const Schema& schema, const SerializableStruct& input) const {
  return m_codec.Serialize(schema, input);
}
Aws::UniquePtr<ShapeDeserializer> RestJsonProtocol::CreateOutputDeserializer(const unsigned char* data, size_t length) const {
  return m_codec.CreateDeserializer(data, length);
}

Aws::String AwsJson10Protocol::GetProtocolId() const { return "aws.protocols#awsJson1_0"; }
Aws::String AwsJson10Protocol::GetContentType() const { return "application/x-amz-json-1.0"; }
ClientProtocol::SerializerOutcome AwsJson10Protocol::SerializeInput(const Schema& schema, const SerializableStruct& input) const {
  return m_codec.Serialize(schema, input);
}
Aws::UniquePtr<ShapeDeserializer> AwsJson10Protocol::CreateOutputDeserializer(const unsigned char* data, size_t length) const {
  return m_codec.CreateDeserializer(data, length);
}

Aws::String AwsJson11Protocol::GetProtocolId() const { return "aws.protocols#awsJson1_1"; }
Aws::String AwsJson11Protocol::GetContentType() const { return "application/x-amz-json-1.1"; }
ClientProtocol::SerializerOutcome AwsJson11Protocol::SerializeInput(const Schema& schema, const SerializableStruct& input) const {
  return m_codec.Serialize(schema, input);
}
Aws::UniquePtr<ShapeDeserializer> AwsJson11Protocol::CreateOutputDeserializer(const unsigned char* data, size_t length) const {
  return m_codec.CreateDeserializer(data, length);
}

Aws::String RpcV2CborProtocol::GetProtocolId() const { return "smithy.protocols#rpcv2Cbor"; }
Aws::String RpcV2CborProtocol::GetContentType() const { return "application/cbor"; }
ClientProtocol::SerializerOutcome RpcV2CborProtocol::SerializeInput(const Schema& schema, const SerializableStruct& input) const {
  return m_codec.Serialize(schema, input);
}
Aws::UniquePtr<ShapeDeserializer> RpcV2CborProtocol::CreateOutputDeserializer(const unsigned char* data, size_t length) const {
  return m_codec.CreateDeserializer(data, length);
}

Aws::String RestXmlProtocol::GetProtocolId() const { return "aws.protocols#restXml"; }
Aws::String RestXmlProtocol::GetContentType() const { return "application/xml"; }
ClientProtocol::SerializerOutcome RestXmlProtocol::SerializeInput(const Schema& schema, const SerializableStruct& input) const {
  return m_codec.Serialize(schema, input);
}
Aws::UniquePtr<ShapeDeserializer> RestXmlProtocol::CreateOutputDeserializer(const unsigned char* data, size_t length) const {
  return m_codec.CreateDeserializer(data, length);
}

Aws::String AwsQueryProtocol::GetProtocolId() const { return "aws.protocols#awsQuery"; }
Aws::String AwsQueryProtocol::GetContentType() const { return "application/x-www-form-urlencoded"; }
ClientProtocol::SerializerOutcome AwsQueryProtocol::SerializeInput(const Schema& schema, const SerializableStruct& input) const {
  return SerializeQuery(schema, input, QueryShapeSerializer::Flavor::AwsQuery);
}
Aws::UniquePtr<ShapeDeserializer> AwsQueryProtocol::CreateOutputDeserializer(const unsigned char* data, size_t length) const {
  return Aws::MakeUnique<XmlShapeDeserializer>(ALLOC_TAG, data, length);
}

Aws::String Ec2QueryProtocol::GetProtocolId() const { return "aws.protocols#ec2Query"; }
Aws::String Ec2QueryProtocol::GetContentType() const { return "application/x-www-form-urlencoded"; }
ClientProtocol::SerializerOutcome Ec2QueryProtocol::SerializeInput(const Schema& schema, const SerializableStruct& input) const {
  return SerializeQuery(schema, input, QueryShapeSerializer::Flavor::Ec2Query);
}
Aws::UniquePtr<ShapeDeserializer> Ec2QueryProtocol::CreateOutputDeserializer(const unsigned char* data, size_t length) const {
  return Aws::MakeUnique<XmlShapeDeserializer>(ALLOC_TAG, data, length);
}
