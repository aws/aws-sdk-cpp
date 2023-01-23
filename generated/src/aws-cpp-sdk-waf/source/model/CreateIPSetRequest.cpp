/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/CreateIPSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIPSetRequest::CreateIPSetRequest() : 
    m_nameHasBeenSet(false),
    m_changeTokenHasBeenSet(false)
{
}

Aws::String CreateIPSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_changeTokenHasBeenSet)
  {
   payload.WithString("ChangeToken", m_changeToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateIPSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.CreateIPSet"));
  return headers;

}




