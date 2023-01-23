/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListMonitoringAlertsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMonitoringAlertsResult::ListMonitoringAlertsResult()
{
}

ListMonitoringAlertsResult::ListMonitoringAlertsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMonitoringAlertsResult& ListMonitoringAlertsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitoringAlertSummaries"))
  {
    Aws::Utils::Array<JsonView> monitoringAlertSummariesJsonList = jsonValue.GetArray("MonitoringAlertSummaries");
    for(unsigned monitoringAlertSummariesIndex = 0; monitoringAlertSummariesIndex < monitoringAlertSummariesJsonList.GetLength(); ++monitoringAlertSummariesIndex)
    {
      m_monitoringAlertSummaries.push_back(monitoringAlertSummariesJsonList[monitoringAlertSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
