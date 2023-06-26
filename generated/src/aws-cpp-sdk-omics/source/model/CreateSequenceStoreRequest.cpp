﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateSequenceStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSequenceStoreRequest::CreateSequenceStoreRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sseConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_fallbackLocationHasBeenSet(false)
{
}

Aws::String CreateSequenceStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_sseConfigHasBeenSet)
  {
   payload.WithObject("sseConfig", m_sseConfig.Jsonize());

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_fallbackLocationHasBeenSet)
  {
   payload.WithString("fallbackLocation", m_fallbackLocation);

  }

  return payload.View().WriteReadable();
}




