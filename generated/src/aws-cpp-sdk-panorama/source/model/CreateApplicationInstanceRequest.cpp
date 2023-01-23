/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/CreateApplicationInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationInstanceRequest::CreateApplicationInstanceRequest() : 
    m_applicationInstanceIdToReplaceHasBeenSet(false),
    m_defaultRuntimeContextDeviceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_manifestOverridesPayloadHasBeenSet(false),
    m_manifestPayloadHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateApplicationInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationInstanceIdToReplaceHasBeenSet)
  {
   payload.WithString("ApplicationInstanceIdToReplace", m_applicationInstanceIdToReplace);

  }

  if(m_defaultRuntimeContextDeviceHasBeenSet)
  {
   payload.WithString("DefaultRuntimeContextDevice", m_defaultRuntimeContextDevice);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_manifestOverridesPayloadHasBeenSet)
  {
   payload.WithObject("ManifestOverridesPayload", m_manifestOverridesPayload.Jsonize());

  }

  if(m_manifestPayloadHasBeenSet)
  {
   payload.WithObject("ManifestPayload", m_manifestPayload.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_runtimeRoleArnHasBeenSet)
  {
   payload.WithString("RuntimeRoleArn", m_runtimeRoleArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




