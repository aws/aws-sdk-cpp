/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/CapacityReservationSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

CapacityReservationSpecification::CapacityReservationSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

CapacityReservationSpecification& CapacityReservationSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityReservationPreference"))
  {
    m_capacityReservationPreference = CapacityReservationPreferenceEnumMapper::GetCapacityReservationPreferenceEnumForName(jsonValue.GetString("CapacityReservationPreference"));
    m_capacityReservationPreferenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CapacityReservationTarget"))
  {
    m_capacityReservationTarget = jsonValue.GetObject("CapacityReservationTarget");
    m_capacityReservationTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_capacityReservationPreferenceHasBeenSet)
  {
   payload.WithString("CapacityReservationPreference", CapacityReservationPreferenceEnumMapper::GetNameForCapacityReservationPreferenceEnum(m_capacityReservationPreference));
  }

  if(m_capacityReservationTargetHasBeenSet)
  {
   payload.WithObject("CapacityReservationTarget", m_capacityReservationTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
