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
#include <aws/sts/model/GetAccessKeyInfoRequest.h>
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
class GetAccessKeyInfoRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit GetAccessKeyInfoRequestSerializable(const GetAccessKeyInfoRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GetAccessKeyInfoRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void GetAccessKeyInfoRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AccessKeyIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("AccessKeyId").value();
    serializer.WriteString(memberSchema, m_obj.GetAccessKeyId());
  }
}

std::shared_ptr<const smithy::schema::Schema> GetAccessKeyInfoRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GetAccessKeyInfoRequest")
      .PutMember("AccessKeyId", smithy::schema::Schema::CreateString("AccessKeyId"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace STS
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> GetAccessKeyInfoRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<GetAccessKeyInfoRequestSerializable>("GetAccessKeyInfoRequestSerializable", *this);
}

Aws::String GetAccessKeyInfoRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext GetAccessKeyInfoRequest::GetSchemaSerdeContext() const {
  return {"GetAccessKeyInfo", "2011-06-15"};
}

void GetAccessKeyInfoRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
