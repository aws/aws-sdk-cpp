/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetS3AccessPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetS3AccessPolicyResult::GetS3AccessPolicyResult() : 
    m_storeType(StoreType::NOT_SET)
{
}

GetS3AccessPolicyResult::GetS3AccessPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetS3AccessPolicyResult()
{
  *this = result;
}

GetS3AccessPolicyResult& GetS3AccessPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("s3AccessPointArn"))
  {
    m_s3AccessPointArn = jsonValue.GetString("s3AccessPointArn");

  }

  if(jsonValue.ValueExists("storeId"))
  {
    m_storeId = jsonValue.GetString("storeId");

  }

  if(jsonValue.ValueExists("storeType"))
  {
    m_storeType = StoreTypeMapper::GetStoreTypeForName(jsonValue.GetString("storeType"));

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }

  if(jsonValue.ValueExists("s3AccessPolicy"))
  {
    m_s3AccessPolicy = jsonValue.GetString("s3AccessPolicy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
