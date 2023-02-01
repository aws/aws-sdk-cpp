/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ArcAxisConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ArcAxisConfiguration::ArcAxisConfiguration() : 
    m_rangeHasBeenSet(false),
    m_reserveRange(0),
    m_reserveRangeHasBeenSet(false)
{
}

ArcAxisConfiguration::ArcAxisConfiguration(JsonView jsonValue) : 
    m_rangeHasBeenSet(false),
    m_reserveRange(0),
    m_reserveRangeHasBeenSet(false)
{
  *this = jsonValue;
}

ArcAxisConfiguration& ArcAxisConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");

    m_rangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReserveRange"))
  {
    m_reserveRange = jsonValue.GetInteger("ReserveRange");

    m_reserveRangeHasBeenSet = true;
  }

  return *this;
}

JsonValue ArcAxisConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  if(m_reserveRangeHasBeenSet)
  {
   payload.WithInteger("ReserveRange", m_reserveRange);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
