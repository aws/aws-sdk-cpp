/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CreateSecurityConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSecurityConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SecurityConfigTypeMapper::GetNameForSecurityConfigType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_samlOptionsHasBeenSet)
  {
   payload.WithObject("samlOptions", m_samlOptions.Jsonize());

  }

  if(m_iamIdentityCenterOptionsHasBeenSet)
  {
   payload.WithObject("iamIdentityCenterOptions", m_iamIdentityCenterOptions.Jsonize());

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

Aws::Http::HeaderValueCollection CreateSecurityConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.CreateSecurityConfig"));
  return headers;

}




