/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateAnnotationStoreVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAnnotationStoreVersionRequest::CreateAnnotationStoreVersionRequest() : 
    m_nameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAnnotationStoreVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("versionName", m_versionName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_versionOptionsHasBeenSet)
  {
   payload.WithObject("versionOptions", m_versionOptions.Jsonize());

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




