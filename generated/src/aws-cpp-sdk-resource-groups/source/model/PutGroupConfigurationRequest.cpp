/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/PutGroupConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutGroupConfigurationRequest::PutGroupConfigurationRequest() : 
    m_groupHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

Aws::String PutGroupConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_configurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationJsonList(m_configuration.size());
   for(unsigned configurationIndex = 0; configurationIndex < configurationJsonList.GetLength(); ++configurationIndex)
   {
     configurationJsonList[configurationIndex].AsObject(m_configuration[configurationIndex].Jsonize());
   }
   payload.WithArray("Configuration", std::move(configurationJsonList));

  }

  return payload.View().WriteReadable();
}




