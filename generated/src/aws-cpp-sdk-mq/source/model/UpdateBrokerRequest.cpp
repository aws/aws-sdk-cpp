/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/UpdateBrokerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBrokerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authenticationStrategyHasBeenSet)
  {
   payload.WithString("authenticationStrategy", AuthenticationStrategyMapper::GetNameForAuthenticationStrategy(m_authenticationStrategy));
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("autoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("hostInstanceType", m_hostInstanceType);

  }

  if(m_ldapServerMetadataHasBeenSet)
  {
   payload.WithObject("ldapServerMetadata", m_ldapServerMetadata.Jsonize());

  }

  if(m_logsHasBeenSet)
  {
   payload.WithObject("logs", m_logs.Jsonize());

  }

  if(m_maintenanceWindowStartTimeHasBeenSet)
  {
   payload.WithObject("maintenanceWindowStartTime", m_maintenanceWindowStartTime.Jsonize());

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_dataReplicationModeHasBeenSet)
  {
   payload.WithString("dataReplicationMode", DataReplicationModeMapper::GetNameForDataReplicationMode(m_dataReplicationMode));
  }

  return payload.View().WriteReadable();
}




