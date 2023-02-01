/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UpdatePresetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePresetRequest::UpdatePresetRequest() : 
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

Aws::String UpdatePresetRequest::SerializePayload() const
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

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  return payload.View().WriteReadable();
}




