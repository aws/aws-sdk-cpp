/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/CreateRegexPatternSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRegexPatternSetRequest::CreateRegexPatternSetRequest() : 
    m_nameHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regularExpressionListHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRegexPatternSetRequest::SerializePayload() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRegexPatternSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.CreateRegexPatternSet"));
  return headers;

}




