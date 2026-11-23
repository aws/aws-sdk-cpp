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
#include <aws/sts/model/GetWebIdentityTokenResult.h>
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

GetWebIdentityTokenResult::GetWebIdentityTokenResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

GetWebIdentityTokenResult& GetWebIdentityTokenResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const auto& headers = result.GetHeaderValueCollection();
  const auto requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_responseMetadata.SetRequestId(requestIdIter->second);
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::STS::Model::GetWebIdentityTokenResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace Aws {
namespace STS {
namespace Model {
namespace {
class GetWebIdentityTokenResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit GetWebIdentityTokenResultDeserializable(GetWebIdentityTokenResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GetWebIdentityTokenResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void GetWebIdentityTokenResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                   smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "WebIdentityToken") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWebIdentityToken(*value0);
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

std::shared_ptr<const smithy::schema::Schema> GetWebIdentityTokenResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GetWebIdentityTokenResult")
      .PutMember("WebIdentityToken", smithy::schema::Schema::CreateString("WebIdentityToken"))
      .PutMember("Expiration", smithy::schema::Schema::CreateTimestamp("Expiration"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> GetWebIdentityTokenResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<GetWebIdentityTokenResultDeserializable>("GetWebIdentityTokenResultDeserializable", *this);
}
