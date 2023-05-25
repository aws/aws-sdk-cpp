/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/DeleteRegexMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRegexMatchSetRequest::DeleteRegexMatchSetRequest() : 
    m_regexMatchSetIdHasBeenSet(false),
    m_changeTokenHasBeenSet(false)
{
}

Aws::String DeleteRegexMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_regexMatchSetIdHasBeenSet)
  {
   payload.WithString("RegexMatchSetId", m_regexMatchSetId);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteRegexMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.DeleteRegexMatchSet"));
  return headers;

}




