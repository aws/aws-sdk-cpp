/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

AgreementCancellationRequestSummary::AgreementCancellationRequestSummary(JsonView jsonValue) { *this = jsonValue; }

AgreementCancellationRequestSummary& AgreementCancellationRequestSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agreementCancellationRequestId")) {
    m_agreementCancellationRequestId = jsonValue.GetString("agreementCancellationRequestId");
    m_agreementCancellationRequestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AgreementCancellationRequestStatusMapper::GetAgreementCancellationRequestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasonCode")) {
    m_reasonCode =
        AgreementCancellationRequestReasonCodeMapper::GetAgreementCancellationRequestReasonCodeForName(jsonValue.GetString("reasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementType")) {
    m_agreementType = jsonValue.GetString("agreementType");
    m_agreementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("catalog")) {
    m_catalog = jsonValue.GetString("catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgreementCancellationRequestSummary::Jsonize() const {
  JsonValue payload;

  if (m_agreementCancellationRequestIdHasBeenSet) {
    payload.WithString("agreementCancellationRequestId", m_agreementCancellationRequestId);
  }

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AgreementCancellationRequestStatusMapper::GetNameForAgreementCancellationRequestStatus(m_status));
  }

  if (m_reasonCodeHasBeenSet) {
    payload.WithString("reasonCode",
                       AgreementCancellationRequestReasonCodeMapper::GetNameForAgreementCancellationRequestReasonCode(m_reasonCode));
  }

  if (m_agreementTypeHasBeenSet) {
    payload.WithString("agreementType", m_agreementType);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
