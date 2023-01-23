/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/meteringmarketplace/model/RegisterUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterUsageRequest::RegisterUsageRequest() : 
    m_productCodeHasBeenSet(false),
    m_publicKeyVersion(0),
    m_publicKeyVersionHasBeenSet(false),
    m_nonceHasBeenSet(false)
{
}

Aws::String RegisterUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productCodeHasBeenSet)
  {
   payload.WithString("ProductCode", m_productCode);

  }

  if(m_publicKeyVersionHasBeenSet)
  {
   payload.WithInteger("PublicKeyVersion", m_publicKeyVersion);

  }

  if(m_nonceHasBeenSet)
  {
   payload.WithString("Nonce", m_nonce);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterUsageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPMeteringService.RegisterUsage"));
  return headers;

}




