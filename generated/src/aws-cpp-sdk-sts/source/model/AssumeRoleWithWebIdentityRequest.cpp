/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
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

#include <atomic>
#include <mutex>
#include <numeric>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {
namespace {
template <typename Adapter>
class AssumeRoleWithWebIdentityRequestSchemaCache {
 public:
  static std::shared_ptr<const smithy::schema::Schema> Get() {
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_acquire)) {
      return *cached;
    }
    std::lock_guard<std::mutex> lock(s_mutex);
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_relaxed)) {
      return *cached;
    }
    std::shared_ptr<const smithy::schema::Schema>* built =
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("AssumeRoleWithWebIdentityRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("AssumeRoleWithWebIdentityRequestSchemaCache", built, &Release);
    s_schema.store(built, std::memory_order_release);
    return *built;
  }

 private:
  static void Release(void* schema, int64_t) {
    s_schema.store(nullptr, std::memory_order_release);
    Aws::Delete(static_cast<std::shared_ptr<const smithy::schema::Schema>*>(schema));
  }

  static std::atomic<std::shared_ptr<const smithy::schema::Schema>*> s_schema;
  static std::mutex s_mutex;
};
template <typename Adapter>
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> AssumeRoleWithWebIdentityRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex AssumeRoleWithWebIdentityRequestSchemaCache<Adapter>::s_mutex;

class AssumeRoleWithWebIdentityRequest_PolicyDescriptorTypeSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleWithWebIdentityRequest_PolicyDescriptorTypeSchemaSerdeSer(const PolicyDescriptorType& obj)
      : m_obj(obj),
        m_schema(AssumeRoleWithWebIdentityRequestSchemaCache<AssumeRoleWithWebIdentityRequest_PolicyDescriptorTypeSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PolicyDescriptorType& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class AssumeRoleWithWebIdentityRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleWithWebIdentityRequestSerializable(const AssumeRoleWithWebIdentityRequest& obj)
      : m_obj(obj), m_schema(AssumeRoleWithWebIdentityRequestSchemaCache<AssumeRoleWithWebIdentityRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AssumeRoleWithWebIdentityRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void AssumeRoleWithWebIdentityRequest_PolicyDescriptorTypeSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("arn").value();
    serializer.WriteString(memberSchema, m_obj.GetArn());
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleWithWebIdentityRequest_PolicyDescriptorTypeSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PolicyDescriptorType")
      .PutMember("arn", smithy::schema::Schema::CreateString("arn"))
      .Build();
}

void AssumeRoleWithWebIdentityRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RoleArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RoleArn").value();
    serializer.WriteString(memberSchema, m_obj.GetRoleArn());
  }
  if (m_obj.RoleSessionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RoleSessionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRoleSessionName());
  }
  if (m_obj.WebIdentityTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("WebIdentityToken").value();
    serializer.WriteString(memberSchema, m_obj.GetWebIdentityToken());
  }
  if (m_obj.ProviderIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProviderId").value();
    serializer.WriteString(memberSchema, m_obj.GetProviderId());
  }
  if (m_obj.PolicyArnsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PolicyArns").value();
    serializer.WriteList(memberSchema, m_obj.GetPolicyArns().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetPolicyArns()) {
        AssumeRoleWithWebIdentityRequest_PolicyDescriptorTypeSchemaSerdeSer nested1(item0);
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

std::shared_ptr<const smithy::schema::Schema> AssumeRoleWithWebIdentityRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AssumeRoleWithWebIdentityRequest")
      .PutMember("RoleArn", smithy::schema::Schema::CreateString("RoleArn"))
      .PutMember("RoleSessionName", smithy::schema::Schema::CreateString("RoleSessionName"))
      .PutMember("WebIdentityToken", smithy::schema::Schema::CreateString("WebIdentityToken"))
      .PutMember("ProviderId", smithy::schema::Schema::CreateString("ProviderId"))
      .PutMember(
          "PolicyArns",
          smithy::schema::Schema::ListBuilder("policyDescriptorListType")
              .PutMember(
                  "member",
                  AssumeRoleWithWebIdentityRequestSchemaCache<AssumeRoleWithWebIdentityRequest_PolicyDescriptorTypeSchemaSerdeSer>::Get())
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

Aws::UniquePtr<smithy::schema::SerializableStruct> AssumeRoleWithWebIdentityRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<AssumeRoleWithWebIdentityRequestSerializable>("AssumeRoleWithWebIdentityRequestSerializable", *this);
}

Aws::String AssumeRoleWithWebIdentityRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext AssumeRoleWithWebIdentityRequest::GetSchemaSerdeContext() const {
  return {"AssumeRoleWithWebIdentity", "2011-06-15"};
}

void AssumeRoleWithWebIdentityRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
Aws::Vector<smithy::AuthSchemeOption> AssumeRoleWithWebIdentityRequest::GetRequestSpecificSupportedAuth() const {
  Aws::Vector<smithy::AuthSchemeOption> authOptions{smithy::NoAuthSchemeOption::noAuthSchemeOption};
  return authOptions;
}
