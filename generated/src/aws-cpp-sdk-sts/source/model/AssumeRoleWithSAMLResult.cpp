/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/AssumeRoleWithSAMLResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

AssumeRoleWithSAMLResult::AssumeRoleWithSAMLResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

AssumeRoleWithSAMLResult& AssumeRoleWithSAMLResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const auto& headers = result.GetHeaderValueCollection();
  const auto requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_responseMetadata.SetRequestId(requestIdIter->second);
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::AssumeRoleWithSAMLResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace Aws {
namespace STS {
namespace Model {
namespace {
class AssumeRoleWithSAMLResult_CredentialsSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleWithSAMLResult_CredentialsSchemaSerdeDeser(Credentials& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Credentials& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class AssumeRoleWithSAMLResult_AssumedRoleUserSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleWithSAMLResult_AssumedRoleUserSchemaSerdeDeser(AssumedRoleUser& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AssumedRoleUser& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class AssumeRoleWithSAMLResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleWithSAMLResultDeserializable(AssumeRoleWithSAMLResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AssumeRoleWithSAMLResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void AssumeRoleWithSAMLResult_CredentialsSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AccessKeyId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAccessKeyId(*value0);
    }
    return;
  }
  if (memberName == "SecretAccessKey") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSecretAccessKey(*value0);
    }
    return;
  }
  if (memberName == "SessionToken") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSessionToken(*value0);
    }
    return;
  }
  if (memberName == "Expiration") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExpiration(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleWithSAMLResult_CredentialsSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Credentials")
      .PutMember("AccessKeyId", smithy::schema::Schema::CreateString("AccessKeyId"))
      .PutMember("SecretAccessKey", smithy::schema::Schema::CreateString("SecretAccessKey"))
      .PutMember("SessionToken", smithy::schema::Schema::CreateString("SessionToken"))
      .PutMember("Expiration", smithy::schema::Schema::CreateTimestamp("Expiration"))
      .Build();
}

void AssumeRoleWithSAMLResult_AssumedRoleUserSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AssumedRoleId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAssumedRoleId(*value0);
    }
    return;
  }
  if (memberName == "Arn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetArn(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleWithSAMLResult_AssumedRoleUserSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AssumedRoleUser")
      .PutMember("AssumedRoleId", smithy::schema::Schema::CreateString("AssumedRoleId"))
      .PutMember("Arn", smithy::schema::Schema::CreateString("Arn"))
      .Build();
}

void AssumeRoleWithSAMLResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Credentials") {
    Credentials nested0;
    AssumeRoleWithSAMLResult_CredentialsSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetCredentials(std::move(nested0));
    return;
  }
  if (memberName == "AssumedRoleUser") {
    AssumedRoleUser nested0;
    AssumeRoleWithSAMLResult_AssumedRoleUserSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetAssumedRoleUser(std::move(nested0));
    return;
  }
  if (memberName == "Subject") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSubject(*value0);
    }
    return;
  }
  if (memberName == "SubjectType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSubjectType(*value0);
    }
    return;
  }
  if (memberName == "Issuer") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIssuer(*value0);
    }
    return;
  }
  if (memberName == "Audience") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAudience(*value0);
    }
    return;
  }
  if (memberName == "NameQualifier") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetNameQualifier(*value0);
    }
    return;
  }
  if (memberName == "SourceIdentity") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSourceIdentity(*value0);
    }
    return;
  }
  if (memberName == "SessionTokenUtilization") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSessionTokenUtilization(*value0);
    }
    return;
  }
  if (memberName == "SessionTokenSize") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSessionTokenSize(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleWithSAMLResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AssumeRoleWithSAMLResult")
      .PutMember("Credentials", AssumeRoleWithSAMLResult_CredentialsSchemaSerdeDeser::BuildSchema())
      .PutMember("AssumedRoleUser", AssumeRoleWithSAMLResult_AssumedRoleUserSchemaSerdeDeser::BuildSchema())
      .PutMember("Subject", smithy::schema::Schema::CreateString("Subject"))
      .PutMember("SubjectType", smithy::schema::Schema::CreateString("SubjectType"))
      .PutMember("Issuer", smithy::schema::Schema::CreateString("Issuer"))
      .PutMember("Audience", smithy::schema::Schema::CreateString("Audience"))
      .PutMember("NameQualifier", smithy::schema::Schema::CreateString("NameQualifier"))
      .PutMember("SourceIdentity", smithy::schema::Schema::CreateString("SourceIdentity"))
      .PutMember("SessionTokenUtilization", smithy::schema::Schema::CreateInteger("SessionTokenUtilization"))
      .PutMember("SessionTokenSize", smithy::schema::Schema::CreateInteger("SessionTokenSize"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> AssumeRoleWithSAMLResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<AssumeRoleWithSAMLResultDeserializable>("AssumeRoleWithSAMLResultDeserializable", *this);
}
