/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCloudFormationChangeSetRequest::CreateCloudFormationChangeSetRequest() : 
    m_applicationIdHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notificationArnsHasBeenSet(false),
    m_parameterOverridesHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_rollbackConfigurationHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

Aws::String CreateCloudFormationChangeSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(m_capabilities[capabilitiesIndex]);
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

  }

  if(m_changeSetNameHasBeenSet)
  {
   payload.WithString("changeSetName", m_changeSetName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_notificationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationArnsJsonList(m_notificationArns.size());
   for(unsigned notificationArnsIndex = 0; notificationArnsIndex < notificationArnsJsonList.GetLength(); ++notificationArnsIndex)
   {
     notificationArnsJsonList[notificationArnsIndex].AsString(m_notificationArns[notificationArnsIndex]);
   }
   payload.WithArray("notificationArns", std::move(notificationArnsJsonList));

  }

  if(m_parameterOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterOverridesJsonList(m_parameterOverrides.size());
   for(unsigned parameterOverridesIndex = 0; parameterOverridesIndex < parameterOverridesJsonList.GetLength(); ++parameterOverridesIndex)
   {
     parameterOverridesJsonList[parameterOverridesIndex].AsObject(m_parameterOverrides[parameterOverridesIndex].Jsonize());
   }
   payload.WithArray("parameterOverrides", std::move(parameterOverridesJsonList));

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
   }
   payload.WithArray("resourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_rollbackConfigurationHasBeenSet)
  {
   payload.WithObject("rollbackConfiguration", m_rollbackConfiguration.Jsonize());

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("stackName", m_stackName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("templateId", m_templateId);

  }

  return payload.View().WriteReadable();
}




