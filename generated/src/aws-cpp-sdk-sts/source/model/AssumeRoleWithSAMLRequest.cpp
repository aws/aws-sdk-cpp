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
#include <aws/sts/model/AssumeRoleWithSAMLRequest.h>
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
#include <smithy/identity/auth/built-in/NoAuthSchemeOption.h>

#include <numeric>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {
namespace {
class AssumeRoleWithSAMLRequest_PolicyDescriptorTypeSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleWithSAMLRequest_PolicyDescriptorTypeSchemaSerdeSer(const PolicyDescriptorType& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PolicyDescriptorType& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class AssumeRoleWithSAMLRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleWithSAMLRequestSerializable(const AssumeRoleWithSAMLRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AssumeRoleWithSAMLRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void AssumeRoleWithSAMLRequest_PolicyDescriptorTypeSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("arn").value();
    serializer.WriteString(memberSchema, m_obj.GetArn());
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleWithSAMLRequest_PolicyDescriptorTypeSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PolicyDescriptorType")
      .PutMember("arn", smithy::schema::Schema::CreateString("arn"))
      .Build();
}

void AssumeRoleWithSAMLRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RoleArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RoleArn").value();
    serializer.WriteString(memberSchema, m_obj.GetRoleArn());
  }
  if (m_obj.PrincipalArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PrincipalArn").value();
    serializer.WriteString(memberSchema, m_obj.GetPrincipalArn());
  }
  if (m_obj.SAMLAssertionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SAMLAssertion").value();
    serializer.WriteString(memberSchema, m_obj.GetSAMLAssertion());
  }
  if (m_obj.PolicyArnsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PolicyArns").value();
    serializer.WriteList(memberSchema, m_obj.GetPolicyArns().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetPolicyArns()) {
        AssumeRoleWithSAMLRequest_PolicyDescriptorTypeSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.PolicyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Policy").value();
    serializer.WriteString(memberSchema, m_obj.GetPolicy());
  }
  if (m_obj.DurationSecondsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DurationSeconds").value();
    serializer.WriteInteger(memberSchema, m_obj.GetDurationSeconds());
  }
  if (m_obj.MinimumSessionTokenSizeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MinimumSessionTokenSize").value();
    serializer.WriteInteger(memberSchema, m_obj.GetMinimumSessionTokenSize());
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleWithSAMLRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AssumeRoleWithSAMLRequest")
      .PutMember("RoleArn", smithy::schema::Schema::CreateString("RoleArn"))
      .PutMember("PrincipalArn", smithy::schema::Schema::CreateString("PrincipalArn"))
      .PutMember("SAMLAssertion", smithy::schema::Schema::CreateString("SAMLAssertion"))
      .PutMember("PolicyArns", smithy::schema::Schema::ListBuilder("policyDescriptorListType")
                                   .PutMember("member", AssumeRoleWithSAMLRequest_PolicyDescriptorTypeSchemaSerdeSer::BuildSchema())
                                   .Build())
      .PutMember("Policy", smithy::schema::Schema::CreateString("Policy"))
      .PutMember("DurationSeconds", smithy::schema::Schema::CreateInteger("DurationSeconds"))
      .PutMember("MinimumSessionTokenSize", smithy::schema::Schema::CreateInteger("MinimumSessionTokenSize"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> AssumeRoleWithSAMLRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<AssumeRoleWithSAMLRequestSerializable>("AssumeRoleWithSAMLRequestSerializable", *this);
}

Aws::String AssumeRoleWithSAMLRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext AssumeRoleWithSAMLRequest::GetSchemaSerdeContext() const {
  return {"AssumeRoleWithSAML", "2011-06-15"};
}

void AssumeRoleWithSAMLRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
Aws::Vector<smithy::AuthSchemeOption> AssumeRoleWithSAMLRequest::GetRequestSpecificSupportedAuth() const {
  Aws::Vector<smithy::AuthSchemeOption> authOptions{smithy::NoAuthSchemeOption::noAuthSchemeOption};
  return authOptions;
}
