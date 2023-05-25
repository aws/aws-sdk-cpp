/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GetWebACLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWebACLRequest::GetWebACLRequest() : 
    m_webACLIdHasBeenSet(false)
{
}

Aws::String GetWebACLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_webACLIdHasBeenSet)
  {
   payload.WithString("WebACLId", m_webACLId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetWebACLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_Regional_20161128.GetWebACL"));
  return headers;

}




