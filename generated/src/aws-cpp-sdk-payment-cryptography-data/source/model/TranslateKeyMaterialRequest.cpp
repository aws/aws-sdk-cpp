/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/TranslateKeyMaterialRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String TranslateKeyMaterialRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_incomingKeyMaterialHasBeenSet)
  {
   payload.WithObject("IncomingKeyMaterial", m_incomingKeyMaterial.Jsonize());

  }

  if(m_outgoingKeyMaterialHasBeenSet)
  {
   payload.WithObject("OutgoingKeyMaterial", m_outgoingKeyMaterial.Jsonize());

  }

  if(m_keyCheckValueAlgorithmHasBeenSet)
  {
   payload.WithString("KeyCheckValueAlgorithm", KeyCheckValueAlgorithmMapper::GetNameForKeyCheckValueAlgorithm(m_keyCheckValueAlgorithm));
  }

  return payload.View().WriteReadable();
}




