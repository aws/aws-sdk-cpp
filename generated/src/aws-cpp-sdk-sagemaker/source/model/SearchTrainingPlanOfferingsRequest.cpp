/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SearchTrainingPlanOfferingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchTrainingPlanOfferingsRequest::SearchTrainingPlanOfferingsRequest() : 
    m_instanceType(ReservedCapacityInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_startTimeAfterHasBeenSet(false),
    m_endTimeBeforeHasBeenSet(false),
    m_durationHours(0),
    m_durationHoursHasBeenSet(false),
    m_targetResourcesHasBeenSet(false)
{
}

Aws::String SearchTrainingPlanOfferingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ReservedCapacityInstanceTypeMapper::GetNameForReservedCapacityInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_startTimeAfterHasBeenSet)
  {
   payload.WithDouble("StartTimeAfter", m_startTimeAfter.SecondsWithMSPrecision());
  }

  if(m_endTimeBeforeHasBeenSet)
  {
   payload.WithDouble("EndTimeBefore", m_endTimeBefore.SecondsWithMSPrecision());
  }

  if(m_durationHoursHasBeenSet)
  {
   payload.WithInt64("DurationHours", m_durationHours);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchTrainingPlanOfferingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.SearchTrainingPlanOfferings"));
  return headers;

}




