/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetRegexPatternSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRegexPatternSetRequest::GetRegexPatternSetRequest() : 
    m_regexPatternSetIdHasBeenSet(false)
{
}

Aws::String GetRegexPatternSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_regexPatternSetIdHasBeenSet)
  {
   payload.WithString("RegexPatternSetId", m_regexPatternSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRegexPatternSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetRegexPatternSet"));
  return headers;

}




