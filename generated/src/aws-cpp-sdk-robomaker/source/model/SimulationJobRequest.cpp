/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

SimulationJobRequest::SimulationJobRequest() : 
    m_outputLocationHasBeenSet(false),
    m_loggingConfigHasBeenSet(false),
    m_maxJobDurationInSeconds(0),
    m_maxJobDurationInSecondsHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_failureBehavior(FailureBehavior::NOT_SET),
    m_failureBehaviorHasBeenSet(false),
    m_useDefaultApplications(false),
    m_useDefaultApplicationsHasBeenSet(false),
    m_robotApplicationsHasBeenSet(false),
    m_simulationApplicationsHasBeenSet(false),
    m_dataSourcesHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_computeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SimulationJobRequest::SimulationJobRequest(JsonView jsonValue) : 
    m_outputLocationHasBeenSet(false),
    m_loggingConfigHasBeenSet(false),
    m_maxJobDurationInSeconds(0),
    m_maxJobDurationInSecondsHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_failureBehavior(FailureBehavior::NOT_SET),
    m_failureBehaviorHasBeenSet(false),
    m_useDefaultApplications(false),
    m_useDefaultApplicationsHasBeenSet(false),
    m_robotApplicationsHasBeenSet(false),
    m_simulationApplicationsHasBeenSet(false),
    m_dataSourcesHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_computeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationJobRequest& SimulationJobRequest::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetString("iamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureBehavior"))
  {
    m_failureBehavior = FailureBehaviorMapper::GetFailureBehaviorForName(jsonValue.GetString("failureBehavior"));

    m_failureBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useDefaultApplications"))
  {
    m_useDefaultApplications = jsonValue.GetBool("useDefaultApplications");

    m_useDefaultApplicationsHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationJobRequest::Jsonize() const
{
  JsonValue payload;

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("outputLocation", m_outputLocation.Jsonize());

  }

  if(m_loggingConfigHasBeenSet)
  {
   payload.WithObject("loggingConfig", m_loggingConfig.Jsonize());

  }

  if(m_maxJobDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("maxJobDurationInSeconds", m_maxJobDurationInSeconds);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("iamRole", m_iamRole);

  }

  if(m_failureBehaviorHasBeenSet)
  {
   payload.WithString("failureBehavior", FailureBehaviorMapper::GetNameForFailureBehavior(m_failureBehavior));
  }

  if(m_useDefaultApplicationsHasBeenSet)
  {
   payload.WithBool("useDefaultApplications", m_useDefaultApplications);

  }

  if(m_robotApplicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> robotApplicationsJsonList(m_robotApplications.size());
   for(unsigned robotApplicationsIndex = 0; robotApplicationsIndex < robotApplicationsJsonList.GetLength(); ++robotApplicationsIndex)
   {
     robotApplicationsJsonList[robotApplicationsIndex].AsObject(m_robotApplications[robotApplicationsIndex].Jsonize());
   }
   payload.WithArray("robotApplications", std::move(robotApplicationsJsonList));

  }

  if(m_simulationApplicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> simulationApplicationsJsonList(m_simulationApplications.size());
   for(unsigned simulationApplicationsIndex = 0; simulationApplicationsIndex < simulationApplicationsJsonList.GetLength(); ++simulationApplicationsIndex)
   {
     simulationApplicationsJsonList[simulationApplicationsIndex].AsObject(m_simulationApplications[simulationApplicationsIndex].Jsonize());
   }
   payload.WithArray("simulationApplications", std::move(simulationApplicationsJsonList));

  }

  if(m_dataSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
   for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
   {
     dataSourcesJsonList[dataSourcesIndex].AsObject(m_dataSources[dataSourcesIndex].Jsonize());
   }
   payload.WithArray("dataSources", std::move(dataSourcesJsonList));

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_computeHasBeenSet)
  {
   payload.WithObject("compute", m_compute.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
