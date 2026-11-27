/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/GetSessionTokenResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <utility>

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetSessionTokenResult::GetSessionTokenResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

GetSessionTokenResult& GetSessionTokenResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const auto& headers = result.GetHeaderValueCollection();
  const auto requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_responseMetadata.SetRequestId(requestIdIter->second);
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::GetSessionTokenResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace Aws {
namespace STS {
namespace Model {
namespace {
template <typename Adapter>
class GetSessionTokenResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("GetSessionTokenResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("GetSessionTokenResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> GetSessionTokenResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex GetSessionTokenResultSchemaCache<Adapter>::s_mutex;

class GetSessionTokenResult_CredentialsSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit GetSessionTokenResult_CredentialsSchemaSerdeDeser(Credentials& obj)
      : m_obj(obj), m_schema(GetSessionTokenResultSchemaCache<GetSessionTokenResult_CredentialsSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Credentials& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class GetSessionTokenResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit GetSessionTokenResultDeserializable(GetSessionTokenResult& obj)
      : m_obj(obj), m_schema(GetSessionTokenResultSchemaCache<GetSessionTokenResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GetSessionTokenResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void GetSessionTokenResult_CredentialsSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> GetSessionTokenResult_CredentialsSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Credentials")
      .PutMember("AccessKeyId", smithy::schema::Schema::CreateString("AccessKeyId"))
      .PutMember("SecretAccessKey", smithy::schema::Schema::CreateString("SecretAccessKey"))
      .PutMember("SessionToken", smithy::schema::Schema::CreateString("SessionToken"))
      .PutMember("Expiration", smithy::schema::Schema::CreateTimestamp("Expiration"))
      .Build();
}

void GetSessionTokenResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Credentials") {
    Credentials nested0;
    GetSessionTokenResult_CredentialsSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetCredentials(std::move(nested0));
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

std::shared_ptr<const smithy::schema::Schema> GetSessionTokenResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GetSessionTokenResult")
      .PutMember("Credentials", GetSessionTokenResultSchemaCache<GetSessionTokenResult_CredentialsSchemaSerdeDeser>::Get())
      .PutMember("SessionTokenUtilization", smithy::schema::Schema::CreateInteger("SessionTokenUtilization"))
      .PutMember("SessionTokenSize", smithy::schema::Schema::CreateInteger("SessionTokenSize"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> GetSessionTokenResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<GetSessionTokenResultDeserializable>("GetSessionTokenResultDeserializable", *this);
}
