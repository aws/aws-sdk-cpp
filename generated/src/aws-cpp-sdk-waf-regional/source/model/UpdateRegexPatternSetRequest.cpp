/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/UpdateRegexPatternSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRegexPatternSetRequest::UpdateRegexPatternSetRequest() : 
    m_regexPatternSetIdHasBeenSet(false),
    m_updatesHasBeenSet(false),
    m_changeTokenHasBeenSet(false)
{
}

Aws::String UpdateRegexPatternSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_regexPatternSetIdHasBeenSet)
  {
   payload.WithString("RegexPatternSetId", m_regexPatternSetId);

  }

  if(m_updatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updatesJsonList(m_updates.size());
   for(unsigned updatesIndex = 0; updatesIndex < updatesJsonList.GetLength(); ++updatesIndex)
   {
     updatesJsonList[updatesIndex].AsObject(m_updates[updatesIndex].Jsonize());
   }
   payload.WithArray("Updates", std::move(updatesJsonList));

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRegexPatternSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.UpdateRegexPatternSet"));
  return headers;

}




