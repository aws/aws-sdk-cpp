/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/CreatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePackageRequest::CreatePackageRequest() : 
    m_packageNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreatePackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




