/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/PutAppLaunchConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAppLaunchConfigurationRequest::PutAppLaunchConfigurationRequest() : 
    m_appIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_autoLaunch(false),
    m_autoLaunchHasBeenSet(false),
    m_serverGroupLaunchConfigurationsHasBeenSet(false)
{
}

Aws::String PutAppLaunchConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_autoLaunchHasBeenSet)
  {
   payload.WithBool("autoLaunch", m_autoLaunch);

  }

  if(m_serverGroupLaunchConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverGroupLaunchConfigurationsJsonList(m_serverGroupLaunchConfigurations.size());
   for(unsigned serverGroupLaunchConfigurationsIndex = 0; serverGroupLaunchConfigurationsIndex < serverGroupLaunchConfigurationsJsonList.GetLength(); ++serverGroupLaunchConfigurationsIndex)
   {
     serverGroupLaunchConfigurationsJsonList[serverGroupLaunchConfigurationsIndex].AsObject(m_serverGroupLaunchConfigurations[serverGroupLaunchConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverGroupLaunchConfigurations", std::move(serverGroupLaunchConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAppLaunchConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.PutAppLaunchConfiguration"));
  return headers;

}




