﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/DescribeSavingsPlanRatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSavingsPlanRatesResult::DescribeSavingsPlanRatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSavingsPlanRatesResult& DescribeSavingsPlanRatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("savingsPlanId"))
  {
    m_savingsPlanId = jsonValue.GetString("savingsPlanId");
    m_savingsPlanIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("searchResults"))
  {
    Aws::Utils::Array<JsonView> searchResultsJsonList = jsonValue.GetArray("searchResults");
    for(unsigned searchResultsIndex = 0; searchResultsIndex < searchResultsJsonList.GetLength(); ++searchResultsIndex)
    {
      m_searchResults.push_back(searchResultsJsonList[searchResultsIndex].AsObject());
    }
    m_searchResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
