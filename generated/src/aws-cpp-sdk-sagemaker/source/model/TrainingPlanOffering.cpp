/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingPlanOffering.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrainingPlanOffering::TrainingPlanOffering(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainingPlanOffering& TrainingPlanOffering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingPlanOfferingId"))
  {
    m_trainingPlanOfferingId = jsonValue.GetString("TrainingPlanOfferingId");
    m_trainingPlanOfferingIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetResources"))
  {
    Aws::Utils::Array<JsonView> targetResourcesJsonList = jsonValue.GetArray("TargetResources");
    for(unsigned targetResourcesIndex = 0; targetResourcesIndex < targetResourcesJsonList.GetLength(); ++targetResourcesIndex)
    {
      m_targetResources.push_back(SageMakerResourceNameMapper::GetSageMakerResourceNameForName(targetResourcesJsonList[targetResourcesIndex].AsString()));
    }
    m_targetResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestedStartTimeAfter"))
  {
    m_requestedStartTimeAfter = jsonValue.GetDouble("RequestedStartTimeAfter");
    m_requestedStartTimeAfterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestedEndTimeBefore"))
  {
    m_requestedEndTimeBefore = jsonValue.GetDouble("RequestedEndTimeBefore");
    m_requestedEndTimeBeforeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationHours"))
  {
    m_durationHours = jsonValue.GetInt64("DurationHours");
    m_durationHoursHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationMinutes"))
  {
    m_durationMinutes = jsonValue.GetInt64("DurationMinutes");
    m_durationMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpfrontFee"))
  {
    m_upfrontFee = jsonValue.GetString("UpfrontFee");
    m_upfrontFeeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrencyCode"))
  {
    m_currencyCode = jsonValue.GetString("CurrencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReservedCapacityOfferings"))
  {
    Aws::Utils::Array<JsonView> reservedCapacityOfferingsJsonList = jsonValue.GetArray("ReservedCapacityOfferings");
    for(unsigned reservedCapacityOfferingsIndex = 0; reservedCapacityOfferingsIndex < reservedCapacityOfferingsJsonList.GetLength(); ++reservedCapacityOfferingsIndex)
    {
      m_reservedCapacityOfferings.push_back(reservedCapacityOfferingsJsonList[reservedCapacityOfferingsIndex].AsObject());
    }
    m_reservedCapacityOfferingsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingPlanOffering::Jsonize() const
{
  JsonValue payload;

  if(m_trainingPlanOfferingIdHasBeenSet)
  {
   payload.WithString("TrainingPlanOfferingId", m_trainingPlanOfferingId);

  }

  if(m_targetResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetResourcesJsonList(m_targetResources.size());
   for(unsigned targetResourcesIndex = 0; targetResourcesIndex < targetResourcesJsonList.GetLength(); ++targetResourcesIndex)
   {
     targetResourcesJsonList[targetResourcesIndex].AsString(SageMakerResourceNameMapper::GetNameForSageMakerResourceName(m_targetResources[targetResourcesIndex]));
   }
   payload.WithArray("TargetResources", std::move(targetResourcesJsonList));

  }

  if(m_requestedStartTimeAfterHasBeenSet)
  {
   payload.WithDouble("RequestedStartTimeAfter", m_requestedStartTimeAfter.SecondsWithMSPrecision());
  }

  if(m_requestedEndTimeBeforeHasBeenSet)
  {
   payload.WithDouble("RequestedEndTimeBefore", m_requestedEndTimeBefore.SecondsWithMSPrecision());
  }

  if(m_durationHoursHasBeenSet)
  {
   payload.WithInt64("DurationHours", m_durationHours);

  }

  if(m_durationMinutesHasBeenSet)
  {
   payload.WithInt64("DurationMinutes", m_durationMinutes);

  }

  if(m_upfrontFeeHasBeenSet)
  {
   payload.WithString("UpfrontFee", m_upfrontFee);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_reservedCapacityOfferingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reservedCapacityOfferingsJsonList(m_reservedCapacityOfferings.size());
   for(unsigned reservedCapacityOfferingsIndex = 0; reservedCapacityOfferingsIndex < reservedCapacityOfferingsJsonList.GetLength(); ++reservedCapacityOfferingsIndex)
   {
     reservedCapacityOfferingsJsonList[reservedCapacityOfferingsIndex].AsObject(m_reservedCapacityOfferings[reservedCapacityOfferingsIndex].Jsonize());
   }
   payload.WithArray("ReservedCapacityOfferings", std::move(reservedCapacityOfferingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
