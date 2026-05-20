/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/GenerateAuthRequestCryptogramRequest.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GenerateAuthRequestCryptogramRequest::SerializePayload() const {
  JsonValue payload;

  if (m_keyIdentifierHasBeenSet) {
    payload.WithString("KeyIdentifier", m_keyIdentifier);
  }

  if (m_transactionDataHasBeenSet) {
    payload.WithString("TransactionData", m_transactionData);
  }

  if (m_majorKeyDerivationModeHasBeenSet) {
    payload.WithString("MajorKeyDerivationMode", MajorKeyDerivationModeMapper::GetNameForMajorKeyDerivationMode(m_majorKeyDerivationMode));
  }

  if (m_sessionKeyDerivationAttributesHasBeenSet) {
    payload.WithObject("SessionKeyDerivationAttributes", m_sessionKeyDerivationAttributes.Jsonize());
  }

  return payload.View().WriteReadable();
}
