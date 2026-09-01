/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/AgreementViewSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

AgreementViewSummary::AgreementViewSummary(JsonView jsonValue) { *this = jsonValue; }

AgreementViewSummary& AgreementViewSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acceptanceTime")) {
    m_acceptanceTime = jsonValue.GetDouble("acceptanceTime");
    m_acceptanceTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdateTime")) {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementType")) {
    m_agreementType = jsonValue.GetString("agreementType");
    m_agreementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acceptor")) {
    m_acceptor = jsonValue.GetObject("acceptor");
    m_acceptorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("proposer")) {
    m_proposer = jsonValue.GetObject("proposer");
    m_proposerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("proposalSummary")) {
    m_proposalSummary = jsonValue.GetObject("proposalSummary");
    m_proposalSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AgreementStatusMapper::GetAgreementStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entitlements")) {
    Aws::Utils::Array<JsonView> entitlementsJsonList = jsonValue.GetArray("entitlements");
    for (unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex) {
      m_entitlements.push_back(entitlementsJsonList[entitlementsIndex].AsObject());
    }
    m_entitlementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("initialAgreementId")) {
    m_initialAgreementId = jsonValue.GetString("initialAgreementId");
    m_initialAgreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTimeBehaviorType")) {
    m_endTimeBehaviorType = EndTimeBehaviorTypeMapper::GetEndTimeBehaviorTypeForName(jsonValue.GetString("endTimeBehaviorType"));
    m_endTimeBehaviorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTimeBehaviorReasonCode")) {
    m_endTimeBehaviorReasonCode =
        EndTimeBehaviorReasonCodeMapper::GetEndTimeBehaviorReasonCodeForName(jsonValue.GetString("endTimeBehaviorReasonCode"));
    m_endTimeBehaviorReasonCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue AgreementViewSummary::Jsonize() const {
  JsonValue payload;

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_acceptanceTimeHasBeenSet) {
    payload.WithDouble("acceptanceTime", m_acceptanceTime.SecondsWithMSPrecision());
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdateTimeHasBeenSet) {
    payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if (m_agreementTypeHasBeenSet) {
    payload.WithString("agreementType", m_agreementType);
  }

  if (m_acceptorHasBeenSet) {
    payload.WithObject("acceptor", m_acceptor.Jsonize());
  }

  if (m_proposerHasBeenSet) {
    payload.WithObject("proposer", m_proposer.Jsonize());
  }

  if (m_proposalSummaryHasBeenSet) {
    payload.WithObject("proposalSummary", m_proposalSummary.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AgreementStatusMapper::GetNameForAgreementStatus(m_status));
  }

  if (m_entitlementsHasBeenSet) {
    Aws::Utils::Array<JsonValue> entitlementsJsonList(m_entitlements.size());
    for (unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex) {
      entitlementsJsonList[entitlementsIndex].AsObject(m_entitlements[entitlementsIndex].Jsonize());
    }
    payload.WithArray("entitlements", std::move(entitlementsJsonList));
  }

  if (m_initialAgreementIdHasBeenSet) {
    payload.WithString("initialAgreementId", m_initialAgreementId);
  }

  if (m_endTimeBehaviorTypeHasBeenSet) {
    payload.WithString("endTimeBehaviorType", EndTimeBehaviorTypeMapper::GetNameForEndTimeBehaviorType(m_endTimeBehaviorType));
  }

  if (m_endTimeBehaviorReasonCodeHasBeenSet) {
    payload.WithString("endTimeBehaviorReasonCode",
                       EndTimeBehaviorReasonCodeMapper::GetNameForEndTimeBehaviorReasonCode(m_endTimeBehaviorReasonCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
