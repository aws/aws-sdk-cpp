/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

BenefitAllocationSummary::BenefitAllocationSummary(JsonView jsonValue) { *this = jsonValue; }

BenefitAllocationSummary& BenefitAllocationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BenefitAllocationStatusMapper::GetBenefitAllocationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitId")) {
    m_benefitId = jsonValue.GetString("BenefitId");
    m_benefitIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BenefitApplicationId")) {
    m_benefitApplicationId = jsonValue.GetString("BenefitApplicationId");
    m_benefitApplicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FulfillmentTypes")) {
    Aws::Utils::Array<JsonView> fulfillmentTypesJsonList = jsonValue.GetArray("FulfillmentTypes");
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      m_fulfillmentTypes.push_back(
          FulfillmentTypeMapper::GetFulfillmentTypeForName(fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString()));
    }
    m_fulfillmentTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicableBenefitIds")) {
    Aws::Utils::Array<JsonView> applicableBenefitIdsJsonList = jsonValue.GetArray("ApplicableBenefitIds");
    for (unsigned applicableBenefitIdsIndex = 0; applicableBenefitIdsIndex < applicableBenefitIdsJsonList.GetLength();
         ++applicableBenefitIdsIndex) {
      m_applicableBenefitIds.push_back(applicableBenefitIdsJsonList[applicableBenefitIdsIndex].AsString());
    }
    m_applicableBenefitIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue BenefitAllocationSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", BenefitAllocationStatusMapper::GetNameForBenefitAllocationStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("StatusReason", m_statusReason);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_benefitIdHasBeenSet) {
    payload.WithString("BenefitId", m_benefitId);
  }

  if (m_benefitApplicationIdHasBeenSet) {
    payload.WithString("BenefitApplicationId", m_benefitApplicationId);
  }

  if (m_fulfillmentTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> fulfillmentTypesJsonList(m_fulfillmentTypes.size());
    for (unsigned fulfillmentTypesIndex = 0; fulfillmentTypesIndex < fulfillmentTypesJsonList.GetLength(); ++fulfillmentTypesIndex) {
      fulfillmentTypesJsonList[fulfillmentTypesIndex].AsString(
          FulfillmentTypeMapper::GetNameForFulfillmentType(m_fulfillmentTypes[fulfillmentTypesIndex]));
    }
    payload.WithArray("FulfillmentTypes", std::move(fulfillmentTypesJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithString("ExpiresAt", m_expiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_applicableBenefitIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> applicableBenefitIdsJsonList(m_applicableBenefitIds.size());
    for (unsigned applicableBenefitIdsIndex = 0; applicableBenefitIdsIndex < applicableBenefitIdsJsonList.GetLength();
         ++applicableBenefitIdsIndex) {
      applicableBenefitIdsJsonList[applicableBenefitIdsIndex].AsString(m_applicableBenefitIds[applicableBenefitIdsIndex]);
    }
    payload.WithArray("ApplicableBenefitIds", std::move(applicableBenefitIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
