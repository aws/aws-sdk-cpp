/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GetDecryptedAPIKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDecryptedAPIKeyRequest::GetDecryptedAPIKeyRequest() : 
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_aPIKeyHasBeenSet(false)
{
}

Aws::String GetDecryptedAPIKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_aPIKeyHasBeenSet)
  {
   payload.WithString("APIKey", m_aPIKey);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDecryptedAPIKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.GetDecryptedAPIKey"));
  return headers;

}




