/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ListNodesSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNodesSummaryResult::ListNodesSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNodesSummaryResult& ListNodesSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Summary"))
  {
    Aws::Utils::Array<JsonView> summaryJsonList = jsonValue.GetArray("Summary");
    for(unsigned summaryIndex = 0; summaryIndex < summaryJsonList.GetLength(); ++summaryIndex)
    {
      Aws::Map<Aws::String, JsonView> nodeSummaryJsonMap = summaryJsonList[summaryIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> nodeSummaryMap;
      for(auto& nodeSummaryItem : nodeSummaryJsonMap)
      {
        nodeSummaryMap[nodeSummaryItem.first] = nodeSummaryItem.second.AsString();
      }
      m_summary.push_back(std::move(nodeSummaryMap));
    }
    m_summaryHasBeenSet = true;
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
