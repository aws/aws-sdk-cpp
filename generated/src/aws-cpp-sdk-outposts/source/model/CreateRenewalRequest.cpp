/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/CreateRenewalRequest.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRenewalRequest::SerializePayload() const {
  JsonValue payload;

  if (m_paymentOptionHasBeenSet) {
    payload.WithString("PaymentOption", PaymentOptionMapper::GetNameForPaymentOption(m_paymentOption));
  }

  if (m_paymentTermHasBeenSet) {
    payload.WithString("PaymentTerm", PaymentTermMapper::GetNameForPaymentTerm(m_paymentTerm));
  }

  if (m_outpostIdentifierHasBeenSet) {
    payload.WithString("OutpostIdentifier", m_outpostIdentifier);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
