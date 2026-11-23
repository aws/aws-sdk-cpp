/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/GetFederationTokenRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <numeric>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {
namespace {
class GetFederationTokenRequest_PolicyDescriptorTypeSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit GetFederationTokenRequest_PolicyDescriptorTypeSchemaSerdeSer(const PolicyDescriptorType& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PolicyDescriptorType& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class GetFederationTokenRequest_TagSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit GetFederationTokenRequest_TagSchemaSerdeSer(const Tag& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Tag& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class GetFederationTokenRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit GetFederationTokenRequestSerializable(const GetFederationTokenRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GetFederationTokenRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void GetFederationTokenRequest_PolicyDescriptorTypeSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("arn").value();
    serializer.WriteString(memberSchema, m_obj.GetArn());
  }
}

std::shared_ptr<const smithy::schema::Schema> GetFederationTokenRequest_PolicyDescriptorTypeSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PolicyDescriptorType")
      .PutMember("arn", smithy::schema::Schema::CreateString("arn"))
      .Build();
}

void GetFederationTokenRequest_TagSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteString(memberSchema, m_obj.GetKey());
  }
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Value").value();
    serializer.WriteString(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> GetFederationTokenRequest_TagSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Tag")
      .PutMember("Key", smithy::schema::Schema::CreateString("Key"))
      .PutMember("Value", smithy::schema::Schema::CreateString("Value"))
      .Build();
}

void GetFederationTokenRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Name").value();
    serializer.WriteString(memberSchema, m_obj.GetName());
  }
  if (m_obj.PolicyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Policy").value();
    serializer.WriteString(memberSchema, m_obj.GetPolicy());
  }
  if (m_obj.PolicyArnsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PolicyArns").value();
    serializer.WriteList(memberSchema, m_obj.GetPolicyArns().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetPolicyArns()) {
        GetFederationTokenRequest_PolicyDescriptorTypeSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.DurationSecondsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DurationSeconds").value();
    serializer.WriteInteger(memberSchema, m_obj.GetDurationSeconds());
  }
  if (m_obj.TagsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Tags").value();
    serializer.WriteList(memberSchema, m_obj.GetTags().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTags()) {
        GetFederationTokenRequest_TagSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.MinimumSessionTokenSizeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MinimumSessionTokenSize").value();
    serializer.WriteInteger(memberSchema, m_obj.GetMinimumSessionTokenSize());
  }
}

std::shared_ptr<const smithy::schema::Schema> GetFederationTokenRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GetFederationTokenRequest")
      .PutMember("Name", smithy::schema::Schema::CreateString("Name"))
      .PutMember("Policy", smithy::schema::Schema::CreateString("Policy"))
      .PutMember("PolicyArns", smithy::schema::Schema::ListBuilder("policyDescriptorListType")
                                   .PutMember("member", GetFederationTokenRequest_PolicyDescriptorTypeSchemaSerdeSer::BuildSchema())
                                   .Build())
      .PutMember("DurationSeconds", smithy::schema::Schema::CreateInteger("DurationSeconds"))
      .PutMember("Tags", smithy::schema::Schema::ListBuilder("tagListType")
                             .PutMember("member", GetFederationTokenRequest_TagSchemaSerdeSer::BuildSchema())
                             .Build())
      .PutMember("MinimumSessionTokenSize", smithy::schema::Schema::CreateInteger("MinimumSessionTokenSize"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> GetFederationTokenRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<GetFederationTokenRequestSerializable>("GetFederationTokenRequestSerializable", *this);
}

Aws::String GetFederationTokenRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext GetFederationTokenRequest::GetSchemaSerdeContext() const {
  return {"GetFederationToken", "2011-06-15"};
}

void GetFederationTokenRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
