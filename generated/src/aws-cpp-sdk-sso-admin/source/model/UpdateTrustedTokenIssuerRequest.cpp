/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/UpdateTrustedTokenIssuerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrustedTokenIssuerRequest::UpdateTrustedTokenIssuerRequest() : 
    m_nameHasBeenSet(false),
    m_trustedTokenIssuerArnHasBeenSet(false),
    m_trustedTokenIssuerConfigurationHasBeenSet(false)
{
}

Aws::String UpdateTrustedTokenIssuerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_trustedTokenIssuerArnHasBeenSet)
  {
   payload.WithString("TrustedTokenIssuerArn", m_trustedTokenIssuerArn);

  }

  if(m_trustedTokenIssuerConfigurationHasBeenSet)
  {
   payload.WithObject("TrustedTokenIssuerConfiguration", m_trustedTokenIssuerConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTrustedTokenIssuerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.UpdateTrustedTokenIssuer"));
  return headers;

}




