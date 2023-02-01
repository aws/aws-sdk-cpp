/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/ListAppMonitorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppMonitorsResult::ListAppMonitorsResult()
{
}

ListAppMonitorsResult::ListAppMonitorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppMonitorsResult& ListAppMonitorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppMonitorSummaries"))
  {
    Aws::Utils::Array<JsonView> appMonitorSummariesJsonList = jsonValue.GetArray("AppMonitorSummaries");
    for(unsigned appMonitorSummariesIndex = 0; appMonitorSummariesIndex < appMonitorSummariesJsonList.GetLength(); ++appMonitorSummariesIndex)
    {
      m_appMonitorSummaries.push_back(appMonitorSummariesJsonList[appMonitorSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
