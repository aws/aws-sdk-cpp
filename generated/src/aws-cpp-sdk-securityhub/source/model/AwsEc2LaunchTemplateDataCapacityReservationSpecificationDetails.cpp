/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails::AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails() : 
    m_capacityReservationPreferenceHasBeenSet(false),
    m_capacityReservationTargetHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails::AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails(JsonView jsonValue) : 
    m_capacityReservationPreferenceHasBeenSet(false),
    m_capacityReservationTargetHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityReservationPreference"))
  {
    m_capacityReservationPreference = jsonValue.GetString("CapacityReservationPreference");

    m_capacityReservationPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityReservationTarget"))
  {
    m_capacityReservationTarget = jsonValue.GetObject("CapacityReservationTarget");

    m_capacityReservationTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capacityReservationPreferenceHasBeenSet)
  {
   payload.WithString("CapacityReservationPreference", m_capacityReservationPreference);

  }

  if(m_capacityReservationTargetHasBeenSet)
  {
   payload.WithObject("CapacityReservationTarget", m_capacityReservationTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
