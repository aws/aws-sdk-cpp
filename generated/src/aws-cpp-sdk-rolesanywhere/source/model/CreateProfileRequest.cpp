/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/CreateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProfileRequest::CreateProfileRequest() : 
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_managedPolicyArnsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requireInstanceProperties(false),
    m_requireInstancePropertiesHasBeenSet(false),
    m_roleArnsHasBeenSet(false),
    m_sessionPolicyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithInteger("durationSeconds", m_durationSeconds);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_managedPolicyArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedPolicyArnsJsonList(m_managedPolicyArns.size());
   for(unsigned managedPolicyArnsIndex = 0; managedPolicyArnsIndex < managedPolicyArnsJsonList.GetLength(); ++managedPolicyArnsIndex)
   {
     managedPolicyArnsJsonList[managedPolicyArnsIndex].AsString(m_managedPolicyArns[managedPolicyArnsIndex]);
   }
   payload.WithArray("managedPolicyArns", std::move(managedPolicyArnsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requireInstancePropertiesHasBeenSet)
  {
   payload.WithBool("requireInstanceProperties", m_requireInstanceProperties);

  }

  if(m_roleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> roleArnsJsonList(m_roleArns.size());
   for(unsigned roleArnsIndex = 0; roleArnsIndex < roleArnsJsonList.GetLength(); ++roleArnsIndex)
   {
     roleArnsJsonList[roleArnsIndex].AsString(m_roleArns[roleArnsIndex]);
   }
   payload.WithArray("roleArns", std::move(roleArnsJsonList));

  }

  if(m_sessionPolicyHasBeenSet)
  {
   payload.WithString("sessionPolicy", m_sessionPolicy);

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

  return payload.View().WriteReadable();
}




