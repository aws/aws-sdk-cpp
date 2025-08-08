/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingPlanSummary.h>
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

TrainingPlanSummary::TrainingPlanSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainingPlanSummary& TrainingPlanSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrainingPlanArn"))
  {
    m_trainingPlanArn = jsonValue.GetString("TrainingPlanArn");
    m_trainingPlanArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingPlanName"))
  {
    m_trainingPlanName = jsonValue.GetString("TrainingPlanName");
    m_trainingPlanNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TrainingPlanStatusMapper::GetTrainingPlanStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
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
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("TotalInstanceCount"))
  {
    m_totalInstanceCount = jsonValue.GetInteger("TotalInstanceCount");
    m_totalInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableInstanceCount"))
  {
    m_availableInstanceCount = jsonValue.GetInteger("AvailableInstanceCount");
    m_availableInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InUseInstanceCount"))
  {
    m_inUseInstanceCount = jsonValue.GetInteger("InUseInstanceCount");
    m_inUseInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalUltraServerCount"))
  {
    m_totalUltraServerCount = jsonValue.GetInteger("TotalUltraServerCount");
    m_totalUltraServerCountHasBeenSet = true;
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
  if(jsonValue.ValueExists("ReservedCapacitySummaries"))
  {
    Aws::Utils::Array<JsonView> reservedCapacitySummariesJsonList = jsonValue.GetArray("ReservedCapacitySummaries");
    for(unsigned reservedCapacitySummariesIndex = 0; reservedCapacitySummariesIndex < reservedCapacitySummariesJsonList.GetLength(); ++reservedCapacitySummariesIndex)
    {
      m_reservedCapacitySummaries.push_back(reservedCapacitySummariesJsonList[reservedCapacitySummariesIndex].AsObject());
    }
    m_reservedCapacitySummariesHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingPlanSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trainingPlanArnHasBeenSet)
  {
   payload.WithString("TrainingPlanArn", m_trainingPlanArn);

  }

  if(m_trainingPlanNameHasBeenSet)
  {
   payload.WithString("TrainingPlanName", m_trainingPlanName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TrainingPlanStatusMapper::GetNameForTrainingPlanStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_durationHoursHasBeenSet)
  {
   payload.WithInt64("DurationHours", m_durationHours);

  }

  if(m_durationMinutesHasBeenSet)
  {
   payload.WithInt64("DurationMinutes", m_durationMinutes);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_upfrontFeeHasBeenSet)
  {
   payload.WithString("UpfrontFee", m_upfrontFee);

  }

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("CurrencyCode", m_currencyCode);

  }

  if(m_totalInstanceCountHasBeenSet)
  {
   payload.WithInteger("TotalInstanceCount", m_totalInstanceCount);

  }

  if(m_availableInstanceCountHasBeenSet)
  {
   payload.WithInteger("AvailableInstanceCount", m_availableInstanceCount);

  }

  if(m_inUseInstanceCountHasBeenSet)
  {
   payload.WithInteger("InUseInstanceCount", m_inUseInstanceCount);

  }

  if(m_totalUltraServerCountHasBeenSet)
  {
   payload.WithInteger("TotalUltraServerCount", m_totalUltraServerCount);

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

  if(m_reservedCapacitySummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reservedCapacitySummariesJsonList(m_reservedCapacitySummaries.size());
   for(unsigned reservedCapacitySummariesIndex = 0; reservedCapacitySummariesIndex < reservedCapacitySummariesJsonList.GetLength(); ++reservedCapacitySummariesIndex)
   {
     reservedCapacitySummariesJsonList[reservedCapacitySummariesIndex].AsObject(m_reservedCapacitySummaries[reservedCapacitySummariesIndex].Jsonize());
   }
   payload.WithArray("ReservedCapacitySummaries", std::move(reservedCapacitySummariesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
