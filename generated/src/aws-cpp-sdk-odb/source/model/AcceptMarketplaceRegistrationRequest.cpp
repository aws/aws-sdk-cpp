/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/AcceptMarketplaceRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcceptMarketplaceRegistrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_marketplaceRegistrationTokenHasBeenSet)
  {
   payload.WithString("marketplaceRegistrationToken", m_marketplaceRegistrationToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptMarketplaceRegistrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.AcceptMarketplaceRegistration"));
  return headers;

}




