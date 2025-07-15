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

Aws::String UpdateSpaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("tier", TierLevelMapper::GetNameForTierLevel(m_tier));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_supportedEmailDomainsHasBeenSet)
  {
   payload.WithObject("supportedEmailDomains", m_supportedEmailDomains.Jsonize());

  }

  return payload.View().WriteReadable();
}




