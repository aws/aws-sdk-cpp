/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/GetPoliciesStatsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPoliciesStatsResult::GetPoliciesStatsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPoliciesStatsResult& GetPoliciesStatsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessPolicyStats"))
  {
    m_accessPolicyStats = jsonValue.GetObject("AccessPolicyStats");
    m_accessPolicyStatsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityPolicyStats"))
  {
    m_securityPolicyStats = jsonValue.GetObject("SecurityPolicyStats");
    m_securityPolicyStatsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityConfigStats"))
  {
    m_securityConfigStats = jsonValue.GetObject("SecurityConfigStats");
    m_securityConfigStatsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LifecyclePolicyStats"))
  {
    m_lifecyclePolicyStats = jsonValue.GetObject("LifecyclePolicyStats");
    m_lifecyclePolicyStatsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalPolicyCount"))
  {
    m_totalPolicyCount = jsonValue.GetInt64("TotalPolicyCount");
    m_totalPolicyCountHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
