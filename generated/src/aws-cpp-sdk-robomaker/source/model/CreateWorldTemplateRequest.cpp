/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateWorldTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorldTemplateRequest::CreateWorldTemplateRequest() : 
    m_clientRequestTokenHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateLocationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorldTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_templateLocationHasBeenSet)
  {
   payload.WithObject("templateLocation", m_templateLocation.Jsonize());

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




