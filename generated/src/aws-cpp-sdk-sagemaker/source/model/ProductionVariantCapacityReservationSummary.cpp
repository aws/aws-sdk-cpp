/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantCapacityReservationSummary.h>
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

ProductionVariantCapacityReservationSummary::ProductionVariantCapacityReservationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ProductionVariantCapacityReservationSummary& ProductionVariantCapacityReservationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MlReservationArn"))
  {
    m_mlReservationArn = jsonValue.GetString("MlReservationArn");
    m_mlReservationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityReservationPreference"))
  {
    m_capacityReservationPreference = CapacityReservationPreferenceMapper::GetCapacityReservationPreferenceForName(jsonValue.GetString("CapacityReservationPreference"));
    m_capacityReservationPreferenceHasBeenSet = true;
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
  if(jsonValue.ValueExists("UsedByCurrentEndpoint"))
  {
    m_usedByCurrentEndpoint = jsonValue.GetInteger("UsedByCurrentEndpoint");
    m_usedByCurrentEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2CapacityReservations"))
  {
    Aws::Utils::Array<JsonView> ec2CapacityReservationsJsonList = jsonValue.GetArray("Ec2CapacityReservations");
    for(unsigned ec2CapacityReservationsIndex = 0; ec2CapacityReservationsIndex < ec2CapacityReservationsJsonList.GetLength(); ++ec2CapacityReservationsIndex)
    {
      m_ec2CapacityReservations.push_back(ec2CapacityReservationsJsonList[ec2CapacityReservationsIndex].AsObject());
    }
    m_ec2CapacityReservationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductionVariantCapacityReservationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_mlReservationArnHasBeenSet)
  {
   payload.WithString("MlReservationArn", m_mlReservationArn);

  }

  if(m_capacityReservationPreferenceHasBeenSet)
  {
   payload.WithString("CapacityReservationPreference", CapacityReservationPreferenceMapper::GetNameForCapacityReservationPreference(m_capacityReservationPreference));
  }

  if(m_totalInstanceCountHasBeenSet)
  {
   payload.WithInteger("TotalInstanceCount", m_totalInstanceCount);

  }

  if(m_availableInstanceCountHasBeenSet)
  {
   payload.WithInteger("AvailableInstanceCount", m_availableInstanceCount);

  }

  if(m_usedByCurrentEndpointHasBeenSet)
  {
   payload.WithInteger("UsedByCurrentEndpoint", m_usedByCurrentEndpoint);

  }

  if(m_ec2CapacityReservationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2CapacityReservationsJsonList(m_ec2CapacityReservations.size());
   for(unsigned ec2CapacityReservationsIndex = 0; ec2CapacityReservationsIndex < ec2CapacityReservationsJsonList.GetLength(); ++ec2CapacityReservationsIndex)
   {
     ec2CapacityReservationsJsonList[ec2CapacityReservationsIndex].AsObject(m_ec2CapacityReservations[ec2CapacityReservationsIndex].Jsonize());
   }
   payload.WithArray("Ec2CapacityReservations", std::move(ec2CapacityReservationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
