/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateSimulationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSimulationJobResult::CreateSimulationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSimulationJobResult& CreateSimulationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SimulationJobStatusMapper::GetSimulationJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStartedAt"))
  {
    m_lastStartedAt = jsonValue.GetDouble("lastStartedAt");
    m_lastStartedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureBehavior"))
  {
    m_failureBehavior = FailureBehaviorMapper::GetFailureBehaviorForName(jsonValue.GetString("failureBehavior"));
    m_failureBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = SimulationJobErrorCodeMapper::GetSimulationJobErrorCodeForName(jsonValue.GetString("failureCode"));
    m_failureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");
    m_clientRequestTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetObject("outputLocation");
    m_outputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loggingConfig"))
  {
    m_loggingConfig = jsonValue.GetObject("loggingConfig");
    m_loggingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxJobDurationInSeconds"))
  {
    m_maxJobDurationInSeconds = jsonValue.GetInt64("maxJobDurationInSeconds");
    m_maxJobDurationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("simulationTimeMillis"))
  {
    m_simulationTimeMillis = jsonValue.GetInt64("simulationTimeMillis");
    m_simulationTimeMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetString("iamRole");
    m_iamRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("robotApplications"))
  {
    Aws::Utils::Array<JsonView> robotApplicationsJsonList = jsonValue.GetArray("robotApplications");
    for(unsigned robotApplicationsIndex = 0; robotApplicationsIndex < robotApplicationsJsonList.GetLength(); ++robotApplicationsIndex)
    {
      m_robotApplications.push_back(robotApplicationsJsonList[robotApplicationsIndex].AsObject());
    }
    m_robotApplicationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("simulationApplications"))
  {
    Aws::Utils::Array<JsonView> simulationApplicationsJsonList = jsonValue.GetArray("simulationApplications");
    for(unsigned simulationApplicationsIndex = 0; simulationApplicationsIndex < simulationApplicationsJsonList.GetLength(); ++simulationApplicationsIndex)
    {
      m_simulationApplications.push_back(simulationApplicationsJsonList[simulationApplicationsIndex].AsObject());
    }
    m_simulationApplicationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSources"))
  {
    Aws::Utils::Array<JsonView> dataSourcesJsonList = jsonValue.GetArray("dataSources");
    for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
    {
      m_dataSources.push_back(dataSourcesJsonList[dataSourcesIndex].AsObject());
    }
    m_dataSourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compute"))
  {
    m_compute = jsonValue.GetObject("compute");
    m_computeHasBeenSet = true;
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
