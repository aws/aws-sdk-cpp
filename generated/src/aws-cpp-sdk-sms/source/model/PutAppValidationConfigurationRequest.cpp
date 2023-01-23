/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/PutAppValidationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAppValidationConfigurationRequest::PutAppValidationConfigurationRequest() : 
    m_appIdHasBeenSet(false),
    m_appValidationConfigurationsHasBeenSet(false),
    m_serverGroupValidationConfigurationsHasBeenSet(false)
{
}

Aws::String PutAppValidationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_appValidationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appValidationConfigurationsJsonList(m_appValidationConfigurations.size());
   for(unsigned appValidationConfigurationsIndex = 0; appValidationConfigurationsIndex < appValidationConfigurationsJsonList.GetLength(); ++appValidationConfigurationsIndex)
   {
     appValidationConfigurationsJsonList[appValidationConfigurationsIndex].AsObject(m_appValidationConfigurations[appValidationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("appValidationConfigurations", std::move(appValidationConfigurationsJsonList));

  }

  if(m_serverGroupValidationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverGroupValidationConfigurationsJsonList(m_serverGroupValidationConfigurations.size());
   for(unsigned serverGroupValidationConfigurationsIndex = 0; serverGroupValidationConfigurationsIndex < serverGroupValidationConfigurationsJsonList.GetLength(); ++serverGroupValidationConfigurationsIndex)
   {
     serverGroupValidationConfigurationsJsonList[serverGroupValidationConfigurationsIndex].AsObject(m_serverGroupValidationConfigurations[serverGroupValidationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("serverGroupValidationConfigurations", std::move(serverGroupValidationConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAppValidationConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.PutAppValidationConfiguration"));
  return headers;

}




