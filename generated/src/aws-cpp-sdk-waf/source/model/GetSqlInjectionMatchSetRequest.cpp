/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetSqlInjectionMatchSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSqlInjectionMatchSetRequest::GetSqlInjectionMatchSetRequest() : 
    m_sqlInjectionMatchSetIdHasBeenSet(false)
{
}

Aws::String GetSqlInjectionMatchSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sqlInjectionMatchSetIdHasBeenSet)
  {
   payload.WithString("SqlInjectionMatchSetId", m_sqlInjectionMatchSetId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSqlInjectionMatchSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.GetSqlInjectionMatchSet"));
  return headers;

}




