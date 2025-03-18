/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateRunCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRunCacheRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cacheBehaviorHasBeenSet)
  {
   payload.WithString("cacheBehavior", CacheBehaviorMapper::GetNameForCacheBehavior(m_cacheBehavior));
  }

  if(m_cacheS3LocationHasBeenSet)
  {
   payload.WithString("cacheS3Location", m_cacheS3Location);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_cacheBucketOwnerIdHasBeenSet)
  {
   payload.WithString("cacheBucketOwnerId", m_cacheBucketOwnerId);

  }

  return payload.View().WriteReadable();
}




