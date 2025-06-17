/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetFindingStatisticsV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingStatisticsV2Result::GetFindingStatisticsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFindingStatisticsV2Result& GetFindingStatisticsV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupByResults"))
  {
    Aws::Utils::Array<JsonView> groupByResultsJsonList = jsonValue.GetArray("GroupByResults");
    for(unsigned groupByResultsIndex = 0; groupByResultsIndex < groupByResultsJsonList.GetLength(); ++groupByResultsIndex)
    {
      m_groupByResults.push_back(groupByResultsJsonList[groupByResultsIndex].AsObject());
    }
    m_groupByResultsHasBeenSet = true;
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
