/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceDetails.h>
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

AwsEcsServiceDetails::AwsEcsServiceDetails() : 
    m_capacityProviderStrategyHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
    m_deploymentControllerHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_enableEcsManagedTags(false),
    m_enableEcsManagedTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_healthCheckGracePeriodSeconds(0),
    m_healthCheckGracePeriodSecondsHasBeenSet(false),
    m_launchTypeHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategiesHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_propagateTagsHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_schedulingStrategyHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false)
{
}

AwsEcsServiceDetails::AwsEcsServiceDetails(JsonView jsonValue) : 
    m_capacityProviderStrategyHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
    m_deploymentControllerHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_enableEcsManagedTags(false),
    m_enableEcsManagedTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_healthCheckGracePeriodSeconds(0),
    m_healthCheckGracePeriodSecondsHasBeenSet(false),
    m_launchTypeHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategiesHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_propagateTagsHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_schedulingStrategyHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceDetails& AwsEcsServiceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityProviderStrategy"))
  {
    Aws::Utils::Array<JsonView> capacityProviderStrategyJsonList = jsonValue.GetArray("CapacityProviderStrategy");
    for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
    {
      m_capacityProviderStrategy.push_back(capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject());
    }
    m_capacityProviderStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cluster"))
  {
    m_cluster = jsonValue.GetString("Cluster");

    m_clusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentConfiguration"))
  {
    m_deploymentConfiguration = jsonValue.GetObject("DeploymentConfiguration");

    m_deploymentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentController"))
  {
    m_deploymentController = jsonValue.GetObject("DeploymentController");

    m_deploymentControllerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DesiredCount"))
  {
    m_desiredCount = jsonValue.GetInteger("DesiredCount");

    m_desiredCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableEcsManagedTags"))
  {
    m_enableEcsManagedTags = jsonValue.GetBool("EnableEcsManagedTags");

    m_enableEcsManagedTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableExecuteCommand"))
  {
    m_enableExecuteCommand = jsonValue.GetBool("EnableExecuteCommand");

    m_enableExecuteCommandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckGracePeriodSeconds"))
  {
    m_healthCheckGracePeriodSeconds = jsonValue.GetInteger("HealthCheckGracePeriodSeconds");

    m_healthCheckGracePeriodSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchType"))
  {
    m_launchType = jsonValue.GetString("LaunchType");

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadBalancers"))
  {
    Aws::Utils::Array<JsonView> loadBalancersJsonList = jsonValue.GetArray("LoadBalancers");
    for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
    {
      m_loadBalancers.push_back(loadBalancersJsonList[loadBalancersIndex].AsObject());
    }
    m_loadBalancersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("NetworkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlacementConstraints"))
  {
    Aws::Utils::Array<JsonView> placementConstraintsJsonList = jsonValue.GetArray("PlacementConstraints");
    for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
    {
      m_placementConstraints.push_back(placementConstraintsJsonList[placementConstraintsIndex].AsObject());
    }
    m_placementConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlacementStrategies"))
  {
    Aws::Utils::Array<JsonView> placementStrategiesJsonList = jsonValue.GetArray("PlacementStrategies");
    for(unsigned placementStrategiesIndex = 0; placementStrategiesIndex < placementStrategiesJsonList.GetLength(); ++placementStrategiesIndex)
    {
      m_placementStrategies.push_back(placementStrategiesJsonList[placementStrategiesIndex].AsObject());
    }
    m_placementStrategiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropagateTags"))
  {
    m_propagateTags = jsonValue.GetString("PropagateTags");

    m_propagateTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchedulingStrategy"))
  {
    m_schedulingStrategy = jsonValue.GetString("SchedulingStrategy");

    m_schedulingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRegistries"))
  {
    Aws::Utils::Array<JsonView> serviceRegistriesJsonList = jsonValue.GetArray("ServiceRegistries");
    for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
    {
      m_serviceRegistries.push_back(serviceRegistriesJsonList[serviceRegistriesIndex].AsObject());
    }
    m_serviceRegistriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskDefinition"))
  {
    m_taskDefinition = jsonValue.GetString("TaskDefinition");

    m_taskDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
   for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
   {
     capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject(m_capacityProviderStrategy[capacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("CapacityProviderStrategy", std::move(capacityProviderStrategyJsonList));

  }

  if(m_clusterHasBeenSet)
  {
   payload.WithString("Cluster", m_cluster);

  }

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("DeploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  if(m_deploymentControllerHasBeenSet)
  {
   payload.WithObject("DeploymentController", m_deploymentController.Jsonize());

  }

  if(m_desiredCountHasBeenSet)
  {
   payload.WithInteger("DesiredCount", m_desiredCount);

  }

  if(m_enableEcsManagedTagsHasBeenSet)
  {
   payload.WithBool("EnableEcsManagedTags", m_enableEcsManagedTags);

  }

  if(m_enableExecuteCommandHasBeenSet)
  {
   payload.WithBool("EnableExecuteCommand", m_enableExecuteCommand);

  }

  if(m_healthCheckGracePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("HealthCheckGracePeriodSeconds", m_healthCheckGracePeriodSeconds);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("LaunchType", m_launchType);

  }

  if(m_loadBalancersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loadBalancersJsonList(m_loadBalancers.size());
   for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
   {
     loadBalancersJsonList[loadBalancersIndex].AsObject(m_loadBalancers[loadBalancersIndex].Jsonize());
   }
   payload.WithArray("LoadBalancers", std::move(loadBalancersJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_placementConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementConstraintsJsonList(m_placementConstraints.size());
   for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
   {
     placementConstraintsJsonList[placementConstraintsIndex].AsObject(m_placementConstraints[placementConstraintsIndex].Jsonize());
   }
   payload.WithArray("PlacementConstraints", std::move(placementConstraintsJsonList));

  }

  if(m_placementStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementStrategiesJsonList(m_placementStrategies.size());
   for(unsigned placementStrategiesIndex = 0; placementStrategiesIndex < placementStrategiesJsonList.GetLength(); ++placementStrategiesIndex)
   {
     placementStrategiesJsonList[placementStrategiesIndex].AsObject(m_placementStrategies[placementStrategiesIndex].Jsonize());
   }
   payload.WithArray("PlacementStrategies", std::move(placementStrategiesJsonList));

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithString("PropagateTags", m_propagateTags);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_schedulingStrategyHasBeenSet)
  {
   payload.WithString("SchedulingStrategy", m_schedulingStrategy);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_serviceRegistriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceRegistriesJsonList(m_serviceRegistries.size());
   for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
   {
     serviceRegistriesJsonList[serviceRegistriesIndex].AsObject(m_serviceRegistries[serviceRegistriesIndex].Jsonize());
   }
   payload.WithArray("ServiceRegistries", std::move(serviceRegistriesJsonList));

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("TaskDefinition", m_taskDefinition);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
