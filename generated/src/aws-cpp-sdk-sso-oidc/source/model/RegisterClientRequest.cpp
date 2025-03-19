/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterClientRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("clientName", m_clientName);

  }

  if(m_clientTypeHasBeenSet)
  {
   payload.WithString("clientType", m_clientType);

  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
   }
   payload.WithArray("scopes", std::move(scopesJsonList));

  }

  if(m_redirectUrisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> redirectUrisJsonList(m_redirectUris.size());
   for(unsigned redirectUrisIndex = 0; redirectUrisIndex < redirectUrisJsonList.GetLength(); ++redirectUrisIndex)
   {
     redirectUrisJsonList[redirectUrisIndex].AsString(m_redirectUris[redirectUrisIndex]);
   }
   payload.WithArray("redirectUris", std::move(redirectUrisJsonList));

  }

  if(m_grantTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantTypesJsonList(m_grantTypes.size());
   for(unsigned grantTypesIndex = 0; grantTypesIndex < grantTypesJsonList.GetLength(); ++grantTypesIndex)
   {
     grantTypesJsonList[grantTypesIndex].AsString(m_grantTypes[grantTypesIndex]);
   }
   payload.WithArray("grantTypes", std::move(grantTypesJsonList));

  }

  if(m_issuerUrlHasBeenSet)
  {
   payload.WithString("issuerUrl", m_issuerUrl);

  }

  if(m_entitledApplicationArnHasBeenSet)
  {
   payload.WithString("entitledApplicationArn", m_entitledApplicationArn);

  }

  return payload.View().WriteReadable();
}




