/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListTopicsResult.h>
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

ListTopicsResult::ListTopicsResult() : 
    m_status(0)
{
}

ListTopicsResult::ListTopicsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(0)
{
  *this = result;
}

ListTopicsResult& ListTopicsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TopicsSummaries"))
  {
    Aws::Utils::Array<JsonView> topicsSummariesJsonList = jsonValue.GetArray("TopicsSummaries");
    for(unsigned topicsSummariesIndex = 0; topicsSummariesIndex < topicsSummariesJsonList.GetLength(); ++topicsSummariesIndex)
    {
      m_topicsSummaries.push_back(topicsSummariesJsonList[topicsSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

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
