/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SmallMultiplesAxisProperties.h>
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

SmallMultiplesAxisProperties::SmallMultiplesAxisProperties() : 
    m_scale(SmallMultiplesAxisScale::NOT_SET),
    m_scaleHasBeenSet(false),
    m_placement(SmallMultiplesAxisPlacement::NOT_SET),
    m_placementHasBeenSet(false)
{
}

SmallMultiplesAxisProperties::SmallMultiplesAxisProperties(JsonView jsonValue) : 
    m_scale(SmallMultiplesAxisScale::NOT_SET),
    m_scaleHasBeenSet(false),
    m_placement(SmallMultiplesAxisPlacement::NOT_SET),
    m_placementHasBeenSet(false)
{
  *this = jsonValue;
}

SmallMultiplesAxisProperties& SmallMultiplesAxisProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scale"))
  {
    m_scale = SmallMultiplesAxisScaleMapper::GetSmallMultiplesAxisScaleForName(jsonValue.GetString("Scale"));

    m_scaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Placement"))
  {
    m_placement = SmallMultiplesAxisPlacementMapper::GetSmallMultiplesAxisPlacementForName(jsonValue.GetString("Placement"));

    m_placementHasBeenSet = true;
  }

  return *this;
}

JsonValue SmallMultiplesAxisProperties::Jsonize() const
{
  JsonValue payload;

  if(m_scaleHasBeenSet)
  {
   payload.WithString("Scale", SmallMultiplesAxisScaleMapper::GetNameForSmallMultiplesAxisScale(m_scale));
  }

  if(m_placementHasBeenSet)
  {
   payload.WithString("Placement", SmallMultiplesAxisPlacementMapper::GetNameForSmallMultiplesAxisPlacement(m_placement));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
