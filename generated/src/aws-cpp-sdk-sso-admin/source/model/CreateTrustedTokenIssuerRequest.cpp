/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/CreateTrustedTokenIssuerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrustedTokenIssuerRequest::CreateTrustedTokenIssuerRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_instanceArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trustedTokenIssuerConfigurationHasBeenSet(false),
    m_trustedTokenIssuerType(TrustedTokenIssuerType::NOT_SET),
    m_trustedTokenIssuerTypeHasBeenSet(false)
{
}

Aws::String CreateTrustedTokenIssuerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_instanceArnHasBeenSet)
  {
   payload.WithString("InstanceArn", m_instanceArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_trustedTokenIssuerConfigurationHasBeenSet)
  {
   payload.WithObject("TrustedTokenIssuerConfiguration", m_trustedTokenIssuerConfiguration.Jsonize());

  }

  if(m_trustedTokenIssuerTypeHasBeenSet)
  {
   payload.WithString("TrustedTokenIssuerType", TrustedTokenIssuerTypeMapper::GetNameForTrustedTokenIssuerType(m_trustedTokenIssuerType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTrustedTokenIssuerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.CreateTrustedTokenIssuer"));
  return headers;

}




