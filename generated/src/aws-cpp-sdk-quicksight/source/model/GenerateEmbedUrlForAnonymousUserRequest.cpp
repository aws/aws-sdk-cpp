/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GenerateEmbedUrlForAnonymousUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateEmbedUrlForAnonymousUserRequest::GenerateEmbedUrlForAnonymousUserRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_sessionLifetimeInMinutes(0),
    m_sessionLifetimeInMinutesHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_sessionTagsHasBeenSet(false),
    m_authorizedResourceArnsHasBeenSet(false),
    m_experienceConfigurationHasBeenSet(false),
    m_allowedDomainsHasBeenSet(false)
{
}

Aws::String GenerateEmbedUrlForAnonymousUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionLifetimeInMinutesHasBeenSet)
  {
   payload.WithInt64("SessionLifetimeInMinutes", m_sessionLifetimeInMinutes);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_sessionTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sessionTagsJsonList(m_sessionTags.size());
   for(unsigned sessionTagsIndex = 0; sessionTagsIndex < sessionTagsJsonList.GetLength(); ++sessionTagsIndex)
   {
     sessionTagsJsonList[sessionTagsIndex].AsObject(m_sessionTags[sessionTagsIndex].Jsonize());
   }
   payload.WithArray("SessionTags", std::move(sessionTagsJsonList));

  }

  if(m_authorizedResourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedResourceArnsJsonList(m_authorizedResourceArns.size());
   for(unsigned authorizedResourceArnsIndex = 0; authorizedResourceArnsIndex < authorizedResourceArnsJsonList.GetLength(); ++authorizedResourceArnsIndex)
   {
     authorizedResourceArnsJsonList[authorizedResourceArnsIndex].AsString(m_authorizedResourceArns[authorizedResourceArnsIndex]);
   }
   payload.WithArray("AuthorizedResourceArns", std::move(authorizedResourceArnsJsonList));

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




