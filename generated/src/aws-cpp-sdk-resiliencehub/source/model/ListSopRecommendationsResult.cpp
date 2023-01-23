/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListSopRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSopRecommendationsResult::ListSopRecommendationsResult()
{
}

ListSopRecommendationsResult::ListSopRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSopRecommendationsResult& ListSopRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("sopRecommendations"))
  {
    Aws::Utils::Array<JsonView> sopRecommendationsJsonList = jsonValue.GetArray("sopRecommendations");
    for(unsigned sopRecommendationsIndex = 0; sopRecommendationsIndex < sopRecommendationsJsonList.GetLength(); ++sopRecommendationsIndex)
    {
      m_sopRecommendations.push_back(sopRecommendationsJsonList[sopRecommendationsIndex].AsObject());
    }
  }



  return *this;
}
