/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/NotifyRecommendationsReceivedResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

NotifyRecommendationsReceivedResult::NotifyRecommendationsReceivedResult()
{
}

NotifyRecommendationsReceivedResult::NotifyRecommendationsReceivedResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

NotifyRecommendationsReceivedResult& NotifyRecommendationsReceivedResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("recommendationIds"))
  {
    Aws::Utils::Array<JsonView> recommendationIdsJsonList = jsonValue.GetArray("recommendationIds");
    for(unsigned recommendationIdsIndex = 0; recommendationIdsIndex < recommendationIdsJsonList.GetLength(); ++recommendationIdsIndex)
    {
      m_recommendationIds.push_back(recommendationIdsJsonList[recommendationIdsIndex].AsString());
    }
  }



  return *this;
}
