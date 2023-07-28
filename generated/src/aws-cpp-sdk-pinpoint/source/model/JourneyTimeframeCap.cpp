/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyTimeframeCap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyTimeframeCap::JourneyTimeframeCap() : 
    m_cap(0),
    m_capHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false)
{
}

JourneyTimeframeCap::JourneyTimeframeCap(JsonView jsonValue) : 
    m_cap(0),
    m_capHasBeenSet(false),
    m_days(0),
    m_daysHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyTimeframeCap& JourneyTimeframeCap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cap"))
  {
    m_cap = jsonValue.GetInteger("Cap");

    m_capHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Days"))
  {
    m_days = jsonValue.GetInteger("Days");

    m_daysHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyTimeframeCap::Jsonize() const
{
  JsonValue payload;

  if(m_capHasBeenSet)
  {
   payload.WithInteger("Cap", m_cap);

  }

  if(m_daysHasBeenSet)
  {
   payload.WithInteger("Days", m_days);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
