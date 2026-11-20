/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/ListFinancialRecordsRequest.h>

#include <utility>

using namespace Aws::Payments::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListFinancialRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typesHasBeenSet) {
    Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
    for (unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex) {
      typesJsonList[typesIndex].AsString(FinancialRecordTypeMapper::GetNameForFinancialRecordType(m_types[typesIndex]));
    }
    payload.WithArray("types", std::move(typesJsonList));
  }

  if (m_settlementStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> settlementStatusesJsonList(m_settlementStatuses.size());
    for (unsigned settlementStatusesIndex = 0; settlementStatusesIndex < settlementStatusesJsonList.GetLength();
         ++settlementStatusesIndex) {
      settlementStatusesJsonList[settlementStatusesIndex].AsString(
          SettlementStatusMapper::GetNameForSettlementStatus(m_settlementStatuses[settlementStatusesIndex]));
    }
    payload.WithArray("settlementStatuses", std::move(settlementStatusesJsonList));
  }

  if (m_issuedAfterHasBeenSet) {
    payload.WithDouble("issuedAfter", m_issuedAfter.SecondsWithMSPrecision());
  }

  if (m_issuedBeforeHasBeenSet) {
    payload.WithDouble("issuedBefore", m_issuedBefore.SecondsWithMSPrecision());
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", FinancialRecordSortFieldMapper::GetNameForFinancialRecordSortField(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListFinancialRecordsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPayments.ListFinancialRecords"));
  return headers;
}
