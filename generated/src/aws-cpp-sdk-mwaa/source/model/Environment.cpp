/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/Environment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

Environment::Environment(JsonView jsonValue)
{
  *this = jsonValue;
}

Environment& Environment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebserverUrl"))
  {
    m_webserverUrl = jsonValue.GetString("WebserverUrl");
    m_webserverUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");
    m_serviceRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");
    m_kmsKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AirflowVersion"))
  {
    m_airflowVersion = jsonValue.GetString("AirflowVersion");
    m_airflowVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceBucketArn"))
  {
    m_sourceBucketArn = jsonValue.GetString("SourceBucketArn");
    m_sourceBucketArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DagS3Path"))
  {
    m_dagS3Path = jsonValue.GetString("DagS3Path");
    m_dagS3PathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PluginsS3Path"))
  {
    m_pluginsS3Path = jsonValue.GetString("PluginsS3Path");
    m_pluginsS3PathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PluginsS3ObjectVersion"))
  {
    m_pluginsS3ObjectVersion = jsonValue.GetString("PluginsS3ObjectVersion");
    m_pluginsS3ObjectVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequirementsS3Path"))
  {
    m_requirementsS3Path = jsonValue.GetString("RequirementsS3Path");
    m_requirementsS3PathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequirementsS3ObjectVersion"))
  {
    m_requirementsS3ObjectVersion = jsonValue.GetString("RequirementsS3ObjectVersion");
    m_requirementsS3ObjectVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartupScriptS3Path"))
  {
    m_startupScriptS3Path = jsonValue.GetString("StartupScriptS3Path");
    m_startupScriptS3PathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartupScriptS3ObjectVersion"))
  {
    m_startupScriptS3ObjectVersion = jsonValue.GetString("StartupScriptS3ObjectVersion");
    m_startupScriptS3ObjectVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AirflowConfigurationOptions"))
  {
    Aws::Map<Aws::String, JsonView> airflowConfigurationOptionsJsonMap = jsonValue.GetObject("AirflowConfigurationOptions").GetAllObjects();
    for(auto& airflowConfigurationOptionsItem : airflowConfigurationOptionsJsonMap)
    {
      m_airflowConfigurationOptions[airflowConfigurationOptionsItem.first] = airflowConfigurationOptionsItem.second.AsString();
    }
    m_airflowConfigurationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnvironmentClass"))
  {
    m_environmentClass = jsonValue.GetString("EnvironmentClass");
    m_environmentClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxWorkers"))
  {
    m_maxWorkers = jsonValue.GetInteger("MaxWorkers");
    m_maxWorkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("NetworkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LoggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("LoggingConfiguration");
    m_loggingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdate"))
  {
    m_lastUpdate = jsonValue.GetObject("LastUpdate");
    m_lastUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WeeklyMaintenanceWindowStart"))
  {
    m_weeklyMaintenanceWindowStart = jsonValue.GetString("WeeklyMaintenanceWindowStart");
    m_weeklyMaintenanceWindowStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebserverAccessMode"))
  {
    m_webserverAccessMode = WebserverAccessModeMapper::GetWebserverAccessModeForName(jsonValue.GetString("WebserverAccessMode"));
    m_webserverAccessModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinWorkers"))
  {
    m_minWorkers = jsonValue.GetInteger("MinWorkers");
    m_minWorkersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schedulers"))
  {
    m_schedulers = jsonValue.GetInteger("Schedulers");
    m_schedulersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebserverVpcEndpointService"))
  {
    m_webserverVpcEndpointService = jsonValue.GetString("WebserverVpcEndpointService");
    m_webserverVpcEndpointServiceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseVpcEndpointService"))
  {
    m_databaseVpcEndpointService = jsonValue.GetString("DatabaseVpcEndpointService");
    m_databaseVpcEndpointServiceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CeleryExecutorQueue"))
  {
    m_celeryExecutorQueue = jsonValue.GetString("CeleryExecutorQueue");
    m_celeryExecutorQueueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointManagement"))
  {
    m_endpointManagement = EndpointManagementMapper::GetEndpointManagementForName(jsonValue.GetString("EndpointManagement"));
    m_endpointManagementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinWebservers"))
  {
    m_minWebservers = jsonValue.GetInteger("MinWebservers");
    m_minWebserversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxWebservers"))
  {
    m_maxWebservers = jsonValue.GetInteger("MaxWebservers");
    m_maxWebserversHasBeenSet = true;
  }
  return *this;
}

JsonValue Environment::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EnvironmentStatusMapper::GetNameForEnvironmentStatus(m_status));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_webserverUrlHasBeenSet)
  {
   payload.WithString("WebserverUrl", m_webserverUrl);

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("ExecutionRoleArn", m_executionRoleArn);

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  if(m_airflowVersionHasBeenSet)
  {
   payload.WithString("AirflowVersion", m_airflowVersion);

  }

  if(m_sourceBucketArnHasBeenSet)
  {
   payload.WithString("SourceBucketArn", m_sourceBucketArn);

  }

  if(m_dagS3PathHasBeenSet)
  {
   payload.WithString("DagS3Path", m_dagS3Path);

  }

  if(m_pluginsS3PathHasBeenSet)
  {
   payload.WithString("PluginsS3Path", m_pluginsS3Path);

  }

  if(m_pluginsS3ObjectVersionHasBeenSet)
  {
   payload.WithString("PluginsS3ObjectVersion", m_pluginsS3ObjectVersion);

  }

  if(m_requirementsS3PathHasBeenSet)
  {
   payload.WithString("RequirementsS3Path", m_requirementsS3Path);

  }

  if(m_requirementsS3ObjectVersionHasBeenSet)
  {
   payload.WithString("RequirementsS3ObjectVersion", m_requirementsS3ObjectVersion);

  }

  if(m_startupScriptS3PathHasBeenSet)
  {
   payload.WithString("StartupScriptS3Path", m_startupScriptS3Path);

  }

  if(m_startupScriptS3ObjectVersionHasBeenSet)
  {
   payload.WithString("StartupScriptS3ObjectVersion", m_startupScriptS3ObjectVersion);

  }

  if(m_airflowConfigurationOptionsHasBeenSet)
  {
   JsonValue airflowConfigurationOptionsJsonMap;
   for(auto& airflowConfigurationOptionsItem : m_airflowConfigurationOptions)
   {
     airflowConfigurationOptionsJsonMap.WithString(airflowConfigurationOptionsItem.first, airflowConfigurationOptionsItem.second);
   }
   payload.WithObject("AirflowConfigurationOptions", std::move(airflowConfigurationOptionsJsonMap));

  }

  if(m_environmentClassHasBeenSet)
  {
   payload.WithString("EnvironmentClass", m_environmentClass);

  }

  if(m_maxWorkersHasBeenSet)
  {
   payload.WithInteger("MaxWorkers", m_maxWorkers);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_loggingConfigurationHasBeenSet)
  {
   payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());

  }

  if(m_lastUpdateHasBeenSet)
  {
   payload.WithObject("LastUpdate", m_lastUpdate.Jsonize());

  }

  if(m_weeklyMaintenanceWindowStartHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceWindowStart", m_weeklyMaintenanceWindowStart);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_webserverAccessModeHasBeenSet)
  {
   payload.WithString("WebserverAccessMode", WebserverAccessModeMapper::GetNameForWebserverAccessMode(m_webserverAccessMode));
  }

  if(m_minWorkersHasBeenSet)
  {
   payload.WithInteger("MinWorkers", m_minWorkers);

  }

  if(m_schedulersHasBeenSet)
  {
   payload.WithInteger("Schedulers", m_schedulers);

  }

  if(m_webserverVpcEndpointServiceHasBeenSet)
  {
   payload.WithString("WebserverVpcEndpointService", m_webserverVpcEndpointService);

  }

  if(m_databaseVpcEndpointServiceHasBeenSet)
  {
   payload.WithString("DatabaseVpcEndpointService", m_databaseVpcEndpointService);

  }

  if(m_celeryExecutorQueueHasBeenSet)
  {
   payload.WithString("CeleryExecutorQueue", m_celeryExecutorQueue);

  }

  if(m_endpointManagementHasBeenSet)
  {
   payload.WithString("EndpointManagement", EndpointManagementMapper::GetNameForEndpointManagement(m_endpointManagement));
  }

  if(m_minWebserversHasBeenSet)
  {
   payload.WithInteger("MinWebservers", m_minWebservers);

  }

  if(m_maxWebserversHasBeenSet)
  {
   payload.WithInteger("MaxWebservers", m_maxWebservers);

  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
