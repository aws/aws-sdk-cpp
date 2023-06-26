/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/PutAppReplicationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAppReplicationConfigurationRequest::PutAppReplicationConfigurationRequest() : 
    m_appIdHasBeenSet(false),
    m_serverGroupReplicationConfigurationsHasBeenSet(false)
{
}

Aws::String PutAppReplicationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_serverGroupReplicationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverGroupReplicationConfigurationsJsonList(m_serverGroupReplicationConfigurations.size());
   for(unsigned serverGroupReplicationConfigurationsIndex = 0; serverGroupReplicationConfigurationsIndex < serverGroupReplicationConfigurationsJsonList.GetLength(); ++serverGroupReplicationConfigurationsIndex)
   {
     serverGroupReplicationConfigurationsJsonList[serverGroupReplicationConfigurationsIndex].AsObject(m_serverGroupReplicationConfigurations[serverGroupReplicationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverGroupReplicationConfigurations", std::move(serverGroupReplicationConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAppReplicationConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.PutAppReplicationConfiguration"));
  return headers;

}




