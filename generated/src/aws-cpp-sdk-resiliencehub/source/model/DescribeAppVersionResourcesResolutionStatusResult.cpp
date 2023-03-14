/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DescribeAppVersionResourcesResolutionStatusResult.h>
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

DescribeAppVersionResourcesResolutionStatusResult::DescribeAppVersionResourcesResolutionStatusResult() : 
    m_status(ResourceResolutionStatusType::NOT_SET)
{
}

DescribeAppVersionResourcesResolutionStatusResult::DescribeAppVersionResourcesResolutionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ResourceResolutionStatusType::NOT_SET)
{
  *this = result;
}

DescribeAppVersionResourcesResolutionStatusResult& DescribeAppVersionResourcesResolutionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

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
