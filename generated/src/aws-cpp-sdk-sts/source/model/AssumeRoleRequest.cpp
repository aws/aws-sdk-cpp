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
#include <aws/sts/model/AssumeRoleRequest.h>
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
class AssumeRoleRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("AssumeRoleRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("AssumeRoleRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> AssumeRoleRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex AssumeRoleRequestSchemaCache<Adapter>::s_mutex;

class AssumeRoleRequest_PolicyDescriptorTypeSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleRequest_PolicyDescriptorTypeSchemaSerdeSer(const PolicyDescriptorType& obj)
      : m_obj(obj), m_schema(AssumeRoleRequestSchemaCache<AssumeRoleRequest_PolicyDescriptorTypeSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PolicyDescriptorType& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class AssumeRoleRequest_TagSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleRequest_TagSchemaSerdeSer(const Tag& obj)
      : m_obj(obj), m_schema(AssumeRoleRequestSchemaCache<AssumeRoleRequest_TagSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Tag& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class AssumeRoleRequest_ProvidedContextSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleRequest_ProvidedContextSchemaSerdeSer(const ProvidedContext& obj)
      : m_obj(obj), m_schema(AssumeRoleRequestSchemaCache<AssumeRoleRequest_ProvidedContextSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ProvidedContext& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class AssumeRoleRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit AssumeRoleRequestSerializable(const AssumeRoleRequest& obj)
      : m_obj(obj), m_schema(AssumeRoleRequestSchemaCache<AssumeRoleRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AssumeRoleRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void AssumeRoleRequest_PolicyDescriptorTypeSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("arn").value();
    serializer.WriteString(memberSchema, m_obj.GetArn());
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleRequest_PolicyDescriptorTypeSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PolicyDescriptorType")
      .PutMember("arn", smithy::schema::Schema::CreateString("arn"))
      .Build();
}

void AssumeRoleRequest_TagSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteString(memberSchema, m_obj.GetKey());
  }
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Value").value();
    serializer.WriteString(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleRequest_TagSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Tag")
      .PutMember("Key", smithy::schema::Schema::CreateString("Key"))
      .PutMember("Value", smithy::schema::Schema::CreateString("Value"))
      .Build();
}

void AssumeRoleRequest_ProvidedContextSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ProviderArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProviderArn").value();
    serializer.WriteString(memberSchema, m_obj.GetProviderArn());
  }
  if (m_obj.ContextAssertionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ContextAssertion").value();
    serializer.WriteString(memberSchema, m_obj.GetContextAssertion());
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleRequest_ProvidedContextSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvidedContext")
      .PutMember("ProviderArn", smithy::schema::Schema::CreateString("ProviderArn"))
      .PutMember("ContextAssertion", smithy::schema::Schema::CreateString("ContextAssertion"))
      .Build();
}

void AssumeRoleRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.RoleArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RoleArn").value();
    serializer.WriteString(memberSchema, m_obj.GetRoleArn());
  }
  if (m_obj.RoleSessionNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RoleSessionName").value();
    serializer.WriteString(memberSchema, m_obj.GetRoleSessionName());
  }
  if (m_obj.PolicyArnsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PolicyArns").value();
    serializer.WriteList(memberSchema, m_obj.GetPolicyArns().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetPolicyArns()) {
        AssumeRoleRequest_PolicyDescriptorTypeSchemaSerdeSer nested1(item0);
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
  if (m_obj.TagsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Tags").value();
    serializer.WriteList(memberSchema, m_obj.GetTags().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTags()) {
        AssumeRoleRequest_TagSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.TransitiveTagKeysHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TransitiveTagKeys").value();
    serializer.WriteList(memberSchema, m_obj.GetTransitiveTagKeys().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTransitiveTagKeys()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.ExternalIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExternalId").value();
    serializer.WriteString(memberSchema, m_obj.GetExternalId());
  }
  if (m_obj.SerialNumberHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SerialNumber").value();
    serializer.WriteString(memberSchema, m_obj.GetSerialNumber());
  }
  if (m_obj.TokenCodeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TokenCode").value();
    serializer.WriteString(memberSchema, m_obj.GetTokenCode());
  }
  if (m_obj.SourceIdentityHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SourceIdentity").value();
    serializer.WriteString(memberSchema, m_obj.GetSourceIdentity());
  }
  if (m_obj.ProvidedContextsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProvidedContexts").value();
    serializer.WriteList(memberSchema, m_obj.GetProvidedContexts().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetProvidedContexts()) {
        AssumeRoleRequest_ProvidedContextSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.MinimumSessionTokenSizeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MinimumSessionTokenSize").value();
    serializer.WriteInteger(memberSchema, m_obj.GetMinimumSessionTokenSize());
  }
}

std::shared_ptr<const smithy::schema::Schema> AssumeRoleRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AssumeRoleRequest")
      .PutMember("RoleArn", smithy::schema::Schema::CreateString("RoleArn"))
      .PutMember("RoleSessionName", smithy::schema::Schema::CreateString("RoleSessionName"))
      .PutMember("PolicyArns",
                 smithy::schema::Schema::ListBuilder("policyDescriptorListType")
                     .PutMember("member", AssumeRoleRequestSchemaCache<AssumeRoleRequest_PolicyDescriptorTypeSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("Policy", smithy::schema::Schema::CreateString("Policy"))
      .PutMember("DurationSeconds", smithy::schema::Schema::CreateInteger("DurationSeconds"))
      .PutMember("Tags", smithy::schema::Schema::ListBuilder("tagListType")
                             .PutMember("member", AssumeRoleRequestSchemaCache<AssumeRoleRequest_TagSchemaSerdeSer>::Get())
                             .Build())
      .PutMember(
          "TransitiveTagKeys",
          smithy::schema::Schema::ListBuilder("tagKeyListType").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember("ExternalId", smithy::schema::Schema::CreateString("ExternalId"))
      .PutMember("SerialNumber", smithy::schema::Schema::CreateString("SerialNumber"))
      .PutMember("TokenCode", smithy::schema::Schema::CreateString("TokenCode"))
      .PutMember("SourceIdentity", smithy::schema::Schema::CreateString("SourceIdentity"))
      .PutMember("ProvidedContexts",
                 smithy::schema::Schema::ListBuilder("ProvidedContextsListType")
                     .PutMember("member", AssumeRoleRequestSchemaCache<AssumeRoleRequest_ProvidedContextSchemaSerdeSer>::Get())
                     .Build())
      .PutMember("MinimumSessionTokenSize", smithy::schema::Schema::CreateInteger("MinimumSessionTokenSize"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> AssumeRoleRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<AssumeRoleRequestSerializable>("AssumeRoleRequestSerializable", *this);
}

Aws::String AssumeRoleRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext AssumeRoleRequest::GetSchemaSerdeContext() const { return {"AssumeRole", "2011-06-15"}; }

void AssumeRoleRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
