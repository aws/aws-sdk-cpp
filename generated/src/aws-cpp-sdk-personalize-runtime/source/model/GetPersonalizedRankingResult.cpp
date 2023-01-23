/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/GetPersonalizedRankingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPersonalizedRankingResult::GetPersonalizedRankingResult()
{
}

GetPersonalizedRankingResult::GetPersonalizedRankingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPersonalizedRankingResult& GetPersonalizedRankingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("personalizedRanking"))
  {
    Aws::Utils::Array<JsonView> personalizedRankingJsonList = jsonValue.GetArray("personalizedRanking");
    for(unsigned personalizedRankingIndex = 0; personalizedRankingIndex < personalizedRankingJsonList.GetLength(); ++personalizedRankingIndex)
    {
      m_personalizedRanking.push_back(personalizedRankingJsonList[personalizedRankingIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

  }



  return *this;
}
