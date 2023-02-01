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
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_sseConfigHasBeenSet(false),
    m_storeFormat(StoreFormat::NOT_SET),
    m_storeFormatHasBeenSet(false),
    m_storeOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAnnotationStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_referenceHasBeenSet)
  {
   payload.WithObject("reference", m_reference.Jsonize());

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




