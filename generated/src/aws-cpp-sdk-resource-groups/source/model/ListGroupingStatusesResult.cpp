/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ListGroupingStatusesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroupingStatusesResult::ListGroupingStatusesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGroupingStatusesResult& ListGroupingStatusesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetString("Group");
    m_groupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupingStatuses"))
  {
    Aws::Utils::Array<JsonView> groupingStatusesJsonList = jsonValue.GetArray("GroupingStatuses");
    for(unsigned groupingStatusesIndex = 0; groupingStatusesIndex < groupingStatusesJsonList.GetLength(); ++groupingStatusesIndex)
    {
      m_groupingStatuses.push_back(groupingStatusesJsonList[groupingStatusesIndex].AsObject());
    }
    m_groupingStatusesHasBeenSet = true;
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
