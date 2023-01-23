/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SearchAnalysesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAnalysesResult::SearchAnalysesResult() : 
    m_status(0)
{
}

SearchAnalysesResult::SearchAnalysesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

SearchAnalysesResult& SearchAnalysesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnalysisSummaryList"))
  {
    Aws::Utils::Array<JsonView> analysisSummaryListJsonList = jsonValue.GetArray("AnalysisSummaryList");
    for(unsigned analysisSummaryListIndex = 0; analysisSummaryListIndex < analysisSummaryListJsonList.GetLength(); ++analysisSummaryListIndex)
    {
      m_analysisSummaryList.push_back(analysisSummaryListJsonList[analysisSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
