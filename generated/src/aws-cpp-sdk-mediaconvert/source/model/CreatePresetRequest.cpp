/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CreatePresetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePresetRequest::CreatePresetRequest() : 
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePresetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", m_category);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




