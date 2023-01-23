/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ListScheduledQueriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScheduledQueriesResult::ListScheduledQueriesResult()
{
}

ListScheduledQueriesResult::ListScheduledQueriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListScheduledQueriesResult& ListScheduledQueriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScheduledQueries"))
  {
    Aws::Utils::Array<JsonView> scheduledQueriesJsonList = jsonValue.GetArray("ScheduledQueries");
    for(unsigned scheduledQueriesIndex = 0; scheduledQueriesIndex < scheduledQueriesJsonList.GetLength(); ++scheduledQueriesIndex)
    {
      m_scheduledQueries.push_back(scheduledQueriesJsonList[scheduledQueriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
