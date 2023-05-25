/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/PutManagedRuleSetVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutManagedRuleSetVersionsRequest::PutManagedRuleSetVersionsRequest() : 
    m_nameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lockTokenHasBeenSet(false),
    m_recommendedVersionHasBeenSet(false),
    m_versionsToPublishHasBeenSet(false)
{
}

Aws::String PutManagedRuleSetVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_lockTokenHasBeenSet)
  {
   payload.WithString("LockToken", m_lockToken);

  }

  if(m_recommendedVersionHasBeenSet)
  {
   payload.WithString("RecommendedVersion", m_recommendedVersion);

  }

  if(m_versionsToPublishHasBeenSet)
  {
   JsonValue versionsToPublishJsonMap;
   for(auto& versionsToPublishItem : m_versionsToPublish)
   {
     versionsToPublishJsonMap.WithObject(versionsToPublishItem.first, versionsToPublishItem.second.Jsonize());
   }
   payload.WithObject("VersionsToPublish", std::move(versionsToPublishJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutManagedRuleSetVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.PutManagedRuleSetVersions"));
  return headers;

}




