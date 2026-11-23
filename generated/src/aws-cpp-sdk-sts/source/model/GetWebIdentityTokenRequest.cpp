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
#include <aws/sts/model/GetWebIdentityTokenRequest.h>
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
class GetWebIdentityTokenRequest_TagSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit GetWebIdentityTokenRequest_TagSchemaSerdeSer(const Tag& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const Tag& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class GetWebIdentityTokenRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit GetWebIdentityTokenRequestSerializable(const GetWebIdentityTokenRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GetWebIdentityTokenRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void GetWebIdentityTokenRequest_TagSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.KeyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Key").value();
    serializer.WriteString(memberSchema, m_obj.GetKey());
  }
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Value").value();
    serializer.WriteString(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> GetWebIdentityTokenRequest_TagSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Tag")
      .PutMember("Key", smithy::schema::Schema::CreateString("Key"))
      .PutMember("Value", smithy::schema::Schema::CreateString("Value"))
      .Build();
}

void GetWebIdentityTokenRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AudienceHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Audience").value();
    serializer.WriteList(memberSchema, m_obj.GetAudience().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetAudience()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.DurationSecondsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("DurationSeconds").value();
    serializer.WriteInteger(memberSchema, m_obj.GetDurationSeconds());
  }
  if (m_obj.SigningAlgorithmHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SigningAlgorithm").value();
    serializer.WriteString(memberSchema, m_obj.GetSigningAlgorithm());
  }
  if (m_obj.TagsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Tags").value();
    serializer.WriteList(memberSchema, m_obj.GetTags().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTags()) {
        GetWebIdentityTokenRequest_TagSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> GetWebIdentityTokenRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GetWebIdentityTokenRequest")
      .PutMember("Audience", smithy::schema::Schema::ListBuilder("webIdentityTokenAudienceListType")
                                 .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                 .Build())
      .PutMember("DurationSeconds", smithy::schema::Schema::CreateInteger("DurationSeconds"))
      .PutMember("SigningAlgorithm", smithy::schema::Schema::CreateString("SigningAlgorithm"))
      .PutMember("Tags", smithy::schema::Schema::ListBuilder("tagListType")
                             .PutMember("member", GetWebIdentityTokenRequest_TagSchemaSerdeSer::BuildSchema())
                             .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> GetWebIdentityTokenRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<GetWebIdentityTokenRequestSerializable>("GetWebIdentityTokenRequestSerializable", *this);
}

Aws::String GetWebIdentityTokenRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext GetWebIdentityTokenRequest::GetSchemaSerdeContext() const {
  return {"GetWebIdentityToken", "2011-06-15"};
}

void GetWebIdentityTokenRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
