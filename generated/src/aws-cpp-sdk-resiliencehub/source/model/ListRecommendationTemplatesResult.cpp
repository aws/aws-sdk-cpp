/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListRecommendationTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecommendationTemplatesResult::ListRecommendationTemplatesResult()
{
}

ListRecommendationTemplatesResult::ListRecommendationTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecommendationTemplatesResult& ListRecommendationTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("recommendationTemplates"))
  {
    Aws::Utils::Array<JsonView> recommendationTemplatesJsonList = jsonValue.GetArray("recommendationTemplates");
    for(unsigned recommendationTemplatesIndex = 0; recommendationTemplatesIndex < recommendationTemplatesJsonList.GetLength(); ++recommendationTemplatesIndex)
    {
      m_recommendationTemplates.push_back(recommendationTemplatesJsonList[recommendationTemplatesIndex].AsObject());
    }
  }



  return *this;
}
