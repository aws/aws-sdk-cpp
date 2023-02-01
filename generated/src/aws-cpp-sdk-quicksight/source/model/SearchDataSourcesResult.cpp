/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SearchDataSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchDataSourcesResult::SearchDataSourcesResult() : 
    m_status(0)
{
}

SearchDataSourcesResult::SearchDataSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

SearchDataSourcesResult& SearchDataSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataSourceSummaries"))
  {
    Aws::Utils::Array<JsonView> dataSourceSummariesJsonList = jsonValue.GetArray("DataSourceSummaries");
    for(unsigned dataSourceSummariesIndex = 0; dataSourceSummariesIndex < dataSourceSummariesJsonList.GetLength(); ++dataSourceSummariesIndex)
    {
      m_dataSourceSummaries.push_back(dataSourceSummariesJsonList[dataSourceSummariesIndex].AsObject());
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
