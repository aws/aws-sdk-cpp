/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetInsightSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInsightSummariesResult::GetInsightSummariesResult()
{
}

GetInsightSummariesResult::GetInsightSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInsightSummariesResult& GetInsightSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InsightSummaries"))
  {
    Aws::Utils::Array<JsonView> insightSummariesJsonList = jsonValue.GetArray("InsightSummaries");
    for(unsigned insightSummariesIndex = 0; insightSummariesIndex < insightSummariesJsonList.GetLength(); ++insightSummariesIndex)
    {
      m_insightSummaries.push_back(insightSummariesJsonList[insightSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
