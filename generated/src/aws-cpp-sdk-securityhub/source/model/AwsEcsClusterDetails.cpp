/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsClusterDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsClusterDetails::AwsEcsClusterDetails() : 
    m_clusterArnHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false),
    m_capacityProvidersHasBeenSet(false),
    m_clusterSettingsHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsEcsClusterDetails::AwsEcsClusterDetails(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false),
    m_capacityProvidersHasBeenSet(false),
    m_clusterSettingsHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsClusterDetails& AwsEcsClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveServicesCount"))
  {
    m_activeServicesCount = jsonValue.GetInteger("ActiveServicesCount");

    m_activeServicesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityProviders"))
  {
    Aws::Utils::Array<JsonView> capacityProvidersJsonList = jsonValue.GetArray("CapacityProviders");
    for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
    {
      m_capacityProviders.push_back(capacityProvidersJsonList[capacityProvidersIndex].AsString());
    }
    m_capacityProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterSettings"))
  {
    Aws::Utils::Array<JsonView> clusterSettingsJsonList = jsonValue.GetArray("ClusterSettings");
    for(unsigned clusterSettingsIndex = 0; clusterSettingsIndex < clusterSettingsJsonList.GetLength(); ++clusterSettingsIndex)
    {
      m_clusterSettings.push_back(clusterSettingsJsonList[clusterSettingsIndex].AsObject());
    }
    m_clusterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultCapacityProviderStrategy"))
  {
    Aws::Utils::Array<JsonView> defaultCapacityProviderStrategyJsonList = jsonValue.GetArray("DefaultCapacityProviderStrategy");
    for(unsigned defaultCapacityProviderStrategyIndex = 0; defaultCapacityProviderStrategyIndex < defaultCapacityProviderStrategyJsonList.GetLength(); ++defaultCapacityProviderStrategyIndex)
    {
      m_defaultCapacityProviderStrategy.push_back(defaultCapacityProviderStrategyJsonList[defaultCapacityProviderStrategyIndex].AsObject());
    }
    m_defaultCapacityProviderStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisteredContainerInstancesCount"))
  {
    m_registeredContainerInstancesCount = jsonValue.GetInteger("RegisteredContainerInstancesCount");

    m_registeredContainerInstancesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunningTasksCount"))
  {
    m_runningTasksCount = jsonValue.GetInteger("RunningTasksCount");

    m_runningTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_activeServicesCountHasBeenSet)
  {
   payload.WithInteger("ActiveServicesCount", m_activeServicesCount);

  }

  if(m_capacityProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProvidersJsonList(m_capacityProviders.size());
   for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
   {
     capacityProvidersJsonList[capacityProvidersIndex].AsString(m_capacityProviders[capacityProvidersIndex]);
   }
   payload.WithArray("CapacityProviders", std::move(capacityProvidersJsonList));

  }

  if(m_clusterSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterSettingsJsonList(m_clusterSettings.size());
   for(unsigned clusterSettingsIndex = 0; clusterSettingsIndex < clusterSettingsJsonList.GetLength(); ++clusterSettingsIndex)
   {
     clusterSettingsJsonList[clusterSettingsIndex].AsObject(m_clusterSettings[clusterSettingsIndex].Jsonize());
   }
   payload.WithArray("ClusterSettings", std::move(clusterSettingsJsonList));

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_defaultCapacityProviderStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultCapacityProviderStrategyJsonList(m_defaultCapacityProviderStrategy.size());
   for(unsigned defaultCapacityProviderStrategyIndex = 0; defaultCapacityProviderStrategyIndex < defaultCapacityProviderStrategyJsonList.GetLength(); ++defaultCapacityProviderStrategyIndex)
   {
     defaultCapacityProviderStrategyJsonList[defaultCapacityProviderStrategyIndex].AsObject(m_defaultCapacityProviderStrategy[defaultCapacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("DefaultCapacityProviderStrategy", std::move(defaultCapacityProviderStrategyJsonList));

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_registeredContainerInstancesCountHasBeenSet)
  {
   payload.WithInteger("RegisteredContainerInstancesCount", m_registeredContainerInstancesCount);

  }

  if(m_runningTasksCountHasBeenSet)
  {
   payload.WithInteger("RunningTasksCount", m_runningTasksCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
