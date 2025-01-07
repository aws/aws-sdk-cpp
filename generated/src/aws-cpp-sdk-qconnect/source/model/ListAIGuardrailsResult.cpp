﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ListAIGuardrailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAIGuardrailsResult::ListAIGuardrailsResult()
{
}

ListAIGuardrailsResult::ListAIGuardrailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAIGuardrailsResult& ListAIGuardrailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("aiGuardrailSummaries"))
  {
    Aws::Utils::Array<JsonView> aiGuardrailSummariesJsonList = jsonValue.GetArray("aiGuardrailSummaries");
    for(unsigned aiGuardrailSummariesIndex = 0; aiGuardrailSummariesIndex < aiGuardrailSummariesJsonList.GetLength(); ++aiGuardrailSummariesIndex)
    {
      m_aiGuardrailSummaries.push_back(aiGuardrailSummariesJsonList[aiGuardrailSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
