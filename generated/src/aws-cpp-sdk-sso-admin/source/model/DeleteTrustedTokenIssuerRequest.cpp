/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DeleteTrustedTokenIssuerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTrustedTokenIssuerRequest::DeleteTrustedTokenIssuerRequest() : 
    m_trustedTokenIssuerArnHasBeenSet(false)
{
}

Aws::String DeleteTrustedTokenIssuerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trustedTokenIssuerArnHasBeenSet)
  {
   payload.WithString("TrustedTokenIssuerArn", m_trustedTokenIssuerArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTrustedTokenIssuerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.DeleteTrustedTokenIssuer"));
  return headers;

}




