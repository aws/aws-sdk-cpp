/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/StartConfigurationChecksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartConfigurationChecksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_configurationCheckIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationCheckIdsJsonList(m_configurationCheckIds.size());
   for(unsigned configurationCheckIdsIndex = 0; configurationCheckIdsIndex < configurationCheckIdsJsonList.GetLength(); ++configurationCheckIdsIndex)
   {
     configurationCheckIdsJsonList[configurationCheckIdsIndex].AsString(ConfigurationCheckTypeMapper::GetNameForConfigurationCheckType(m_configurationCheckIds[configurationCheckIdsIndex]));
   }
   payload.WithArray("ConfigurationCheckIds", std::move(configurationCheckIdsJsonList));

  }

  return payload.View().WriteReadable();
}




