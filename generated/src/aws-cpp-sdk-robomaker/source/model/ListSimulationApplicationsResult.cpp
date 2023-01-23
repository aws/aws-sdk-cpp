/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListSimulationApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSimulationApplicationsResult::ListSimulationApplicationsResult()
{
}

ListSimulationApplicationsResult::ListSimulationApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSimulationApplicationsResult& ListSimulationApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("simulationApplicationSummaries"))
  {
    Aws::Utils::Array<JsonView> simulationApplicationSummariesJsonList = jsonValue.GetArray("simulationApplicationSummaries");
    for(unsigned simulationApplicationSummariesIndex = 0; simulationApplicationSummariesIndex < simulationApplicationSummariesJsonList.GetLength(); ++simulationApplicationSummariesIndex)
    {
      m_simulationApplicationSummaries.push_back(simulationApplicationSummariesJsonList[simulationApplicationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
