/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/GetActionRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetActionRecommendationsResult::GetActionRecommendationsResult()
{
}

GetActionRecommendationsResult::GetActionRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetActionRecommendationsResult& GetActionRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionList"))
  {
    Aws::Utils::Array<JsonView> actionListJsonList = jsonValue.GetArray("actionList");
    for(unsigned actionListIndex = 0; actionListIndex < actionListJsonList.GetLength(); ++actionListIndex)
    {
      m_actionList.push_back(actionListJsonList[actionListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
