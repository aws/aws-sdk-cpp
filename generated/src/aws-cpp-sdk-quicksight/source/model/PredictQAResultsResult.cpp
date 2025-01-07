﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PredictQAResultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PredictQAResultsResult::PredictQAResultsResult() : 
    m_status(0)
{
}

PredictQAResultsResult::PredictQAResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : PredictQAResultsResult()
{
  *this = result;
}

PredictQAResultsResult& PredictQAResultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PrimaryResult"))
  {
    m_primaryResult = jsonValue.GetObject("PrimaryResult");

  }

  if(jsonValue.ValueExists("AdditionalResults"))
  {
    Aws::Utils::Array<JsonView> additionalResultsJsonList = jsonValue.GetArray("AdditionalResults");
    for(unsigned additionalResultsIndex = 0; additionalResultsIndex < additionalResultsJsonList.GetLength(); ++additionalResultsIndex)
    {
      m_additionalResults.push_back(additionalResultsJsonList[additionalResultsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
