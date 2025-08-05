/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InstanceMetadata.h>
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

InstanceMetadata::InstanceMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceMetadata& InstanceMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerEni"))
  {
    m_customerEni = jsonValue.GetString("CustomerEni");
    m_customerEniHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalEnis"))
  {
    m_additionalEnis = jsonValue.GetObject("AdditionalEnis");
    m_additionalEnisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityReservation"))
  {
    m_capacityReservation = jsonValue.GetObject("CapacityReservation");
    m_capacityReservationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LcsExecutionState"))
  {
    m_lcsExecutionState = jsonValue.GetString("LcsExecutionState");
    m_lcsExecutionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeLogicalId"))
  {
    m_nodeLogicalId = jsonValue.GetString("NodeLogicalId");
    m_nodeLogicalIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_customerEniHasBeenSet)
  {
   payload.WithString("CustomerEni", m_customerEni);

  }

  if(m_additionalEnisHasBeenSet)
  {
   payload.WithObject("AdditionalEnis", m_additionalEnis.Jsonize());

  }

  if(m_capacityReservationHasBeenSet)
  {
   payload.WithObject("CapacityReservation", m_capacityReservation.Jsonize());

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_lcsExecutionStateHasBeenSet)
  {
   payload.WithString("LcsExecutionState", m_lcsExecutionState);

  }

  if(m_nodeLogicalIdHasBeenSet)
  {
   payload.WithString("NodeLogicalId", m_nodeLogicalId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
