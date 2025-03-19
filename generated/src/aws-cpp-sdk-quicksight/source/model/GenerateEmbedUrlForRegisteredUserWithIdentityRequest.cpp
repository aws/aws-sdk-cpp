/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserWithIdentityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateEmbedUrlForRegisteredUserWithIdentityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionLifetimeInMinutesHasBeenSet)
  {
   payload.WithInt64("SessionLifetimeInMinutes", m_sessionLifetimeInMinutes);

  }

  if(m_experienceConfigurationHasBeenSet)
  {
   payload.WithObject("ExperienceConfiguration", m_experienceConfiguration.Jsonize());

  }

  if(m_allowedDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedDomainsJsonList(m_allowedDomains.size());
   for(unsigned allowedDomainsIndex = 0; allowedDomainsIndex < allowedDomainsJsonList.GetLength(); ++allowedDomainsIndex)
   {
     allowedDomainsJsonList[allowedDomainsIndex].AsString(m_allowedDomains[allowedDomainsIndex]);
   }
   payload.WithArray("AllowedDomains", std::move(allowedDomainsJsonList));

  }

  return payload.View().WriteReadable();
}




