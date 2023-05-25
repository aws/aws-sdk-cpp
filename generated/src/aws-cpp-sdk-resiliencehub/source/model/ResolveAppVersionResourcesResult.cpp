/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResolveAppVersionResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResolveAppVersionResourcesResult::ResolveAppVersionResourcesResult() : 
    m_status(ResourceResolutionStatusType::NOT_SET)
{
}

ResolveAppVersionResourcesResult::ResolveAppVersionResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ResourceResolutionStatusType::NOT_SET)
{
  *this = result;
}

ResolveAppVersionResourcesResult& ResolveAppVersionResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");

  }

  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");

  }

  if(jsonValue.ValueExists("resolutionId"))
  {
    m_resolutionId = jsonValue.GetString("resolutionId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceResolutionStatusTypeMapper::GetResourceResolutionStatusTypeForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
