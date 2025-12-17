/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/GenerateAs2805KekValidationRequest.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateAs2805KekValidationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_keyIdentifierHasBeenSet) {
    payload.WithString("KeyIdentifier", m_keyIdentifier);
  }

  if (m_kekValidationTypeHasBeenSet) {
    payload.WithObject("KekValidationType", m_kekValidationType.Jsonize());
  }

  if (m_randomKeySendVariantMaskHasBeenSet) {
    payload.WithString("RandomKeySendVariantMask",
                       RandomKeySendVariantMaskMapper::GetNameForRandomKeySendVariantMask(m_randomKeySendVariantMask));
  }

  return payload.View().WriteReadable();
}
