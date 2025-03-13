/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RejectResourceGroupingRecommendationsResult.h>
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

RejectResourceGroupingRecommendationsResult::RejectResourceGroupingRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RejectResourceGroupingRecommendationsResult& RejectResourceGroupingRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");
    m_appArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failedEntries"))
  {
    Aws::Utils::Array<JsonView> failedEntriesJsonList = jsonValue.GetArray("failedEntries");
    for(unsigned failedEntriesIndex = 0; failedEntriesIndex < failedEntriesJsonList.GetLength(); ++failedEntriesIndex)
    {
      m_failedEntries.push_back(failedEntriesJsonList[failedEntriesIndex].AsObject());
    }
    m_failedEntriesHasBeenSet = true;
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
