/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateAnnotationStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAnnotationStoreRequest::CreateAnnotationStoreRequest() : 
    m_referenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_sseConfigHasBeenSet(false),
    m_storeFormat(StoreFormat::NOT_SET),
    m_storeFormatHasBeenSet(false),
    m_storeOptionsHasBeenSet(false)
{
}

Aws::String CreateAnnotationStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_referenceHasBeenSet)
  {
   payload.WithObject("reference", m_reference.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("versionName", m_versionName);

  }

  if(m_sseConfigHasBeenSet)
  {
   payload.WithObject("sseConfig", m_sseConfig.Jsonize());

  }

  if(m_storeFormatHasBeenSet)
  {
   payload.WithString("storeFormat", StoreFormatMapper::GetNameForStoreFormat(m_storeFormat));
  }

  if(m_storeOptionsHasBeenSet)
  {
   payload.WithObject("storeOptions", m_storeOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




