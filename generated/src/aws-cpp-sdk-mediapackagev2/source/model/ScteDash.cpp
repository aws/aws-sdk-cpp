/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ScteDash.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

ScteDash::ScteDash() : 
    m_adMarkerDash(AdMarkerDash::NOT_SET),
    m_adMarkerDashHasBeenSet(false)
{
}

ScteDash::ScteDash(JsonView jsonValue) : 
    m_adMarkerDash(AdMarkerDash::NOT_SET),
    m_adMarkerDashHasBeenSet(false)
{
  *this = jsonValue;
}

ScteDash& ScteDash::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdMarkerDash"))
  {
    m_adMarkerDash = AdMarkerDashMapper::GetAdMarkerDashForName(jsonValue.GetString("AdMarkerDash"));

    m_adMarkerDashHasBeenSet = true;
  }

  return *this;
}

JsonValue ScteDash::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkerDashHasBeenSet)
  {
   payload.WithString("AdMarkerDash", AdMarkerDashMapper::GetNameForAdMarkerDash(m_adMarkerDash));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
