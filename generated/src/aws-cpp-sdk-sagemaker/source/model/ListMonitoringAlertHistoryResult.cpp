/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListMonitoringAlertHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMonitoringAlertHistoryResult::ListMonitoringAlertHistoryResult()
{
}

ListMonitoringAlertHistoryResult::ListMonitoringAlertHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMonitoringAlertHistoryResult& ListMonitoringAlertHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitoringAlertHistory"))
  {
    Aws::Utils::Array<JsonView> monitoringAlertHistoryJsonList = jsonValue.GetArray("MonitoringAlertHistory");
    for(unsigned monitoringAlertHistoryIndex = 0; monitoringAlertHistoryIndex < monitoringAlertHistoryJsonList.GetLength(); ++monitoringAlertHistoryIndex)
    {
      m_monitoringAlertHistory.push_back(monitoringAlertHistoryJsonList[monitoringAlertHistoryIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
