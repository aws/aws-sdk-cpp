/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/UpdateRegexPatternSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRegexPatternSetRequest::UpdateRegexPatternSetRequest() : 
    m_nameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regularExpressionListHasBeenSet(false),
    m_lockTokenHasBeenSet(false)
{
}

Aws::String UpdateRegexPatternSetRequest::SerializePayload() const
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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_regularExpressionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regularExpressionListJsonList(m_regularExpressionList.size());
   for(unsigned regularExpressionListIndex = 0; regularExpressionListIndex < regularExpressionListJsonList.GetLength(); ++regularExpressionListIndex)
   {
     regularExpressionListJsonList[regularExpressionListIndex].AsObject(m_regularExpressionList[regularExpressionListIndex].Jsonize());
   }
   payload.WithArray("RegularExpressionList", std::move(regularExpressionListJsonList));

  }

  if(m_lockTokenHasBeenSet)
  {
   payload.WithString("LockToken", m_lockToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRegexPatternSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.UpdateRegexPatternSet"));
  return headers;

}




