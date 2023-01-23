/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListMonitoringExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMonitoringExecutionsResult::ListMonitoringExecutionsResult()
{
}

ListMonitoringExecutionsResult::ListMonitoringExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMonitoringExecutionsResult& ListMonitoringExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MonitoringExecutionSummaries"))
  {
    Aws::Utils::Array<JsonView> monitoringExecutionSummariesJsonList = jsonValue.GetArray("MonitoringExecutionSummaries");
    for(unsigned monitoringExecutionSummariesIndex = 0; monitoringExecutionSummariesIndex < monitoringExecutionSummariesJsonList.GetLength(); ++monitoringExecutionSummariesIndex)
    {
      m_monitoringExecutionSummaries.push_back(monitoringExecutionSummariesJsonList[monitoringExecutionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
