/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/TrainingPlanExtensionOffering.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

TrainingPlanExtensionOffering::TrainingPlanExtensionOffering(JsonView jsonValue) { *this = jsonValue; }

TrainingPlanExtensionOffering& TrainingPlanExtensionOffering::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TrainingPlanExtensionOfferingId")) {
    m_trainingPlanExtensionOfferingId = jsonValue.GetString("TrainingPlanExtensionOfferingId");
    m_trainingPlanExtensionOfferingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityZone")) {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartDate")) {
    m_startDate = jsonValue.GetDouble("StartDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndDate")) {
    m_endDate = jsonValue.GetDouble("EndDate");
    m_endDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DurationHours")) {
    m_durationHours = jsonValue.GetInteger("DurationHours");
    m_durationHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpfrontFee")) {
    m_upfrontFee = jsonValue.GetString("UpfrontFee");
    m_upfrontFeeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrencyCode")) {
    m_currencyCode = jsonValue.GetString("CurrencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingPlanExtensionOffering::Jsonize() const {
  JsonValue payload;

  if (m_trainingPlanExtensionOfferingIdHasBeenSet) {
    payload.WithString("TrainingPlanExtensionOfferingId", m_trainingPlanExtensionOfferingId);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("AvailabilityZone", m_availabilityZone);
  }

  if (m_startDateHasBeenSet) {
    payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if (m_endDateHasBeenSet) {
    payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  if (m_durationHoursHasBeenSet) {
    payload.WithInteger("DurationHours", m_durationHours);
  }

  if (m_upfrontFeeHasBeenSet) {
    payload.WithString("UpfrontFee", m_upfrontFee);
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("CurrencyCode", m_currencyCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
