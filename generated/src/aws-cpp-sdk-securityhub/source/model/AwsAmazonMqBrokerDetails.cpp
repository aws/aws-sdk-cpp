/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAmazonMqBrokerDetails.h>
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

AwsAmazonMqBrokerDetails::AwsAmazonMqBrokerDetails() : 
    m_authenticationStrategyHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_brokerArnHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_deploymentModeHasBeenSet(false),
    m_encryptionOptionsHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false),
    m_brokerIdHasBeenSet(false),
    m_ldapServerMetadataHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_maintenanceWindowStartTimeHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_usersHasBeenSet(false)
{
}

AwsAmazonMqBrokerDetails::AwsAmazonMqBrokerDetails(JsonView jsonValue) : 
    m_authenticationStrategyHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_brokerArnHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_deploymentModeHasBeenSet(false),
    m_encryptionOptionsHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_hostInstanceTypeHasBeenSet(false),
    m_brokerIdHasBeenSet(false),
    m_ldapServerMetadataHasBeenSet(false),
    m_logsHasBeenSet(false),
    m_maintenanceWindowStartTimeHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_usersHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAmazonMqBrokerDetails& AwsAmazonMqBrokerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationStrategy"))
  {
    m_authenticationStrategy = jsonValue.GetString("AuthenticationStrategy");

    m_authenticationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMinorVersionUpgrade"))
  {
    m_autoMinorVersionUpgrade = jsonValue.GetBool("AutoMinorVersionUpgrade");

    m_autoMinorVersionUpgradeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BrokerArn"))
  {
    m_brokerArn = jsonValue.GetString("BrokerArn");

    m_brokerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BrokerName"))
  {
    m_brokerName = jsonValue.GetString("BrokerName");

    m_brokerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentMode"))
  {
    m_deploymentMode = jsonValue.GetString("DeploymentMode");

    m_deploymentModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionOptions"))
  {
    m_encryptionOptions = jsonValue.GetObject("EncryptionOptions");

    m_encryptionOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineType"))
  {
    m_engineType = jsonValue.GetString("EngineType");

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostInstanceType"))
  {
    m_hostInstanceType = jsonValue.GetString("HostInstanceType");

    m_hostInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BrokerId"))
  {
    m_brokerId = jsonValue.GetString("BrokerId");

    m_brokerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LdapServerMetadata"))
  {
    m_ldapServerMetadata = jsonValue.GetObject("LdapServerMetadata");

    m_ldapServerMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logs"))
  {
    m_logs = jsonValue.GetObject("Logs");

    m_logsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceWindowStartTime"))
  {
    m_maintenanceWindowStartTime = jsonValue.GetObject("MaintenanceWindowStartTime");

    m_maintenanceWindowStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Users"))
  {
    Aws::Utils::Array<JsonView> usersJsonList = jsonValue.GetArray("Users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
    m_usersHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAmazonMqBrokerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationStrategyHasBeenSet)
  {
   payload.WithString("AuthenticationStrategy", m_authenticationStrategy);

  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("AutoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_brokerArnHasBeenSet)
  {
   payload.WithString("BrokerArn", m_brokerArn);

  }

  if(m_brokerNameHasBeenSet)
  {
   payload.WithString("BrokerName", m_brokerName);

  }

  if(m_deploymentModeHasBeenSet)
  {
   payload.WithString("DeploymentMode", m_deploymentMode);

  }

  if(m_encryptionOptionsHasBeenSet)
  {
   payload.WithObject("EncryptionOptions", m_encryptionOptions.Jsonize());

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("EngineType", m_engineType);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("HostInstanceType", m_hostInstanceType);

  }

  if(m_brokerIdHasBeenSet)
  {
   payload.WithString("BrokerId", m_brokerId);

  }

  if(m_ldapServerMetadataHasBeenSet)
  {
   payload.WithObject("LdapServerMetadata", m_ldapServerMetadata.Jsonize());

  }

  if(m_logsHasBeenSet)
  {
   payload.WithObject("Logs", m_logs.Jsonize());

  }

  if(m_maintenanceWindowStartTimeHasBeenSet)
  {
   payload.WithObject("MaintenanceWindowStartTime", m_maintenanceWindowStartTime.Jsonize());

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_usersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
   for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
   {
     usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
   }
   payload.WithArray("Users", std::move(usersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
