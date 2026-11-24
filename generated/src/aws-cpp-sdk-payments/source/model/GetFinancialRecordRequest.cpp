/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/GetFinancialRecordRequest.h>

#include <utility>

using namespace Aws::Payments::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetFinancialRecordRequest::SerializePayload() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_invoiceIdentifierHasBeenSet) {
    payload.WithString("invoiceIdentifier", m_invoiceIdentifier);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFinancialRecordRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPayments.GetFinancialRecord"));
  return headers;
}
