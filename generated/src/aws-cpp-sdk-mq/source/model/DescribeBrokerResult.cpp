/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeBrokerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBrokerResult::DescribeBrokerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBrokerResult& DescribeBrokerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionsRequired"))
  {
    Aws::Utils::Array<JsonView> actionsRequiredJsonList = jsonValue.GetArray("actionsRequired");
    for(unsigned actionsRequiredIndex = 0; actionsRequiredIndex < actionsRequiredJsonList.GetLength(); ++actionsRequiredIndex)
    {
      m_actionsRequired.push_back(actionsRequiredJsonList[actionsRequiredIndex].AsObject());
    }
    m_actionsRequiredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationStrategy"))
  {
    m_authenticationStrategy = AuthenticationStrategyMapper::GetAuthenticationStrategyForName(jsonValue.GetString("authenticationStrategy"));
    m_authenticationStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("autoMinorVersionUpgrade");
    m_autoMinorVersionUpgradeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("brokerArn"))
  {
    m_brokerArn = jsonValue.GetString("brokerArn");
    m_brokerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");
    m_brokerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("brokerInstances"))
  {
    Aws::Utils::Array<JsonView> brokerInstancesJsonList = jsonValue.GetArray("brokerInstances");
    for(unsigned brokerInstancesIndex = 0; brokerInstancesIndex < brokerInstancesJsonList.GetLength(); ++brokerInstancesIndex)
    {
      m_brokerInstances.push_back(brokerInstancesJsonList[brokerInstancesIndex].AsObject());
    }
    m_brokerInstancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("brokerName"))
  {
    m_brokerName = jsonValue.GetString("brokerName");
    m_brokerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("brokerState"))
  {
    m_brokerState = BrokerStateMapper::GetBrokerStateForName(jsonValue.GetString("brokerState"));
    m_brokerStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurations"))
  {
    m_configurations = jsonValue.GetObject("configurations");
    m_configurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetString("created");
    m_createdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentMode"))
  {
    m_deploymentMode = DeploymentModeMapper::GetDeploymentModeForName(jsonValue.GetString("deploymentMode"));
    m_deploymentModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionOptions"))
  {
    m_encryptionOptions = jsonValue.GetObject("encryptionOptions");
    m_encryptionOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));
    m_engineTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("hostInstanceType");
    m_hostInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ldapServerMetadata"))
  {
    m_ldapServerMetadata = jsonValue.GetObject("ldapServerMetadata");
    m_ldapServerMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logs"))
  {
    m_logs = jsonValue.GetObject("logs");
    m_logsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maintenanceWindowStartTime"))
  {
    m_maintenanceWindowStartTime = jsonValue.GetObject("maintenanceWindowStartTime");
    m_maintenanceWindowStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingAuthenticationStrategy"))
  {
    m_pendingAuthenticationStrategy = AuthenticationStrategyMapper::GetAuthenticationStrategyForName(jsonValue.GetString("pendingAuthenticationStrategy"));
    m_pendingAuthenticationStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingEngineVersion"))
  {
    m_pendingEngineVersion = jsonValue.GetString("pendingEngineVersion");
    m_pendingEngineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingHostInstanceType"))
  {
    m_pendingHostInstanceType = jsonValue.GetString("pendingHostInstanceType");
    m_pendingHostInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingLdapServerMetadata"))
  {
    m_pendingLdapServerMetadata = jsonValue.GetObject("pendingLdapServerMetadata");
    m_pendingLdapServerMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> pendingSecurityGroupsJsonList = jsonValue.GetArray("pendingSecurityGroups");
    for(unsigned pendingSecurityGroupsIndex = 0; pendingSecurityGroupsIndex < pendingSecurityGroupsJsonList.GetLength(); ++pendingSecurityGroupsIndex)
    {
      m_pendingSecurityGroups.push_back(pendingSecurityGroupsJsonList[pendingSecurityGroupsIndex].AsString());
    }
    m_pendingSecurityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");
    m_publiclyAccessibleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = BrokerStorageTypeMapper::GetBrokerStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
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
  if(jsonValue.ValueExists("users"))
  {
    Aws::Utils::Array<JsonView> usersJsonList = jsonValue.GetArray("users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
    m_usersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataReplicationMetadata"))
  {
    m_dataReplicationMetadata = jsonValue.GetObject("dataReplicationMetadata");
    m_dataReplicationMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataReplicationMode"))
  {
    m_dataReplicationMode = DataReplicationModeMapper::GetDataReplicationModeForName(jsonValue.GetString("dataReplicationMode"));
    m_dataReplicationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingDataReplicationMetadata"))
  {
    m_pendingDataReplicationMetadata = jsonValue.GetObject("pendingDataReplicationMetadata");
    m_pendingDataReplicationMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingDataReplicationMode"))
  {
    m_pendingDataReplicationMode = DataReplicationModeMapper::GetDataReplicationModeForName(jsonValue.GetString("pendingDataReplicationMode"));
    m_pendingDataReplicationModeHasBeenSet = true;
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
