/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ImportKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportKeyRequest::ImportKeyRequest() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_keyCheckValueAlgorithm(KeyCheckValueAlgorithm::NOT_SET),
    m_keyCheckValueAlgorithmHasBeenSet(false),
    m_keyMaterialHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_keyCheckValueAlgorithmHasBeenSet)
  {
   payload.WithString("KeyCheckValueAlgorithm", KeyCheckValueAlgorithmMapper::GetNameForKeyCheckValueAlgorithm(m_keyCheckValueAlgorithm));
  }

  if(m_keyMaterialHasBeenSet)
  {
   payload.WithObject("KeyMaterial", m_keyMaterial.Jsonize());

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.ImportKey"));
  return headers;

}




