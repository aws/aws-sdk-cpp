/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/UpdateSpaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSpaceRequest::UpdateSpaceRequest() : 
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_tier(TierLevel::NOT_SET),
    m_tierHasBeenSet(false)
{
}

Aws::String UpdateSpaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", TierLevelMapper::GetNameForTierLevel(m_tier));
  }

  return payload.View().WriteReadable();
}




