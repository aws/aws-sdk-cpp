/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RenewalSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

RenewalSettings::RenewalSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

RenewalSettings& RenewalSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("automaticRenewal"))
  {
    m_automaticRenewal = ReservationAutomaticRenewalMapper::GetReservationAutomaticRenewalForName(jsonValue.GetString("automaticRenewal"));
    m_automaticRenewalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("renewalCount"))
  {
    m_renewalCount = jsonValue.GetInteger("renewalCount");
    m_renewalCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RenewalSettings::Jsonize() const
{
  JsonValue payload;

  if(m_automaticRenewalHasBeenSet)
  {
   payload.WithString("automaticRenewal", ReservationAutomaticRenewalMapper::GetNameForReservationAutomaticRenewal(m_automaticRenewal));
  }

  if(m_renewalCountHasBeenSet)
  {
   payload.WithInteger("renewalCount", m_renewalCount);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
