/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ReservationPlanSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

ReservationPlanSettings::ReservationPlanSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ReservationPlanSettings& ReservationPlanSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitment"))
  {
    m_commitment = CommitmentMapper::GetCommitmentForName(jsonValue.GetString("commitment"));
    m_commitmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("renewalType"))
  {
    m_renewalType = RenewalTypeMapper::GetRenewalTypeForName(jsonValue.GetString("renewalType"));
    m_renewalTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservedSlots"))
  {
    m_reservedSlots = jsonValue.GetInteger("reservedSlots");
    m_reservedSlotsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReservationPlanSettings::Jsonize() const
{
  JsonValue payload;

  if(m_commitmentHasBeenSet)
  {
   payload.WithString("commitment", CommitmentMapper::GetNameForCommitment(m_commitment));
  }

  if(m_renewalTypeHasBeenSet)
  {
   payload.WithString("renewalType", RenewalTypeMapper::GetNameForRenewalType(m_renewalType));
  }

  if(m_reservedSlotsHasBeenSet)
  {
   payload.WithInteger("reservedSlots", m_reservedSlots);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
