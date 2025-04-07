/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateSdiSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSdiSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", SdiSourceModeMapper::GetNameForSdiSourceMode(m_mode));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SdiSourceTypeMapper::GetNameForSdiSourceType(m_type));
  }

  return payload.View().WriteReadable();
}




