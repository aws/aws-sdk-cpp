/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-agreement/model/GetBillingAdjustmentRequestResult.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBillingAdjustmentRequestResult::GetBillingAdjustmentRequestResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetBillingAdjustmentRequestResult& GetBillingAdjustmentRequestResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("billingAdjustmentRequestId")) {
    m_billingAdjustmentRequestId = jsonValue.GetString("billingAdjustmentRequestId");
    m_billingAdjustmentRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("adjustmentReasonCode")) {
    m_adjustmentReasonCode =
        BillingAdjustmentReasonCodeMapper::GetBillingAdjustmentReasonCodeForName(jsonValue.GetString("adjustmentReasonCode"));
    m_adjustmentReasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("originalInvoiceId")) {
    m_originalInvoiceId = jsonValue.GetString("originalInvoiceId");
    m_originalInvoiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("adjustmentAmount")) {
    m_adjustmentAmount = jsonValue.GetString("adjustmentAmount");
    m_adjustmentAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = BillingAdjustmentStatusMapper::GetBillingAdjustmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
