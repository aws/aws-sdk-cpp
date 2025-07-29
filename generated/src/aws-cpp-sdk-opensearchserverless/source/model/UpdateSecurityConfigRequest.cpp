/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/UpdateSecurityConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSecurityConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_configVersionHasBeenSet)
  {
   payload.WithString("configVersion", m_configVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_samlOptionsHasBeenSet)
  {
   payload.WithObject("samlOptions", m_samlOptions.Jsonize());

  }

  if(m_iamIdentityCenterOptionsUpdatesHasBeenSet)
  {
   payload.WithObject("iamIdentityCenterOptionsUpdates", m_iamIdentityCenterOptionsUpdates.Jsonize());

  }

  if(m_iamFederationOptionsHasBeenSet)
  {
   payload.WithObject("iamFederationOptions", m_iamFederationOptions.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSecurityConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.UpdateSecurityConfig"));
  return headers;

}




