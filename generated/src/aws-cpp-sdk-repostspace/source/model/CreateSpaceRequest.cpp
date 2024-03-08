/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/CreateSpaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSpaceRequest::CreateSpaceRequest() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_subdomainHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tier(TierLevel::NOT_SET),
    m_tierHasBeenSet(false),
    m_userKMSKeyHasBeenSet(false)
{
}

Aws::String CreateSpaceRequest::SerializePayload() const
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_subdomainHasBeenSet)
  {
   payload.WithString("subdomain", m_subdomain);

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

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", TierLevelMapper::GetNameForTierLevel(m_tier));
  }

  if(m_userKMSKeyHasBeenSet)
  {
   payload.WithString("userKMSKey", m_userKMSKey);

  }

  return payload.View().WriteReadable();
}




