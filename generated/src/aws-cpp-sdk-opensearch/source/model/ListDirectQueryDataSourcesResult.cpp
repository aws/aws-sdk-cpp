/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ListDirectQueryDataSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDirectQueryDataSourcesResult::ListDirectQueryDataSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDirectQueryDataSourcesResult& ListDirectQueryDataSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DirectQueryDataSources"))
  {
    Aws::Utils::Array<JsonView> directQueryDataSourcesJsonList = jsonValue.GetArray("DirectQueryDataSources");
    for(unsigned directQueryDataSourcesIndex = 0; directQueryDataSourcesIndex < directQueryDataSourcesJsonList.GetLength(); ++directQueryDataSourcesIndex)
    {
      m_directQueryDataSources.push_back(directQueryDataSourcesJsonList[directQueryDataSourcesIndex].AsObject());
    }
    m_directQueryDataSourcesHasBeenSet = true;
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
