﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ListLongTermPricingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLongTermPricingResult::ListLongTermPricingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLongTermPricingResult& ListLongTermPricingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LongTermPricingEntries"))
  {
    Aws::Utils::Array<JsonView> longTermPricingEntriesJsonList = jsonValue.GetArray("LongTermPricingEntries");
    for(unsigned longTermPricingEntriesIndex = 0; longTermPricingEntriesIndex < longTermPricingEntriesJsonList.GetLength(); ++longTermPricingEntriesIndex)
    {
      m_longTermPricingEntries.push_back(longTermPricingEntriesJsonList[longTermPricingEntriesIndex].AsObject());
    }
    m_longTermPricingEntriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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
