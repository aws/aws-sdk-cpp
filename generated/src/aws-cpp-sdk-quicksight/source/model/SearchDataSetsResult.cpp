/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SearchDataSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchDataSetsResult::SearchDataSetsResult() : 
    m_status(0)
{
}

SearchDataSetsResult::SearchDataSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

SearchDataSetsResult& SearchDataSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataSetSummaries"))
  {
    Aws::Utils::Array<JsonView> dataSetSummariesJsonList = jsonValue.GetArray("DataSetSummaries");
    for(unsigned dataSetSummariesIndex = 0; dataSetSummariesIndex < dataSetSummariesJsonList.GetLength(); ++dataSetSummariesIndex)
    {
      m_dataSetSummaries.push_back(dataSetSummariesJsonList[dataSetSummariesIndex].AsObject());
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
