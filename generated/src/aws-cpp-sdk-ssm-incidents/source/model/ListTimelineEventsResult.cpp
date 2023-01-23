/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ListTimelineEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTimelineEventsResult::ListTimelineEventsResult()
{
}

ListTimelineEventsResult::ListTimelineEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTimelineEventsResult& ListTimelineEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventSummaries"))
  {
    Aws::Utils::Array<JsonView> eventSummariesJsonList = jsonValue.GetArray("eventSummaries");
    for(unsigned eventSummariesIndex = 0; eventSummariesIndex < eventSummariesJsonList.GetLength(); ++eventSummariesIndex)
    {
      m_eventSummaries.push_back(eventSummariesJsonList[eventSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
