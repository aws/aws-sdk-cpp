/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListBillingAdjustmentRequestsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", BillingAdjustmentStatusMapper::GetNameForBillingAdjustmentStatus(m_status));
  }

  if (m_createdAfterHasBeenSet) {
    payload.WithDouble("createdAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if (m_createdBeforeHasBeenSet) {
    payload.WithDouble("createdBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_agreementTypeHasBeenSet) {
    payload.WithString("agreementType", m_agreementType);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListBillingAdjustmentRequestsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.ListBillingAdjustmentRequests"));
  return headers;
}
