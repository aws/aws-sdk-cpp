﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UpdateSolNetworkInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSolNetworkInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modifyVnfInfoDataHasBeenSet)
  {
   payload.WithObject("modifyVnfInfoData", m_modifyVnfInfoData.Jsonize());

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

  if(m_updateNsHasBeenSet)
  {
   payload.WithObject("updateNs", m_updateNs.Jsonize());

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("updateType", UpdateSolNetworkTypeMapper::GetNameForUpdateSolNetworkType(m_updateType));
  }

  return payload.View().WriteReadable();
}




