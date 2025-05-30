/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantCapacityReservationConfig.h>
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

ProductionVariantCapacityReservationConfig::ProductionVariantCapacityReservationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ProductionVariantCapacityReservationConfig& ProductionVariantCapacityReservationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityReservationPreference"))
  {
    m_capacityReservationPreference = CapacityReservationPreferenceMapper::GetCapacityReservationPreferenceForName(jsonValue.GetString("CapacityReservationPreference"));
    m_capacityReservationPreferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MlReservationArn"))
  {
    m_mlReservationArn = jsonValue.GetString("MlReservationArn");
    m_mlReservationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductionVariantCapacityReservationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_capacityReservationPreferenceHasBeenSet)
  {
   payload.WithString("CapacityReservationPreference", CapacityReservationPreferenceMapper::GetNameForCapacityReservationPreference(m_capacityReservationPreference));
  }

  if(m_mlReservationArnHasBeenSet)
  {
   payload.WithString("MlReservationArn", m_mlReservationArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
