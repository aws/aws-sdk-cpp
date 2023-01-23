/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListTestRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTestRecommendationsResult::ListTestRecommendationsResult()
{
}

ListTestRecommendationsResult::ListTestRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTestRecommendationsResult& ListTestRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("testRecommendations"))
  {
    Aws::Utils::Array<JsonView> testRecommendationsJsonList = jsonValue.GetArray("testRecommendations");
    for(unsigned testRecommendationsIndex = 0; testRecommendationsIndex < testRecommendationsJsonList.GetLength(); ++testRecommendationsIndex)
    {
      m_testRecommendations.push_back(testRecommendationsJsonList[testRecommendationsIndex].AsObject());
    }
  }



  return *this;
}
