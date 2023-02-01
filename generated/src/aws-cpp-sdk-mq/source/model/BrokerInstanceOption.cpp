/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/BrokerInstanceOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

BrokerInstanceOption::BrokerInstanceOption() : 
    m_availabilityZonesHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false),
    m_storageType(BrokerStorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_supportedDeploymentModesHasBeenSet(false),
    m_supportedEngineVersionsHasBeenSet(false)
{
}

BrokerInstanceOption::BrokerInstanceOption(JsonView jsonValue) : 
    m_availabilityZonesHasBeenSet(false),
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false),
    m_storageType(BrokerStorageType::NOT_SET),
    m_storageTypeHasBeenSet(false),
    m_supportedDeploymentModesHasBeenSet(false),
    m_supportedEngineVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerInstanceOption& BrokerInstanceOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsObject());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");

    m_hostInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = BrokerStorageTypeMapper::GetBrokerStorageTypeForName(jsonValue.GetString("storageType"));

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedDeploymentModes"))
  {
    Aws::Utils::Array<JsonView> supportedDeploymentModesJsonList = jsonValue.GetArray("supportedDeploymentModes");
    for(unsigned supportedDeploymentModesIndex = 0; supportedDeploymentModesIndex < supportedDeploymentModesJsonList.GetLength(); ++supportedDeploymentModesIndex)
    {
      m_supportedDeploymentModes.push_back(DeploymentModeMapper::GetDeploymentModeForName(supportedDeploymentModesJsonList[supportedDeploymentModesIndex].AsString()));
    }
    m_supportedDeploymentModesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedEngineVersions"))
  {
    Aws::Utils::Array<JsonView> supportedEngineVersionsJsonList = jsonValue.GetArray("supportedEngineVersions");
    for(unsigned supportedEngineVersionsIndex = 0; supportedEngineVersionsIndex < supportedEngineVersionsJsonList.GetLength(); ++supportedEngineVersionsIndex)
    {
      m_supportedEngineVersions.push_back(supportedEngineVersionsJsonList[supportedEngineVersionsIndex].AsString());
    }
    m_supportedEngineVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerInstanceOption::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsObject(m_availabilityZones[availabilityZonesIndex].Jsonize());
   }
   payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("hostInstanceType", m_hostInstanceType);

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", BrokerStorageTypeMapper::GetNameForBrokerStorageType(m_storageType));
  }

  if(m_supportedDeploymentModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedDeploymentModesJsonList(m_supportedDeploymentModes.size());
   for(unsigned supportedDeploymentModesIndex = 0; supportedDeploymentModesIndex < supportedDeploymentModesJsonList.GetLength(); ++supportedDeploymentModesIndex)
   {
     supportedDeploymentModesJsonList[supportedDeploymentModesIndex].AsString(DeploymentModeMapper::GetNameForDeploymentMode(m_supportedDeploymentModes[supportedDeploymentModesIndex]));
   }
   payload.WithArray("supportedDeploymentModes", std::move(supportedDeploymentModesJsonList));

  }

  if(m_supportedEngineVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedEngineVersionsJsonList(m_supportedEngineVersions.size());
   for(unsigned supportedEngineVersionsIndex = 0; supportedEngineVersionsIndex < supportedEngineVersionsJsonList.GetLength(); ++supportedEngineVersionsIndex)
   {
     supportedEngineVersionsJsonList[supportedEngineVersionsIndex].AsString(m_supportedEngineVersions[supportedEngineVersionsIndex]);
   }
   payload.WithArray("supportedEngineVersions", std::move(supportedEngineVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
