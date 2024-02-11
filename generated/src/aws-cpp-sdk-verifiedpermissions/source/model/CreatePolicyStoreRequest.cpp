/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/CreatePolicyStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePolicyStoreRequest::CreatePolicyStoreRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_validationSettingsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreatePolicyStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_validationSettingsHasBeenSet)
  {
   payload.WithObject("validationSettings", m_validationSettings.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePolicyStoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "VerifiedPermissions.CreatePolicyStore"));
  return headers;

}




