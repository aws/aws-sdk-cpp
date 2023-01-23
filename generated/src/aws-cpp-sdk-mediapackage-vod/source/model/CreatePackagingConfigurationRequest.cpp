/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/CreatePackagingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePackagingConfigurationRequest::CreatePackagingConfigurationRequest() : 
    m_cmafPackageHasBeenSet(false),
    m_dashPackageHasBeenSet(false),
    m_hlsPackageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_mssPackageHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePackagingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cmafPackageHasBeenSet)
  {
   payload.WithObject("cmafPackage", m_cmafPackage.Jsonize());

  }

  if(m_dashPackageHasBeenSet)
  {
   payload.WithObject("dashPackage", m_dashPackage.Jsonize());

  }

  if(m_hlsPackageHasBeenSet)
  {
   payload.WithObject("hlsPackage", m_hlsPackage.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_mssPackageHasBeenSet)
  {
   payload.WithObject("mssPackage", m_mssPackage.Jsonize());

  }

  if(m_packagingGroupIdHasBeenSet)
  {
   payload.WithString("packagingGroupId", m_packagingGroupId);

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




