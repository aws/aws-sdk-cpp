﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ListAPIKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAPIKeysResult::ListAPIKeysResult()
{
}

ListAPIKeysResult::ListAPIKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAPIKeysResult& ListAPIKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("APIKeySummaries"))
  {
    Aws::Utils::Array<JsonView> aPIKeySummariesJsonList = jsonValue.GetArray("APIKeySummaries");
    for(unsigned aPIKeySummariesIndex = 0; aPIKeySummariesIndex < aPIKeySummariesJsonList.GetLength(); ++aPIKeySummariesIndex)
    {
      m_aPIKeySummaries.push_back(aPIKeySummariesJsonList[aPIKeySummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ApplicationIntegrationURL"))
  {
    m_applicationIntegrationURL = jsonValue.GetString("ApplicationIntegrationURL");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
